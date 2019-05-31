#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_SRV6_OPER_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_SRV6_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_srv6_oper {

class Srv6 : public ydk::Entity
{
    public:
        Srv6();
        ~Srv6();

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

        class Active; //type: Srv6::Active
        class Standby; //type: Srv6::Standby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby> standby;
        
}; // Srv6


class Srv6::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class LocatorAllStaleSids; //type: Srv6::Active::LocatorAllStaleSids
        class Manager; //type: Srv6::Active::Manager
        class Locators; //type: Srv6::Active::Locators
        class LocatorAllSids; //type: Srv6::Active::LocatorAllSids
        class LocatorAllActiveSids; //type: Srv6::Active::LocatorAllActiveSids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids> locator_all_stale_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager> manager;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators> locators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids> locator_all_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids> locator_all_active_sids;
        
}; // Srv6::Active


class Srv6::Active::LocatorAllStaleSids : public ydk::Entity
{
    public:
        LocatorAllStaleSids();
        ~LocatorAllStaleSids();

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

        class LocatorAllStaleSid; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid

        ydk::YList locator_all_stale_sid;
        
}; // Srv6::Active::LocatorAllStaleSids


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid : public ydk::Entity
{
    public:
        LocatorAllStaleSid();
        ~LocatorAllStaleSid();

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

        ydk::YLeaf locator_name; //type: string
        ydk::YLeaf sid_opcode; //type: uint32
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext
        class CreateTimestamp; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp
        class Owner; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key> key;
        
}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E
        class X; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X
        class Dx4; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::E


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::X


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dx4


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::SidContext::Key::Dt4


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::CreateTimestamp


class Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Active::LocatorAllStaleSids::LocatorAllStaleSid::Owner


class Srv6::Active::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

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

        class SidMgrParams; //type: Srv6::Active::Manager::SidMgrParams
        class SidMgrSummary; //type: Srv6::Active::Manager::SidMgrSummary
        class PlatformCapabilities; //type: Srv6::Active::Manager::PlatformCapabilities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::SidMgrParams> sid_mgr_params;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::SidMgrSummary> sid_mgr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::PlatformCapabilities> platform_capabilities;
        
}; // Srv6::Active::Manager


class Srv6::Active::Manager::SidMgrParams : public ydk::Entity
{
    public:
        SidMgrParams();
        ~SidMgrParams();

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

        ydk::YLeaf srv6_enabled; //type: boolean
        ydk::YLeaf configured_encap_source_address; //type: string
        ydk::YLeaf default_encap_source_address; //type: string
        ydk::YLeaf encap_ttl_propagate; //type: boolean
        ydk::YLeaf is_sid_holdtime_configured; //type: boolean
        ydk::YLeaf sid_holdtime_mins_configured; //type: uint32
        class EncapHopLimit; //type: Srv6::Active::Manager::SidMgrParams::EncapHopLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::SidMgrParams::EncapHopLimit> encap_hop_limit;
        
}; // Srv6::Active::Manager::SidMgrParams


class Srv6::Active::Manager::SidMgrParams::EncapHopLimit : public ydk::Entity
{
    public:
        EncapHopLimit();
        ~EncapHopLimit();

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

        ydk::YLeaf use_default; //type: boolean
        ydk::YLeaf do_propagate; //type: boolean
        ydk::YLeaf value_; //type: uint8

}; // Srv6::Active::Manager::SidMgrParams::EncapHopLimit


class Srv6::Active::Manager::SidMgrSummary : public ydk::Entity
{
    public:
        SidMgrSummary();
        ~SidMgrSummary();

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

        ydk::YLeaf locators_count; //type: uint16
        ydk::YLeaf oper_locators_count; //type: uint16
        ydk::YLeaf sids_count; //type: uint32
        ydk::YLeaf stale_sids_count; //type: uint32
        ydk::YLeaf maximum_sids_count; //type: uint32
        class SidsOutOfResourceSummary; //type: Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary> sids_out_of_resource_summary;
        
}; // Srv6::Active::Manager::SidMgrSummary


class Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary : public ydk::Entity
{
    public:
        SidsOutOfResourceSummary();
        ~SidsOutOfResourceSummary();

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

        ydk::YLeaf out_of_resources_state; //type: Srv6OutOfResourceState
        ydk::YLeaf oor_yellow_free_sid_threshold; //type: uint32
        ydk::YLeaf oor_green_free_sid_threshold; //type: uint32
        ydk::YLeaf oor_green_count; //type: uint32
        ydk::YLeaf oor_yellow_count; //type: uint32
        ydk::YLeaf oor_red_count; //type: uint32

}; // Srv6::Active::Manager::SidMgrSummary::SidsOutOfResourceSummary


class Srv6::Active::Manager::PlatformCapabilities : public ydk::Entity
{
    public:
        PlatformCapabilities();
        ~PlatformCapabilities();

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

        ydk::YLeaf max_sid; //type: uint32
        ydk::YLeaf sid_holdtime_mins; //type: uint32
        class Support; //type: Srv6::Active::Manager::PlatformCapabilities::Support

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::PlatformCapabilities::Support> support;
        
}; // Srv6::Active::Manager::PlatformCapabilities


class Srv6::Active::Manager::PlatformCapabilities::Support : public ydk::Entity
{
    public:
        Support();
        ~Support();

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

        ydk::YLeaf srv6; //type: boolean
        ydk::YLeaf tilfa; //type: boolean
        ydk::YLeaf microloop_avoidance; //type: boolean
        class SignaledParameters; //type: Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters
        class EndFunc; //type: Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc
        class TransitFunc; //type: Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc
        class SecurityRule; //type: Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule
        class Counter; //type: Srv6::Active::Manager::PlatformCapabilities::Support::Counter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters> signaled_parameters;
        ydk::YList end_func;
        ydk::YList transit_func;
        ydk::YList security_rule;
        ydk::YList counter;
        
}; // Srv6::Active::Manager::PlatformCapabilities::Support


class Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters : public ydk::Entity
{
    public:
        SignaledParameters();
        ~SignaledParameters();

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

        ydk::YLeaf max_sl; //type: uint8
        ydk::YLeaf max_end_pop_srh; //type: uint8
        ydk::YLeaf max_t_insert; //type: uint8
        ydk::YLeaf max_t_encap; //type: uint8
        ydk::YLeaf max_end_d; //type: uint8

}; // Srv6::Active::Manager::PlatformCapabilities::Support::SignaledParameters


class Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc : public ydk::Entity
{
    public:
        EndFunc();
        ~EndFunc();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Active::Manager::PlatformCapabilities::Support::EndFunc


class Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc : public ydk::Entity
{
    public:
        TransitFunc();
        ~TransitFunc();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Active::Manager::PlatformCapabilities::Support::TransitFunc


class Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule : public ydk::Entity
{
    public:
        SecurityRule();
        ~SecurityRule();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Active::Manager::PlatformCapabilities::Support::SecurityRule


class Srv6::Active::Manager::PlatformCapabilities::Support::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Active::Manager::PlatformCapabilities::Support::Counter


class Srv6::Active::Locators : public ydk::Entity
{
    public:
        Locators();
        ~Locators();

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

        class Locator; //type: Srv6::Active::Locators::Locator

        ydk::YList locator;
        
}; // Srv6::Active::Locators


class Srv6::Active::Locators::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

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

        ydk::YLeaf name; //type: string
        class Info; //type: Srv6::Active::Locators::Locator::Info
        class Sids; //type: Srv6::Active::Locators::Locator::Sids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids> sids;
        
}; // Srv6::Active::Locators::Locator


class Srv6::Active::Locators::Locator::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf out_of_resources_state; //type: Srv6OutOfResourceState
        class Interface; //type: Srv6::Active::Locators::Locator::Info::Interface
        class CreateTimestamp; //type: Srv6::Active::Locators::Locator::Info::CreateTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Info::Interface> interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Info::CreateTimestamp> create_timestamp;
        
}; // Srv6::Active::Locators::Locator::Info


class Srv6::Active::Locators::Locator::Info::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf programmed_prefix; //type: string

}; // Srv6::Active::Locators::Locator::Info::Interface


