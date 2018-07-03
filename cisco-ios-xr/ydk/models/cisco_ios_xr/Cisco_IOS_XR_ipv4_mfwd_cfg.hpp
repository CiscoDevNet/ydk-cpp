#ifndef _CISCO_IOS_XR_IPV4_MFWD_CFG_
#define _CISCO_IOS_XR_IPV4_MFWD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_mfwd_cfg {

class Mfwd : public ydk::Entity
{
    public:
        Mfwd();
        ~Mfwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class DefaultContext; //type: Mfwd::DefaultContext
        class Vrfs; //type: Mfwd::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext> default_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs> vrfs;
        
}; // Mfwd


class Mfwd::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6; //type: Mfwd::DefaultContext::Ipv6
        class Ipv4; //type: Mfwd::DefaultContext::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4> ipv4;
        
}; // Mfwd::DefaultContext


class Mfwd::DefaultContext::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable_on_all_interfaces; //type: empty
        ydk::YLeaf maximum_checking_disable; //type: empty
        ydk::YLeaf rate_per_route; //type: empty
        ydk::YLeaf interface_inheritance_disable; //type: empty
        ydk::YLeaf mofrr_lockout_timer_config; //type: uint32
        ydk::YLeaf forwarding_latency; //type: uint32
        ydk::YLeaf mofrr_loss_detection_timer_config; //type: uint32
        ydk::YLeaf multicast_forwarding; //type: empty
        ydk::YLeaf log_traps; //type: empty
        ydk::YLeaf accounting; //type: AccountingMode
        class StaticRpfRules; //type: Mfwd::DefaultContext::Ipv6::StaticRpfRules
        class Interfaces; //type: Mfwd::DefaultContext::Ipv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::StaticRpfRules> static_rpf_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::Interfaces> interfaces;
        
}; // Mfwd::DefaultContext::Ipv6


class Mfwd::DefaultContext::Ipv6::StaticRpfRules : public ydk::Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StaticRpfRule; //type: Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule

        ydk::YList static_rpf_rule;
        
}; // Mfwd::DefaultContext::Ipv6::StaticRpfRules


class Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule : public ydk::Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_mask; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule


class Mfwd::DefaultContext::Ipv6::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Mfwd::DefaultContext::Ipv6::Interfaces::Interface

        ydk::YList interface;
        
}; // Mfwd::DefaultContext::Ipv6::Interfaces


class Mfwd::DefaultContext::Ipv6::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ttl_threshold; //type: uint32
        ydk::YLeaf enable_on_interface; //type: boolean
        ydk::YLeaf boundary; //type: string

}; // Mfwd::DefaultContext::Ipv6::Interfaces::Interface


class Mfwd::DefaultContext::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf out_of_memory_handling; //type: empty
        ydk::YLeaf enable_on_all_interfaces; //type: empty
        ydk::YLeaf maximum_checking_disable; //type: empty
        ydk::YLeaf rate_per_route; //type: empty
        ydk::YLeaf interface_inheritance_disable; //type: empty
        ydk::YLeaf mofrr_lockout_timer_config; //type: uint32
        ydk::YLeaf forwarding_latency; //type: uint32
        ydk::YLeaf mofrr_loss_detection_timer_config; //type: uint32
        ydk::YLeaf multicast_forwarding; //type: empty
        ydk::YLeaf log_traps; //type: empty
        ydk::YLeaf accounting; //type: AccountingMode
        class StaticRpfRules; //type: Mfwd::DefaultContext::Ipv4::StaticRpfRules
        class Interfaces; //type: Mfwd::DefaultContext::Ipv4::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::StaticRpfRules> static_rpf_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::Interfaces> interfaces;
        
}; // Mfwd::DefaultContext::Ipv4


class Mfwd::DefaultContext::Ipv4::StaticRpfRules : public ydk::Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StaticRpfRule; //type: Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule

        ydk::YList static_rpf_rule;
        
}; // Mfwd::DefaultContext::Ipv4::StaticRpfRules


class Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule : public ydk::Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_mask; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule


class Mfwd::DefaultContext::Ipv4::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Mfwd::DefaultContext::Ipv4::Interfaces::Interface

        ydk::YList interface;
        
}; // Mfwd::DefaultContext::Ipv4::Interfaces


class Mfwd::DefaultContext::Ipv4::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ttl_threshold; //type: uint32
        ydk::YLeaf enable_on_interface; //type: boolean
        ydk::YLeaf boundary; //type: string

}; // Mfwd::DefaultContext::Ipv4::Interfaces::Interface


class Mfwd::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vrf; //type: Mfwd::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Mfwd::Vrfs


class Mfwd::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Ipv6; //type: Mfwd::Vrfs::Vrf::Ipv6
        class Ipv4; //type: Mfwd::Vrfs::Vrf::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4> ipv4;
        
}; // Mfwd::Vrfs::Vrf


class Mfwd::Vrfs::Vrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_on_all_interfaces; //type: empty
        ydk::YLeaf rate_per_route; //type: empty
        ydk::YLeaf multicast_forwarding; //type: empty
        ydk::YLeaf log_traps; //type: empty
        ydk::YLeaf accounting; //type: AccountingMode
        class StaticRpfRules; //type: Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules
        class Interfaces; //type: Mfwd::Vrfs::Vrf::Ipv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules> static_rpf_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
        
}; // Mfwd::Vrfs::Vrf::Ipv6


class Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules : public ydk::Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRpfRule; //type: Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule

        ydk::YList static_rpf_rule;
        
}; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules


class Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule : public ydk::Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_mask; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule


class Mfwd::Vrfs::Vrf::Ipv6::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface

        ydk::YList interface;
        
}; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces


class Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ttl_threshold; //type: uint32
        ydk::YLeaf enable_on_interface; //type: boolean
        ydk::YLeaf boundary; //type: string

}; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface


class Mfwd::Vrfs::Vrf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_on_all_interfaces; //type: empty
        ydk::YLeaf rate_per_route; //type: empty
        ydk::YLeaf multicast_forwarding; //type: empty
        ydk::YLeaf log_traps; //type: empty
        ydk::YLeaf accounting; //type: AccountingMode
        class StaticRpfRules; //type: Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules
        class Interfaces; //type: Mfwd::Vrfs::Vrf::Ipv4::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules> static_rpf_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
        
}; // Mfwd::Vrfs::Vrf::Ipv4


class Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules : public ydk::Entity
{
    public:
        StaticRpfRules();
        ~StaticRpfRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRpfRule; //type: Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule

        ydk::YList static_rpf_rule;
        
}; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules


class Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule : public ydk::Entity
{
    public:
        StaticRpfRule();
        ~StaticRpfRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_mask; //type: uint32
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule


class Mfwd::Vrfs::Vrf::Ipv4::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface

        ydk::YList interface;
        
}; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces


class Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ttl_threshold; //type: uint32
        ydk::YLeaf enable_on_interface; //type: boolean
        ydk::YLeaf boundary; //type: string

}; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface

class AccountingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf forward_only_enable;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MFWD_CFG_ */

