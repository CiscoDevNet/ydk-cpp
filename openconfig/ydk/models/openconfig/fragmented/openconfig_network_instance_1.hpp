#ifndef _OPENCONFIG_NETWORK_INSTANCE_1_
#define _OPENCONFIG_NETWORK_INSTANCE_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_network_instance_0.hpp"

namespace openconfig {
namespace openconfig_network_instance {


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor> > neighbor;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::neighbor_address)
        ydk::YLeaf neighbor_address;
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State
        class Timers; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers
        class Transport; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport
        class ErrorHandling; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart
        class LoggingOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions
        class EbgpMultihop; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop
        class RouteReflector; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector
        class AsPathOptions; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions
        class AddPaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy
        class AfiSafis; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers> timers;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport> transport;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths> add_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string
        ydk::YLeaf session_state; //type: SessionState
        ydk::YLeaf last_established; //type: uint64
        ydk::YLeaf established_transitions; //type: uint64
        ydk::YLeafList supported_capabilities; //type: list of  BGPCAPABILITY
        class Messages; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages
        class Queues; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages> messages;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues> queues;
                class SessionState;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages : public ydk::Entity
{
    public:
        Messages();
        ~Messages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent
        class Received; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received> received;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues : public ydk::Entity
{
    public:
        Queues();
        ~Queues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: uint32
        ydk::YLeaf output; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64
        ydk::YLeaf negotiated_hold_time; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of string, union
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf remote_port; //type: uint16

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling : public ydk::Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean
        ydk::YLeaf erroneous_update_messages; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean
        ydk::YLeaf peer_restart_time; //type: uint16
        ydk::YLeaf peer_restarting; //type: boolean
        ydk::YLeaf local_restarting; //type: boolean
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions : public ydk::Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector : public ydk::Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions : public ydk::Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths : public ydk::Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State
        class Ebgp; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi> > afi_safi;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart
        class ApplyPolicy; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn
        class UseMultiplePaths; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf active; //type: boolean
        class Prefixes; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes> prefixes;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf installed; //type: uint32

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf received; //type: boolean
        ydk::YLeaf advertised; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_network_instance::NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn

class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IDLE;
        static const ydk::Enum::YLeaf CONNECT;
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf OPENSENT;
        static const ydk::Enum::YLeaf OPENCONFIRM;
        static const ydk::Enum::YLeaf ESTABLISHED;

};

class NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf HELPER_ONLY;
        static const ydk::Enum::YLeaf BILATERAL;
        static const ydk::Enum::YLeaf REMOTE_HELPER;

};


}
}

#endif /* _OPENCONFIG_NETWORK_INSTANCE_1_ */