class Srv6::Active::Locators::Locator::Info::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Active::Locators::Locator::Info::CreateTimestamp


class Srv6::Active::Locators::Locator::Sids : public ydk::Entity
{
    public:
        Sids();
        ~Sids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sid; //type: Srv6::Active::Locators::Locator::Sids::Sid

        ydk::YList sid;
        
}; // Srv6::Active::Locators::Locator::Sids


class Srv6::Active::Locators::Locator::Sids::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

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
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext
        class CreateTimestamp; //type: Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp
        class Owner; //type: Srv6::Active::Locators::Locator::Sids::Sid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Active::Locators::Locator::Sids::Sid


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key> key;
        
}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E
        class X; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X
        class Dx4; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::E


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::X


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dx4


class Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Active::Locators::Locator::Sids::Sid::SidContext::Key::Dt4


class Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Active::Locators::Locator::Sids::Sid::CreateTimestamp


class Srv6::Active::Locators::Locator::Sids::Sid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Active::Locators::Locator::Sids::Sid::Owner


class Srv6::Active::LocatorAllSids : public ydk::Entity
{
    public:
        LocatorAllSids();
        ~LocatorAllSids();

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

        class LocatorAllSid; //type: Srv6::Active::LocatorAllSids::LocatorAllSid

        ydk::YList locator_all_sid;
        
}; // Srv6::Active::LocatorAllSids


class Srv6::Active::LocatorAllSids::LocatorAllSid : public ydk::Entity
{
    public:
        LocatorAllSid();
        ~LocatorAllSid();

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

        ydk::YLeaf locator_name; //type: string
        ydk::YLeaf sid_opcode; //type: uint32
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext
        class CreateTimestamp; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp
        class Owner; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Active::LocatorAllSids::LocatorAllSid


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key> key;
        
}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E
        class X; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X
        class Dx4; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::E


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::X


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4


class Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4


class Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::CreateTimestamp


class Srv6::Active::LocatorAllSids::LocatorAllSid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Active::LocatorAllSids::LocatorAllSid::Owner


class Srv6::Active::LocatorAllActiveSids : public ydk::Entity
{
    public:
        LocatorAllActiveSids();
        ~LocatorAllActiveSids();

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

        class LocatorAllActiveSid; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid

        ydk::YList locator_all_active_sid;
        
}; // Srv6::Active::LocatorAllActiveSids


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid : public ydk::Entity
{
    public:
        LocatorAllActiveSid();
        ~LocatorAllActiveSid();

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

        ydk::YLeaf locator_name; //type: string
        ydk::YLeaf sid_opcode; //type: uint32
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext
        class CreateTimestamp; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp
        class Owner; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key> key;
        
}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E
        class X; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X
        class Dx4; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp


class Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Active::LocatorAllActiveSids::LocatorAllActiveSid::Owner


class Srv6::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class Manager; //type: Srv6::Standby::Manager
        class Locators; //type: Srv6::Standby::Locators
        class LocatorAllSids; //type: Srv6::Standby::LocatorAllSids
        class LocatorAllActiveSids; //type: Srv6::Standby::LocatorAllActiveSids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager> manager;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators> locators;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids> locator_all_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids> locator_all_active_sids;
        
}; // Srv6::Standby


class Srv6::Standby::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

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

        class SidMgrParams; //type: Srv6::Standby::Manager::SidMgrParams
        class SidMgrSummary; //type: Srv6::Standby::Manager::SidMgrSummary
        class PlatformCapabilities; //type: Srv6::Standby::Manager::PlatformCapabilities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::SidMgrParams> sid_mgr_params;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::SidMgrSummary> sid_mgr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::PlatformCapabilities> platform_capabilities;
        
}; // Srv6::Standby::Manager


class Srv6::Standby::Manager::SidMgrParams : public ydk::Entity
{
    public:
        SidMgrParams();
        ~SidMgrParams();

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

