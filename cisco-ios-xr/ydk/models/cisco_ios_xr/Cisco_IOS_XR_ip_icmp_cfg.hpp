#ifndef _CISCO_IOS_XR_IP_ICMP_CFG_
#define _CISCO_IOS_XR_IP_ICMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class IpProtocol; //type: Icmp::IpProtocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol> > ip_protocol;


}; // Icmp


class Icmp::IpProtocol : public Entity
{
    public:
        IpProtocol();
        ~IpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_type; //type: string

        class RateLimit; //type: Icmp::IpProtocol::RateLimit
        class Source; //type: Icmp::IpProtocol::Source

        std::shared_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::RateLimit> rate_limit;
        std::shared_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::Source> source;


}; // Icmp::IpProtocol


class Icmp::IpProtocol::RateLimit : public Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Unreachable; //type: Icmp::IpProtocol::RateLimit::Unreachable

        std::shared_ptr<Cisco_IOS_XR_ip_icmp_cfg::Icmp::IpProtocol::RateLimit::Unreachable> unreachable;


}; // Icmp::IpProtocol::RateLimit


class Icmp::IpProtocol::RateLimit::Unreachable : public Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rate; //type: uint32
        YLeaf fragmentation; //type: uint32



}; // Icmp::IpProtocol::RateLimit::Unreachable


class Icmp::IpProtocol::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address_policy; //type: SourcePolicyEnum



}; // Icmp::IpProtocol::Source

class SourcePolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf vrf;
        static const Enum::YLeaf rfc;

};


}
}

#endif /* _CISCO_IOS_XR_IP_ICMP_CFG_ */

