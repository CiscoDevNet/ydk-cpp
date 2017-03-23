#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_oper {

class RoutingPolicy : public Entity
{
    public:
        RoutingPolicy();
        ~RoutingPolicy();

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



        class Limits; //type: RoutingPolicy::Limits
        class Policies; //type: RoutingPolicy::Policies
        class Sets; //type: RoutingPolicy::Sets

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Limits> limits;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies> policies;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets> sets;


}; // RoutingPolicy


class RoutingPolicy::Limits : public Entity
{
    public:
        Limits();
        ~Limits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_lines_of_policy; //type: uint32
        YLeaf current_lines_of_policy_limit; //type: uint32
        YLeaf current_lines_of_policy_used; //type: uint32
        YLeaf maximum_number_of_policies; //type: uint32
        YLeaf current_number_of_policies_limit; //type: uint32
        YLeaf current_number_of_policies_used; //type: uint32
        YLeaf compiled_policies_length; //type: uint32



}; // RoutingPolicy::Limits


class RoutingPolicy::Policies : public Entity
{
    public:
        Policies();
        ~Policies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicies; //type: RoutingPolicy::Policies::RoutePolicies
        class Unused; //type: RoutingPolicy::Policies::Unused
        class Inactive; //type: RoutingPolicy::Policies::Inactive
        class Active; //type: RoutingPolicy::Policies::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies> route_policies;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Unused> unused;


}; // RoutingPolicy::Policies


