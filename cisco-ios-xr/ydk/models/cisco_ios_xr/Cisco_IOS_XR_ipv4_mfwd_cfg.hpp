#ifndef _CISCO_IOS_XR_IPV4_MFWD_CFG_
#define _CISCO_IOS_XR_IPV4_MFWD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_mfwd_cfg {

class Mfwd : public Entity
{
    public:
        Mfwd();
        ~Mfwd();

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



        class DefaultContext; //type: Mfwd::DefaultContext
        class Vrfs; //type: Mfwd::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext> default_context; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs> vrfs;


}; // Mfwd


class Mfwd::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6; //type: Mfwd::DefaultContext::Ipv6
        class Ipv4; //type: Mfwd::DefaultContext::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6> ipv6;


}; // Mfwd::DefaultContext


class Mfwd::DefaultContext::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable_on_all_interfaces; //type: empty
        YLeaf maximum_checking_disable; //type: empty
        YLeaf rate_per_route; //type: empty
        YLeaf interface_inheritance_disable; //type: empty
        YLeaf mofrr_lockout_timer_config; //type: uint32
        YLeaf forwarding_latency; //type: uint32
        YLeaf mofrr_loss_detection_timer_config; //type: uint32
        YLeaf multicast_forwarding; //type: empty
        YLeaf log_traps; //type: empty
        YLeaf accounting; //type: AccountingModeEnum

        class StaticRpfRules; //type: Mfwd::DefaultContext::Ipv6::StaticRpfRules
        class Interfaces; //type: Mfwd::DefaultContext::Ipv6::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::StaticRpfRules> static_rpf_rules;


}; // Mfwd::DefaultContext::Ipv6


class Mfwd::DefaultContext::Ipv6::StaticRpfRules : public Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticRpfRule; //type: Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


}; // Mfwd::DefaultContext::Ipv6::StaticRpfRules


class Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule : public Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_mask; //type: uint32
        YLeaf neighbor_address; //type: string
        YLeaf interface_name; //type: string



}; // Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule


class Mfwd::DefaultContext::Ipv6::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mfwd::DefaultContext::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::Interfaces::Interface> > interface;


}; // Mfwd::DefaultContext::Ipv6::Interfaces


class Mfwd::DefaultContext::Ipv6::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf enable_on_interface; //type: boolean
        YLeaf boundary; //type: string



}; // Mfwd::DefaultContext::Ipv6::Interfaces::Interface


class Mfwd::DefaultContext::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_of_memory_handling; //type: empty
        YLeaf enable_on_all_interfaces; //type: empty
        YLeaf maximum_checking_disable; //type: empty
        YLeaf rate_per_route; //type: empty
        YLeaf interface_inheritance_disable; //type: empty
        YLeaf mofrr_lockout_timer_config; //type: uint32
        YLeaf forwarding_latency; //type: uint32
        YLeaf mofrr_loss_detection_timer_config; //type: uint32
        YLeaf multicast_forwarding; //type: empty
        YLeaf log_traps; //type: empty
        YLeaf accounting; //type: AccountingModeEnum

        class StaticRpfRules; //type: Mfwd::DefaultContext::Ipv4::StaticRpfRules
        class Interfaces; //type: Mfwd::DefaultContext::Ipv4::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::StaticRpfRules> static_rpf_rules;


}; // Mfwd::DefaultContext::Ipv4


class Mfwd::DefaultContext::Ipv4::StaticRpfRules : public Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticRpfRule; //type: Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


}; // Mfwd::DefaultContext::Ipv4::StaticRpfRules


class Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule : public Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_mask; //type: uint32
        YLeaf neighbor_address; //type: string
        YLeaf interface_name; //type: string



}; // Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule


class Mfwd::DefaultContext::Ipv4::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mfwd::DefaultContext::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::Interfaces::Interface> > interface;


}; // Mfwd::DefaultContext::Ipv4::Interfaces


class Mfwd::DefaultContext::Ipv4::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf enable_on_interface; //type: boolean
        YLeaf boundary; //type: string



}; // Mfwd::DefaultContext::Ipv4::Interfaces::Interface


class Mfwd::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Mfwd::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf> > vrf;


}; // Mfwd::Vrfs


class Mfwd::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Ipv6; //type: Mfwd::Vrfs::Vrf::Ipv6
        class Ipv4; //type: Mfwd::Vrfs::Vrf::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6> ipv6;


}; // Mfwd::Vrfs::Vrf


class Mfwd::Vrfs::Vrf::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable_on_all_interfaces; //type: empty
        YLeaf rate_per_route; //type: empty
        YLeaf multicast_forwarding; //type: empty
        YLeaf log_traps; //type: empty
        YLeaf accounting; //type: AccountingModeEnum

        class StaticRpfRules; //type: Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules
        class Interfaces; //type: Mfwd::Vrfs::Vrf::Ipv6::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules> static_rpf_rules;


}; // Mfwd::Vrfs::Vrf::Ipv6


class Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules : public Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticRpfRule; //type: Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


}; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules


class Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule : public Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_mask; //type: uint32
        YLeaf neighbor_address; //type: string
        YLeaf interface_name; //type: string



}; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule


class Mfwd::Vrfs::Vrf::Ipv6::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface> > interface;


}; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces


class Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf enable_on_interface; //type: boolean
        YLeaf boundary; //type: string



}; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface


class Mfwd::Vrfs::Vrf::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable_on_all_interfaces; //type: empty
        YLeaf rate_per_route; //type: empty
        YLeaf multicast_forwarding; //type: empty
        YLeaf log_traps; //type: empty
        YLeaf accounting; //type: AccountingModeEnum

        class StaticRpfRules; //type: Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules
        class Interfaces; //type: Mfwd::Vrfs::Vrf::Ipv4::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules> static_rpf_rules;


}; // Mfwd::Vrfs::Vrf::Ipv4


class Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules : public Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticRpfRule; //type: Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


}; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules


class Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule : public Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_mask; //type: uint32
        YLeaf neighbor_address; //type: string
        YLeaf interface_name; //type: string



}; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule


class Mfwd::Vrfs::Vrf::Ipv4::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface> > interface;


}; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces


class Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ttl_threshold; //type: uint32
        YLeaf enable_on_interface; //type: boolean
        YLeaf boundary; //type: string



}; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface

class AccountingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf forward_only_enable;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MFWD_CFG_ */

