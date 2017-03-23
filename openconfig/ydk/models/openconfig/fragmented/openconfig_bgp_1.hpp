#ifndef _OPENCONFIG_BGP_1_
#define _OPENCONFIG_BGP_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_bgp_0.hpp"

namespace ydk {
namespace openconfig_bgp {


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast : public Entity
{
    public:
        Ipv6LabelledUnicast();
        ~Ipv6LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls : public Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn : public Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;


}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean



}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::Neighbors::Neighbor::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::GracefulRestart::Config
        class State; //type: Bgp::Neighbors::Neighbor::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::State> state;


}; // Bgp::Neighbors::Neighbor::GracefulRestart


class Bgp::Neighbors::Neighbor::GracefulRestart::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean



}; // Bgp::Neighbors::Neighbor::GracefulRestart::Config


class Bgp::Neighbors::Neighbor::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean
        YLeaf peer_restart_time; //type: uint16
        YLeaf peer_restarting; //type: boolean
        YLeaf local_restarting; //type: boolean
        YLeaf mode; //type: ModeEnum

        class ModeEnum;


}; // Bgp::Neighbors::Neighbor::GracefulRestart::State


class Bgp::Neighbors::Neighbor::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::ApplyPolicy::Config
        class State; //type: Bgp::Neighbors::Neighbor::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::State> state;


}; // Bgp::Neighbors::Neighbor::ApplyPolicy


class Bgp::Neighbors::Neighbor::ApplyPolicy::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::Neighbors::Neighbor::ApplyPolicy::Config


class Bgp::Neighbors::Neighbor::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::Neighbors::Neighbor::ApplyPolicy::State


class Bgp::Neighbors::Neighbor::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;


}; // Bgp::Neighbors::Neighbor::UseMultiplePaths


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Config


class Bgp::Neighbors::Neighbor::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::State


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;


}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean



}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean



}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups : public Entity
{
    public:
        PeerGroups();
        ~PeerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerGroup; //type: Bgp::PeerGroups::PeerGroup

        std::vector<std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup> > peer_group;


}; // Bgp::PeerGroups


class Bgp::PeerGroups::PeerGroup : public Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
        YLeaf peer_group_name;

        class Config; //type: Bgp::PeerGroups::PeerGroup::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::State
        class Timers; //type: Bgp::PeerGroups::PeerGroup::Timers
        class Transport; //type: Bgp::PeerGroups::PeerGroup::Transport
        class ErrorHandling; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling
        class LoggingOptions; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions
        class EbgpMultihop; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop
        class RouteReflector; //type: Bgp::PeerGroups::PeerGroup::RouteReflector
        class AsPathOptions; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions
        class AddPaths; //type: Bgp::PeerGroups::PeerGroup::AddPaths
        class AfiSafis; //type: Bgp::PeerGroups::PeerGroup::AfiSafis
        class GracefulRestart; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart
        class ApplyPolicy; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy
        class UseMultiplePaths; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths> add_paths;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis> afi_safis;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling> error_handling;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions> logging_options;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector> route_reflector;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers> timers;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport> transport;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths> use_multiple_paths;


}; // Bgp::PeerGroups::PeerGroup


class Bgp::PeerGroups::PeerGroup::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_as; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf peer_type; //type: PeerTypeEnum
        YLeaf auth_password; //type: string
        YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
        YLeaf route_flap_damping; //type: boolean
        YLeaf send_community; //type: CommunityTypeEnum
        YLeaf description; //type: string
        YLeaf peer_group_name; //type: string



}; // Bgp::PeerGroups::PeerGroup::Config


class Bgp::PeerGroups::PeerGroup::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_as; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf peer_type; //type: PeerTypeEnum
        YLeaf auth_password; //type: string
        YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
        YLeaf route_flap_damping; //type: boolean
        YLeaf send_community; //type: CommunityTypeEnum
        YLeaf description; //type: string
        YLeaf peer_group_name; //type: string
        YLeaf total_paths; //type: uint32
        YLeaf total_prefixes; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::State


class Bgp::PeerGroups::PeerGroup::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::Timers::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::Timers::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::State> state;


}; // Bgp::PeerGroups::PeerGroup::Timers


class Bgp::PeerGroups::PeerGroup::Timers::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connect_retry; //type: decimal64
        YLeaf hold_time; //type: decimal64
        YLeaf keepalive_interval; //type: decimal64
        YLeaf minimum_advertisement_interval; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::Timers::Config


class Bgp::PeerGroups::PeerGroup::Timers::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connect_retry; //type: decimal64
        YLeaf hold_time; //type: decimal64
        YLeaf keepalive_interval; //type: decimal64
        YLeaf minimum_advertisement_interval; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::Timers::State


class Bgp::PeerGroups::PeerGroup::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::Transport::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::Transport::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::State> state;


}; // Bgp::PeerGroups::PeerGroup::Transport


class Bgp::PeerGroups::PeerGroup::Transport::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcp_mss; //type: uint16
        YLeaf mtu_discovery; //type: boolean
        YLeaf passive_mode; //type: boolean
        YLeaf local_address; //type: one of union, string



}; // Bgp::PeerGroups::PeerGroup::Transport::Config