class RoutingPolicy::Policies::RoutePolicies : public Entity
{
    public:
        RoutePolicies();
        ~RoutePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicy; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy> > route_policy;


}; // RoutingPolicy::Policies::RoutePolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string

        class PolicyUses; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses
        class UsedBy; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy
        class Attached; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses> policy_uses;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy> used_by;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses : public Entity
{
    public:
        PolicyUses();
        ~PolicyUses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DirectlyUsedPolicies; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies
        class AllUsedSets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets
        class DirectlyUsedSets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets
        class AllUsedPolicies; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies> all_used_policies;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets> all_used_sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies> directly_used_policies;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets> directly_used_sets;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies : public Entity
{
    public:
        DirectlyUsedPolicies();
        ~DirectlyUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets : public Entity
{
    public:
        AllUsedSets();
        ~AllUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets> > sets;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets : public Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_domain; //type: string
        YLeafList set_name; //type: list of  string



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets : public Entity
{
    public:
        DirectlyUsedSets();
        ~DirectlyUsedSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets> > sets;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets : public Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_domain; //type: string
        YLeafList set_name; //type: list of  string



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies : public Entity
{
    public:
        AllUsedPolicies();
        ~AllUsedPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference> > reference;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding> > binding;


}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached


class RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding


class RoutingPolicy::Policies::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Policies::Unused


class RoutingPolicy::Policies::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Policies::Inactive


class RoutingPolicy::Policies::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Policies::Active


class RoutingPolicy::Sets : public Entity
{
    public:
        Sets();
        ~Sets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Etag; //type: RoutingPolicy::Sets::Etag
        class OspfArea; //type: RoutingPolicy::Sets::OspfArea
        class ExtendedCommunityOpaque; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque
        class ExtendedCommunitySegNh; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh
        class ExtendedCommunitySoo; //type: RoutingPolicy::Sets::ExtendedCommunitySoo
        class Tag; //type: RoutingPolicy::Sets::Tag
        class Prefix; //type: RoutingPolicy::Sets::Prefix
        class Community; //type: RoutingPolicy::Sets::Community
        class AsPath; //type: RoutingPolicy::Sets::AsPath
        class Esi; //type: RoutingPolicy::Sets::Esi
        class ExtendedCommunityBandwidth; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth
        class ExtendedCommunityRt; //type: RoutingPolicy::Sets::ExtendedCommunityRt
        class Rd; //type: RoutingPolicy::Sets::Rd
        class Mac; //type: RoutingPolicy::Sets::Mac
        class ExtendedCommunityCost; //type: RoutingPolicy::Sets::ExtendedCommunityCost

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath> as_path;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community> community;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi> esi;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag> etag;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth> extended_community_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost> extended_community_cost;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque> extended_community_opaque;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt> extended_community_rt;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh> extended_community_seg_nh;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo> extended_community_soo;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac> mac;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea> ospf_area;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd> rd;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag> tag;


}; // RoutingPolicy::Sets


class RoutingPolicy::Sets::Etag : public Entity
{
    public:
        Etag();
        ~Etag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Etag::Sets_
        class Unused; //type: RoutingPolicy::Sets::Etag::Unused
        class Inactive; //type: RoutingPolicy::Sets::Etag::Inactive
        class Active; //type: RoutingPolicy::Sets::Etag::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Unused> unused;


}; // RoutingPolicy::Sets::Etag


class RoutingPolicy::Sets::Etag::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Etag::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Etag::Sets_


class RoutingPolicy::Sets::Etag::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Etag::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Etag::Sets_::Set


class RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Etag::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Etag::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Etag::Sets_::Set::Attached


class RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Etag::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Etag::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Etag::Unused


class RoutingPolicy::Sets::Etag::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Etag::Inactive


class RoutingPolicy::Sets::Etag::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Etag::Active


class RoutingPolicy::Sets::OspfArea : public Entity
{
    public:
        OspfArea();
        ~OspfArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::OspfArea::Sets_
        class Unused; //type: RoutingPolicy::Sets::OspfArea::Unused
        class Inactive; //type: RoutingPolicy::Sets::OspfArea::Inactive
        class Active; //type: RoutingPolicy::Sets::OspfArea::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Unused> unused;


}; // RoutingPolicy::Sets::OspfArea


class RoutingPolicy::Sets::OspfArea::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set> > set;


}; // RoutingPolicy::Sets::OspfArea::Sets_


class RoutingPolicy::Sets::OspfArea::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::OspfArea::Sets_::Set


class RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy


class RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached


class RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::OspfArea::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::OspfArea::Unused


class RoutingPolicy::Sets::OspfArea::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::OspfArea::Inactive


class RoutingPolicy::Sets::OspfArea::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::OspfArea::Active


class RoutingPolicy::Sets::ExtendedCommunityOpaque : public Entity
{
    public:
        ExtendedCommunityOpaque();
        ~ExtendedCommunityOpaque();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunityOpaque


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive


class RoutingPolicy::Sets::ExtendedCommunityOpaque::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Active


class RoutingPolicy::Sets::ExtendedCommunitySegNh : public Entity
{
    public:
        ExtendedCommunitySegNh();
        ~ExtendedCommunitySegNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunitySegNh


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive


class RoutingPolicy::Sets::ExtendedCommunitySegNh::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Active


class RoutingPolicy::Sets::ExtendedCommunitySoo : public Entity
{
    public:
        ExtendedCommunitySoo();
        ~ExtendedCommunitySoo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunitySoo


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunitySoo::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Unused


class RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive


class RoutingPolicy::Sets::ExtendedCommunitySoo::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunitySoo::Active


class RoutingPolicy::Sets::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Tag::Sets_
        class Unused; //type: RoutingPolicy::Sets::Tag::Unused
        class Inactive; //type: RoutingPolicy::Sets::Tag::Inactive
        class Active; //type: RoutingPolicy::Sets::Tag::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Unused> unused;


}; // RoutingPolicy::Sets::Tag


class RoutingPolicy::Sets::Tag::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Tag::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Tag::Sets_


class RoutingPolicy::Sets::Tag::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Tag::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Tag::Sets_::Set


class RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Tag::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached


class RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Tag::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Tag::Unused


class RoutingPolicy::Sets::Tag::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Tag::Inactive


class RoutingPolicy::Sets::Tag::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Tag::Active


class RoutingPolicy::Sets::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Prefix::Sets_
        class Unused; //type: RoutingPolicy::Sets::Prefix::Unused
        class Inactive; //type: RoutingPolicy::Sets::Prefix::Inactive
        class Active; //type: RoutingPolicy::Sets::Prefix::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Unused> unused;


}; // RoutingPolicy::Sets::Prefix


class RoutingPolicy::Sets::Prefix::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Prefix::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Prefix::Sets_


class RoutingPolicy::Sets::Prefix::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Prefix::Sets_::Set


class RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Prefix::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached


class RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Prefix::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Prefix::Unused


class RoutingPolicy::Sets::Prefix::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Prefix::Inactive


class RoutingPolicy::Sets::Prefix::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Prefix::Active


class RoutingPolicy::Sets::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Community::Sets_
        class Unused; //type: RoutingPolicy::Sets::Community::Unused
        class Inactive; //type: RoutingPolicy::Sets::Community::Inactive
        class Active; //type: RoutingPolicy::Sets::Community::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Unused> unused;


}; // RoutingPolicy::Sets::Community


class RoutingPolicy::Sets::Community::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Community::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Community::Sets_


class RoutingPolicy::Sets::Community::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Community::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Community::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Community::Sets_::Set


class RoutingPolicy::Sets::Community::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Community::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Community::Sets_::Set::Attached


class RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Community::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Community::Unused


class RoutingPolicy::Sets::Community::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Community::Inactive


class RoutingPolicy::Sets::Community::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Community::Active


class RoutingPolicy::Sets::AsPath : public Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::AsPath::Sets_
        class Unused; //type: RoutingPolicy::Sets::AsPath::Unused
        class Inactive; //type: RoutingPolicy::Sets::AsPath::Inactive
        class Active; //type: RoutingPolicy::Sets::AsPath::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Unused> unused;


}; // RoutingPolicy::Sets::AsPath


class RoutingPolicy::Sets::AsPath::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::AsPath::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set> > set;


}; // RoutingPolicy::Sets::AsPath::Sets_


class RoutingPolicy::Sets::AsPath::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::AsPath::Sets_::Set


class RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy


class RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::AsPath::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached


class RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::AsPath::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::AsPath::Unused


class RoutingPolicy::Sets::AsPath::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::AsPath::Inactive


class RoutingPolicy::Sets::AsPath::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::AsPath::Active


class RoutingPolicy::Sets::Esi : public Entity
{
    public:
        Esi();
        ~Esi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Esi::Sets_
        class Unused; //type: RoutingPolicy::Sets::Esi::Unused
        class Inactive; //type: RoutingPolicy::Sets::Esi::Inactive
        class Active; //type: RoutingPolicy::Sets::Esi::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Unused> unused;


}; // RoutingPolicy::Sets::Esi


class RoutingPolicy::Sets::Esi::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Esi::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Esi::Sets_


class RoutingPolicy::Sets::Esi::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Esi::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Esi::Sets_::Set


class RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Esi::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Esi::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Esi::Sets_::Set::Attached


class RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Esi::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Esi::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Esi::Unused


class RoutingPolicy::Sets::Esi::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Esi::Inactive


class RoutingPolicy::Sets::Esi::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Esi::Active


class RoutingPolicy::Sets::ExtendedCommunityBandwidth : public Entity
{
    public:
        ExtendedCommunityBandwidth();
        ~ExtendedCommunityBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused


class RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive


class RoutingPolicy::Sets::ExtendedCommunityRt : public Entity
{
    public:
        ExtendedCommunityRt();
        ~ExtendedCommunityRt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunityRt


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityRt::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityRt::Unused


class RoutingPolicy::Sets::ExtendedCommunityRt::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityRt::Inactive


class RoutingPolicy::Sets::ExtendedCommunityRt::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityRt::Active


class RoutingPolicy::Sets::Rd : public Entity
{
    public:
        Rd();
        ~Rd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Rd::Sets_
        class Unused; //type: RoutingPolicy::Sets::Rd::Unused
        class Inactive; //type: RoutingPolicy::Sets::Rd::Inactive
        class Active; //type: RoutingPolicy::Sets::Rd::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Unused> unused;


}; // RoutingPolicy::Sets::Rd


class RoutingPolicy::Sets::Rd::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Rd::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Rd::Sets_


class RoutingPolicy::Sets::Rd::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Rd::Sets_::Set


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Rd::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Rd::Unused


class RoutingPolicy::Sets::Rd::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Rd::Inactive


class RoutingPolicy::Sets::Rd::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Rd::Active


class RoutingPolicy::Sets::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::Mac::Sets_
        class Unused; //type: RoutingPolicy::Sets::Mac::Unused
        class Inactive; //type: RoutingPolicy::Sets::Mac::Inactive
        class Active; //type: RoutingPolicy::Sets::Mac::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Unused> unused;


}; // RoutingPolicy::Sets::Mac


class RoutingPolicy::Sets::Mac::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::Mac::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set> > set;


}; // RoutingPolicy::Sets::Mac::Sets_


class RoutingPolicy::Sets::Mac::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::Mac::Sets_::Set


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Mac::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Mac::Unused


class RoutingPolicy::Sets::Mac::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Mac::Inactive


class RoutingPolicy::Sets::Mac::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::Mac::Active


class RoutingPolicy::Sets::ExtendedCommunityCost : public Entity
{
    public:
        ExtendedCommunityCost();
        ~ExtendedCommunityCost();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Active

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Active> active;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Inactive> inactive;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_> sets;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Unused> unused;


}; // RoutingPolicy::Sets::ExtendedCommunityCost


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_ : public Entity
{
    public:
        Sets_();
        ~Sets_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set> > set;


}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_name; //type: string

        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached

        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
        std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;


}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy : public Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference> > reference;


}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference : public Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_policy_name; //type: string
        YLeaf used_directly; //type: boolean
        YLeaf status; //type: ObjectStatusEnum



}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached : public Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding> > binding;


}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: string
        YLeaf vrf_name; //type: string
        YLeaf proto_instance; //type: string
        YLeaf af_name; //type: AddressFamilyEnum
        YLeaf saf_name; //type: SubAddressFamilyEnum
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_af_name; //type: AddressFamilyEnum
        YLeaf group_name; //type: string
        YLeaf direction; //type: AttachPointDirectionEnum
        YLeaf group; //type: GroupEnum
        YLeaf source_protocol; //type: string
        YLeaf aggregate_network_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf instance; //type: string
        YLeaf area_id; //type: string
        YLeaf propogate_from; //type: int32
        YLeaf propogate_to; //type: int32
        YLeaf route_policy_name; //type: string
        YLeaf attached_policy; //type: string
        YLeaf attach_point; //type: string



}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityCost::Unused : public Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityCost::Unused


class RoutingPolicy::Sets::ExtendedCommunityCost::Inactive : public Entity
{
    public:
        Inactive();
        ~Inactive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityCost::Inactive


class RoutingPolicy::Sets::ExtendedCommunityCost::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList object; //type: list of  string



}; // RoutingPolicy::Sets::ExtendedCommunityCost::Active

class GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf address_family_group;
        static const Enum::YLeaf session_group;
        static const Enum::YLeaf neighbor_group;
        static const Enum::YLeaf neighbor;
        static const Enum::YLeaf error_group;

};

class AttachPointDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class SubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf label;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf vpn;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf rt_constraint;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf flow;
        static const Enum::YLeaf vpn_mcast;
        static const Enum::YLeaf saf_none;
        static const Enum::YLeaf saf_unknown;

};

class AddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf l2vpn;
        static const Enum::YLeaf ls;
        static const Enum::YLeaf af_none;
        static const Enum::YLeaf af_unknown;

};

class ObjectStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf unused;

};


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_ */

