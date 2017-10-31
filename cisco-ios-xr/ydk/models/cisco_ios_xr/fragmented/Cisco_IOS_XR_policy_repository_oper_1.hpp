#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_policy_repository_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_policy_repository_oper {


class RoutingPolicy::Sets::Rd::Sets_ : public ydk::Entity
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

        class Set; //type: RoutingPolicy::Sets::Rd::Sets_::Set

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set> > set;
        
}; // RoutingPolicy::Sets::Rd::Sets_


class RoutingPolicy::Sets::Rd::Sets_::Set : public ydk::Entity
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
        class UsedBy; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy : public ydk::Entity
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

        class Reference; //type: RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference> > reference;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference : public ydk::Entity
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

}; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached : public ydk::Entity
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

        class Binding; //type: RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding> > binding;
        
}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached


class RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding : public ydk::Entity
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

}; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Rd::Unused : public ydk::Entity
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

}; // RoutingPolicy::Sets::Rd::Unused


class RoutingPolicy::Sets::Rd::Inactive : public ydk::Entity
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

}; // RoutingPolicy::Sets::Rd::Inactive


class RoutingPolicy::Sets::Rd::Active : public ydk::Entity
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

}; // RoutingPolicy::Sets::Rd::Active


class RoutingPolicy::Sets::Mac : public ydk::Entity
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

        class Sets_; //type: RoutingPolicy::Sets::Mac::Sets_
        class Unused; //type: RoutingPolicy::Sets::Mac::Unused
        class Inactive; //type: RoutingPolicy::Sets::Mac::Inactive
        class Active; //type: RoutingPolicy::Sets::Mac::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Active> active;
        
}; // RoutingPolicy::Sets::Mac


class RoutingPolicy::Sets::Mac::Sets_ : public ydk::Entity
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

        class Set; //type: RoutingPolicy::Sets::Mac::Sets_::Set

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set> > set;
        
}; // RoutingPolicy::Sets::Mac::Sets_


class RoutingPolicy::Sets::Mac::Sets_::Set : public ydk::Entity
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
        class UsedBy; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy : public ydk::Entity
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

        class Reference; //type: RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference> > reference;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy


class RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference : public ydk::Entity
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

}; // RoutingPolicy::Sets::Mac::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached : public ydk::Entity
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

        class Binding; //type: RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding> > binding;
        
}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached


class RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding : public ydk::Entity
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

}; // RoutingPolicy::Sets::Mac::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::Mac::Unused : public ydk::Entity
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

}; // RoutingPolicy::Sets::Mac::Unused


class RoutingPolicy::Sets::Mac::Inactive : public ydk::Entity
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

}; // RoutingPolicy::Sets::Mac::Inactive


class RoutingPolicy::Sets::Mac::Active : public ydk::Entity
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

}; // RoutingPolicy::Sets::Mac::Active


class RoutingPolicy::Sets::ExtendedCommunityCost : public ydk::Entity
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

        class Sets_; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_
        class Unused; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Unused
        class Inactive; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Inactive
        class Active; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_> sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Unused> unused;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Inactive> inactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Active> active;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_ : public ydk::Entity
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

        class Set; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set> > set;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set : public ydk::Entity
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
        class UsedBy; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy
        class Attached; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy : public ydk::Entity
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

        class Reference; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference> > reference;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference : public ydk::Entity
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

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached : public ydk::Entity
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

        class Binding; //type: RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding> > binding;
        
}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached


class RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding : public ydk::Entity
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

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


class RoutingPolicy::Sets::ExtendedCommunityCost::Unused : public ydk::Entity
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

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Unused


class RoutingPolicy::Sets::ExtendedCommunityCost::Inactive : public ydk::Entity
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

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Inactive


class RoutingPolicy::Sets::ExtendedCommunityCost::Active : public ydk::Entity
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

}; // RoutingPolicy::Sets::ExtendedCommunityCost::Active


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_ */

