#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_cfg {

class RoutingPolicy : public Entity
{
    public:
        RoutingPolicy();
        ~RoutingPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf editor; //type: string
        class RoutePolicies; //type: RoutingPolicy::RoutePolicies
        class Sets; //type: RoutingPolicy::Sets
        class Limits; //type: RoutingPolicy::Limits

        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Limits> limits;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::RoutePolicies> route_policies;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets> sets;
        
}; // RoutingPolicy


class RoutingPolicy::RoutePolicies : public Entity
{
    public:
        RoutePolicies();
        ~RoutePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RoutePolicy; //type: RoutingPolicy::RoutePolicies::RoutePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::RoutePolicies::RoutePolicy> > route_policy;
        
}; // RoutingPolicy::RoutePolicies


class RoutingPolicy::RoutePolicies::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_policy_name; //type: string
        YLeaf rpl_route_policy; //type: string

}; // RoutingPolicy::RoutePolicies::RoutePolicy


class RoutingPolicy::Sets : public Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependEtagSets; //type: RoutingPolicy::Sets::PrependEtagSets
        class PrefixSets; //type: RoutingPolicy::Sets::PrefixSets
        class AppendEtagSets; //type: RoutingPolicy::Sets::AppendEtagSets
        class RemoveEtagSets; //type: RoutingPolicy::Sets::RemoveEtagSets
        class MacSets; //type: RoutingPolicy::Sets::MacSets
        class ExtendedCommunityOpaqueSets; //type: RoutingPolicy::Sets::ExtendedCommunityOpaqueSets
        class PrependMacSets; //type: RoutingPolicy::Sets::PrependMacSets
        class OspfAreaSets; //type: RoutingPolicy::Sets::OspfAreaSets
        class AppendMacSets; //type: RoutingPolicy::Sets::AppendMacSets
        class ExtendedCommunityCostSets; //type: RoutingPolicy::Sets::ExtendedCommunityCostSets
        class RemoveMacSets; //type: RoutingPolicy::Sets::RemoveMacSets
        class ExtendedCommunitySooSets; //type: RoutingPolicy::Sets::ExtendedCommunitySooSets
        class EsiSets; //type: RoutingPolicy::Sets::EsiSets
        class PrependEsiSets; //type: RoutingPolicy::Sets::PrependEsiSets
        class AppendEsiSets; //type: RoutingPolicy::Sets::AppendEsiSets
        class RemoveEsiSets; //type: RoutingPolicy::Sets::RemoveEsiSets
        class ExtendedCommunitySegNhSets; //type: RoutingPolicy::Sets::ExtendedCommunitySegNhSets
        class RdSets; //type: RoutingPolicy::Sets::RdSets
        class PolicyGlobalSetTable; //type: RoutingPolicy::Sets::PolicyGlobalSetTable
        class ExtendedCommunityBandwidthSets; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidthSets
        class CommunitySets; //type: RoutingPolicy::Sets::CommunitySets
        class AsPathSets; //type: RoutingPolicy::Sets::AsPathSets
        class TagSets; //type: RoutingPolicy::Sets::TagSets
        class EtagSets; //type: RoutingPolicy::Sets::EtagSets
        class ExtendedCommunityRtSets; //type: RoutingPolicy::Sets::ExtendedCommunityRtSets

        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendEsiSets> append_esi_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendEtagSets> append_etag_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendMacSets> append_mac_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AsPathSets> as_path_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::CommunitySets> community_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::EsiSets> esi_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::EtagSets> etag_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityBandwidthSets> extended_community_bandwidth_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityCostSets> extended_community_cost_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityOpaqueSets> extended_community_opaque_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityRtSets> extended_community_rt_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySegNhSets> extended_community_seg_nh_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySooSets> extended_community_soo_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::MacSets> mac_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::OspfAreaSets> ospf_area_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PolicyGlobalSetTable> policy_global_set_table;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrefixSets> prefix_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependEsiSets> prepend_esi_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependEtagSets> prepend_etag_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependMacSets> prepend_mac_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RdSets> rd_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveEsiSets> remove_esi_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveEtagSets> remove_etag_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveMacSets> remove_mac_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::TagSets> tag_sets;
        
}; // RoutingPolicy::Sets


