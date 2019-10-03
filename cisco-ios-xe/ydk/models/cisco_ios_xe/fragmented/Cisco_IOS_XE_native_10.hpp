#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::McrConf : public ydk::Entity
{
    public:
        McrConf();
        ~McrConf();

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

        ydk::YLeaf multicast_routing; //type: empty

}; // Native::Ip::McrConf


class Native::Ip::MulticastRouting : public ydk::Entity
{
    public:
        MulticastRouting();
        ~MulticastRouting();

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

        ydk::YLeaf distributed; //type: empty
        class Vrf; //type: Native::Ip::MulticastRouting::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::MulticastRouting


class Native::Ip::MulticastRouting::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf distributed; //type: empty

}; // Native::Ip::MulticastRouting::Vrf


class Native::Ip::Mroute : public ydk::Entity
{
    public:
        Mroute();
        ~Mroute();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf tunnel; //type: int32

}; // Native::Ip::Mroute


class Native::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        class SnoopingConf; //type: Native::Ip::Igmp::SnoopingConf
        class Snooping; //type: Native::Ip::Igmp::Snooping
        class SsmMap; //type: Native::Ip::Igmp::SsmMap
        class Vrf; //type: Native::Ip::Igmp::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SnoopingConf> snooping_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping> snooping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap> ssm_map;
        ydk::YList vrf;
        
}; // Native::Ip::Igmp


class Native::Ip::Igmp::SnoopingConf : public ydk::Entity
{
    public:
        SnoopingConf();
        ~SnoopingConf();

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

        ydk::YLeaf snooping; //type: boolean

}; // Native::Ip::Igmp::SnoopingConf


class Native::Ip::Igmp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

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

        ydk::YLeaf l2_entry_limit; //type: uint32
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        class Check; //type: Native::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::Ip::Igmp::Snooping::ExplicitTracking
        class Querier; //type: Native::Ip::Igmp::Snooping::Querier
        class Tcn; //type: Native::Ip::Igmp::Snooping::Tcn
        class Vlan; //type: Native::Ip::Igmp::Snooping::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier> querier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan> vlan;
        
}; // Native::Ip::Igmp::Snooping


class Native::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

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

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::Ip::Igmp::Snooping::Check


class Native::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf limit; //type: uint32

}; // Native::Ip::Igmp::Snooping::ExplicitTracking


class Native::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Querier::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Querier


class Native::Ip::Igmp::Snooping::Querier::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

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

        class Query; //type: Native::Ip::Igmp::Snooping::Querier::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Querier::Tcn


class Native::Ip::Igmp::Snooping::Querier::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Querier::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

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

        ydk::YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Querier::Timer


class Native::Ip::Igmp::Snooping::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

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

        class Flood; //type: Native::Ip::Igmp::Snooping::Tcn::Flood
        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood> flood;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn


class Native::Ip::Igmp::Snooping::Tcn::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

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

        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Flood::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn::Flood


class Native::Ip::Igmp::Snooping::Tcn::Flood::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf count; //type: uint8

}; // Native::Ip::Igmp::Snooping::Tcn::Flood::Query


class Native::Ip::Igmp::Snooping::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf solicit; //type: empty

}; // Native::Ip::Igmp::Snooping::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        class Range; //type: Native::Ip::Igmp::Snooping::Vlan::Range

        ydk::YList range;
        
}; // Native::Ip::Igmp::Snooping::Vlan


class Native::Ip::Igmp::Snooping::Vlan::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf robustness_variable; //type: uint8
        class Mrouter; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter
        class Querier; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier
        class Static; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier> querier; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static> static_;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        class Learn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn> learn;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn : public ydk::Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cgmp; //type: empty
        ydk::YLeaf pim_dvmrp; //type: empty

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf query_interval; //type: uint16
        ydk::YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn> tcn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn : public ydk::Entity
{
    public:
        Tcn();
        ~Tcn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Query; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer


class Native::Ip::Igmp::Snooping::Vlan::Range::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4

        ydk::YList ipv4;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static


class Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4


class Native::Ip::Igmp::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

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

        ydk::YLeaf enable; //type: empty
        class Query; //type: Native::Ip::Igmp::SsmMap::Query
        class Static; //type: Native::Ip::Igmp::SsmMap::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Query> query;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Static> static_;
        
}; // Native::Ip::Igmp::SsmMap


