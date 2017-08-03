#ifndef _CISCO_IOS_XR_IPV6_IO_CFG_
#define _CISCO_IOS_XR_IPV6_IO_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_io_cfg {

class Ipv6Configuration : public ydk::Entity
{
    public:
        Ipv6Configuration();
        ~Ipv6Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf ipv6_pmtu_time_out; //type: uint32
        ydk::YLeaf ipv6_source_route; //type: boolean
        ydk::YLeaf ipv6_pmtu_enable; //type: boolean
        ydk::YLeaf ipv6_hop_limit; //type: uint32
        class Ipv6Assembler; //type: Ipv6Configuration::Ipv6Assembler
        class Ipv6Icmp; //type: Ipv6Configuration::Ipv6Icmp

        std::shared_ptr<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration::Ipv6Assembler> ipv6_assembler;
        std::shared_ptr<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration::Ipv6Icmp> ipv6icmp; // presence node
        
}; // Ipv6Configuration


class Ipv6Configuration::Ipv6Assembler : public ydk::Entity
{
    public:
        Ipv6Assembler();
        ~Ipv6Assembler();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf max_packets; //type: uint32

}; // Ipv6Configuration::Ipv6Assembler


class Ipv6Configuration::Ipv6Icmp : public ydk::Entity
{
    public:
        Ipv6Icmp();
        ~Ipv6Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_interval; //type: uint32
        ydk::YLeaf bucket_size; //type: uint32

}; // Ipv6Configuration::Ipv6Icmp


}
}

#endif /* _CISCO_IOS_XR_IPV6_IO_CFG_ */