class RoutingPolicy::Sets::PrependEtagSets : public Entity
{
    public:
        PrependEtagSets();
        ~PrependEtagSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependEtagSet; //type: RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet> > prepend_etag_set;
        
}; // RoutingPolicy::Sets::PrependEtagSets


class RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet : public Entity
{
    public:
        PrependEtagSet();
        ~PrependEtagSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf etag_set_as_text; //type: string

}; // RoutingPolicy::Sets::PrependEtagSets::PrependEtagSet


class RoutingPolicy::Sets::PrefixSets : public Entity
{
    public:
        PrefixSets();
        ~PrefixSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixSet; //type: RoutingPolicy::Sets::PrefixSets::PrefixSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrefixSets::PrefixSet> > prefix_set;
        
}; // RoutingPolicy::Sets::PrefixSets


class RoutingPolicy::Sets::PrefixSets::PrefixSet : public Entity
{
    public:
        PrefixSet();
        ~PrefixSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_prefix_set; //type: string

}; // RoutingPolicy::Sets::PrefixSets::PrefixSet


class RoutingPolicy::Sets::AppendEtagSets : public Entity
{
    public:
        AppendEtagSets();
        ~AppendEtagSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AppendEtagSet; //type: RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet> > append_etag_set;
        
}; // RoutingPolicy::Sets::AppendEtagSets


class RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet : public Entity
{
    public:
        AppendEtagSet();
        ~AppendEtagSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf etag_set_as_text; //type: string

}; // RoutingPolicy::Sets::AppendEtagSets::AppendEtagSet


class RoutingPolicy::Sets::RemoveEtagSets : public Entity
{
    public:
        RemoveEtagSets();
        ~RemoveEtagSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoveEtagSet; //type: RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet> > remove_etag_set;
        
}; // RoutingPolicy::Sets::RemoveEtagSets


class RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet : public Entity
{
    public:
        RemoveEtagSet();
        ~RemoveEtagSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf etag_set_as_text; //type: string

}; // RoutingPolicy::Sets::RemoveEtagSets::RemoveEtagSet


class RoutingPolicy::Sets::MacSets : public Entity
{
    public:
        MacSets();
        ~MacSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacSet; //type: RoutingPolicy::Sets::MacSets::MacSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::MacSets::MacSet> > mac_set;
        
}; // RoutingPolicy::Sets::MacSets


class RoutingPolicy::Sets::MacSets::MacSet : public Entity
{
    public:
        MacSet();
        ~MacSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf mac_set_as_text; //type: string

}; // RoutingPolicy::Sets::MacSets::MacSet


