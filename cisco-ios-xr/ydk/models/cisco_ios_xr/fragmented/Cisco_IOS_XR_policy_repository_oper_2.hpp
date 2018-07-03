#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_2_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_policy_repository_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {


class RoutingPolicyShadow::Sets::Esi::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_


class RoutingPolicyShadow::Sets::Esi::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Esi::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Esi::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Unused


class RoutingPolicyShadow::Sets::Esi::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Inactive


class RoutingPolicyShadow::Sets::Esi::Active : public ydk::Entity
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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Esi::Active


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth : public ydk::Entity
{
    public:
        ExtendedCommunityBandwidth();
        ~ExtendedCommunityBandwidth();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive> inactive;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityBandwidth::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityRt : public ydk::Entity
{
    public:
        ExtendedCommunityRt();
        ~ExtendedCommunityRt();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active : public ydk::Entity
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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityRt::Active


class RoutingPolicyShadow::Sets::Rd : public ydk::Entity
{
    public:
        Rd();
        ~Rd();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Rd::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Rd::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Rd::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Rd::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Active> active;
        
}; // RoutingPolicyShadow::Sets::Rd


class RoutingPolicyShadow::Sets::Rd::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_


class RoutingPolicyShadow::Sets::Rd::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Rd::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Rd::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Unused


class RoutingPolicyShadow::Sets::Rd::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Inactive


class RoutingPolicyShadow::Sets::Rd::Active : public ydk::Entity
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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Rd::Active


class RoutingPolicyShadow::Sets::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::Mac::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::Mac::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::Mac::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::Mac::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Active> active;
        
}; // RoutingPolicyShadow::Sets::Mac


class RoutingPolicyShadow::Sets::Mac::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_


class RoutingPolicyShadow::Sets::Mac::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::Mac::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::Mac::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Unused


class RoutingPolicyShadow::Sets::Mac::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Inactive


class RoutingPolicyShadow::Sets::Mac::Active : public ydk::Entity
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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::Mac::Active


class RoutingPolicyShadow::Sets::ExtendedCommunityCost : public ydk::Entity
{
    public:
        ExtendedCommunityCost();
        ~ExtendedCommunityCost();

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

        class Sets_; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_
        class Unused; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused
        class Inactive; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive
        class Active; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active> active;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_ : public ydk::Entity
{
    public:
        Sets_();
        ~Sets_();

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

        class Set; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set

        ydk::YList set;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        ydk::YLeaf set_name; //type: string
        class UsedBy; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy : public ydk::Entity
{
    public:
        UsedBy();
        ~UsedBy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reference; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference

        ydk::YList reference;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf used_directly; //type: boolean
        ydk::YLeaf status; //type: ObjectStatus

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached : public ydk::Entity
{
    public:
        Attached();
        ~Attached();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding

        ydk::YList binding;
        
}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf proto_instance; //type: string
        ydk::YLeaf af_name; //type: AddressFamily
        ydk::YLeaf saf_name; //type: SubAddressFamily
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_af_name; //type: AddressFamily
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf direction; //type: AttachPointDirection
        ydk::YLeaf group; //type: Group
        ydk::YLeaf source_protocol; //type: string
        ydk::YLeaf aggregate_network_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf propogate_from; //type: int32
        ydk::YLeaf propogate_to; //type: int32
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf attached_policy; //type: string
        ydk::YLeaf attach_point; //type: string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Unused


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive : public ydk::Entity
{
    public:
        Inactive();
        ~Inactive();

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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Inactive


class RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active : public ydk::Entity
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

        ydk::YLeafList object; //type: list of  string

}; // RoutingPolicyShadow::Sets::ExtendedCommunityCost::Active


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_2_ */