class Native::Ip::Igmp::SsmMap::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf dns; //type: empty

}; // Native::Ip::Igmp::SsmMap::Query


class Native::Ip::Igmp::SsmMap::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        ydk::YLeaf acl; //type: one of uint16, string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ip::Igmp::SsmMap::Static


class Native::Ip::Igmp::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class SsmMap; //type: Native::Ip::Igmp::Vrf::SsmMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf::SsmMap> ssm_map;
        
}; // Native::Ip::Igmp::Vrf


class Native::Ip::Igmp::Vrf::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Static; //type: Native::Ip::Igmp::Vrf::SsmMap::Static

        ydk::YList static_;
        
}; // Native::Ip::Igmp::Vrf::SsmMap


class Native::Ip::Igmp::Vrf::SsmMap::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddress; //type: string
        ydk::YLeaf aclname; //type: string

}; // Native::Ip::Igmp::Vrf::SsmMap::Static


class Native::Ip::CommunityList : public ydk::Entity
{
    public:
        CommunityList();
        ~CommunityList();

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

        class NumberStandard; //type: Native::Ip::CommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::CommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::CommunityList::Expanded
        class Standard; //type: Native::Ip::CommunityList::Standard

        ydk::YList number_standard;
        ydk::YList number_expanded;
        ydk::YList expanded;
        ydk::YList standard;
        
}; // Native::Ip::CommunityList


class Native::Ip::CommunityList::NumberStandard : public ydk::Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberStandard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberStandard


class Native::Ip::CommunityList::NumberStandard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Deny


class Native::Ip::CommunityList::NumberStandard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Permit


class Native::Ip::CommunityList::NumberExpanded : public ydk::Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

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

        ydk::YLeaf no; //type: uint16
        class ExpandedGrouping; //type: Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping> expanded_grouping;
        
}; // Native::Ip::CommunityList::NumberExpanded


class Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping : public ydk::Entity
{
    public:
        ExpandedGrouping();
        ~ExpandedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedGrouping; //type: Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping

        ydk::YList extended_grouping;
        
}; // Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping


class Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping : public ydk::Entity
{
    public:
        ExtendedGrouping();
        ~ExtendedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf string; //type: string
        class Action;

}; // Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping


class Native::Ip::CommunityList::Expanded : public ydk::Entity
{
    public:
        Expanded();
        ~Expanded();

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
        class ExpandedGrouping; //type: Native::Ip::CommunityList::Expanded::ExpandedGrouping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::ExpandedGrouping> expanded_grouping;
        
}; // Native::Ip::CommunityList::Expanded


class Native::Ip::CommunityList::Expanded::ExpandedGrouping : public ydk::Entity
{
    public:
        ExpandedGrouping();
        ~ExpandedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedGrouping; //type: Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping

        ydk::YList extended_grouping;
        
}; // Native::Ip::CommunityList::Expanded::ExpandedGrouping


class Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping : public ydk::Entity
{
    public:
        ExtendedGrouping();
        ~ExtendedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf string; //type: string
        class Action;

}; // Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping


class Native::Ip::CommunityList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

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
        class Deny; //type: Native::Ip::CommunityList::Standard::Deny
        class Permit; //type: Native::Ip::CommunityList::Standard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Permit> permit;
        
}; // Native::Ip::CommunityList::Standard


class Native::Ip::CommunityList::Standard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Deny


class Native::Ip::CommunityList::Standard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Permit


class Native::Ip::ExtcommunityList : public ydk::Entity
{
    public:
        ExtcommunityList();
        ~ExtcommunityList();

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

