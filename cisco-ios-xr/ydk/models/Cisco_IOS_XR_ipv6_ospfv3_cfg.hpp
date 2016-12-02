#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_CFG_
#define _CISCO_IOS_XR_IPV6_OSPFV3_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

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
        std::unique_ptr<Entity> clone_ptr() override;
        Value dns_name_lookup; //type: empty


    class Processes : public Entity
    {
        public:
            Processes();
            ~Processes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Process : public Entity
        {
            public:
                Process();
                ~Process();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value process_name; //type: string
                Value nsr; //type: Ospfv3NsrEnum
                Value protocol_shutdown; //type: empty
                Value enable; //type: empty


            class DefaultVrf : public Entity
            {
                public:
                    DefaultVrf();
                    ~DefaultVrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ldp_sync; //type: boolean
                    Value prefix_suppression; //type: boolean
                    Value spf_prefix_priority_disable; //type: empty
                    Value retransmit_interval; //type: uint32
                    Value passive; //type: boolean
                    Value default_metric; //type: uint32
                    Value flood_reduction; //type: boolean
                    Value hello_interval; //type: uint32
                    Value priority; //type: uint32
                    Value cost; //type: uint32
                    Value dead_interval; //type: uint32
                    Value packet_size; //type: uint32
                    Value instance; //type: uint32
                    Value spf_prefix_priority_policy; //type: string
                    Value router_id; //type: string
                    Value network; //type: Ospfv3NetworkEnum
                    Value mtu_ignore; //type: boolean
                    Value log_adjacency_changes; //type: Ospfv3LogAdjEnum
                    Value demand_circuit; //type: boolean
                    Value transmit_delay; //type: uint32


                class AreaAddresses : public Entity
                {
                    public:
                        AreaAddresses();
                        ~AreaAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AreaAddress : public Entity
                    {
                        public:
                            AreaAddress();
                            ~AreaAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value stub; //type: boolean
                            Value packet_size; //type: uint32
                            Value instance; //type: uint32
                            Value demand_circuit; //type: boolean
                            Value priority; //type: uint32
                            Value prefix_suppression; //type: boolean
                            Value enable; //type: empty
                            Value mtu_ignore; //type: boolean
                            Value passive; //type: boolean
                            Value hello_interval; //type: uint32
                            Value dead_interval; //type: uint32
                            Value default_cost; //type: uint32
                            Value flood_reduction; //type: boolean
                            Value retransmit_interval; //type: uint32
                            Value ldp_sync; //type: boolean
                            Value network; //type: Ospfv3NetworkEnum
                            Value transmit_delay; //type: uint32
                            Value cost; //type: uint32


                        class Authentication : public Entity
                        {
                            public:
                                Authentication();
                                ~Authentication();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: boolean
                                Value spi; //type: uint32
                                Value algorithm; //type: Ospfv3AuthenticationEnum
                                Value password; //type: string


                                class Ospfv3AuthenticationEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication


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
                                Value detection_multiplier; //type: uint32
                                Value interval; //type: uint32
                                Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                                class Ospfv3BfdEnableModeEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd


                        class Ranges : public Entity
                        {
                            public:
                                Ranges();
                                ~Ranges();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Range : public Entity
                            {
                                public:
                                    Range();
                                    ~Range();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix; //type: string
                                    Value prefix_length; //type: uint8
                                    Value not_advertise; //type: boolean
                                    Value cost; //type: uint32




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges::Range> > range;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges


                        class Encryption : public Entity
                        {
                            public:
                                Encryption();
                                ~Encryption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: boolean
                                Value spi; //type: uint32
                                Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                Value encryption_password; //type: string
                                Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                Value authentication_password; //type: string


                                class Ospfv3AuthenticationType2Enum;
                                class Ospfv3EncryptionAlgorithmEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption


                        class Nssa : public Entity
                        {
                            public:
                                Nssa();
                                ~Nssa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value no_redistribution; //type: boolean
                                Value default_info_originate; //type: boolean
                                Value metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value no_summary; //type: empty


                                class Ospfv3MetricEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa


                        class DatabaseFilter : public Entity
                        {
                            public:
                                DatabaseFilter();
                                ~DatabaseFilter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class All : public Entity
                            {
                                public:
                                    All();
                                    ~All();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value out; //type: boolean




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter::All> all;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter


                        class DistributeList : public Entity
                        {
                            public:
                                DistributeList();
                                ~DistributeList();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class In : public Entity
                            {
                                public:
                                    In();
                                    ~In();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix_list; //type: string




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList::In> in;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList


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
                                    Value enable; //type: empty
                                    Value dead_interval; //type: uint32
                                    Value flood_reduction; //type: boolean
                                    Value cost; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value instance; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value retransmit_interval; //type: uint32
                                    Value hello_interval; //type: uint32
                                    Value passive; //type: boolean
                                    Value packet_size; //type: uint32
                                    Value prefix_suppression; //type: boolean
                                    Value priority; //type: uint32
                                    Value network; //type: Ospfv3NetworkEnum
                                    Value demand_circuit; //type: boolean


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication


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
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean
                                            Value zone; //type: string




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption


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
                                        Value interval; //type: uint32
                                        Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
                                        Value detection_multiplier; //type: uint32


                                        class Ospfv3BfdEnableModeEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd


                                class DatabaseFilter : public Entity
                                {
                                    public:
                                        DatabaseFilter();
                                        ~DatabaseFilter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class All : public Entity
                                    {
                                        public:
                                            All();
                                            ~All();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value out; //type: boolean




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All> all;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class In : public Entity
                                    {
                                        public:
                                            In();
                                            ~In();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix_list; //type: string




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In> in;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList


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
                                        Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
                                        class Ospfv3FastRerouteEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter> database_filter;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList> distribute_list;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption> encryption;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors> neighbors;
                                    class Ospfv3NetworkEnum;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces::Interface> > interface;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces


                        class AreaScope : public Entity
                        {
                            public:
                                AreaScope();
                                ~AreaScope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


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
                                    Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                class PerLink : public Entity
                                {
                                    public:
                                        PerLink();
                                        ~PerLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


                                class PerPrefix : public Entity
                                {
                                    public:
                                        PerPrefix();
                                        ~PerPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
                                    class Ospfv3FastRerouteEnum;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope


                        class ShamLinks : public Entity
                        {
                            public:
                                ShamLinks();
                                ~ShamLinks();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ShamLink : public Entity
                            {
                                public:
                                    ShamLink();
                                    ~ShamLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value destination_address; //type: string
                                    Value enable; //type: empty
                                    Value hello_interval; //type: uint32
                                    Value dead_interval; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value transmit_delay; //type: uint32


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption> encryption;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink> > sham_link;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks


                        class VirtualLinks : public Entity
                        {
                            public:
                                VirtualLinks();
                                ~VirtualLinks();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VirtualLink : public Entity
                            {
                                public:
                                    VirtualLink();
                                    ~VirtualLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_link_address; //type: string
                                    Value enable; //type: empty
                                    Value hello_interval; //type: uint32
                                    Value dead_interval; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value transmit_delay; //type: uint32


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption> encryption;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink> > virtual_link;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Authentication> authentication;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DatabaseFilter> database_filter;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::DistributeList> distribute_list;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Encryption> encryption;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Interfaces> interfaces;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Nssa> nssa;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::Ranges> ranges;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::ShamLinks> sham_links;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress::VirtualLinks> virtual_links;
                            class Ospfv3NetworkEnum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress


                    class AreaAreaId : public Entity
                    {
                        public:
                            AreaAreaId();
                            ~AreaAreaId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value area_id; //type: int32
                            Value stub; //type: boolean
                            Value packet_size; //type: uint32
                            Value instance; //type: uint32
                            Value demand_circuit; //type: boolean
                            Value priority; //type: uint32
                            Value prefix_suppression; //type: boolean
                            Value enable; //type: empty
                            Value mtu_ignore; //type: boolean
                            Value passive; //type: boolean
                            Value hello_interval; //type: uint32
                            Value dead_interval; //type: uint32
                            Value default_cost; //type: uint32
                            Value flood_reduction; //type: boolean
                            Value retransmit_interval; //type: uint32
                            Value ldp_sync; //type: boolean
                            Value network; //type: Ospfv3NetworkEnum
                            Value transmit_delay; //type: uint32
                            Value cost; //type: uint32


                        class Authentication : public Entity
                        {
                            public:
                                Authentication();
                                ~Authentication();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: boolean
                                Value spi; //type: uint32
                                Value algorithm; //type: Ospfv3AuthenticationEnum
                                Value password; //type: string


                                class Ospfv3AuthenticationEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication


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
                                Value detection_multiplier; //type: uint32
                                Value interval; //type: uint32
                                Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                                class Ospfv3BfdEnableModeEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd


                        class Ranges : public Entity
                        {
                            public:
                                Ranges();
                                ~Ranges();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Range : public Entity
                            {
                                public:
                                    Range();
                                    ~Range();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix; //type: string
                                    Value prefix_length; //type: uint8
                                    Value not_advertise; //type: boolean
                                    Value cost; //type: uint32




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges::Range> > range;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges


                        class Encryption : public Entity
                        {
                            public:
                                Encryption();
                                ~Encryption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: boolean
                                Value spi; //type: uint32
                                Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                Value encryption_password; //type: string
                                Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                Value authentication_password; //type: string


                                class Ospfv3AuthenticationType2Enum;
                                class Ospfv3EncryptionAlgorithmEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption


                        class Nssa : public Entity
                        {
                            public:
                                Nssa();
                                ~Nssa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value no_redistribution; //type: boolean
                                Value default_info_originate; //type: boolean
                                Value metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value no_summary; //type: empty


                                class Ospfv3MetricEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa


                        class DatabaseFilter : public Entity
                        {
                            public:
                                DatabaseFilter();
                                ~DatabaseFilter();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class All : public Entity
                            {
                                public:
                                    All();
                                    ~All();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value out; //type: boolean




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter::All> all;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter


                        class DistributeList : public Entity
                        {
                            public:
                                DistributeList();
                                ~DistributeList();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class In : public Entity
                            {
                                public:
                                    In();
                                    ~In();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix_list; //type: string




                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList::In> in;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList


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
                                    Value enable; //type: empty
                                    Value dead_interval; //type: uint32
                                    Value flood_reduction; //type: boolean
                                    Value cost; //type: uint32
                                    Value transmit_delay; //type: uint32
                                    Value instance; //type: uint32
                                    Value ldp_sync; //type: boolean
                                    Value mtu_ignore; //type: boolean
                                    Value retransmit_interval; //type: uint32
                                    Value hello_interval; //type: uint32
                                    Value passive; //type: boolean
                                    Value packet_size; //type: uint32
                                    Value prefix_suppression; //type: boolean
                                    Value priority; //type: uint32
                                    Value network; //type: Ospfv3NetworkEnum
                                    Value demand_circuit; //type: boolean


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication


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
                                            Value neighbor_address; //type: string
                                            Value priority; //type: uint32
                                            Value poll_interval; //type: uint32
                                            Value cost; //type: uint32
                                            Value database_filter; //type: boolean
                                            Value zone; //type: string




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption


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
                                        Value interval; //type: uint32
                                        Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
                                        Value detection_multiplier; //type: uint32


                                        class Ospfv3BfdEnableModeEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd


                                class DatabaseFilter : public Entity
                                {
                                    public:
                                        DatabaseFilter();
                                        ~DatabaseFilter();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class All : public Entity
                                    {
                                        public:
                                            All();
                                            ~All();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value out; //type: boolean




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All> all;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter


                                class DistributeList : public Entity
                                {
                                    public:
                                        DistributeList();
                                        ~DistributeList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class In : public Entity
                                    {
                                        public:
                                            In();
                                            ~In();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix_list; //type: string




                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In> in;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList


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
                                        Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
                                        class Ospfv3FastRerouteEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd> bfd;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter> database_filter;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList> distribute_list;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption> encryption;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute> fast_reroute;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors> neighbors;
                                    class Ospfv3NetworkEnum;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces::Interface> > interface;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces


                        class AreaScope : public Entity
                        {
                            public:
                                AreaScope();
                                ~AreaScope();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


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
                                    Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                class PerLink : public Entity
                                {
                                    public:
                                        PerLink();
                                        ~PerLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


                                class PerPrefix : public Entity
                                {
                                    public:
                                        PerPrefix();
                                        ~PerPrefix();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value fast_reroute_use_candidate_only; //type: boolean


                                    class CandidateInterfaces : public Entity
                                    {
                                        public:
                                            CandidateInterfaces();
                                            ~CandidateInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class CandidateInterface : public Entity
                                        {
                                            public:
                                                CandidateInterface();
                                                ~CandidateInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                    class ExcludeInterfaces : public Entity
                                    {
                                        public:
                                            ExcludeInterfaces();
                                            ~ExcludeInterfaces();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ExcludeInterface : public Entity
                                        {
                                            public:
                                                ExcludeInterface();
                                                ~ExcludeInterface();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value interface_name; //type: string




                                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
                                    class Ospfv3FastRerouteEnum;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope


                        class ShamLinks : public Entity
                        {
                            public:
                                ShamLinks();
                                ~ShamLinks();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ShamLink : public Entity
                            {
                                public:
                                    ShamLink();
                                    ~ShamLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value source_address; //type: string
                                    Value destination_address; //type: string
                                    Value enable; //type: empty
                                    Value hello_interval; //type: uint32
                                    Value dead_interval; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value transmit_delay; //type: uint32


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption> encryption;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink> > sham_link;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks


                        class VirtualLinks : public Entity
                        {
                            public:
                                VirtualLinks();
                                ~VirtualLinks();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VirtualLink : public Entity
                            {
                                public:
                                    VirtualLink();
                                    ~VirtualLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_link_address; //type: string
                                    Value enable; //type: empty
                                    Value hello_interval; //type: uint32
                                    Value dead_interval; //type: uint32
                                    Value retransmit_interval; //type: uint32
                                    Value transmit_delay; //type: uint32


                                class Authentication : public Entity
                                {
                                    public:
                                        Authentication();
                                        ~Authentication();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value algorithm; //type: Ospfv3AuthenticationEnum
                                        Value password; //type: string


                                        class Ospfv3AuthenticationEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication


                                class Encryption : public Entity
                                {
                                    public:
                                        Encryption();
                                        ~Encryption();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value spi; //type: uint32
                                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                        Value encryption_password; //type: string
                                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                        Value authentication_password; //type: string


                                        class Ospfv3AuthenticationType2Enum;
                                        class Ospfv3EncryptionAlgorithmEnum;


                                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication> authentication;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption> encryption;


                            }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink> > virtual_link;


                        }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Authentication> authentication;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DatabaseFilter> database_filter;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::DistributeList> distribute_list;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Encryption> encryption;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Interfaces> interfaces;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Nssa> nssa;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::Ranges> ranges;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::ShamLinks> sham_links;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId::VirtualLinks> virtual_links;
                            class Ospfv3NetworkEnum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAddress> > area_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses::AreaAreaId> > area_area_id;


                }; // Ospfv3::Processes::Process::DefaultVrf::AreaAddresses


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


                    class Pacing : public Entity
                    {
                        public:
                            Pacing();
                            ~Pacing();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flood; //type: uint32
                            Value retransmission; //type: uint32
                            Value lsa_group; //type: uint32




                    }; // Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing


                    class LsaTimers : public Entity
                    {
                        public:
                            LsaTimers();
                            ~LsaTimers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value arrival; //type: uint32




                    }; // Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers


                    class Throttle : public Entity
                    {
                        public:
                            Throttle();
                            ~Throttle();

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
                                Value first_delay; //type: uint32
                                Value minimum_delay; //type: uint32
                                Value maximum_delay; //type: uint32




                        }; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa


                        class Spf : public Entity
                        {
                            public:
                                Spf();
                                ~Spf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value first_delay; //type: uint32
                                Value minimum_delay; //type: uint32
                                Value maximum_delay; //type: uint32




                        }; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa> lsa;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf> spf;


                    }; // Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers> lsa_timers;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing> pacing;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle> throttle;


                }; // Ospfv3::Processes::Process::DefaultVrf::Timers


                class SummaryPrefixes : public Entity
                {
                    public:
                        SummaryPrefixes();
                        ~SummaryPrefixes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value not_advertise; //type: boolean
                            Value tag; //type: uint32




                    }; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;


                }; // Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes


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
                        Value context; //type: string


                    class TrapRateLimit : public Entity
                    {
                        public:
                            TrapRateLimit();
                            ~TrapRateLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value window_size; //type: uint32
                            Value max_window_traps; //type: uint32




                    }; // Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit> trap_rate_limit;


                }; // Ospfv3::Processes::Process::DefaultVrf::Snmp


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


                    class PerLink : public Entity
                    {
                        public:
                            PerLink();
                            ~PerLink();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value priority; //type: Ospfv3FastReroutePriorityEnum


                            class Ospfv3FastReroutePriorityEnum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink


                    class PerPrefix : public Entity
                    {
                        public:
                            PerPrefix();
                            ~PerPrefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value load_sharing_disable; //type: empty
                            Value priority; //type: Ospfv3FastReroutePriorityEnum


                        class Tiebreakers : public Entity
                        {
                            public:
                                Tiebreakers();
                                ~Tiebreakers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Tiebreaker : public Entity
                            {
                                public:
                                    Tiebreaker();
                                    ~Tiebreaker();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value tiebreaker_type; //type: Ospfv3FastRerouteTiebreakersEnum
                                    Value tiebreaker_index; //type: uint32


                                    class Ospfv3FastRerouteTiebreakersEnum;


                            }; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                        }; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
                            class Ospfv3FastReroutePriorityEnum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerLink> per_link;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute::PerPrefix> per_prefix;


                }; // Ospfv3::Processes::Process::DefaultVrf::FastReroute


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
                        Value administrative; //type: uint32


                    class Ospfv3_ : public Entity
                    {
                        public:
                            Ospfv3_();
                            ~Ospfv3_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value intra_area; //type: uint32
                            Value inter_area; //type: uint32
                            Value external; //type: uint32




                    }; // Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Distance::Ospfv3_> ospfv3;


                }; // Ospfv3::Processes::Process::DefaultVrf::Distance


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
                        Value interfaces; //type: uint32
                        Value paths; //type: uint32


                    class RedistributedPrefixes : public Entity
                    {
                        public:
                            RedistributedPrefixes();
                            ~RedistributedPrefixes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefixes; //type: uint32
                            Value threshold; //type: uint32
                            Value warning_only; //type: empty




                    }; // Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Maximum::RedistributedPrefixes> redistributed_prefixes;


                }; // Ospfv3::Processes::Process::DefaultVrf::Maximum


                class Redistributes : public Entity
                {
                    public:
                        Redistributes();
                        ~Redistributes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Redistribute : public Entity
                    {
                        public:
                            Redistribute();
                            ~Redistribute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value protocol_name; //type: Ospfv3ProtocolType2Enum


                        class ConnectedOrStaticOrSubscriberOrMobile : public Entity
                        {
                            public:
                                ConnectedOrStaticOrSubscriberOrMobile();
                                ~ConnectedOrStaticOrSubscriberOrMobile();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                Value default_metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value tag; //type: int32
                                Value route_policy_name; //type: string
                                Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                Value redistribute_route; //type: boolean
                                Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                Value preserve_med; //type: empty
                                Value preserve_med_info; //type: empty


                                class Ospfv3EigrpRouteEnum;
                                class Ospfv3ExternalRouteEnum;
                                class Ospfv3InternalRouteEnum;
                                class Ospfv3IsisRouteEnum;
                                class Ospfv3MetricEnum;
                                class Ospfv3NssaExternalRouteEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile


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
                                Value as_xx; //type: uint32
                                Value as_yy; //type: uint32
                                Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                Value default_metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value tag; //type: int32
                                Value route_policy_name; //type: string
                                Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                Value redistribute_route; //type: boolean
                                Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                Value preserve_med; //type: empty
                                Value preserve_med_info; //type: empty


                                class Ospfv3EigrpRouteEnum;
                                class Ospfv3ExternalRouteEnum;
                                class Ospfv3InternalRouteEnum;
                                class Ospfv3IsisRouteEnum;
                                class Ospfv3MetricEnum;
                                class Ospfv3NssaExternalRouteEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp


                        class Ospfv3OrIsisOrApplication : public Entity
                        {
                            public:
                                Ospfv3OrIsisOrApplication();
                                ~Ospfv3OrIsisOrApplication();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value process_name; //type: string
                                Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                Value default_metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value tag; //type: int32
                                Value route_policy_name; //type: string
                                Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                Value redistribute_route; //type: boolean
                                Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                Value preserve_med; //type: empty
                                Value preserve_med_info; //type: empty


                                class Ospfv3EigrpRouteEnum;
                                class Ospfv3ExternalRouteEnum;
                                class Ospfv3InternalRouteEnum;
                                class Ospfv3IsisRouteEnum;
                                class Ospfv3MetricEnum;
                                class Ospfv3NssaExternalRouteEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication


                        class Eigrp : public Entity
                        {
                            public:
                                Eigrp();
                                ~Eigrp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value as_xx; //type: uint32
                                Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                Value default_metric; //type: uint32
                                Value metric_type; //type: Ospfv3MetricEnum
                                Value tag; //type: int32
                                Value route_policy_name; //type: string
                                Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                Value redistribute_route; //type: boolean
                                Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                Value preserve_med; //type: empty
                                Value preserve_med_info; //type: empty


                                class Ospfv3EigrpRouteEnum;
                                class Ospfv3ExternalRouteEnum;
                                class Ospfv3InternalRouteEnum;
                                class Ospfv3IsisRouteEnum;
                                class Ospfv3MetricEnum;
                                class Ospfv3NssaExternalRouteEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp> > bgp;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile> connected_or_static_or_subscriber_or_mobile; // presence node
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp> > eigrp;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication> > ospfv3_or_isis_or_application;
                            class Ospfv3ProtocolType2Enum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute> > redistribute;


                }; // Ospfv3::Processes::Process::DefaultVrf::Redistributes


                class Ignore : public Entity
                {
                    public:
                        Ignore();
                        ~Ignore();

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
                            Value mospf; //type: empty




                    }; // Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Ignore::Lsa> lsa;


                }; // Ospfv3::Processes::Process::DefaultVrf::Ignore


                class DistributeListOut : public Entity
                {
                    public:
                        DistributeListOut();
                        ~DistributeListOut();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DistributeOuts : public Entity
                    {
                        public:
                            DistributeOuts();
                            ~DistributeOuts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class DistributeOut : public Entity
                        {
                            public:
                                DistributeOut();
                                ~DistributeOut();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: Ospfv3ProtocolEnum


                            class AsYyAndAsXxAndProcessName : public Entity
                            {
                                public:
                                    AsYyAndAsXxAndProcessName();
                                    ~AsYyAndAsXxAndProcessName();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value as_yy; //type: uint32
                                    Value as_xx; //type: uint32
                                    Value process_name; //type: string
                                    Value prefix_list; //type: string




                            }; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName> > as_yy_and_as_xx_and_process_name;
                                class Ospfv3ProtocolEnum;


                        }; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts::DistributeOut> > distribute_out;


                    }; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut::DistributeOuts> distribute_outs;


                }; // Ospfv3::Processes::Process::DefaultVrf::DistributeListOut


                class DistributeList : public Entity
                {
                    public:
                        DistributeList();
                        ~DistributeList();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class In : public Entity
                    {
                        public:
                            In();
                            ~In();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix_list; //type: string




                    }; // Ospfv3::Processes::Process::DefaultVrf::DistributeList::In


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeList::In> in;


                }; // Ospfv3::Processes::Process::DefaultVrf::DistributeList


                class StubRouter : public Entity
                {
                    public:
                        StubRouter();
                        ~StubRouter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rbit : public Entity
                    {
                        public:
                            Rbit();
                            ~Rbit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value on_switchover; //type: uint32
                            Value always; //type: empty
                            Value external_lsa; //type: uint32
                            Value include_stub; //type: empty
                            Value enable; //type: empty
                            Value on_proc_migration; //type: uint32
                            Value on_proc_restart; //type: uint32
                            Value summary_lsa; //type: uint32


                        class OnStartup : public Entity
                        {
                            public:
                                OnStartup();
                                ~OnStartup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value wait_time; //type: uint32




                        }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup> on_startup;


                    }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit


                    class V6Bit : public Entity
                    {
                        public:
                            V6Bit();
                            ~V6Bit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value on_switchover; //type: uint32
                            Value always; //type: empty
                            Value external_lsa; //type: uint32
                            Value include_stub; //type: empty
                            Value enable; //type: empty
                            Value on_proc_migration; //type: uint32
                            Value on_proc_restart; //type: uint32
                            Value summary_lsa; //type: uint32


                        class OnStartup : public Entity
                        {
                            public:
                                OnStartup();
                                ~OnStartup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value wait_time; //type: uint32




                        }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup> on_startup;


                    }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit


                    class MaxMetric : public Entity
                    {
                        public:
                            MaxMetric();
                            ~MaxMetric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value on_switchover; //type: uint32
                            Value always; //type: empty
                            Value external_lsa; //type: uint32
                            Value include_stub; //type: empty
                            Value enable; //type: empty
                            Value on_proc_migration; //type: uint32
                            Value on_proc_restart; //type: uint32
                            Value summary_lsa; //type: uint32


                        class OnStartup : public Entity
                        {
                            public:
                                OnStartup();
                                ~OnStartup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value wait_for_bgp; //type: boolean
                                Value wait_time; //type: uint32




                        }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup> on_startup;


                    }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric> max_metric;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit> rbit;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit> v6bit;


                }; // Ospfv3::Processes::Process::DefaultVrf::StubRouter


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
                        Value interval; //type: uint32
                        Value detection_multiplier; //type: uint32
                        Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                        class Ospfv3BfdEnableModeEnum;


                }; // Ospfv3::Processes::Process::DefaultVrf::Bfd


                class DatabaseFilter : public Entity
                {
                    public:
                        DatabaseFilter();
                        ~DatabaseFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class All : public Entity
                    {
                        public:
                            All();
                            ~All();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value out; //type: empty




                    }; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All> all;


                }; // Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter


                class Authentication : public Entity
                {
                    public:
                        Authentication();
                        ~Authentication();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value spi; //type: uint32
                        Value algorithm; //type: Ospfv3AuthenticationEnum
                        Value password; //type: string


                        class Ospfv3AuthenticationEnum;


                }; // Ospfv3::Processes::Process::DefaultVrf::Authentication


                class GracefulRestart : public Entity
                {
                    public:
                        GracefulRestart();
                        ~GracefulRestart();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interval; //type: uint32
                        Value strict_lsa_checking; //type: empty
                        Value helper; //type: empty
                        Value enable; //type: empty
                        Value lifetime; //type: uint32




                }; // Ospfv3::Processes::Process::DefaultVrf::GracefulRestart


                class DefaultInformation : public Entity
                {
                    public:
                        DefaultInformation();
                        ~DefaultInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Originate : public Entity
                    {
                        public:
                            Originate();
                            ~Originate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value always; //type: boolean
                            Value metric; //type: uint32
                            Value metric_type; //type: uint32
                            Value tag; //type: int32
                            Value route_policy_name; //type: string




                    }; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate> originate; // presence node


                }; // Ospfv3::Processes::Process::DefaultVrf::DefaultInformation


                class ProcessScope : public Entity
                {
                    public:
                        ProcessScope();
                        ~ProcessScope();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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
                            Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                        class PerLink : public Entity
                        {
                            public:
                                PerLink();
                                ~PerLink();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fast_reroute_use_candidate_only; //type: boolean


                            class CandidateInterfaces : public Entity
                            {
                                public:
                                    CandidateInterfaces();
                                    ~CandidateInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class CandidateInterface : public Entity
                                {
                                    public:
                                        CandidateInterface();
                                        ~CandidateInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                            }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


                            class ExcludeInterfaces : public Entity
                            {
                                public:
                                    ExcludeInterfaces();
                                    ~ExcludeInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ExcludeInterface : public Entity
                                {
                                    public:
                                        ExcludeInterface();
                                        ~ExcludeInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                        }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink


                        class PerPrefix : public Entity
                        {
                            public:
                                PerPrefix();
                                ~PerPrefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value fast_reroute_use_candidate_only; //type: boolean


                            class CandidateInterfaces : public Entity
                            {
                                public:
                                    CandidateInterfaces();
                                    ~CandidateInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class CandidateInterface : public Entity
                                {
                                    public:
                                        CandidateInterface();
                                        ~CandidateInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                            }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


                            class ExcludeInterfaces : public Entity
                            {
                                public:
                                    ExcludeInterfaces();
                                    ~ExcludeInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ExcludeInterface : public Entity
                                {
                                    public:
                                        ExcludeInterface();
                                        ~ExcludeInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                            }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                        }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink> per_link;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
                            class Ospfv3FastRerouteEnum;


                    }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute> fast_reroute;


                }; // Ospfv3::Processes::Process::DefaultVrf::ProcessScope


                class Encryption : public Entity
                {
                    public:
                        Encryption();
                        ~Encryption();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value spi; //type: uint32
                        Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                        Value encryption_password; //type: string
                        Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                        Value authentication_password; //type: string


                        class Ospfv3AuthenticationType2Enum;
                        class Ospfv3EncryptionAlgorithmEnum;


                }; // Ospfv3::Processes::Process::DefaultVrf::Encryption


                class AutoCost : public Entity
                {
                    public:
                        AutoCost();
                        ~AutoCost();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value disable; //type: empty
                        Value reference_bandwidth; //type: uint32




                }; // Ospfv3::Processes::Process::DefaultVrf::AutoCost


                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AreaAddresses> area_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Authentication> authentication;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::AutoCost> auto_cost; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Bfd> bfd;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter> database_filter;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DefaultInformation> default_information;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Distance> distance;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeList> distribute_list;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::DistributeListOut> distribute_list_out;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Encryption> encryption;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::FastReroute> fast_reroute;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::GracefulRestart> graceful_restart;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Ignore> ignore;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Maximum> maximum;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::ProcessScope> process_scope;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Redistributes> redistributes;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Snmp> snmp;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::StubRouter> stub_router;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes> summary_prefixes;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf::Timers> timers;
                    class Ospfv3LogAdjEnum;
                    class Ospfv3NetworkEnum;


            }; // Ospfv3::Processes::Process::DefaultVrf


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
                        Value enable; //type: empty
                        Value snmpvrf_trap; //type: empty
                        Value prefix_suppression; //type: boolean
                        Value retransmit_interval; //type: uint32
                        Value passive; //type: boolean
                        Value default_metric; //type: uint32
                        Value flood_reduction; //type: boolean
                        Value hello_interval; //type: uint32
                        Value priority; //type: uint32
                        Value cost; //type: uint32
                        Value dead_interval; //type: uint32
                        Value packet_size; //type: uint32
                        Value instance; //type: uint32
                        Value spf_prefix_priority_policy; //type: string
                        Value router_id; //type: string
                        Value network; //type: Ospfv3NetworkEnum
                        Value mtu_ignore; //type: boolean
                        Value log_adjacency_changes; //type: Ospfv3LogAdjEnum
                        Value demand_circuit; //type: boolean
                        Value transmit_delay; //type: uint32


                    class Capability : public Entity
                    {
                        public:
                            Capability();
                            ~Capability();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vrf_lite; //type: boolean




                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Capability


                    class DomainId : public Entity
                    {
                        public:
                            DomainId();
                            ~DomainId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SecondaryDomainIds : public Entity
                        {
                            public:
                                SecondaryDomainIds();
                                ~SecondaryDomainIds();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SecondaryDomainId : public Entity
                            {
                                public:
                                    SecondaryDomainId();
                                    ~SecondaryDomainId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value domain_id_type; //type: Ospfv3DomainIdEnum
                                    Value domain_id_name; //type: string


                                    class Ospfv3DomainIdEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId> > secondary_domain_id;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


                        class PrimaryDomainId : public Entity
                        {
                            public:
                                PrimaryDomainId();
                                ~PrimaryDomainId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value domain_id_type; //type: Ospfv3DomainIdEnum
                                Value domain_id_name; //type: string


                                class Ospfv3DomainIdEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::DomainId


                    class AreaAddresses : public Entity
                    {
                        public:
                            AreaAddresses();
                            ~AreaAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AreaAddress : public Entity
                        {
                            public:
                                AreaAddress();
                                ~AreaAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value stub; //type: boolean
                                Value packet_size; //type: uint32
                                Value instance; //type: uint32
                                Value demand_circuit; //type: boolean
                                Value priority; //type: uint32
                                Value prefix_suppression; //type: boolean
                                Value enable; //type: empty
                                Value mtu_ignore; //type: boolean
                                Value passive; //type: boolean
                                Value hello_interval; //type: uint32
                                Value dead_interval; //type: uint32
                                Value default_cost; //type: uint32
                                Value flood_reduction; //type: boolean
                                Value retransmit_interval; //type: uint32
                                Value ldp_sync; //type: boolean
                                Value network; //type: Ospfv3NetworkEnum
                                Value transmit_delay; //type: uint32
                                Value cost; //type: uint32


                            class Authentication : public Entity
                            {
                                public:
                                    Authentication();
                                    ~Authentication();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable; //type: boolean
                                    Value spi; //type: uint32
                                    Value algorithm; //type: Ospfv3AuthenticationEnum
                                    Value password; //type: string


                                    class Ospfv3AuthenticationEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication


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
                                    Value detection_multiplier; //type: uint32
                                    Value interval; //type: uint32
                                    Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                                    class Ospfv3BfdEnableModeEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd


                            class Ranges : public Entity
                            {
                                public:
                                    Ranges();
                                    ~Ranges();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Range : public Entity
                                {
                                    public:
                                        Range();
                                        ~Range();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix; //type: string
                                        Value prefix_length; //type: uint8
                                        Value not_advertise; //type: boolean
                                        Value cost; //type: uint32




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range> > range;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges


                            class Encryption : public Entity
                            {
                                public:
                                    Encryption();
                                    ~Encryption();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable; //type: boolean
                                    Value spi; //type: uint32
                                    Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                    Value encryption_password; //type: string
                                    Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                    Value authentication_password; //type: string


                                    class Ospfv3AuthenticationType2Enum;
                                    class Ospfv3EncryptionAlgorithmEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption


                            class Nssa : public Entity
                            {
                                public:
                                    Nssa();
                                    ~Nssa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value no_redistribution; //type: boolean
                                    Value default_info_originate; //type: boolean
                                    Value metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value no_summary; //type: empty


                                    class Ospfv3MetricEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa


                            class DatabaseFilter : public Entity
                            {
                                public:
                                    DatabaseFilter();
                                    ~DatabaseFilter();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class All : public Entity
                                {
                                    public:
                                        All();
                                        ~All();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value out; //type: boolean




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All> all;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter


                            class DistributeList : public Entity
                            {
                                public:
                                    DistributeList();
                                    ~DistributeList();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class In : public Entity
                                {
                                    public:
                                        In();
                                        ~In();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix_list; //type: string




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In> in;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList


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
                                        Value enable; //type: empty
                                        Value dead_interval; //type: uint32
                                        Value flood_reduction; //type: boolean
                                        Value cost; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value instance; //type: uint32
                                        Value ldp_sync; //type: boolean
                                        Value mtu_ignore; //type: boolean
                                        Value retransmit_interval; //type: uint32
                                        Value hello_interval; //type: uint32
                                        Value passive; //type: boolean
                                        Value packet_size; //type: uint32
                                        Value prefix_suppression; //type: boolean
                                        Value priority; //type: uint32
                                        Value network; //type: Ospfv3NetworkEnum
                                        Value demand_circuit; //type: boolean


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication


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
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean
                                                Value zone; //type: string




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption


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
                                            Value interval; //type: uint32
                                            Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
                                            Value detection_multiplier; //type: uint32


                                            class Ospfv3BfdEnableModeEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd


                                    class DatabaseFilter : public Entity
                                    {
                                        public:
                                            DatabaseFilter();
                                            ~DatabaseFilter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class All : public Entity
                                        {
                                            public:
                                                All();
                                                ~All();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value out; //type: boolean




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All> all;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class In : public Entity
                                        {
                                            public:
                                                In();
                                                ~In();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_list; //type: string




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In> in;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList


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
                                            Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
                                            class Ospfv3FastRerouteEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd> bfd;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter> database_filter;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList> distribute_list;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption> encryption;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors> neighbors;
                                        class Ospfv3NetworkEnum;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface> > interface;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces


                            class AreaScope : public Entity
                            {
                                public:
                                    AreaScope();
                                    ~AreaScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


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
                                        Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
                                        class Ospfv3FastRerouteEnum;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


                            class ShamLinks : public Entity
                            {
                                public:
                                    ShamLinks();
                                    ~ShamLinks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ShamLink : public Entity
                                {
                                    public:
                                        ShamLink();
                                        ~ShamLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value destination_address; //type: string
                                        Value enable; //type: empty
                                        Value hello_interval; //type: uint32
                                        Value dead_interval; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value transmit_delay; //type: uint32


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption> encryption;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink> > sham_link;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks


                            class VirtualLinks : public Entity
                            {
                                public:
                                    VirtualLinks();
                                    ~VirtualLinks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VirtualLink : public Entity
                                {
                                    public:
                                        VirtualLink();
                                        ~VirtualLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_link_address; //type: string
                                        Value enable; //type: empty
                                        Value hello_interval; //type: uint32
                                        Value dead_interval; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value transmit_delay; //type: uint32


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption> encryption;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink> > virtual_link;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication> authentication;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter> database_filter;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList> distribute_list;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption> encryption;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces> interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges> ranges;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks> sham_links;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks> virtual_links;
                                class Ospfv3NetworkEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


                        class AreaAreaId : public Entity
                        {
                            public:
                                AreaAreaId();
                                ~AreaAreaId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value area_id; //type: int32
                                Value stub; //type: boolean
                                Value packet_size; //type: uint32
                                Value instance; //type: uint32
                                Value demand_circuit; //type: boolean
                                Value priority; //type: uint32
                                Value prefix_suppression; //type: boolean
                                Value enable; //type: empty
                                Value mtu_ignore; //type: boolean
                                Value passive; //type: boolean
                                Value hello_interval; //type: uint32
                                Value dead_interval; //type: uint32
                                Value default_cost; //type: uint32
                                Value flood_reduction; //type: boolean
                                Value retransmit_interval; //type: uint32
                                Value ldp_sync; //type: boolean
                                Value network; //type: Ospfv3NetworkEnum
                                Value transmit_delay; //type: uint32
                                Value cost; //type: uint32


                            class Authentication : public Entity
                            {
                                public:
                                    Authentication();
                                    ~Authentication();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable; //type: boolean
                                    Value spi; //type: uint32
                                    Value algorithm; //type: Ospfv3AuthenticationEnum
                                    Value password; //type: string


                                    class Ospfv3AuthenticationEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication


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
                                    Value detection_multiplier; //type: uint32
                                    Value interval; //type: uint32
                                    Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                                    class Ospfv3BfdEnableModeEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd


                            class Ranges : public Entity
                            {
                                public:
                                    Ranges();
                                    ~Ranges();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Range : public Entity
                                {
                                    public:
                                        Range();
                                        ~Range();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix; //type: string
                                        Value prefix_length; //type: uint8
                                        Value not_advertise; //type: boolean
                                        Value cost; //type: uint32




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range> > range;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges


                            class Encryption : public Entity
                            {
                                public:
                                    Encryption();
                                    ~Encryption();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enable; //type: boolean
                                    Value spi; //type: uint32
                                    Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                    Value encryption_password; //type: string
                                    Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                    Value authentication_password; //type: string


                                    class Ospfv3AuthenticationType2Enum;
                                    class Ospfv3EncryptionAlgorithmEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption


                            class Nssa : public Entity
                            {
                                public:
                                    Nssa();
                                    ~Nssa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value no_redistribution; //type: boolean
                                    Value default_info_originate; //type: boolean
                                    Value metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value no_summary; //type: empty


                                    class Ospfv3MetricEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa


                            class DatabaseFilter : public Entity
                            {
                                public:
                                    DatabaseFilter();
                                    ~DatabaseFilter();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class All : public Entity
                                {
                                    public:
                                        All();
                                        ~All();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value out; //type: boolean




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All> all;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter


                            class DistributeList : public Entity
                            {
                                public:
                                    DistributeList();
                                    ~DistributeList();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class In : public Entity
                                {
                                    public:
                                        In();
                                        ~In();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value prefix_list; //type: string




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In> in;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList


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
                                        Value enable; //type: empty
                                        Value dead_interval; //type: uint32
                                        Value flood_reduction; //type: boolean
                                        Value cost; //type: uint32
                                        Value transmit_delay; //type: uint32
                                        Value instance; //type: uint32
                                        Value ldp_sync; //type: boolean
                                        Value mtu_ignore; //type: boolean
                                        Value retransmit_interval; //type: uint32
                                        Value hello_interval; //type: uint32
                                        Value passive; //type: boolean
                                        Value packet_size; //type: uint32
                                        Value prefix_suppression; //type: boolean
                                        Value priority; //type: uint32
                                        Value network; //type: Ospfv3NetworkEnum
                                        Value demand_circuit; //type: boolean


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication


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
                                                Value neighbor_address; //type: string
                                                Value priority; //type: uint32
                                                Value poll_interval; //type: uint32
                                                Value cost; //type: uint32
                                                Value database_filter; //type: boolean
                                                Value zone; //type: string




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor> > neighbor;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption


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
                                            Value interval; //type: uint32
                                            Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum
                                            Value detection_multiplier; //type: uint32


                                            class Ospfv3BfdEnableModeEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd


                                    class DatabaseFilter : public Entity
                                    {
                                        public:
                                            DatabaseFilter();
                                            ~DatabaseFilter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class All : public Entity
                                        {
                                            public:
                                                All();
                                                ~All();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value out; //type: boolean




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All> all;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter


                                    class DistributeList : public Entity
                                    {
                                        public:
                                            DistributeList();
                                            ~DistributeList();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class In : public Entity
                                        {
                                            public:
                                                In();
                                                ~In();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_list; //type: string




                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In> in;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList


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
                                            Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                        class PerLink : public Entity
                                        {
                                            public:
                                                PerLink();
                                                ~PerLink();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink


                                        class PerPrefix : public Entity
                                        {
                                            public:
                                                PerPrefix();
                                                ~PerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value fast_reroute_use_candidate_only; //type: boolean


                                            class CandidateInterfaces : public Entity
                                            {
                                                public:
                                                    CandidateInterfaces();
                                                    ~CandidateInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class CandidateInterface : public Entity
                                                {
                                                    public:
                                                        CandidateInterface();
                                                        ~CandidateInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces


                                            class ExcludeInterfaces : public Entity
                                            {
                                                public:
                                                    ExcludeInterfaces();
                                                    ~ExcludeInterfaces();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ExcludeInterface : public Entity
                                                {
                                                    public:
                                                        ExcludeInterface();
                                                        ~ExcludeInterface();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value interface_name; //type: string




                                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces


                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink> per_link;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix> per_prefix;
                                            class Ospfv3FastRerouteEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd> bfd;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter> database_filter;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList> distribute_list;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption> encryption;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute> fast_reroute;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors> neighbors;
                                        class Ospfv3NetworkEnum;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface> > interface;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces


                            class AreaScope : public Entity
                            {
                                public:
                                    AreaScope();
                                    ~AreaScope();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


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
                                        Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                                    class PerLink : public Entity
                                    {
                                        public:
                                            PerLink();
                                            ~PerLink();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink


                                    class PerPrefix : public Entity
                                    {
                                        public:
                                            PerPrefix();
                                            ~PerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value fast_reroute_use_candidate_only; //type: boolean


                                        class CandidateInterfaces : public Entity
                                        {
                                            public:
                                                CandidateInterfaces();
                                                ~CandidateInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class CandidateInterface : public Entity
                                            {
                                                public:
                                                    CandidateInterface();
                                                    ~CandidateInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


                                        class ExcludeInterfaces : public Entity
                                        {
                                            public:
                                                ExcludeInterfaces();
                                                ~ExcludeInterfaces();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class ExcludeInterface : public Entity
                                            {
                                                public:
                                                    ExcludeInterface();
                                                    ~ExcludeInterface();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value interface_name; //type: string




                                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink> per_link;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix> per_prefix;
                                        class Ospfv3FastRerouteEnum;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute> fast_reroute;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope


                            class ShamLinks : public Entity
                            {
                                public:
                                    ShamLinks();
                                    ~ShamLinks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ShamLink : public Entity
                                {
                                    public:
                                        ShamLink();
                                        ~ShamLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value source_address; //type: string
                                        Value destination_address; //type: string
                                        Value enable; //type: empty
                                        Value hello_interval; //type: uint32
                                        Value dead_interval; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value transmit_delay; //type: uint32


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption> encryption;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink> > sham_link;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks


                            class VirtualLinks : public Entity
                            {
                                public:
                                    VirtualLinks();
                                    ~VirtualLinks();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VirtualLink : public Entity
                                {
                                    public:
                                        VirtualLink();
                                        ~VirtualLink();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_link_address; //type: string
                                        Value enable; //type: empty
                                        Value hello_interval; //type: uint32
                                        Value dead_interval; //type: uint32
                                        Value retransmit_interval; //type: uint32
                                        Value transmit_delay; //type: uint32


                                    class Authentication : public Entity
                                    {
                                        public:
                                            Authentication();
                                            ~Authentication();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value algorithm; //type: Ospfv3AuthenticationEnum
                                            Value password; //type: string


                                            class Ospfv3AuthenticationEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication


                                    class Encryption : public Entity
                                    {
                                        public:
                                            Encryption();
                                            ~Encryption();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: boolean
                                            Value spi; //type: uint32
                                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                                            Value encryption_password; //type: string
                                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                                            Value authentication_password; //type: string


                                            class Ospfv3AuthenticationType2Enum;
                                            class Ospfv3EncryptionAlgorithmEnum;


                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication> authentication;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption> encryption;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink> > virtual_link;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope> area_scope;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication> authentication;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter> database_filter;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList> distribute_list;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption> encryption;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces> interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa> nssa;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges> ranges;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks> sham_links;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks> virtual_links;
                                class Ospfv3NetworkEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress> > area_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId> > area_area_id;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses


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


                        class Pacing : public Entity
                        {
                            public:
                                Pacing();
                                ~Pacing();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value flood; //type: uint32
                                Value retransmission; //type: uint32
                                Value lsa_group; //type: uint32




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing


                        class LsaTimers : public Entity
                        {
                            public:
                                LsaTimers();
                                ~LsaTimers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value arrival; //type: uint32




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers


                        class Throttle : public Entity
                        {
                            public:
                                Throttle();
                                ~Throttle();

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
                                    Value first_delay; //type: uint32
                                    Value minimum_delay; //type: uint32
                                    Value maximum_delay; //type: uint32




                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa


                            class Spf : public Entity
                            {
                                public:
                                    Spf();
                                    ~Spf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value first_delay; //type: uint32
                                    Value minimum_delay; //type: uint32
                                    Value maximum_delay; //type: uint32




                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa> lsa;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf> spf;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers> lsa_timers;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing> pacing;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle> throttle;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Timers


                    class SummaryPrefixes : public Entity
                    {
                        public:
                            SummaryPrefixes();
                            ~SummaryPrefixes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


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
                                Value not_advertise; //type: boolean
                                Value tag; //type: uint32




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes


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
                            Value context; //type: string


                        class TrapRateLimit : public Entity
                        {
                            public:
                                TrapRateLimit();
                                ~TrapRateLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value window_size; //type: uint32
                                Value max_window_traps; //type: uint32




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit> trap_rate_limit;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Snmp


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


                        class PerLink : public Entity
                        {
                            public:
                                PerLink();
                                ~PerLink();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value priority; //type: Ospfv3FastReroutePriorityEnum


                                class Ospfv3FastReroutePriorityEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


                        class PerPrefix : public Entity
                        {
                            public:
                                PerPrefix();
                                ~PerPrefix();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value load_sharing_disable; //type: empty
                                Value priority; //type: Ospfv3FastReroutePriorityEnum


                            class Tiebreakers : public Entity
                            {
                                public:
                                    Tiebreakers();
                                    ~Tiebreakers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Tiebreaker : public Entity
                                {
                                    public:
                                        Tiebreaker();
                                        ~Tiebreaker();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tiebreaker_type; //type: Ospfv3FastRerouteTiebreakersEnum
                                        Value tiebreaker_index; //type: uint32


                                        class Ospfv3FastRerouteTiebreakersEnum;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
                                class Ospfv3FastReroutePriorityEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute


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
                            Value administrative; //type: uint32


                        class Ospfv3_ : public Entity
                        {
                            public:
                                Ospfv3_();
                                ~Ospfv3_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value intra_area; //type: uint32
                                Value inter_area; //type: uint32
                                Value external; //type: uint32




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_> ospfv3;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Distance


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
                            Value interfaces; //type: uint32
                            Value paths; //type: uint32


                        class RedistributedPrefixes : public Entity
                        {
                            public:
                                RedistributedPrefixes();
                                ~RedistributedPrefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefixes; //type: uint32
                                Value threshold; //type: uint32
                                Value warning_only; //type: empty




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum::RedistributedPrefixes> redistributed_prefixes;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Maximum


                    class Redistributes : public Entity
                    {
                        public:
                            Redistributes();
                            ~Redistributes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Redistribute : public Entity
                        {
                            public:
                                Redistribute();
                                ~Redistribute();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value protocol_name; //type: Ospfv3ProtocolType2Enum


                            class ConnectedOrStaticOrSubscriberOrMobile : public Entity
                            {
                                public:
                                    ConnectedOrStaticOrSubscriberOrMobile();
                                    ~ConnectedOrStaticOrSubscriberOrMobile();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                    Value default_metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value tag; //type: int32
                                    Value route_policy_name; //type: string
                                    Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                    Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                    Value redistribute_route; //type: boolean
                                    Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                    Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                    Value preserve_med; //type: empty
                                    Value preserve_med_info; //type: empty


                                    class Ospfv3EigrpRouteEnum;
                                    class Ospfv3ExternalRouteEnum;
                                    class Ospfv3InternalRouteEnum;
                                    class Ospfv3IsisRouteEnum;
                                    class Ospfv3MetricEnum;
                                    class Ospfv3NssaExternalRouteEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile


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
                                    Value as_xx; //type: uint32
                                    Value as_yy; //type: uint32
                                    Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                    Value default_metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value tag; //type: int32
                                    Value route_policy_name; //type: string
                                    Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                    Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                    Value redistribute_route; //type: boolean
                                    Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                    Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                    Value preserve_med; //type: empty
                                    Value preserve_med_info; //type: empty


                                    class Ospfv3EigrpRouteEnum;
                                    class Ospfv3ExternalRouteEnum;
                                    class Ospfv3InternalRouteEnum;
                                    class Ospfv3IsisRouteEnum;
                                    class Ospfv3MetricEnum;
                                    class Ospfv3NssaExternalRouteEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp


                            class Ospfv3OrIsisOrApplication : public Entity
                            {
                                public:
                                    Ospfv3OrIsisOrApplication();
                                    ~Ospfv3OrIsisOrApplication();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value process_name; //type: string
                                    Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                    Value default_metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value tag; //type: int32
                                    Value route_policy_name; //type: string
                                    Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                    Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                    Value redistribute_route; //type: boolean
                                    Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                    Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                    Value preserve_med; //type: empty
                                    Value preserve_med_info; //type: empty


                                    class Ospfv3EigrpRouteEnum;
                                    class Ospfv3ExternalRouteEnum;
                                    class Ospfv3InternalRouteEnum;
                                    class Ospfv3IsisRouteEnum;
                                    class Ospfv3MetricEnum;
                                    class Ospfv3NssaExternalRouteEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication


                            class Eigrp : public Entity
                            {
                                public:
                                    Eigrp();
                                    ~Eigrp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value as_xx; //type: uint32
                                    Value internal_route_type; //type: Ospfv3InternalRouteEnum
                                    Value default_metric; //type: uint32
                                    Value metric_type; //type: Ospfv3MetricEnum
                                    Value tag; //type: int32
                                    Value route_policy_name; //type: string
                                    Value external_route_type; //type: Ospfv3ExternalRouteEnum
                                    Value nssa_external_route_type; //type: Ospfv3NssaExternalRouteEnum
                                    Value redistribute_route; //type: boolean
                                    Value isis_route_type; //type: Ospfv3IsisRouteEnum
                                    Value eigrp_route_type; //type: Ospfv3EigrpRouteEnum
                                    Value preserve_med; //type: empty
                                    Value preserve_med_info; //type: empty


                                    class Ospfv3EigrpRouteEnum;
                                    class Ospfv3ExternalRouteEnum;
                                    class Ospfv3InternalRouteEnum;
                                    class Ospfv3IsisRouteEnum;
                                    class Ospfv3MetricEnum;
                                    class Ospfv3NssaExternalRouteEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Bgp> > bgp;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile> connected_or_static_or_subscriber_or_mobile; // presence node
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Eigrp> > eigrp;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication> > ospfv3_or_isis_or_application;
                                class Ospfv3ProtocolType2Enum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes::Redistribute> > redistribute;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes


                    class Ignore : public Entity
                    {
                        public:
                            Ignore();
                            ~Ignore();

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
                                Value mospf; //type: empty




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore::Lsa> lsa;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Ignore


                    class DistributeListOut : public Entity
                    {
                        public:
                            DistributeListOut();
                            ~DistributeListOut();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class DistributeOuts : public Entity
                        {
                            public:
                                DistributeOuts();
                                ~DistributeOuts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class DistributeOut : public Entity
                            {
                                public:
                                    DistributeOut();
                                    ~DistributeOut();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value protocol_name; //type: Ospfv3ProtocolEnum


                                class AsYyAndAsXxAndProcessName : public Entity
                                {
                                    public:
                                        AsYyAndAsXxAndProcessName();
                                        ~AsYyAndAsXxAndProcessName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_yy; //type: uint32
                                        Value as_xx; //type: uint32
                                        Value process_name; //type: string
                                        Value prefix_list; //type: string




                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName> > as_yy_and_as_xx_and_process_name;
                                    class Ospfv3ProtocolEnum;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut> > distribute_out;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts> distribute_outs;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut


                    class DistributeList : public Entity
                    {
                        public:
                            DistributeList();
                            ~DistributeList();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class In : public Entity
                        {
                            public:
                                In();
                                ~In();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix_list; //type: string




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In> in;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList


                    class StubRouter : public Entity
                    {
                        public:
                            StubRouter();
                            ~StubRouter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Rbit : public Entity
                        {
                            public:
                                Rbit();
                                ~Rbit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value on_switchover; //type: uint32
                                Value always; //type: empty
                                Value external_lsa; //type: uint32
                                Value include_stub; //type: empty
                                Value enable; //type: empty
                                Value on_proc_migration; //type: uint32
                                Value on_proc_restart; //type: uint32
                                Value summary_lsa; //type: uint32


                            class OnStartup : public Entity
                            {
                                public:
                                    OnStartup();
                                    ~OnStartup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value wait_for_bgp; //type: boolean
                                    Value wait_time; //type: uint32




                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit::OnStartup> on_startup;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit


                        class V6Bit : public Entity
                        {
                            public:
                                V6Bit();
                                ~V6Bit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value on_switchover; //type: uint32
                                Value always; //type: empty
                                Value external_lsa; //type: uint32
                                Value include_stub; //type: empty
                                Value enable; //type: empty
                                Value on_proc_migration; //type: uint32
                                Value on_proc_restart; //type: uint32
                                Value summary_lsa; //type: uint32


                            class OnStartup : public Entity
                            {
                                public:
                                    OnStartup();
                                    ~OnStartup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value wait_for_bgp; //type: boolean
                                    Value wait_time; //type: uint32




                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit::OnStartup> on_startup;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit


                        class MaxMetric : public Entity
                        {
                            public:
                                MaxMetric();
                                ~MaxMetric();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value on_switchover; //type: uint32
                                Value always; //type: empty
                                Value external_lsa; //type: uint32
                                Value include_stub; //type: empty
                                Value enable; //type: empty
                                Value on_proc_migration; //type: uint32
                                Value on_proc_restart; //type: uint32
                                Value summary_lsa; //type: uint32


                            class OnStartup : public Entity
                            {
                                public:
                                    OnStartup();
                                    ~OnStartup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value wait_for_bgp; //type: boolean
                                    Value wait_time; //type: uint32




                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric::OnStartup> on_startup;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::MaxMetric> max_metric;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::Rbit> rbit;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter::V6Bit> v6bit;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter


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
                            Value interval; //type: uint32
                            Value detection_multiplier; //type: uint32
                            Value fast_detect_mode; //type: Ospfv3BfdEnableModeEnum


                            class Ospfv3BfdEnableModeEnum;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Bfd


                    class DatabaseFilter : public Entity
                    {
                        public:
                            DatabaseFilter();
                            ~DatabaseFilter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class All : public Entity
                        {
                            public:
                                All();
                                ~All();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value out; //type: empty




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All> all;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter


                    class Authentication : public Entity
                    {
                        public:
                            Authentication();
                            ~Authentication();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: boolean
                            Value spi; //type: uint32
                            Value algorithm; //type: Ospfv3AuthenticationEnum
                            Value password; //type: string


                            class Ospfv3AuthenticationEnum;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Authentication


                    class GracefulRestart : public Entity
                    {
                        public:
                            GracefulRestart();
                            ~GracefulRestart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interval; //type: uint32
                            Value strict_lsa_checking; //type: empty
                            Value helper; //type: empty
                            Value enable; //type: empty
                            Value lifetime; //type: uint32




                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart


                    class DefaultInformation : public Entity
                    {
                        public:
                            DefaultInformation();
                            ~DefaultInformation();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Originate : public Entity
                        {
                            public:
                                Originate();
                                ~Originate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value always; //type: boolean
                                Value metric; //type: uint32
                                Value metric_type; //type: uint32
                                Value tag; //type: int32
                                Value route_policy_name; //type: string




                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate> originate; // presence node


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation


                    class ProcessScope : public Entity
                    {
                        public:
                            ProcessScope();
                            ~ProcessScope();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


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
                                Value fast_reroute_enable; //type: Ospfv3FastRerouteEnum


                            class PerLink : public Entity
                            {
                                public:
                                    PerLink();
                                    ~PerLink();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fast_reroute_use_candidate_only; //type: boolean


                                class CandidateInterfaces : public Entity
                                {
                                    public:
                                        CandidateInterfaces();
                                        ~CandidateInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CandidateInterface : public Entity
                                    {
                                        public:
                                            CandidateInterface();
                                            ~CandidateInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


                                class ExcludeInterfaces : public Entity
                                {
                                    public:
                                        ExcludeInterfaces();
                                        ~ExcludeInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class ExcludeInterface : public Entity
                                    {
                                        public:
                                            ExcludeInterface();
                                            ~ExcludeInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


                            class PerPrefix : public Entity
                            {
                                public:
                                    PerPrefix();
                                    ~PerPrefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value fast_reroute_use_candidate_only; //type: boolean


                                class CandidateInterfaces : public Entity
                                {
                                    public:
                                        CandidateInterfaces();
                                        ~CandidateInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class CandidateInterface : public Entity
                                    {
                                        public:
                                            CandidateInterface();
                                            ~CandidateInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


                                class ExcludeInterfaces : public Entity
                                {
                                    public:
                                        ExcludeInterfaces();
                                        ~ExcludeInterfaces();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class ExcludeInterface : public Entity
                                    {
                                        public:
                                            ExcludeInterface();
                                            ~ExcludeInterface();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value interface_name; //type: string




                                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


                                }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;


                            }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
                                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
                                class Ospfv3FastRerouteEnum;


                        }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope


                    class Encryption : public Entity
                    {
                        public:
                            Encryption();
                            ~Encryption();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: boolean
                            Value spi; //type: uint32
                            Value encryption_algorithm; //type: Ospfv3EncryptionAlgorithmEnum
                            Value encryption_password; //type: string
                            Value authentication_algorithm; //type: Ospfv3AuthenticationType2Enum
                            Value authentication_password; //type: string


                            class Ospfv3AuthenticationType2Enum;
                            class Ospfv3EncryptionAlgorithmEnum;


                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::Encryption


                    class AutoCost : public Entity
                    {
                        public:
                            AutoCost();
                            ~AutoCost();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value disable; //type: empty
                            Value reference_bandwidth; //type: uint32




                    }; // Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Authentication> authentication;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Bfd> bfd;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Capability> capability;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter> database_filter;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Distance> distance;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList> distribute_list;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut> distribute_list_out;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Encryption> encryption;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart> graceful_restart;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Ignore> ignore;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Maximum> maximum;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes> redistributes;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Snmp> snmp;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter> stub_router;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf::Timers> timers;
                        class Ospfv3LogAdjEnum;
                        class Ospfv3NetworkEnum;


                }; // Ospfv3::Processes::Process::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs::Vrf> > vrf;


            }; // Ospfv3::Processes::Process::Vrfs


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
                    Value af_name; //type: Ospfv3AddressFamilyEnum
                    Value saf_name; //type: Ospfv3SubsequentAddressFamilyEnum


                    class Ospfv3AddressFamilyEnum;
                    class Ospfv3SubsequentAddressFamilyEnum;


            }; // Ospfv3::Processes::Process::Af


            class TraceBufs : public Entity
            {
                public:
                    TraceBufs();
                    ~TraceBufs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TraceBuf : public Entity
                {
                    public:
                        TraceBuf();
                        ~TraceBuf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value trace_buf_name; //type: string
                        Value bufsize; //type: TraceBufSizeEnum


                        class TraceBufSizeEnum;


                }; // Ospfv3::Processes::Process::TraceBufs::TraceBuf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::TraceBufs::TraceBuf> > trace_buf;


            }; // Ospfv3::Processes::Process::TraceBufs


                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Af> af; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::DefaultVrf> default_vrf;
                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::TraceBufs> trace_bufs;
                std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process::Vrfs> vrfs;
                class Ospfv3NsrEnum;


        }; // Ospfv3::Processes::Process


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes::Process> > process;


    }; // Ospfv3::Processes


        std::unique_ptr<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3::Processes> processes;


}; // Ospfv3


class Ospfv3DomainIdEnum : public Enum
{
    public:
        static const Enum::Value type0005;
        static const Enum::Value type0105;
        static const Enum::Value type0205;
        static const Enum::Value type8005;

};

class Ospfv3NetworkEnum : public Enum
{
    public:
        static const Enum::Value broadcast;
        static const Enum::Value non_broadcast;
        static const Enum::Value point_to_point;
        static const Enum::Value point_to_multipoint;
        static const Enum::Value non_broadcast_point_to_multipoint;

};

class Ospfv3MetricEnum : public Enum
{
    public:
        static const Enum::Value type1;
        static const Enum::Value type2;

};

class Ospfv3AuthenticationType2Enum : public Enum
{
    public:
        static const Enum::Value null;
        static const Enum::Value md5;
        static const Enum::Value sha1;

};

class Ospfv3FastReroutePriorityEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value high;
        static const Enum::Value medium;
        static const Enum::Value low;

};

class Ospfv3BfdEnableModeEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value default_;
        static const Enum::Value strict;

};

class Ospfv3LogAdjEnum : public Enum
{
    public:
        static const Enum::Value suppress;
        static const Enum::Value brief;
        static const Enum::Value detail;

};

class Ospfv3FastRerouteEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value per_link;
        static const Enum::Value per_prefix;

};

class Ospfv3IsisRouteEnum : public Enum
{
    public:
        static const Enum::Value level1;
        static const Enum::Value level2;
        static const Enum::Value level1_and2;

};

class Ospfv3NssaExternalRouteEnum : public Enum
{
    public:
        static const Enum::Value external1;
        static const Enum::Value external2;
        static const Enum::Value external;

};

class Ospfv3ExternalRouteEnum : public Enum
{
    public:
        static const Enum::Value external1;
        static const Enum::Value external2;
        static const Enum::Value external;

};

class Ospfv3NsrEnum : public Enum
{
    public:
        static const Enum::Value true_;
        static const Enum::Value false_;

};

class TraceBufSizeEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value one;
        static const Enum::Value two;
        static const Enum::Value three;
        static const Enum::Value four;
        static const Enum::Value five;
        static const Enum::Value six;
        static const Enum::Value seven;
        static const Enum::Value eight;
        static const Enum::Value nine;

};

class Ospfv3AddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv6;

};

class Ospfv3ProtocolEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value connected;
        static const Enum::Value static_;
        static const Enum::Value bgp;
        static const Enum::Value isis;
        static const Enum::Value ospfv3;
        static const Enum::Value eigrp;

};

class Ospfv3EncryptionAlgorithmEnum : public Enum
{
    public:
        static const Enum::Value null;
        static const Enum::Value des;
        static const Enum::Value Y_3des;
        static const Enum::Value aes;
        static const Enum::Value aes192;
        static const Enum::Value aes256;

};

class Ospfv3ProtocolType2Enum : public Enum
{
    public:
        static const Enum::Value connected;
        static const Enum::Value static_;
        static const Enum::Value bgp;
        static const Enum::Value isis;
        static const Enum::Value ospfv3;
        static const Enum::Value eigrp;
        static const Enum::Value subscriber;
        static const Enum::Value application;
        static const Enum::Value mobile;

};

class Ospfv3SubsequentAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value unicast;

};

class Ospfv3EigrpRouteEnum : public Enum
{
    public:
        static const Enum::Value internal;
        static const Enum::Value external;

};

class Ospfv3FastRerouteTiebreakersEnum : public Enum
{
    public:
        static const Enum::Value downstream;
        static const Enum::Value line_card_disjoint;
        static const Enum::Value lowest_metric;
        static const Enum::Value node_protect;
        static const Enum::Value primary_path;
        static const Enum::Value secondary_path;
        static const Enum::Value srlg_disjoint;

};

class Ospfv3AuthenticationEnum : public Enum
{
    public:
        static const Enum::Value md5;
        static const Enum::Value sha1;

};

class Ospfv3InternalRouteEnum : public Enum
{
    public:
        static const Enum::Value internal;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_CFG_ */