class RoutingPolicy::Sets::ExtendedCommunityOpaqueSets : public Entity
{
    public:
        ExtendedCommunityOpaqueSets();
        ~ExtendedCommunityOpaqueSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunityOpaqueSet; //type: RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet> > extended_community_opaque_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityOpaqueSets


class RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet : public Entity
{
    public:
        ExtendedCommunityOpaqueSet();
        ~ExtendedCommunityOpaqueSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_opaque_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet


class RoutingPolicy::Sets::PrependMacSets : public Entity
{
    public:
        PrependMacSets();
        ~PrependMacSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependMacSet; //type: RoutingPolicy::Sets::PrependMacSets::PrependMacSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependMacSets::PrependMacSet> > prepend_mac_set;
        
}; // RoutingPolicy::Sets::PrependMacSets


class RoutingPolicy::Sets::PrependMacSets::PrependMacSet : public Entity
{
    public:
        PrependMacSet();
        ~PrependMacSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf mac_set_as_text; //type: string

}; // RoutingPolicy::Sets::PrependMacSets::PrependMacSet


class RoutingPolicy::Sets::OspfAreaSets : public Entity
{
    public:
        OspfAreaSets();
        ~OspfAreaSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OspfAreaSet; //type: RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet> > ospf_area_set;
        
}; // RoutingPolicy::Sets::OspfAreaSets


class RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet : public Entity
{
    public:
        OspfAreaSet();
        ~OspfAreaSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rplospf_area_set; //type: string

}; // RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet


class RoutingPolicy::Sets::AppendMacSets : public Entity
{
    public:
        AppendMacSets();
        ~AppendMacSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AppendMacSet; //type: RoutingPolicy::Sets::AppendMacSets::AppendMacSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendMacSets::AppendMacSet> > append_mac_set;
        
}; // RoutingPolicy::Sets::AppendMacSets


class RoutingPolicy::Sets::AppendMacSets::AppendMacSet : public Entity
{
    public:
        AppendMacSet();
        ~AppendMacSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf mac_set_as_text; //type: string

}; // RoutingPolicy::Sets::AppendMacSets::AppendMacSet


class RoutingPolicy::Sets::ExtendedCommunityCostSets : public Entity
{
    public:
        ExtendedCommunityCostSets();
        ~ExtendedCommunityCostSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunityCostSet; //type: RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet> > extended_community_cost_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCostSets


class RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet : public Entity
{
    public:
        ExtendedCommunityCostSet();
        ~ExtendedCommunityCostSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_cost_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet


class RoutingPolicy::Sets::RemoveMacSets : public Entity
{
    public:
        RemoveMacSets();
        ~RemoveMacSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoveMacSet; //type: RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet> > remove_mac_set;
        
}; // RoutingPolicy::Sets::RemoveMacSets


class RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet : public Entity
{
    public:
        RemoveMacSet();
        ~RemoveMacSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf mac_set_as_text; //type: string

}; // RoutingPolicy::Sets::RemoveMacSets::RemoveMacSet


class RoutingPolicy::Sets::ExtendedCommunitySooSets : public Entity
{
    public:
        ExtendedCommunitySooSets();
        ~ExtendedCommunitySooSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunitySooSet; //type: RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet> > extended_community_soo_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySooSets


class RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet : public Entity
{
    public:
        ExtendedCommunitySooSet();
        ~ExtendedCommunitySooSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_soo_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet


class RoutingPolicy::Sets::EsiSets : public Entity
{
    public:
        EsiSets();
        ~EsiSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EsiSet; //type: RoutingPolicy::Sets::EsiSets::EsiSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::EsiSets::EsiSet> > esi_set;
        
}; // RoutingPolicy::Sets::EsiSets


class RoutingPolicy::Sets::EsiSets::EsiSet : public Entity
{
    public:
        EsiSet();
        ~EsiSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf esi_set_as_text; //type: string

}; // RoutingPolicy::Sets::EsiSets::EsiSet


class RoutingPolicy::Sets::PrependEsiSets : public Entity
{
    public:
        PrependEsiSets();
        ~PrependEsiSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependEsiSet; //type: RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet> > prepend_esi_set;
        
}; // RoutingPolicy::Sets::PrependEsiSets


class RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet : public Entity
{
    public:
        PrependEsiSet();
        ~PrependEsiSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf esi_set_as_text; //type: string

}; // RoutingPolicy::Sets::PrependEsiSets::PrependEsiSet


class RoutingPolicy::Sets::AppendEsiSets : public Entity
{
    public:
        AppendEsiSets();
        ~AppendEsiSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AppendEsiSet; //type: RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet> > append_esi_set;
        
}; // RoutingPolicy::Sets::AppendEsiSets


class RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet : public Entity
{
    public:
        AppendEsiSet();
        ~AppendEsiSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf esi_set_as_text; //type: string

}; // RoutingPolicy::Sets::AppendEsiSets::AppendEsiSet


class RoutingPolicy::Sets::RemoveEsiSets : public Entity
{
    public:
        RemoveEsiSets();
        ~RemoveEsiSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoveEsiSet; //type: RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet> > remove_esi_set;
        
}; // RoutingPolicy::Sets::RemoveEsiSets


class RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet : public Entity
{
    public:
        RemoveEsiSet();
        ~RemoveEsiSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf esi_set_as_text; //type: string

}; // RoutingPolicy::Sets::RemoveEsiSets::RemoveEsiSet


class RoutingPolicy::Sets::ExtendedCommunitySegNhSets : public Entity
{
    public:
        ExtendedCommunitySegNhSets();
        ~ExtendedCommunitySegNhSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunitySegNhSet; //type: RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet> > extended_community_seg_nh_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunitySegNhSets


class RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet : public Entity
{
    public:
        ExtendedCommunitySegNhSet();
        ~ExtendedCommunitySegNhSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_seg_nh_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet


class RoutingPolicy::Sets::RdSets : public Entity
{
    public:
        RdSets();
        ~RdSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RdSet; //type: RoutingPolicy::Sets::RdSets::RdSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RdSets::RdSet> > rd_set;
        
}; // RoutingPolicy::Sets::RdSets


class RoutingPolicy::Sets::RdSets::RdSet : public Entity
{
    public:
        RdSet();
        ~RdSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rplrd_set; //type: string

}; // RoutingPolicy::Sets::RdSets::RdSet


class RoutingPolicy::Sets::PolicyGlobalSetTable : public Entity
{
    public:
        PolicyGlobalSetTable();
        ~PolicyGlobalSetTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_global_set; //type: string

}; // RoutingPolicy::Sets::PolicyGlobalSetTable


class RoutingPolicy::Sets::ExtendedCommunityBandwidthSets : public Entity
{
    public:
        ExtendedCommunityBandwidthSets();
        ~ExtendedCommunityBandwidthSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunityBandwidthSet; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet> > extended_community_bandwidth_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityBandwidthSets


class RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet : public Entity
{
    public:
        ExtendedCommunityBandwidthSet();
        ~ExtendedCommunityBandwidthSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_bandwidth_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet


class RoutingPolicy::Sets::CommunitySets : public Entity
{
    public:
        CommunitySets();
        ~CommunitySets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunitySet; //type: RoutingPolicy::Sets::CommunitySets::CommunitySet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::CommunitySets::CommunitySet> > community_set;
        
}; // RoutingPolicy::Sets::CommunitySets


class RoutingPolicy::Sets::CommunitySets::CommunitySet : public Entity
{
    public:
        CommunitySet();
        ~CommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_community_set; //type: string

}; // RoutingPolicy::Sets::CommunitySets::CommunitySet


class RoutingPolicy::Sets::AsPathSets : public Entity
{
    public:
        AsPathSets();
        ~AsPathSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsPathSet; //type: RoutingPolicy::Sets::AsPathSets::AsPathSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AsPathSets::AsPathSet> > as_path_set;
        
}; // RoutingPolicy::Sets::AsPathSets


class RoutingPolicy::Sets::AsPathSets::AsPathSet : public Entity
{
    public:
        AsPathSet();
        ~AsPathSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rplas_path_set; //type: string

}; // RoutingPolicy::Sets::AsPathSets::AsPathSet


class RoutingPolicy::Sets::TagSets : public Entity
{
    public:
        TagSets();
        ~TagSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TagSet; //type: RoutingPolicy::Sets::TagSets::TagSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::TagSets::TagSet> > tag_set;
        
}; // RoutingPolicy::Sets::TagSets


class RoutingPolicy::Sets::TagSets::TagSet : public Entity
{
    public:
        TagSet();
        ~TagSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_tag_set; //type: string

}; // RoutingPolicy::Sets::TagSets::TagSet


class RoutingPolicy::Sets::EtagSets : public Entity
{
    public:
        EtagSets();
        ~EtagSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EtagSet; //type: RoutingPolicy::Sets::EtagSets::EtagSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::EtagSets::EtagSet> > etag_set;
        
}; // RoutingPolicy::Sets::EtagSets


class RoutingPolicy::Sets::EtagSets::EtagSet : public Entity
{
    public:
        EtagSet();
        ~EtagSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf etag_set_as_text; //type: string

}; // RoutingPolicy::Sets::EtagSets::EtagSet


class RoutingPolicy::Sets::ExtendedCommunityRtSets : public Entity
{
    public:
        ExtendedCommunityRtSets();
        ~ExtendedCommunityRtSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExtendedCommunityRtSet; //type: RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet> > extended_community_rt_set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityRtSets


class RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet : public Entity
{
    public:
        ExtendedCommunityRtSet();
        ~ExtendedCommunityRtSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set_name; //type: string
        YLeaf rpl_extended_community_rt_set; //type: string

}; // RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet


class RoutingPolicy::Limits : public Entity
{
    public:
        Limits();
        ~Limits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_lines_of_policy; //type: int32
        YLeaf maximum_number_of_policies; //type: int32

}; // RoutingPolicy::Limits


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_ */

