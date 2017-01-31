#ifndef _CISCO_IOS_XR_IP_ICMP_CFG_
#define _CISCO_IOS_XR_IP_ICMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_icmp_cfg {

class Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class IpProtocol : public Entity
    {
        public:
            IpProtocol();
            ~IpProtocol();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf protocol_type; //type: string

        class RateLimit : public Entity
        {
            public:
                RateLimit();
                ~RateLimit();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Unreachable : public Entity
            {
                public:
                    Unreachable();
                    ~Unreachable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rate; //type: uint32
                    YLeaf fragmentation; //type: uint32



            }; // Icmp::IpProtocol::RateLimit::Unreachable


                std::unique_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::RateLimit::Unreachable> unreachable;


        }; // Icmp::IpProtocol::RateLimit


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


                YLeaf source_address_policy; //type: SourcePolicyEnum



        }; // Icmp::IpProtocol::Source


            std::unique_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::RateLimit> rate_limit;
            std::unique_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::Source> source;


    }; // Icmp::IpProtocol


        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol> > ip_protocol;


}; // Icmp


class SourcePolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf vrf;
        static const Enum::YLeaf rfc;

};


}
}

#endif /* _CISCO_IOS_XR_IP_ICMP_CFG_ */