        class NumberStandard; //type: Native::Ip::ExtcommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::ExtcommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::ExtcommunityList::Expanded
        class Standard; //type: Native::Ip::ExtcommunityList::Standard

        ydk::YList number_standard;
        ydk::YList number_expanded;
        ydk::YList expanded;
        ydk::YList standard;
        
}; // Native::Ip::ExtcommunityList


class Native::Ip::ExtcommunityList::NumberStandard : public ydk::Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

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

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::NumberStandard


class Native::Ip::ExtcommunityList::NumberStandard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher

        ydk::YList rt;
        ydk::YList soo;
        ydk::YList vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Deny


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberStandard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rt; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher

        ydk::YList rt;
        ydk::YList soo;
        ydk::YList vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::NumberStandard::Permit


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt


class Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo


class Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher


class Native::Ip::ExtcommunityList::NumberExpanded : public ydk::Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

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

        ydk::YLeaf no; //type: uint16
        class ExpandedGrouping; //type: Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping> expanded_grouping;
        
}; // Native::Ip::ExtcommunityList::NumberExpanded


class Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping : public ydk::Entity
{
    public:
        ExpandedGrouping();
        ~ExpandedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedGrouping; //type: Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping

        ydk::YList extended_grouping;
        
}; // Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping


class Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping : public ydk::Entity
{
    public:
        ExtendedGrouping();
        ~ExtendedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf string; //type: string
        class Action;

}; // Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping


class Native::Ip::ExtcommunityList::Expanded : public ydk::Entity
{
    public:
        Expanded();
        ~Expanded();

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
        class ExpandedGrouping; //type: Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping> expanded_grouping;
        
}; // Native::Ip::ExtcommunityList::Expanded


class Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping : public ydk::Entity
{
    public:
        ExpandedGrouping();
        ~ExpandedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtendedGrouping; //type: Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping

        ydk::YList extended_grouping;
        
}; // Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping


class Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping : public ydk::Entity
{
    public:
        ExtendedGrouping();
        ~ExtendedGrouping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf string; //type: string
        class Action;

}; // Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping


class Native::Ip::ExtcommunityList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

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
        class Deny; //type: Native::Ip::ExtcommunityList::Standard::Deny
        class Permit; //type: Native::Ip::ExtcommunityList::Standard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList::Standard::Permit> permit;
        
}; // Native::Ip::ExtcommunityList::Standard


class Native::Ip::ExtcommunityList::Standard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Deny::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Deny::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher

        ydk::YList rt;
        ydk::YList soo;
        ydk::YList vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Deny


class Native::Ip::ExtcommunityList::Standard::Deny::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::Rt


class Native::Ip::ExtcommunityList::Standard::Deny::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::Soo


class Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher


class Native::Ip::ExtcommunityList::Standard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rt; //type: Native::Ip::ExtcommunityList::Standard::Permit::Rt
        class Soo; //type: Native::Ip::ExtcommunityList::Standard::Permit::Soo
        class VpnDistinguisher; //type: Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher

        ydk::YList rt;
        ydk::YList soo;
        ydk::YList vpn_distinguisher;
        
}; // Native::Ip::ExtcommunityList::Standard::Permit


class Native::Ip::ExtcommunityList::Standard::Permit::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::Rt


class Native::Ip::ExtcommunityList::Standard::Permit::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::Soo


class Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

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

}; // Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher


class Native::Ip::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

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

        class RateLimit; //type: Native::Ip::Icmp::RateLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit> rate_limit;
        
}; // Native::Ip::Icmp


class Native::Ip::Icmp::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

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

        ydk::YLeaf redirect; //type: Redirect
        class Unreachable; //type: Native::Ip::Icmp::RateLimit::Unreachable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable> unreachable;
                class Redirect;

}; // Native::Ip::Icmp::RateLimit


