#ifndef _CISCO_IOS_XR_IPV4_AUTORP_OPER_
#define _CISCO_IOS_XR_IPV4_AUTORP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ipv4_autorp_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

class AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Standby : public Entity
    {
        public:
            Standby();
            ~Standby();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class CandidateRps : public Entity
        {
            public:
                CandidateRps();
                ~CandidateRps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class CandidateRp : public Entity
            {
                public:
                    CandidateRp();
                    ~CandidateRp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value protocol_mode; //type: AutoRpProtocolModeEnum
                    Value access_list_name; //type: string
                    Value candidate_rp_address; //type: string
                    Value ttl; //type: int32
                    Value announce_period; //type: int32
                    Value protocol_mode_xr; //type: AutorpProtocolModeEnum


                    class AutoRpProtocolModeEnum;
                    class AutorpProtocolModeEnum;


            }; // AutoRp::Standby::CandidateRps::CandidateRp


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRps::CandidateRp> > candidate_rp;


        }; // AutoRp::Standby::CandidateRps


        class MappingAgent : public Entity
        {
            public:
                MappingAgent();
                ~MappingAgent();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RpAddresses : public Entity
            {
                public:
                    RpAddresses();
                    ~RpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RpAddress : public Entity
                {
                    public:
                        RpAddress();
                        ~RpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value rp_address_xr; //type: string
                        Value expiry_time; //type: uint64
                        Value pim_version; //type: uint8


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
                            Value protocol_mode; //type: AutorpProtocolModeEnum
                            Value is_advertised; //type: boolean
                            Value create_type; //type: uint8
                            Value check_point_object_id; //type: uint32
                            Value uptime; //type: uint64


                            class AutorpProtocolModeEnum;


                    }; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range> > range;


                }; // AutoRp::Standby::MappingAgent::RpAddresses::RpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses::RpAddress> > rp_address;


            }; // AutoRp::Standby::MappingAgent::RpAddresses


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
                    Value is_maximum_disabled; //type: boolean
                    Value cache_limit; //type: uint32
                    Value cache_count; //type: uint32




            }; // AutoRp::Standby::MappingAgent::Summary


                std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::RpAddresses> rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent::Summary> summary;


        }; // AutoRp::Standby::MappingAgent


            std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::CandidateRps> candidate_rps;
            std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby::MappingAgent> mapping_agent;


    }; // AutoRp::Standby


    class Active : public Entity
    {
        public:
            Active();
            ~Active();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class CandidateRps : public Entity
        {
            public:
                CandidateRps();
                ~CandidateRps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class CandidateRp : public Entity
            {
                public:
                    CandidateRp();
                    ~CandidateRp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value protocol_mode; //type: AutoRpProtocolModeEnum
                    Value access_list_name; //type: string
                    Value candidate_rp_address; //type: string
                    Value ttl; //type: int32
                    Value announce_period; //type: int32
                    Value protocol_mode_xr; //type: AutorpProtocolModeEnum


                    class AutoRpProtocolModeEnum;
                    class AutorpProtocolModeEnum;


            }; // AutoRp::Active::CandidateRps::CandidateRp


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRps::CandidateRp> > candidate_rp;


        }; // AutoRp::Active::CandidateRps


        class MappingAgent : public Entity
        {
            public:
                MappingAgent();
                ~MappingAgent();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RpAddresses : public Entity
            {
                public:
                    RpAddresses();
                    ~RpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RpAddress : public Entity
                {
                    public:
                        RpAddress();
                        ~RpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value rp_address_xr; //type: string
                        Value expiry_time; //type: uint64
                        Value pim_version; //type: uint8


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
                            Value protocol_mode; //type: AutorpProtocolModeEnum
                            Value is_advertised; //type: boolean
                            Value create_type; //type: uint8
                            Value check_point_object_id; //type: uint32
                            Value uptime; //type: uint64


                            class AutorpProtocolModeEnum;


                    }; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range> > range;


                }; // AutoRp::Active::MappingAgent::RpAddresses::RpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses::RpAddress> > rp_address;


            }; // AutoRp::Active::MappingAgent::RpAddresses


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
                    Value is_maximum_disabled; //type: boolean
                    Value cache_limit; //type: uint32
                    Value cache_count; //type: uint32




            }; // AutoRp::Active::MappingAgent::Summary


                std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::RpAddresses> rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent::Summary> summary;


        }; // AutoRp::Active::MappingAgent


            std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::CandidateRps> candidate_rps;
            std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active::MappingAgent> mapping_agent;


    }; // AutoRp::Active


        std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Active> active;
        std::unique_ptr<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp::Standby> standby;


}; // AutoRp


class AutorpProtocolModeEnum : public Enum
{
    public:
        static const Enum::Value sparse;
        static const Enum::Value bidirectional;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_AUTORP_OPER_ */