        ydk::YLeaf srv6_enabled; //type: boolean
        ydk::YLeaf configured_encap_source_address; //type: string
        ydk::YLeaf default_encap_source_address; //type: string
        ydk::YLeaf encap_ttl_propagate; //type: boolean
        ydk::YLeaf is_sid_holdtime_configured; //type: boolean
        ydk::YLeaf sid_holdtime_mins_configured; //type: uint32
        class EncapHopLimit; //type: Srv6::Standby::Manager::SidMgrParams::EncapHopLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::SidMgrParams::EncapHopLimit> encap_hop_limit;
        
}; // Srv6::Standby::Manager::SidMgrParams


class Srv6::Standby::Manager::SidMgrParams::EncapHopLimit : public ydk::Entity
{
    public:
        EncapHopLimit();
        ~EncapHopLimit();

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

        ydk::YLeaf use_default; //type: boolean
        ydk::YLeaf do_propagate; //type: boolean
        ydk::YLeaf value_; //type: uint8

}; // Srv6::Standby::Manager::SidMgrParams::EncapHopLimit


class Srv6::Standby::Manager::SidMgrSummary : public ydk::Entity
{
    public:
        SidMgrSummary();
        ~SidMgrSummary();

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

        ydk::YLeaf locators_count; //type: uint16
        ydk::YLeaf oper_locators_count; //type: uint16
        ydk::YLeaf sids_count; //type: uint32
        ydk::YLeaf stale_sids_count; //type: uint32
        ydk::YLeaf maximum_sids_count; //type: uint32
        class SidsOutOfResourceSummary; //type: Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary> sids_out_of_resource_summary;
        
}; // Srv6::Standby::Manager::SidMgrSummary


class Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary : public ydk::Entity
{
    public:
        SidsOutOfResourceSummary();
        ~SidsOutOfResourceSummary();

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

        ydk::YLeaf out_of_resources_state; //type: Srv6OutOfResourceState
        ydk::YLeaf oor_yellow_free_sid_threshold; //type: uint32
        ydk::YLeaf oor_green_free_sid_threshold; //type: uint32
        ydk::YLeaf oor_green_count; //type: uint32
        ydk::YLeaf oor_yellow_count; //type: uint32
        ydk::YLeaf oor_red_count; //type: uint32

}; // Srv6::Standby::Manager::SidMgrSummary::SidsOutOfResourceSummary


class Srv6::Standby::Manager::PlatformCapabilities : public ydk::Entity
{
    public:
        PlatformCapabilities();
        ~PlatformCapabilities();

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

        ydk::YLeaf max_sid; //type: uint32
        ydk::YLeaf sid_holdtime_mins; //type: uint32
        class Support; //type: Srv6::Standby::Manager::PlatformCapabilities::Support

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::PlatformCapabilities::Support> support;
        
}; // Srv6::Standby::Manager::PlatformCapabilities


class Srv6::Standby::Manager::PlatformCapabilities::Support : public ydk::Entity
{
    public:
        Support();
        ~Support();

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

        ydk::YLeaf srv6; //type: boolean
        ydk::YLeaf tilfa; //type: boolean
        ydk::YLeaf microloop_avoidance; //type: boolean
        class SignaledParameters; //type: Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters
        class EndFunc; //type: Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc
        class TransitFunc; //type: Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc
        class SecurityRule; //type: Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule
        class Counter; //type: Srv6::Standby::Manager::PlatformCapabilities::Support::Counter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters> signaled_parameters;
        ydk::YList end_func;
        ydk::YList transit_func;
        ydk::YList security_rule;
        ydk::YList counter;
        
}; // Srv6::Standby::Manager::PlatformCapabilities::Support


class Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters : public ydk::Entity
{
    public:
        SignaledParameters();
        ~SignaledParameters();

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

        ydk::YLeaf max_sl; //type: uint8
        ydk::YLeaf max_end_pop_srh; //type: uint8
        ydk::YLeaf max_t_insert; //type: uint8
        ydk::YLeaf max_t_encap; //type: uint8
        ydk::YLeaf max_end_d; //type: uint8

}; // Srv6::Standby::Manager::PlatformCapabilities::Support::SignaledParameters


class Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc : public ydk::Entity
{
    public:
        EndFunc();
        ~EndFunc();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Standby::Manager::PlatformCapabilities::Support::EndFunc


class Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc : public ydk::Entity
{
    public:
        TransitFunc();
        ~TransitFunc();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Standby::Manager::PlatformCapabilities::Support::TransitFunc


class Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule : public ydk::Entity
{
    public:
        SecurityRule();
        ~SecurityRule();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Standby::Manager::PlatformCapabilities::Support::SecurityRule


class Srv6::Standby::Manager::PlatformCapabilities::Support::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

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

        ydk::YLeaf string; //type: string

}; // Srv6::Standby::Manager::PlatformCapabilities::Support::Counter


class Srv6::Standby::Locators : public ydk::Entity
{
    public:
        Locators();
        ~Locators();

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

        class Locator; //type: Srv6::Standby::Locators::Locator

        ydk::YList locator;
        
}; // Srv6::Standby::Locators


class Srv6::Standby::Locators::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

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

        ydk::YLeaf name; //type: string
        class Info; //type: Srv6::Standby::Locators::Locator::Info
        class Sids; //type: Srv6::Standby::Locators::Locator::Sids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids> sids;
        
}; // Srv6::Standby::Locators::Locator


class Srv6::Standby::Locators::Locator::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf out_of_resources_state; //type: Srv6OutOfResourceState
        class Interface; //type: Srv6::Standby::Locators::Locator::Info::Interface
        class CreateTimestamp; //type: Srv6::Standby::Locators::Locator::Info::CreateTimestamp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Info::Interface> interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Info::CreateTimestamp> create_timestamp;
        
}; // Srv6::Standby::Locators::Locator::Info


class Srv6::Standby::Locators::Locator::Info::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf programmed_prefix; //type: string

}; // Srv6::Standby::Locators::Locator::Info::Interface


class Srv6::Standby::Locators::Locator::Info::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Standby::Locators::Locator::Info::CreateTimestamp


class Srv6::Standby::Locators::Locator::Sids : public ydk::Entity
{
    public:
        Sids();
        ~Sids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sid; //type: Srv6::Standby::Locators::Locator::Sids::Sid

        ydk::YList sid;
        
}; // Srv6::Standby::Locators::Locator::Sids


class Srv6::Standby::Locators::Locator::Sids::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

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
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext
        class CreateTimestamp; //type: Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp
        class Owner; //type: Srv6::Standby::Locators::Locator::Sids::Sid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Standby::Locators::Locator::Sids::Sid


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key> key;
        
}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E
        class X; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X
        class Dx4; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::E


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::X


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dx4


class Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Standby::Locators::Locator::Sids::Sid::SidContext::Key::Dt4


class Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Standby::Locators::Locator::Sids::Sid::CreateTimestamp


class Srv6::Standby::Locators::Locator::Sids::Sid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Standby::Locators::Locator::Sids::Sid::Owner


class Srv6::Standby::LocatorAllSids : public ydk::Entity
{
    public:
        LocatorAllSids();
        ~LocatorAllSids();

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

        class LocatorAllSid; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid

        ydk::YList locator_all_sid;
        
}; // Srv6::Standby::LocatorAllSids


class Srv6::Standby::LocatorAllSids::LocatorAllSid : public ydk::Entity
{
    public:
        LocatorAllSid();
        ~LocatorAllSid();

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

        ydk::YLeaf locator_name; //type: string
        ydk::YLeaf sid_opcode; //type: uint32
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext
        class CreateTimestamp; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp
        class Owner; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Standby::LocatorAllSids::LocatorAllSid


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key> key;
        
}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E
        class X; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X
        class Dx4; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::E


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::X


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dx4


class Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::SidContext::Key::Dt4


class Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::CreateTimestamp


class Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Standby::LocatorAllSids::LocatorAllSid::Owner


