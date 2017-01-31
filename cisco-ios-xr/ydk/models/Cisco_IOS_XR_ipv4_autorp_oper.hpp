#ifndef _CISCO_IOS_XR_IPV4_AUTORP_OPER_
#define _CISCO_IOS_XR_IPV4_AUTORP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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


                    YLeaf interface_name; //type: string
                    YLeaf protocol_mode; //type: AutoRpProtocolModeEnum
                    YLeaf access_list_name; //type: string
                    YLeaf candidate_rp_address; //type: string
                    YLeaf ttl; //type: int32
                    YLeaf announce_period; //type: int32
                    YLeaf protocol_mode_xr; //type: AutorpProtocolModeEnum



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


                        YLeaf rp_address; //type: string
                        YLeaf rp_address_xr; //type: string
                        YLeaf expiry_time; //type: uint64
                        YLeaf pim_version; //type: uint8

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


                            YLeaf prefix; //type: string
                            YLeaf prefix_length; //type: uint8
                            YLeaf protocol_mode; //type: AutorpProtocolModeEnum
                            YLeaf is_advertised; //type: boolean
                            YLeaf create_type; //type: uint8
                            YLeaf check_point_object_id; //type: uint32
                            YLeaf uptime; //type: uint64



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


                    YLeaf is_maximum_disabled; //type: boolean
                    YLeaf cache_limit; //type: uint32
                    YLeaf cache_count; //type: uint32



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


                    YLeaf interface_name; //type: string
                    YLeaf protocol_mode; //type: AutoRpProtocolModeEnum
                    YLeaf access_list_name; //type: string
                    YLeaf candidate_rp_address; //type: string
                    YLeaf ttl; //type: int32
                    YLeaf announce_period; //type: int32
                    YLeaf protocol_mode_xr; //type: AutorpProtocolModeEnum



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


                        YLeaf rp_address; //type: string
                        YLeaf rp_address_xr; //type: string
                        YLeaf expiry_time; //type: uint64
                        YLeaf pim_version; //type: uint8

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


                            YLeaf prefix; //type: string
                            YLeaf prefix_length; //type: uint8
                            YLeaf protocol_mode; //type: AutorpProtocolModeEnum
                            YLeaf is_advertised; //type: boolean
                            YLeaf create_type; //type: uint8
                            YLeaf check_point_object_id; //type: uint32
                            YLeaf uptime; //type: uint64



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


                    YLeaf is_maximum_disabled; //type: boolean
                    YLeaf cache_limit; //type: uint32
                    YLeaf cache_count; //type: uint32



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
        static const Enum::YLeaf sparse;
        static const Enum::YLeaf bidirectional;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_AUTORP_OPER_ */