class Native::Ip::Icmp::RateLimit::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

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

        ydk::YLeaf time; //type: uint32
        class DF; //type: Native::Ip::Icmp::RateLimit::Unreachable::DF
        class Log; //type: Native::Ip::Icmp::RateLimit::Unreachable::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable::DF> df;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp::RateLimit::Unreachable::Log> log; // presence node
        
}; // Native::Ip::Icmp::RateLimit::Unreachable


class Native::Ip::Icmp::RateLimit::Unreachable::DF : public ydk::Entity
{
    public:
        DF();
        ~DF();

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

        ydk::YLeaf time; //type: uint32

}; // Native::Ip::Icmp::RateLimit::Unreachable::DF


class Native::Ip::Icmp::RateLimit::Unreachable::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

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

        ydk::YLeaf number_unreachables; //type: uint32
        ydk::YLeaf log_message; //type: uint32

}; // Native::Ip::Icmp::RateLimit::Unreachable::Log


class Native::Ip::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

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

        class Pool; //type: Native::Ip::Nat::Pool
        class Inside; //type: Native::Ip::Nat::Inside
        class Outside; //type: Native::Ip::Nat::Outside
        class Translation; //type: Native::Ip::Nat::Translation

        ydk::YList pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside> outside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation> translation;
        
}; // Native::Ip::Nat


class Native::Ip::Nat::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf start_address; //type: string
        ydk::YLeaf end_address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf accounting; //type: string
        ydk::YLeaf arp_ping; //type: empty
        ydk::YLeaf type; //type: Type
        ydk::YLeaf add_route; //type: empty
        class Type;

}; // Native::Ip::Nat::Pool


class Native::Ip::Nat::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

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

        class Source; //type: Native::Ip::Nat::Inside::Source
        class Destination; //type: Native::Ip::Nat::Inside::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination> destination;
        
}; // Native::Ip::Nat::Inside


class Native::Ip::Nat::Inside::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        class List; //type: Native::Ip::Nat::Inside::Source::List
        class RouteMap; //type: Native::Ip::Nat::Inside::Source::RouteMap
        class Static; //type: Native::Ip::Nat::Inside::Source::Static

        ydk::YList list;
        ydk::YList route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static> static_;
        
}; // Native::Ip::Nat::Inside::Source


class Native::Ip::Nat::Inside::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        ydk::YLeaf id; //type: one of uint16, string
        class Pool; //type: Native::Ip::Nat::Inside::Source::List::Pool
        class PoolWithVrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf
        class Interface; //type: Native::Ip::Nat::Inside::Source::List::Interface
        class InterfaceWithVrf; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf

        ydk::YList pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::PoolWithVrf> pool_with_vrf;
        ydk::YList interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf> interface_with_vrf;
        
}; // Native::Ip::Nat::Inside::Source::List


class Native::Ip::Nat::Inside::Source::List::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::List::Pool::Redundancy

        ydk::YList redundancy;
        
}; // Native::Ip::Nat::Inside::Source::List::Pool


class Native::Ip::Nat::Inside::Source::List::Pool::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::List::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf : public ydk::Entity
{
    public:
        PoolWithVrf();
        ~PoolWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pool; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool

        ydk::YList pool;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf

        ydk::YList redundancy;
        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Redundancy::MappingId::Vrf


class Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::PoolWithVrf::Pool::Vrf


class Native::Ip::Nat::Inside::Source::List::Interface : public ydk::Entity
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
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::Interface


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf : public ydk::Entity
{
    public:
        InterfaceWithVrf();
        ~InterfaceWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface

        ydk::YList interface;
        
}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface : public ydk::Entity
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
        class Vrf; //type: Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface


class Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::List::InterfaceWithVrf::Interface::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

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

        ydk::YLeaf route_map_name; //type: string
        class Pool; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool
        class PoolWithVrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf
        class Interface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface
        class InterfaceWithVrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf

        ydk::YList pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf> pool_with_vrf;
        ydk::YList interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf> interface_with_vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap


class Native::Ip::Nat::Inside::Source::RouteMap::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty
        ydk::YLeaf reversible; //type: empty
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy

        ydk::YList redundancy;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Pool


class Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty
        ydk::YLeaf reversible; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf : public ydk::Entity
{
    public:
        PoolWithVrf();
        ~PoolWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pool; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool

        ydk::YList pool;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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
        class Redundancy; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy
        class Vrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf

        ydk::YList redundancy;
        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint8
        class MappingId; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId

        ydk::YList mapping_id;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId : public ydk::Entity
{
    public:
        MappingId();
        ~MappingId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        class Vrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Redundancy::MappingId::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::PoolWithVrf::Pool::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap::Interface : public ydk::Entity
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
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface


class Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf : public ydk::Entity
{
    public:
        InterfaceWithVrf();
        ~InterfaceWithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface

        ydk::YList interface;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf


class Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface : public ydk::Entity
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
        class Vrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf

        ydk::YList vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface


class Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf overload; //type: empty
        ydk::YLeaf extended; //type: empty
        ydk::YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::InterfaceWithVrf::Interface::Vrf


class Native::Ip::Nat::Inside::Source::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        class NatStaticTransportListWithVrf; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf
        class NatStaticTransportList; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList
        class NatStaticProtoTransportInterfaceList; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList
        class NatStaticTransportInterfaceList; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList

        ydk::YList nat_static_transport_list_with_vrf;
        ydk::YList nat_static_transport_list;
        ydk::YList nat_static_proto_transport_interface_list;
        ydk::YList nat_static_transport_interface_list;
        
}; // Native::Ip::Nat::Inside::Source::Static


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf : public ydk::Entity
{
    public:
        NatStaticTransportListWithVrf();
        ~NatStaticTransportListWithVrf();

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

        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf global_ip; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf proto; //type: Proto
        ydk::YLeaf network; //type: empty
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf mask; //type: string
        ydk::YLeaf global_port; //type: uint16
        ydk::YLeaf extendable; //type: empty
        ydk::YLeaf no_alias; //type: empty
        ydk::YLeaf no_payload; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf reversible; //type: empty
        ydk::YLeaf redundancy; //type: one of uint8, string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf match_in_vrf; //type: empty
        ydk::YLeaf forced; //type: empty
        ydk::YLeaf overload; //type: empty
        class Proto;

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList : public ydk::Entity
{
    public:
        NatStaticTransportList();
        ~NatStaticTransportList();

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

        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf global_ip; //type: string
        ydk::YLeaf proto; //type: Proto
        ydk::YLeaf network; //type: empty
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf mask; //type: string
        ydk::YLeaf global_port; //type: uint16
        ydk::YLeaf extendable; //type: empty
        ydk::YLeaf no_alias; //type: empty
        ydk::YLeaf no_payload; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf reversible; //type: empty
        ydk::YLeaf redundancy; //type: one of uint8, string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf forced; //type: empty
        ydk::YLeaf overload; //type: empty
        class Proto;

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList : public ydk::Entity
{
    public:
        NatStaticProtoTransportInterfaceList();
        ~NatStaticProtoTransportInterfaceList();

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

        ydk::YLeaf proto; //type: Proto
        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf global_port; //type: uint16
        class Interface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface> interface;
                class Proto;

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface : public ydk::Entity
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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMSubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::ATMACRsubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::LISPSubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList : public ydk::Entity
{
    public:
        NatStaticTransportInterfaceList();
        ~NatStaticTransportInterfaceList();

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

        ydk::YLeaf local_ip; //type: string
        class Interface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface> interface;
        
}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface : public ydk::Entity
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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface


class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

        class List; //type: Native::Ip::Nat::Inside::Destination::List

        ydk::YList list;
        
}; // Native::Ip::Nat::Inside::Destination


class Native::Ip::Nat::Inside::Destination::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf redundancy; //type: uint8
        ydk::YLeaf mapping_id; //type: uint32

}; // Native::Ip::Nat::Inside::Destination::List


class Native::Ip::Nat::Outside : public ydk::Entity
{
    public:
        Outside();
        ~Outside();

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

        class Source; //type: Native::Ip::Nat::Outside::Source
        class List; //type: Native::Ip::Nat::Outside::List
        class RouteMap; //type: Native::Ip::Nat::Outside::RouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::Source> source;
        ydk::YList list;
        ydk::YList route_map;
        
}; // Native::Ip::Nat::Outside


class Native::Ip::Nat::Outside::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        class Static; //type: Native::Ip::Nat::Outside::Source::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Outside::Source::Static> static_;
        
}; // Native::Ip::Nat::Outside::Source


class Native::Ip::Nat::Outside::Source::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

        class NatStaticTransportList; //type: Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList

        ydk::YList nat_static_transport_list;
        
}; // Native::Ip::Nat::Outside::Source::Static


class Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList : public ydk::Entity
{
    public:
        NatStaticTransportList();
        ~NatStaticTransportList();

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

        ydk::YLeaf global_ip; //type: string
        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf extendable; //type: empty
        ydk::YLeaf no_payload; //type: empty

}; // Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList


class Native::Ip::Nat::Outside::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::List


class Native::Ip::Nat::Outside::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf mapping_id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::RouteMap


class Native::Ip::Nat::Translation : public ydk::Entity
{
    public:
        Translation();
        ~Translation();

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

        class DnsTimeout; //type: Native::Ip::Nat::Translation::DnsTimeout
        class FinrstTimeout; //type: Native::Ip::Nat::Translation::FinrstTimeout
        class IcmpTimeout; //type: Native::Ip::Nat::Translation::IcmpTimeout
        class RoutemapEntryTimeout; //type: Native::Ip::Nat::Translation::RoutemapEntryTimeout
        class SynTimeout; //type: Native::Ip::Nat::Translation::SynTimeout
        class TcpTimeout; //type: Native::Ip::Nat::Translation::TcpTimeout
        class Timeout; //type: Native::Ip::Nat::Translation::Timeout
        class UdpTimeout; //type: Native::Ip::Nat::Translation::UdpTimeout
        class PortTimeout; //type: Native::Ip::Nat::Translation::PortTimeout
        class MaxEntries; //type: Native::Ip::Nat::Translation::MaxEntries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::DnsTimeout> dns_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::FinrstTimeout> finrst_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::IcmpTimeout> icmp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::RoutemapEntryTimeout> routemap_entry_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::SynTimeout> syn_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::TcpTimeout> tcp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::UdpTimeout> udp_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout> port_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::MaxEntries> max_entries;
        
}; // Native::Ip::Nat::Translation


class Native::Ip::Nat::Translation::DnsTimeout : public ydk::Entity
{
    public:
        DnsTimeout();
        ~DnsTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::DnsTimeout


class Native::Ip::Nat::Translation::FinrstTimeout : public ydk::Entity
{
    public:
        FinrstTimeout();
        ~FinrstTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::FinrstTimeout


class Native::Ip::Nat::Translation::IcmpTimeout : public ydk::Entity
{
    public:
        IcmpTimeout();
        ~IcmpTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::IcmpTimeout


class Native::Ip::Nat::Translation::RoutemapEntryTimeout : public ydk::Entity
{
    public:
        RoutemapEntryTimeout();
        ~RoutemapEntryTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::RoutemapEntryTimeout


class Native::Ip::Nat::Translation::SynTimeout : public ydk::Entity
{
    public:
        SynTimeout();
        ~SynTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::SynTimeout


class Native::Ip::Nat::Translation::TcpTimeout : public ydk::Entity
{
    public:
        TcpTimeout();
        ~TcpTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::TcpTimeout


class Native::Ip::Nat::Translation::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::Timeout


class Native::Ip::Nat::Translation::UdpTimeout : public ydk::Entity
{
    public:
        UdpTimeout();
        ~UdpTimeout();

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

        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::UdpTimeout


class Native::Ip::Nat::Translation::PortTimeout : public ydk::Entity
{
    public:
        PortTimeout();
        ~PortTimeout();

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

        class Tcp; //type: Native::Ip::Nat::Translation::PortTimeout::Tcp
        class Udp; //type: Native::Ip::Nat::Translation::PortTimeout::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Udp> udp;
        
}; // Native::Ip::Nat::Translation::PortTimeout


class Native::Ip::Nat::Translation::PortTimeout::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        class Protocol; //type: Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol> protocol;
        
}; // Native::Ip::Nat::Translation::PortTimeout::Tcp


class Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        ydk::YLeaf port_numer; //type: uint16
        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol


class Native::Ip::Nat::Translation::PortTimeout::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        class Protocol; //type: Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol> protocol;
        
}; // Native::Ip::Nat::Translation::PortTimeout::Udp


class Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        ydk::YLeaf port_numer; //type: uint16
        ydk::YLeaf time_val; //type: uint32
        ydk::YLeaf never; //type: empty

}; // Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol


class Native::Ip::Nat::Translation::MaxEntries : public ydk::Entity
{
    public:
        MaxEntries();
        ~MaxEntries();

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

        class Host; //type: Native::Ip::Nat::Translation::MaxEntries::Host

        ydk::YList host;
        
}; // Native::Ip::Nat::Translation::MaxEntries


class Native::Ip::Nat::Translation::MaxEntries::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf host_ip; //type: string
        ydk::YLeaf number_of_entries; //type: uint32

}; // Native::Ip::Nat::Translation::MaxEntries::Host


class Native::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

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

        ydk::YLeaf http_services; //type: empty
        class Attribute; //type: Native::Ip::Nbar::Attribute
        class AttributeMap; //type: Native::Ip::Nbar::AttributeMap
        class AttributeSet; //type: Native::Ip::Nbar::AttributeSet
        class Classification; //type: Native::Ip::Nbar::Classification
        class Custom; //type: Native::Ip::Nbar::Custom
        class ProtocolPack; //type: Native::Ip::Nbar::ProtocolPack

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute> attribute;
        ydk::YList attribute_map;
        ydk::YList attribute_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Classification> classification;
        ydk::YList custom;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack> protocol_pack;
        
}; // Native::Ip::Nbar


class Native::Ip::Nbar::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        class ApplicationGroup; //type: Native::Ip::Nbar::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Ip::Nbar::Attribute::ApplicationSet
        class Category; //type: Native::Ip::Nbar::Attribute::Category
        class SubCategory; //type: Native::Ip::Nbar::Attribute::SubCategory

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationSet> application_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category> category;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory> sub_category;
        
}; // Native::Ip::Nbar::Attribute


class Native::Ip::Nbar::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationGroup::Custom

        ydk::YList custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationGroup

class Native::Ip::CommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Native::Ip::CommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Native::Ip::ExtcommunityList::NumberExpanded::ExpandedGrouping::ExtendedGrouping::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Native::Ip::ExtcommunityList::Expanded::ExpandedGrouping::ExtendedGrouping::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Native::Ip::Icmp::RateLimit::Redirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf subnet;

        static int get_enum_value(const std::string & name) {
            if (name == "host") return 0;
            if (name == "subnet") return 1;
            return -1;
        }
};

class Native::Ip::Nat::Pool::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_host;
        static const ydk::Enum::YLeaf rotary;

        static int get_enum_value(const std::string & name) {
            if (name == "match-host") return 0;
            if (name == "rotary") return 1;
            return -1;
        }
};

class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportListWithVrf::Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp") return 0;
            if (name == "udp") return 1;
            return -1;
        }
};

class Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp") return 0;
            if (name == "udp") return 1;
            return -1;
        }
};

class Native::Ip::Nat::Inside::Source::Static::NatStaticProtoTransportInterfaceList::Proto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp") return 0;
            if (name == "udp") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