class Srv6::Standby::LocatorAllActiveSids : public ydk::Entity
{
    public:
        LocatorAllActiveSids();
        ~LocatorAllActiveSids();

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

        class LocatorAllActiveSid; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid

        ydk::YList locator_all_active_sid;
        
}; // Srv6::Standby::LocatorAllActiveSids


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid : public ydk::Entity
{
    public:
        LocatorAllActiveSid();
        ~LocatorAllActiveSid();

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

        ydk::YLeaf locator_name; //type: string
        ydk::YLeaf sid_opcode; //type: uint32
        ydk::YLeaf sid; //type: string
        ydk::YLeaf allocation_type; //type: SidAllocation
        ydk::YLeaf function_type; //type: Srv6EndFunction
        ydk::YLeaf state; //type: SidState
        ydk::YLeaf has_forwarding; //type: boolean
        ydk::YLeaf locator; //type: string
        class SidContext; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext
        class CreateTimestamp; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp
        class Owner; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext> sid_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp> create_timestamp;
        ydk::YList owner;
        
}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext : public ydk::Entity
{
    public:
        SidContext();
        ~SidContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key> key;
        
}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_context_type; //type: Srv6EndFunction
        class E; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E
        class X; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X
        class Dx4; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4
        class Dt4; //type: Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E> e;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X> x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4> dx4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_srv6_oper::Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4> dt4;
        
}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E : public ydk::Entity
{
    public:
        E();
        ~E();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf opaque_id; //type: uint8

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::E


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X : public ydk::Entity
{
    public:
        X();
        ~X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf opaque_id; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf nexthop_address; //type: string

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::X


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4 : public ydk::Entity
{
    public:
        Dx4();
        ~Dx4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dx4


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4 : public ydk::Entity
{
    public:
        Dt4();
        ~Dt4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::SidContext::Key::Dt4


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp : public ydk::Entity
{
    public:
        CreateTimestamp();
        ~CreateTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_nano_seconds; //type: uint64
        ydk::YLeaf age_in_nano_seconds; //type: uint64

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::CreateTimestamp


class Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string

}; // Srv6::Standby::LocatorAllActiveSids::LocatorAllActiveSid::Owner

class SidState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf in_use;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf stale;

};

class Srv6EndFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf end;
        static const ydk::Enum::YLeaf end_with_psp;
        static const ydk::Enum::YLeaf end_with_usp;
        static const ydk::Enum::YLeaf end_with_psp_usp;
        static const ydk::Enum::YLeaf end_x;
        static const ydk::Enum::YLeaf end_x_with_psp;
        static const ydk::Enum::YLeaf end_x_with_usp;
        static const ydk::Enum::YLeaf end_x_with_psp_usp;
        static const ydk::Enum::YLeaf end_tbl;
        static const ydk::Enum::YLeaf end_tbl_with_psp;
        static const ydk::Enum::YLeaf end_tbl_with_usp;
        static const ydk::Enum::YLeaf end_tbl_with_psp_usp;
        static const ydk::Enum::YLeaf end_b6;
        static const ydk::Enum::YLeaf end_b6_encaps;
        static const ydk::Enum::YLeaf end_bm;
        static const ydk::Enum::YLeaf end_dx6;
        static const ydk::Enum::YLeaf end_dx4;
        static const ydk::Enum::YLeaf end_dt6;
        static const ydk::Enum::YLeaf end_dt4;
        static const ydk::Enum::YLeaf end_dt46;
        static const ydk::Enum::YLeaf end_dx2;
        static const ydk::Enum::YLeaf end_dx2v;
        static const ydk::Enum::YLeaf end_dx2u;
        static const ydk::Enum::YLeaf end_dx2m;
        static const ydk::Enum::YLeaf end_otp;
        static const ydk::Enum::YLeaf end_s;

};

class SidAllocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;

};

class Srv6OutOfResourceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oor_green;
        static const ydk::Enum::YLeaf oor_yellow;
        static const ydk::Enum::YLeaf oor_red;

};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_SRV6_OPER_ */