class Bgp::PeerGroups::PeerGroup::Transport::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcp_mss; //type: uint16
        YLeaf mtu_discovery; //type: boolean
        YLeaf passive_mode; //type: boolean
        YLeaf local_address; //type: one of union, string



}; // Bgp::PeerGroups::PeerGroup::Transport::State


class Bgp::PeerGroups::PeerGroup::ErrorHandling : public Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::State> state;


}; // Bgp::PeerGroups::PeerGroup::ErrorHandling


class Bgp::PeerGroups::PeerGroup::ErrorHandling::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf treat_as_withdraw; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::ErrorHandling::Config


class Bgp::PeerGroups::PeerGroup::ErrorHandling::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf treat_as_withdraw; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::ErrorHandling::State


class Bgp::PeerGroups::PeerGroup::LoggingOptions : public Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::State> state;


}; // Bgp::PeerGroups::PeerGroup::LoggingOptions


class Bgp::PeerGroups::PeerGroup::LoggingOptions::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf log_neighbor_state_changes; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::LoggingOptions::Config


class Bgp::PeerGroups::PeerGroup::LoggingOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf log_neighbor_state_changes; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::LoggingOptions::State


class Bgp::PeerGroups::PeerGroup::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State> state;


}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop


class Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf multihop_ttl; //type: uint8



}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config


class Bgp::PeerGroups::PeerGroup::EbgpMultihop::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf multihop_ttl; //type: uint8



}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::State


class Bgp::PeerGroups::PeerGroup::RouteReflector : public Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::RouteReflector::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::RouteReflector::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::State> state;


}; // Bgp::PeerGroups::PeerGroup::RouteReflector


class Bgp::PeerGroups::PeerGroup::RouteReflector::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf route_reflector_client; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::RouteReflector::Config


class Bgp::PeerGroups::PeerGroup::RouteReflector::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf route_reflector_client; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::RouteReflector::State


class Bgp::PeerGroups::PeerGroup::AsPathOptions : public Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::State> state;


}; // Bgp::PeerGroups::PeerGroup::AsPathOptions


class Bgp::PeerGroups::PeerGroup::AsPathOptions::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_own_as; //type: uint8
        YLeaf replace_peer_as; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AsPathOptions::Config


class Bgp::PeerGroups::PeerGroup::AsPathOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_own_as; //type: uint8
        YLeaf replace_peer_as; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AsPathOptions::State


class Bgp::PeerGroups::PeerGroup::AddPaths : public Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AddPaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AddPaths::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::State> state;


}; // Bgp::PeerGroups::PeerGroup::AddPaths


class Bgp::PeerGroups::PeerGroup::AddPaths::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf receive; //type: boolean
        YLeaf send_max; //type: uint8



}; // Bgp::PeerGroups::PeerGroup::AddPaths::Config


class Bgp::PeerGroups::PeerGroup::AddPaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf receive; //type: boolean
        YLeaf send_max; //type: uint8



}; // Bgp::PeerGroups::PeerGroup::AddPaths::State


class Bgp::PeerGroups::PeerGroup::AfiSafis : public Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AfiSafi; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi> > afi_safi;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi : public Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity

        class GracefulRestart; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State
        class ApplyPolicy; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabelledUnicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast
        class Ipv6LabelledUnicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn
        class UseMultiplePaths; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths
        class RouteSelectionOptions; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast : public Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_default_route; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_default_route; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast : public Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_default_route; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf send_default_route; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast : public Entity
{
    public:
        Ipv4LabelledUnicast();
        ~Ipv4LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast : public Entity
{
    public:
        Ipv6LabelledUnicast();
        ~Ipv6LabelledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls : public Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn : public Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_prefixes; //type: uint32
        YLeaf shutdown_threshold_pct; //type: uint8
        YLeaf restart_timer; //type: decimal64



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow_multiple_as; //type: boolean
        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_paths; //type: uint32



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions : public Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;


}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf always_compare_med; //type: boolean
        YLeaf ignore_as_path_length; //type: boolean
        YLeaf external_compare_router_id; //type: boolean
        YLeaf advertise_inactive_routes; //type: boolean
        YLeaf enable_aigp; //type: boolean
        YLeaf ignore_next_hop_igp_metric; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State


class Bgp::PeerGroups::PeerGroup::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::State> state;


}; // Bgp::PeerGroups::PeerGroup::GracefulRestart


class Bgp::PeerGroups::PeerGroup::GracefulRestart::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::GracefulRestart::Config


class Bgp::PeerGroups::PeerGroup::GracefulRestart::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf restart_time; //type: uint16
        YLeaf stale_routes_time; //type: decimal64
        YLeaf helper_only; //type: boolean



}; // Bgp::PeerGroups::PeerGroup::GracefulRestart::State


class Bgp::PeerGroups::PeerGroup::ApplyPolicy : public Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy::State

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State> state;


}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy


class Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config


class Bgp::PeerGroups::PeerGroup::ApplyPolicy::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList import_policy;
        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeafList export_policy;



}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths : public Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State
        class Ebgp; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp> ibgp;
        std::shared_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State> state;


}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths

class Bgp::Neighbors::Neighbor::GracefulRestart::State::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf HELPER_ONLY;
        static const Enum::YLeaf BILATERAL;
        static const Enum::YLeaf REMOTE_HELPER;

};


}
}

#endif /* _OPENCONFIG_BGP_1_ */

