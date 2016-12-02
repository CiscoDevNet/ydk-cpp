#ifndef _CISCO_IOS_XR_IPV6_IO_CFG_
#define _CISCO_IOS_XR_IPV6_IO_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_io_cfg {

class Ipv6Configuration : public Entity
{
    public:
        Ipv6Configuration();
        ~Ipv6Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ipv6_pmtu_time_out; //type: uint32
        Value ipv6_source_route; //type: boolean
        Value ipv6_pmtu_enable; //type: boolean
        Value ipv6_hop_limit; //type: uint32


    class Ipv6Assembler : public Entity
    {
        public:
            Ipv6Assembler();
            ~Ipv6Assembler();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value timeout; //type: uint32
            Value max_packets; //type: uint32




    }; // Ipv6Configuration::Ipv6Assembler


    class Ipv6Icmp : public Entity
    {
        public:
            Ipv6Icmp();
            ~Ipv6Icmp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value error_interval; //type: uint32
            Value bucket_size; //type: uint32




    }; // Ipv6Configuration::Ipv6Icmp


        std::unique_ptr<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration::Ipv6Assembler> ipv6_assembler;
        std::unique_ptr<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration::Ipv6Icmp> ipv6icmp; // presence node


}; // Ipv6Configuration



}
}

#endif /* _CISCO_IOS_XR_IPV6_IO_CFG_ */

