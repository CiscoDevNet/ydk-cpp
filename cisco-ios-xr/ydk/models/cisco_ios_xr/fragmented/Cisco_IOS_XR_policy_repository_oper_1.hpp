#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_policy_repository_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_oper {


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


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_1_ */

