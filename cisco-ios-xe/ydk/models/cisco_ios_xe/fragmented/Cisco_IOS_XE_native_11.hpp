#ifndef _CISCO_IOS_XE_NATIVE_11_
#define _CISCO_IOS_XE_NATIVE_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Ipv6::PrefixList::Prefixes::Seq : public Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint32
        class Deny; //type: Native::Ipv6::PrefixList::Prefixes::Seq::Deny
        class Permit; //type: Native::Ipv6::PrefixList::Prefixes::Seq::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq::Permit> permit;
        
}; // Native::Ipv6::PrefixList::Prefixes::Seq


class Native::Ipv6::PrefixList::Prefixes::Seq::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf ge; //type: uint16
        YLeaf le; //type: uint16

}; // Native::Ipv6::PrefixList::Prefixes::Seq::Deny


class Native::Ipv6::PrefixList::Prefixes::Seq::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf ge; //type: uint16
        YLeaf le; //type: uint16

}; // Native::Ipv6::PrefixList::Prefixes::Seq::Permit


class Native::Ipv6::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsmMap; //type: Native::Ipv6::Mld::SsmMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap> ssm_map;
        
}; // Native::Ipv6::Mld


class Native::Ipv6::Mld::SsmMap : public Entity
{
    public:
        SsmMap();
        ~SsmMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Query; //type: Native::Ipv6::Mld::SsmMap::Query
        class Static_; //type: Native::Ipv6::Mld::SsmMap::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap::Query> query;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap::Static_> static_;
        
}; // Native::Ipv6::Mld::SsmMap


class Native::Ipv6::Mld::SsmMap::Query : public Entity
{
    public:
        Query();
        ~Query();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dns; //type: empty

}; // Native::Ipv6::Mld::SsmMap::Query


class Native::Ipv6::Mld::SsmMap::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: string
        YLeaf source_ip; //type: string

}; // Native::Ipv6::Mld::SsmMap::Static_


class Native::Ipv6::MulticastRouting : public Entity
{
    public:
        MulticastRouting();
        ~MulticastRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Ipv6::MulticastRouting


class Native::Ipv6::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_mode; //type: VrfModeEnum
        class VrfModeEnum;

}; // Native::Ipv6::Rip


class Native::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessMap; //type: Native::Vlan::AccessMap
        class Configuration; //type: Native::Vlan::Configuration
        class Filter; //type: Native::Vlan::Filter
        class Accounting; //type: Native::Vlan::Accounting
        class Internal; //type: Native::Vlan::Internal
        class Dot1Q; //type: Native::Vlan::Dot1Q
        class AccessLog; //type: Native::Vlan::AccessLog
        class VlanList; //type: Native::Vlan::VlanList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::AccessLog> access_log;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::AccessMap> > access_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Accounting> accounting; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Configuration> > configuration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Dot1Q> dot1q;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Filter> > filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Internal> internal;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::VlanList> > vlan_list;
        
}; // Native::Vlan


class Native::Vlan::AccessMap : public Entity
{
    public:
        AccessMap();
        ~AccessMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf value_; //type: uint16
        YLeaf action; //type: ActionEnum
        class Match; //type: Native::Vlan::AccessMap::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match> match;
                class ActionEnum;

}; // Native::Vlan::AccessMap


class Native::Vlan::AccessMap::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6; //type: Native::Vlan::AccessMap::Match::Ipv6
        class Ip; //type: Native::Vlan::AccessMap::Match::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match::Ipv6> ipv6;
        
}; // Native::Vlan::AccessMap::Match


class Native::Vlan::AccessMap::Match::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::Vlan::AccessMap::Match::Ipv6


class Native::Vlan::AccessMap::Match::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address; //type: list of  string

}; // Native::Vlan::AccessMap::Match::Ip


class Native::Vlan::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: one of uint16, string
        class Ip; //type: Native::Vlan::Configuration::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip> ip;
        
}; // Native::Vlan::Configuration


class Native::Vlan::Configuration::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Vlan::Configuration::Ip::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip::Flow> flow;
        
}; // Native::Vlan::Configuration::Ip


class Native::Vlan::Configuration::Ip::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Vlan::Configuration::Ip::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip::Flow::Monitor> > monitor;
        
}; // Native::Vlan::Configuration::Ip::Flow


class Native::Vlan::Configuration::Ip::Flow::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_monitor; //type: string
        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Vlan::Configuration::Ip::Flow::Monitor


class Native::Vlan::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf vlan_list; //type: one of uint16, string

}; // Native::Vlan::Filter


class Native::Vlan::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Vlan::Accounting


class Native::Vlan::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Allocation; //type: Native::Vlan::Internal::Allocation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Internal::Allocation> allocation;
        
}; // Native::Vlan::Internal


class Native::Vlan::Internal::Allocation : public Entity
{
    public:
        Allocation();
        ~Allocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: PolicyEnum
        class PolicyEnum;

}; // Native::Vlan::Internal::Allocation


class Native::Vlan::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tag; //type: Native::Vlan::Dot1Q::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::Dot1Q::Tag> tag;
        
}; // Native::Vlan::Dot1Q


class Native::Vlan::Dot1Q::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf native; //type: empty

}; // Native::Vlan::Dot1Q::Tag


class Native::Vlan::AccessLog : public Entity
{
    public:
        AccessLog();
        ~AccessLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maxflow; //type: uint16
        YLeaf ratelimit; //type: uint16
        YLeaf threshold; //type: uint32

}; // Native::Vlan::AccessLog


class Native::Vlan::VlanList : public Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        YLeaf remote_span; //type: empty
        YLeaf name; //type: string
        YLeaf uni_vlan; //type: UniVlanEnum
        class PrivateVlan; //type: Native::Vlan::VlanList::PrivateVlan
        class Lldp; //type: Native::Vlan::VlanList::Lldp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::VlanList::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vlan::VlanList::PrivateVlan> private_vlan;
                class UniVlanEnum;

}; // Native::Vlan::VlanList


class Native::Vlan::VlanList::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary; //type: empty
        YLeaf association; //type: string
        YLeaf community; //type: empty
        YLeaf isolated; //type: empty

}; // Native::Vlan::VlanList::PrivateVlan


class Native::Vlan::VlanList::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf run; //type: empty

}; // Native::Vlan::VlanList::Lldp


class Native::Cdp : public Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf run; //type: empty

}; // Native::Cdp


class Native::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMap; //type: Native::Policy::ClassMap
        class PolicyMap; //type: Native::Policy::PolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap> > policy_map;
        
}; // Native::Policy


class Native::Policy::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: TypeEnum
        YLeaf subscriber; //type: empty
        YLeaf protocol; //type: ProtocolEnum
        YLeaf prematch; //type: PrematchEnum
        YLeaf description; //type: string
        class Match; //type: Native::Policy::ClassMap::Match
        class NoMatch; //type: Native::Policy::ClassMap::NoMatch

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch> no_match;
                class TypeEnum;
        class ProtocolEnum;
        class PrematchEnum;

}; // Native::Policy::ClassMap


class Native::Policy::ClassMap::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf fr_de; //type: empty
        YLeaf non_client_nrt; //type: empty
        YLeaf peer; //type: string
        YLeafList class_map; //type: list of  string
        YLeafList cos; //type: list of  uint8
        YLeafList discard_class; //type: list of  uint8
        YLeafList dscp; //type: list of  one of uint8, enumeration
        YLeafList fr_dlci; //type: list of  uint16
        YLeafList input_interface; //type: list of  string
        YLeafList precedence; //type: list of  one of uint8, enumeration
        YLeafList qos_group; //type: list of  uint16
        YLeafList vlan; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::DestinationAddress
        class Ip; //type: Native::Policy::ClassMap::Match::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::SecurityGroup
        class SourceAddress; //type: Native::Policy::ClassMap::Match::SourceAddress
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::Match::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::Match::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::Match::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::Match::Method
        class ResultType; //type: Native::Policy::ClassMap::Match::ResultType
        class Not; //type: Native::Policy::ClassMap::Match::Not

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AccessGroup> access_group;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ActivatedServiceTemplate> > activated_service_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizationStatus> authorization_status;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::DestinationAddress> destination_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Method> method;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not> not;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet> packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType> result_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup> security_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SourceAddress> source_address;
        
}; // Native::Policy::ClassMap::Match


class Native::Policy::ClassMap::Match::CurrentMethodPriority : public Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Application::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::ApplicationGroup> application_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Application


class Native::Policy::ClassMap::Match::Application::ApplicationGroup : public Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf telepresence_group; //type: empty
        YLeaf vmware_group; //type: empty
        YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Application::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf media_type; //type: MediaTypeEnum
        class MediaTypeEnum;

}; // Native::Policy::ClassMap::Match::Application::Attribute


class Native::Policy::ClassMap::Match::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::AccessGroup


class Native::Policy::ClassMap::Match::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::DestinationAddress


class Native::Policy::ClassMap::Match::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dscp; //type: list of  one of uint8, enumeration
        YLeafList precedence; //type: list of  one of uint8, enumeration
        class Rtp; //type: Native::Policy::ClassMap::Match::Ip::Rtp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Ip::Rtp> > rtp;
        
}; // Native::Policy::ClassMap::Match::Ip


class Native::Policy::ClassMap::Match::Ip::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port1; //type: uint16
        YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Ip::Rtp


class Native::Policy::ClassMap::Match::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Mpls::Experimental

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Mpls


class Native::Policy::ClassMap::Match::Mpls::Experimental : public Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Mpls::Experimental


class Native::Policy::ClassMap::Match::Packet : public Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Length; //type: Native::Policy::ClassMap::Match::Packet::Length

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Packet


class Native::Policy::ClassMap::Match::Packet::Length : public Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16
        YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Packet::Length


class Native::Policy::ClassMap::Match::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocols; //type: ProtocolsEnum
        YLeaf clns; //type: empty
        YLeaf clns_es; //type: empty
        YLeaf clns_is; //type: empty
        YLeaf cmns; //type: empty
        YLeaf compressedtcp; //type: empty
        YLeaf cuseeme; //type: empty
        YLeaf decnet; //type: empty
        YLeaf decnet_node; //type: empty
        YLeaf decnet_router_l1; //type: empty
        YLeaf decnet_router_l2; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf dlsw; //type: empty
        YLeaf dns; //type: empty
        YLeaf edonkey; //type: empty
        YLeaf egp; //type: empty
        YLeaf eigrp; //type: empty
        YLeaf exchange; //type: empty
        YLeaf finger; //type: empty
        YLeaf ftp; //type: empty
        YLeaf gopher; //type: empty
        YLeaf gre; //type: empty
        YLeaf h323; //type: empty
        YLeaf icmp; //type: empty
        YLeaf imap; //type: empty
        YLeaf ip; //type: empty
        YLeaf ipinip; //type: empty
        YLeaf ipsec; //type: empty
        YLeaf ipv6; //type: empty
        YLeaf ipx; //type: empty
        YLeaf irc; //type: empty
        YLeaf kerberos; //type: empty
        YLeaf l2tp; //type: empty
        YLeaf ldap; //type: empty
        YLeaf llc2; //type: empty
        YLeaf mgcp; //type: empty
        YLeaf netbios; //type: empty
        YLeaf netshow; //type: empty
        YLeaf nfs; //type: empty
        YLeaf nntp; //type: empty
        YLeaf notes; //type: empty
        YLeaf novadigm; //type: empty
        YLeaf ntp; //type: empty
        YLeaf ospf; //type: empty
        YLeaf pad; //type: empty
        YLeaf pcanywhere; //type: empty
        YLeaf pop3; //type: empty
        YLeaf pppoe; //type: empty
        YLeaf pptp; //type: empty
        YLeaf printer; //type: empty
        YLeaf qllc; //type: empty
        YLeaf rcmd; //type: empty
        YLeaf rip; //type: empty
        YLeaf rsrb; //type: empty
        YLeaf rsvp; //type: empty
        YLeaf rtcp; //type: empty
        YLeaf rtsp; //type: empty
        YLeaf secure_ftp; //type: empty
        YLeaf secure_http; //type: empty
        YLeaf secure_imap; //type: empty
        YLeaf secure_irc; //type: empty
        YLeaf secure_ldap; //type: empty
        YLeaf secure_nntp; //type: empty
        YLeaf secure_pop3; //type: empty
        YLeaf secure_telnet; //type: empty
        YLeaf sip; //type: empty
        YLeaf skinny; //type: empty
        YLeaf snapshot; //type: empty
        YLeaf snmp; //type: empty
        YLeaf socks; //type: empty
        YLeaf sqlnet; //type: empty
        YLeaf sqlserver; //type: empty
        YLeaf ssh; //type: empty
        YLeaf streamwork; //type: empty
        YLeaf stun; //type: empty
        YLeaf sunrpc; //type: empty
        YLeaf syslog; //type: empty
        YLeaf telnet; //type: empty
        YLeaf tftp; //type: empty
        YLeaf vdolive; //type: empty
        YLeaf vofr; //type: empty
        YLeaf winmx; //type: empty
        YLeaf xwindows; //type: empty
        class Citrix; //type: Native::Policy::ClassMap::Match::Protocol::Citrix
        class Fasttrack; //type: Native::Policy::ClassMap::Match::Protocol::Fasttrack
        class Gnutella; //type: Native::Policy::ClassMap::Match::Protocol::Gnutella
        class Http; //type: Native::Policy::ClassMap::Match::Protocol::Http
        class Kazaa2; //type: Native::Policy::ClassMap::Match::Protocol::Kazaa2
        class Napster; //type: Native::Policy::ClassMap::Match::Protocol::Napster
        class Rtp; //type: Native::Policy::ClassMap::Match::Protocol::Rtp
        class Smtp; //type: Native::Policy::ClassMap::Match::Protocol::Smtp
        class Attribute; //type: Native::Policy::ClassMap::Match::Protocol::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute> attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Citrix> citrix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Fasttrack> fasttrack; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Gnutella> gnutella; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Http> http; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Kazaa2> kazaa2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Napster> napster; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Rtp> rtp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Smtp> smtp; // presence node
                class ProtocolsEnum;

}; // Native::Policy::ClassMap::Match::Protocol


class Native::Policy::ClassMap::Match::Protocol::Citrix : public Entity
{
    public:
        Citrix();
        ~Citrix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ica_tag; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Citrix


class Native::Policy::ClassMap::Match::Protocol::Fasttrack : public Entity
{
    public:
        Fasttrack();
        ~Fasttrack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Fasttrack


class Native::Policy::ClassMap::Match::Protocol::Gnutella : public Entity
{
    public:
        Gnutella();
        ~Gnutella();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Gnutella


class Native::Policy::ClassMap::Match::Protocol::Http : public Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf c_header_field; //type: string
        YLeaf host; //type: string
        YLeaf mime; //type: string
        YLeaf s_header_field; //type: string
        YLeaf url; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Http


class Native::Policy::ClassMap::Match::Protocol::Kazaa2 : public Entity
{
    public:
        Kazaa2();
        ~Kazaa2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Kazaa2


class Native::Policy::ClassMap::Match::Protocol::Napster : public Entity
{
    public:
        Napster();
        ~Napster();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_std; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Napster


class Native::Policy::ClassMap::Match::Protocol::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf audio; //type: empty
        YLeaf payload_type; //type: string
        YLeaf video; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Rtp


class Native::Policy::ClassMap::Match::Protocol::Smtp : public Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Smtp


class Native::Policy::ClassMap::Match::Protocol::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance> business_relevance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass> traffic_class;
        
}; // Native::Policy::ClassMap::Match::Protocol::Attribute


class Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance : public Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf business_irrelevant; //type: empty
        YLeaf business_relevant; //type: empty
        YLeaf default_; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast_video; //type: empty
        YLeaf bulk_data; //type: empty
        YLeaf multimedia_conferencing; //type: empty
        YLeaf multimedia_streaming; //type: empty
        YLeaf network_control; //type: empty
        YLeaf ops_admin_mgmt; //type: empty
        YLeaf real_time_interactive; //type: empty
        YLeaf signaling; //type: empty
        YLeaf transactional_data; //type: empty
        YLeaf voip_telephony; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::SecurityGroup : public Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Policy::ClassMap::Match::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::SecurityGroup::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::SecurityGroup


class Native::Policy::ClassMap::Match::SecurityGroup::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::SecurityGroup::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Source


class Native::Policy::ClassMap::Match::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::SourceAddress


class Native::Policy::ClassMap::Match::ActivatedServiceTemplate : public Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::Match::ActivatedServiceTemplate


class Native::Policy::ClassMap::Match::AuthorizationStatus : public Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authorized; //type: empty
        YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::Match::AuthorizationStatus


class Native::Policy::ClassMap::Match::AuthorizingMethodPriority : public Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::AuthorizingMethodPriority


class Native::Policy::ClassMap::Match::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::Match::Method


class Native::Policy::ClassMap::Match::ResultType : public Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::Match::ResultType::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::Match::ResultType


class Native::Policy::ClassMap::Match::ResultType::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1X; //type: Native::Policy::ClassMap::Match::ResultType::Method::Dot1X
        class Mab; //type: Native::Policy::ClassMap::Match::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::Match::ResultType::Method::Webauth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Mab> mab;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::Match::ResultType::Method


class Native::Policy::ClassMap::Match::ResultType::Method::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Dot1X


class Native::Policy::ClassMap::Match::ResultType::Method::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Mab


class Native::Policy::ClassMap::Match::ResultType::Method::Webauth : public Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Webauth


class Native::Policy::ClassMap::Match::Not : public Entity
{
    public:
        Not();
        ~Not();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any; //type: empty
        YLeaf fr_de; //type: empty
        YLeaf non_client_nrt; //type: empty
        YLeaf peer; //type: string
        YLeafList class_map; //type: list of  string
        YLeafList cos; //type: list of  uint8
        YLeafList discard_class; //type: list of  uint8
        YLeafList dscp; //type: list of  one of uint8, enumeration
        YLeafList fr_dlci; //type: list of  uint16
        YLeafList input_interface; //type: list of  string
        YLeafList precedence; //type: list of  one of uint8, enumeration
        YLeafList qos_group; //type: list of  uint16
        YLeafList vlan; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::Not::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Not::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::Not::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::Not::DestinationAddress
        class Ip; //type: Native::Policy::ClassMap::Match::Not::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Not::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Not::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Not::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup
        class SourceAddress; //type: Native::Policy::ClassMap::Match::Not::SourceAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::DestinationAddress> destination_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet> packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup> security_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SourceAddress> source_address;
        
}; // Native::Policy::ClassMap::Match::Not


class Native::Policy::ClassMap::Match::Not::CurrentMethodPriority : public Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::Match::Not::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Not::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Application::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup> application_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not::Application


class Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup : public Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf telepresence_group; //type: empty
        YLeaf vmware_group; //type: empty
        YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Not::Application::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf media_type; //type: MediaTypeEnum
        class MediaTypeEnum;

}; // Native::Policy::ClassMap::Match::Not::Application::Attribute


class Native::Policy::ClassMap::Match::Not::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::AccessGroup


class Native::Policy::ClassMap::Match::Not::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::DestinationAddress


class Native::Policy::ClassMap::Match::Not::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dscp; //type: list of  one of uint8, enumeration
        YLeafList precedence; //type: list of  one of uint8, enumeration
        class Rtp; //type: Native::Policy::ClassMap::Match::Not::Ip::Rtp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Ip::Rtp> > rtp;
        
}; // Native::Policy::ClassMap::Match::Not::Ip


class Native::Policy::ClassMap::Match::Not::Ip::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port1; //type: uint16
        YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Ip::Rtp


class Native::Policy::ClassMap::Match::Not::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Not::Mpls::Experimental

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Not::Mpls


class Native::Policy::ClassMap::Match::Not::Mpls::Experimental : public Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Not::Mpls::Experimental


class Native::Policy::ClassMap::Match::Not::Packet : public Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Length; //type: Native::Policy::ClassMap::Match::Not::Packet::Length

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Not::Packet


class Native::Policy::ClassMap::Match::Not::Packet::Length : public Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16
        YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Packet::Length


class Native::Policy::ClassMap::Match::Not::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocols; //type: ProtocolsEnum
        YLeaf clns; //type: empty
        YLeaf clns_es; //type: empty
        YLeaf clns_is; //type: empty
        YLeaf cmns; //type: empty
        YLeaf compressedtcp; //type: empty
        YLeaf cuseeme; //type: empty
        YLeaf decnet; //type: empty
        YLeaf decnet_node; //type: empty
        YLeaf decnet_router_l1; //type: empty
        YLeaf decnet_router_l2; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf dlsw; //type: empty
        YLeaf dns; //type: empty
        YLeaf edonkey; //type: empty
        YLeaf egp; //type: empty
        YLeaf eigrp; //type: empty
        YLeaf exchange; //type: empty
        YLeaf finger; //type: empty
        YLeaf ftp; //type: empty
        YLeaf gopher; //type: empty
        YLeaf gre; //type: empty
        YLeaf h323; //type: empty
        YLeaf icmp; //type: empty
        YLeaf imap; //type: empty
        YLeaf ip; //type: empty
        YLeaf ipinip; //type: empty
        YLeaf ipsec; //type: empty
        YLeaf ipv6; //type: empty
        YLeaf ipx; //type: empty
        YLeaf irc; //type: empty
        YLeaf kerberos; //type: empty
        YLeaf l2tp; //type: empty
        YLeaf ldap; //type: empty
        YLeaf llc2; //type: empty
        YLeaf mgcp; //type: empty
        YLeaf netbios; //type: empty
        YLeaf netshow; //type: empty
        YLeaf nfs; //type: empty
        YLeaf nntp; //type: empty
        YLeaf notes; //type: empty
        YLeaf novadigm; //type: empty
        YLeaf ntp; //type: empty
        YLeaf ospf; //type: empty
        YLeaf pad; //type: empty
        YLeaf pcanywhere; //type: empty
        YLeaf pop3; //type: empty
        YLeaf pppoe; //type: empty
        YLeaf pptp; //type: empty
        YLeaf printer; //type: empty
        YLeaf qllc; //type: empty
        YLeaf rcmd; //type: empty
        YLeaf rip; //type: empty
        YLeaf rsrb; //type: empty
        YLeaf rsvp; //type: empty
        YLeaf rtcp; //type: empty
        YLeaf rtsp; //type: empty
        YLeaf secure_ftp; //type: empty
        YLeaf secure_http; //type: empty
        YLeaf secure_imap; //type: empty
        YLeaf secure_irc; //type: empty
        YLeaf secure_ldap; //type: empty
        YLeaf secure_nntp; //type: empty
        YLeaf secure_pop3; //type: empty
        YLeaf secure_telnet; //type: empty
        YLeaf sip; //type: empty
        YLeaf skinny; //type: empty
        YLeaf snapshot; //type: empty
        YLeaf snmp; //type: empty
        YLeaf socks; //type: empty
        YLeaf sqlnet; //type: empty
        YLeaf sqlserver; //type: empty
        YLeaf ssh; //type: empty
        YLeaf streamwork; //type: empty
        YLeaf stun; //type: empty
        YLeaf sunrpc; //type: empty
        YLeaf syslog; //type: empty
        YLeaf telnet; //type: empty
        YLeaf tftp; //type: empty
        YLeaf vdolive; //type: empty
        YLeaf vofr; //type: empty
        YLeaf winmx; //type: empty
        YLeaf xwindows; //type: empty
        class Citrix; //type: Native::Policy::ClassMap::Match::Not::Protocol::Citrix
        class Fasttrack; //type: Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack
        class Gnutella; //type: Native::Policy::ClassMap::Match::Not::Protocol::Gnutella
        class Http; //type: Native::Policy::ClassMap::Match::Not::Protocol::Http
        class Kazaa2; //type: Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2
        class Napster; //type: Native::Policy::ClassMap::Match::Not::Protocol::Napster
        class Rtp; //type: Native::Policy::ClassMap::Match::Not::Protocol::Rtp
        class Smtp; //type: Native::Policy::ClassMap::Match::Not::Protocol::Smtp
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Attribute> attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Citrix> citrix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack> fasttrack; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Gnutella> gnutella; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Http> http; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2> kazaa2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Napster> napster; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Rtp> rtp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Smtp> smtp; // presence node
                class ProtocolsEnum;

}; // Native::Policy::ClassMap::Match::Not::Protocol


class Native::Policy::ClassMap::Match::Not::Protocol::Citrix : public Entity
{
    public:
        Citrix();
        ~Citrix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ica_tag; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Citrix


class Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack : public Entity
{
    public:
        Fasttrack();
        ~Fasttrack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack


class Native::Policy::ClassMap::Match::Not::Protocol::Gnutella : public Entity
{
    public:
        Gnutella();
        ~Gnutella();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Gnutella


class Native::Policy::ClassMap::Match::Not::Protocol::Http : public Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf c_header_field; //type: string
        YLeaf host; //type: string
        YLeaf mime; //type: string
        YLeaf s_header_field; //type: string
        YLeaf url; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Http


class Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2 : public Entity
{
    public:
        Kazaa2();
        ~Kazaa2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2


class Native::Policy::ClassMap::Match::Not::Protocol::Napster : public Entity
{
    public:
        Napster();
        ~Napster();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_std; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Protocol::Napster


class Native::Policy::ClassMap::Match::Not::Protocol::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf audio; //type: empty
        YLeaf payload_type; //type: string
        YLeaf video; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Protocol::Rtp


class Native::Policy::ClassMap::Match::Not::Protocol::Smtp : public Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Protocol::Smtp


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance> business_relevance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass> traffic_class;
        
}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance : public Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf business_irrelevant; //type: empty
        YLeaf business_relevant; //type: empty
        YLeaf default_; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast_video; //type: empty
        YLeaf bulk_data; //type: empty
        YLeaf multimedia_conferencing; //type: empty
        YLeaf multimedia_streaming; //type: empty
        YLeaf network_control; //type: empty
        YLeaf ops_admin_mgmt; //type: empty
        YLeaf real_time_interactive; //type: empty
        YLeaf signaling; //type: empty
        YLeaf transactional_data; //type: empty
        YLeaf voip_telephony; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Not::SecurityGroup : public Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::Not::SecurityGroup


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Not::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::SourceAddress


class Native::Policy::ClassMap::NoMatch : public Entity
{
    public:
        NoMatch();
        ~NoMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::NoMatch::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::NoMatch::Method
        class ResultType; //type: Native::Policy::ClassMap::NoMatch::ResultType

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate> > activated_service_template;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizationStatus> authorization_status;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::Method> method;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType> result_type;
        
}; // Native::Policy::ClassMap::NoMatch


class Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate : public Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate


class Native::Policy::ClassMap::NoMatch::AuthorizationStatus : public Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authorized; //type: empty
        YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::NoMatch::AuthorizationStatus


class Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority : public Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eq; //type: uint8
        YLeaf gt; //type: uint8
        YLeaf lt; //type: uint8

}; // Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority


class Native::Policy::ClassMap::NoMatch::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::NoMatch::Method


class Native::Policy::ClassMap::NoMatch::ResultType : public Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType


class Native::Policy::ClassMap::NoMatch::ResultType::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1X; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X
        class Mab; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab> mab;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType::Method


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth : public Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_timeout; //type: empty
        YLeaf agent_not_found; //type: empty
        YLeaf authoritative; //type: empty
        YLeaf method_timeout; //type: empty
        YLeaf none; //type: empty
        YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth


class Native::Policy::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: TypeEnum
        YLeaf subscriber; //type: empty
        YLeaf protocol; //type: ProtocolEnum
        YLeaf description; //type: string
        YLeaf sequence_interval; //type: uint16
        class Event; //type: Native::Policy::PolicyMap::Event
        class Class_; //type: Native::Policy::PolicyMap::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_> > class_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event> > event;
                class TypeEnum;
        class ProtocolEnum;

}; // Native::Policy::PolicyMap


class Native::Policy::PolicyMap::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: EventTypeEnum
        YLeaf match_type; //type: MatchTypeEnum
        class ClassNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber> > class_number;
                class EventTypeEnum;
        class MatchTypeEnum;

}; // Native::Policy::PolicyMap::Event


class Native::Policy::PolicyMap::Event::ClassNumber : public Entity
{
    public:
        ClassNumber();
        ~ClassNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf class_; //type: one of string, enumeration
        YLeaf execution_type; //type: ExecutionTypeEnum
        class ActionNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber> > action_number;
                class ClassEnum;
        class ExecutionTypeEnum;

}; // Native::Policy::PolicyMap::Event::ClassNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber : public Entity
{
    public:
        ActionNumber();
        ~ActionNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf clear_session; //type: empty
        YLeaf authentication_restart; //type: uint16
        YLeaf authorize; //type: empty
        class Terminate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate
        class Resume; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume
        class Pause; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause
        class Activate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate
        class Authenticate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate> activate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate> authenticate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause> pause;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume> resume;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate> terminate;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate : public Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume : public Entity
{
    public:
        Resume();
        ~Resume();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause : public Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate : public Entity
{
    public:
        Activate();
        ~Activate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_template; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate : public Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Using; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using> using;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using : public Entity
{
    public:
        Using();
        ~Using();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf method; //type: MethodEnum
        YLeaf both; //type: empty
        YLeaf retries; //type: uint8
        YLeaf retry_time; //type: uint16
        YLeaf priority; //type: uint8
        class MethodEnum;

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using


class Native::Policy::PolicyMap::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        YLeaf type; //type: TypeEnum
        YLeaf insert_before; //type: string
        class AppnavPolicy; //type: Native::Policy::PolicyMap::Class_::AppnavPolicy
        class Policy_; //type: Native::Policy::PolicyMap::Class_::Policy_
        class PmPolicy; //type: Native::Policy::PolicyMap::Class_::PmPolicy
        class InspectPolice; //type: Native::Policy::PolicyMap::Class_::InspectPolice
        class ActionList; //type: Native::Policy::PolicyMap::Class_::ActionList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList> > action_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::AppnavPolicy> appnav_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::InspectPolice> inspect_police;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy> pm_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::Policy_> policy;
                class TypeEnum;

}; // Native::Policy::PolicyMap::Class_


class Native::Policy::PolicyMap::Class_::AppnavPolicy : public Entity
{
    public:
        AppnavPolicy();
        ~AppnavPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf monitor_load; //type: MonitorLoadEnum
        YLeaf pass_through; //type: empty
        class Distribute; //type: Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute> > distribute;
                class MonitorLoadEnum;

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy


class Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute : public Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_node_group; //type: string
        YLeaf insert_before; //type: string

}; // Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute


class Native::Policy::PolicyMap::Class_::Policy_ : public Entity
{
    public:
        Policy_();
        ~Policy_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: ActionEnum
        YLeaf log; //type: empty
        YLeaf parameter_map; //type: one of string, enumeration
        class Dpi; //type: Native::Policy::PolicyMap::Class_::Policy_::Dpi

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::Policy_::Dpi> dpi;
                class ActionEnum;
        class ParameterMapEnum;

}; // Native::Policy::PolicyMap::Class_::Policy_


class Native::Policy::PolicyMap::Class_::Policy_::Dpi : public Entity
{
    public:
        Dpi();
        ~Dpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: TypeEnum
        YLeaf policy_map; //type: string
        class TypeEnum;

}; // Native::Policy::PolicyMap::Class_::Policy_::Dpi


class Native::Policy::PolicyMap::Class_::PmPolicy : public Entity
{
    public:
        PmPolicy();
        ~PmPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Flow
        class Monitor; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor
        class React; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor> monitor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React> > react;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy


class Native::Policy::PolicyMap::Class_::PmPolicy::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf monitor; //type: string

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Flow


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Metric; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric> metric;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rtp; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp> rtp;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClockRate; //type: Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate> > clock_rate;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp


class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: one of uint8, enumeration
        YLeaf frequency; //type: uint32
        class NumberEnum;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate


class Native::Policy::PolicyMap::Class_::PmPolicy::React : public Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf mode; //type: ModeEnum
        YLeaf description; //type: string
        class Action; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Action
        class Alarm; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm
        class Threshold; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm> alarm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold> threshold;
                class ModeEnum;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp; //type: empty
        YLeaf syslog; //type: empty

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Action


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: SeverityEnum
        class Type; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type> type;
                class SeverityEnum;

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf discrete; //type: empty
        class Grouped; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped> grouped;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped : public Entity
{
    public:
        Grouped();
        ~Grouped();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: uint16
        YLeaf percent; //type: uint8

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Value_; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_> value_;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_ : public Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ge; //type: string
        YLeaf gt; //type: string
        YLeaf le; //type: string
        YLeaf lt; //type: string
        class Range; //type: Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range> range;
        
}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_


class Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf low; //type: string
        YLeaf high; //type: string

}; // Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range


class Native::Policy::PolicyMap::Class_::InspectPolice : public Entity
{
    public:
        InspectPolice();
        ~InspectPolice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Police; //type: Native::Policy::PolicyMap::Class_::InspectPolice::Police

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::InspectPolice::Police> police;
        
}; // Native::Policy::PolicyMap::Class_::InspectPolice


class Native::Policy::PolicyMap::Class_::InspectPolice::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate; //type: uint32
        YLeaf burst; //type: uint32

}; // Native::Policy::PolicyMap::Class_::InspectPolice::Police


class Native::Policy::PolicyMap::Class_::ActionList : public Entity
{
    public:
        ActionList();
        ~ActionList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_type; //type: PolicyActionTypeEnum
        YLeaf netflow_sampler; //type: string
        YLeaf service_policy; //type: string
        YLeaf trust; //type: TrustEnum
        class Bandwidth; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth
        class Compression; //type: Native::Policy::PolicyMap::Class_::ActionList::Compression
        class Estimate; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate
        class Forward; //type: Native::Policy::PolicyMap::Class_::ActionList::Forward
        class FairQueue; //type: Native::Policy::PolicyMap::Class_::ActionList::FairQueue
        class PoliceAggregate; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate
        class PolicePolicyMap; //type: Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap
        class PoliceCirPercent; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent
        class PoliceRateUnit; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit
        class PoliceRatePercent; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent
        class PoliceRatePdp; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp
        class PoliceTargetBitrate; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate
        class PoliceFlow; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow
        class PoliceCatalyst; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst
        class PoliceSwitch; //type: Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch
        class Priority; //type: Native::Policy::PolicyMap::Class_::ActionList::Priority
        class QueueBuffers; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers
        class QueueLimit; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimit
        class QueueLimitDscp; //type: Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp
        class RandomDetect; //type: Native::Policy::PolicyMap::Class_::ActionList::RandomDetect
        class Set; //type: Native::Policy::PolicyMap::Class_::ActionList::Set
        class Shape; //type: Native::Policy::PolicyMap::Class_::ActionList::Shape

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Compression> compression;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate> estimate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Forward> forward;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate> police_aggregate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst> police_catalyst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent> police_cir_percent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow> police_flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap> police_policy_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp> police_rate_pdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent> police_rate_percent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit> police_rate_unit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch> police_switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate> police_target_bitrate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers> queue_buffers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimit> queue_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp> queue_limit_dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::RandomDetect> random_detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Set> set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Shape> shape;
                class TrustEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bits; //type: uint32
        YLeaf percent; //type: uint8
        class Remaining; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining> remaining;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining : public Entity
{
    public:
        Remaining();
        ~Remaining();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rem_option; //type: RemOptionEnum
        YLeaf percent; //type: uint8
        YLeaf ratio; //type: uint16
        class Account; //type: Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account> account;
                class RemOptionEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining


class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account : public Entity
{
    public:
        Account();
        ~Account();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_defined; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account


class Native::Policy::PolicyMap::Class_::ActionList::Compression : public Entity
{
    public:
        Compression();
        ~Compression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: Native::Policy::PolicyMap::Class_::ActionList::Compression::Header

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Compression::Header> header; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Compression


class Native::Policy::PolicyMap::Class_::ActionList::Compression::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: IpEnum
        class IpEnum;

}; // Native::Policy::PolicyMap::Class_::ActionList::Compression::Header


class Native::Policy::PolicyMap::Class_::ActionList::Estimate : public Entity
{
    public:
        Estimate();
        ~Estimate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bandwidth; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth> bandwidth; // presence node
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate


class Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_one_in; //type: uint32
        class DelayOneIn; //type: Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn> delay_one_in;
        
}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth


class Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn : public Entity
{
    public:
        DelayOneIn();
        ~DelayOneIn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf doi; //type: uint32
        YLeaf milliseconds; //type: uint32

}; // Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn


class Native::Policy::PolicyMap::Class_::ActionList::Forward : public Entity
{
    public:
        Forward();
        ~Forward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_path; //type: uint32
        YLeaf service_index; //type: uint8

}; // Native::Policy::PolicyMap::Class_::ActionList::Forward


class Native::Policy::PolicyMap::Class_::ActionList::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic_queues; //type: uint32
        YLeaf queue_limit; //type: uint16

}; // Native::Policy::PolicyMap::Class_::ActionList::FairQueue

class Native::Ipv6::Rip::VrfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;

};

class Native::Vlan::AccessMap::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf forward;

};

class Native::Vlan::Internal::Allocation::PolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ascending;
        static const Enum::YLeaf descending;

};

class Native::Vlan::VlanList::UniVlanEnum : public Enum
{
    public:
        static const Enum::YLeaf community;
        static const Enum::YLeaf isolated;

};

class Native::Policy::ClassMap::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf access_control;
        static const Enum::YLeaf appnav;
        static const Enum::YLeaf control;
        static const Enum::YLeaf inspect;
        static const Enum::YLeaf multicast_flows;
        static const Enum::YLeaf stack;
        static const Enum::YLeaf traffic;

};

class Native::Policy::ClassMap::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf aol;
        static const Enum::YLeaf edonkey;
        static const Enum::YLeaf fasttrack;
        static const Enum::YLeaf gnutella;
        static const Enum::YLeaf http;
        static const Enum::YLeaf imap;
        static const Enum::YLeaf kazaa2;
        static const Enum::YLeaf msnmsgr;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf sunrpc;
        static const Enum::YLeaf ymsgr;

};

class Native::Policy::ClassMap::PrematchEnum : public Enum
{
    public:
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any;
        static const Enum::YLeaf match_none;

};

class Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf audio;
        static const Enum::YLeaf audio_video;
        static const Enum::YLeaf control;
        static const Enum::YLeaf data;
        static const Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum : public Enum
{
    public:
        static const Enum::YLeaf x802_11_iapp;
        static const Enum::YLeaf ace_svr;
        static const Enum::YLeaf aol;
        static const Enum::YLeaf appleqtc;
        static const Enum::YLeaf biff;
        static const Enum::YLeaf bittorrent;
        static const Enum::YLeaf bootpc;
        static const Enum::YLeaf bootps;
        static const Enum::YLeaf cddbp;
        static const Enum::YLeaf cifs;
        static const Enum::YLeaf cisco_fna;
        static const Enum::YLeaf cisco_net_mgmt;
        static const Enum::YLeaf cisco_svcs;
        static const Enum::YLeaf cisco_sys;
        static const Enum::YLeaf cisco_tdp;
        static const Enum::YLeaf cisco_tna;
        static const Enum::YLeaf citriximaclient;
        static const Enum::YLeaf clp;
        static const Enum::YLeaf creativepartnr;
        static const Enum::YLeaf creativeserver;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf dbase;
        static const Enum::YLeaf dbcontrol_agent;
        static const Enum::YLeaf ddns_v3;
        static const Enum::YLeaf dhcp_failover;
        static const Enum::YLeaf directconnect;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf dnsix;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf entrust_svc_hdlr;
        static const Enum::YLeaf entrust_svcs;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf fcip_port;
        static const Enum::YLeaf ftps;
        static const Enum::YLeaf gdoi;
        static const Enum::YLeaf giop;
        static const Enum::YLeaf gtpv0;
        static const Enum::YLeaf gtpv1;
        static const Enum::YLeaf h225ras;
        static const Enum::YLeaf h323callsigalt;
        static const Enum::YLeaf hp_alarm_mgr;
        static const Enum::YLeaf hp_collector;
        static const Enum::YLeaf hp_managed_node;
        static const Enum::YLeaf hsrp;
        static const Enum::YLeaf https;
        static const Enum::YLeaf ica;
        static const Enum::YLeaf icabrowser;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf igmpv3lite;
        static const Enum::YLeaf imap3;
        static const Enum::YLeaf imaps;
        static const Enum::YLeaf ipass;
        static const Enum::YLeaf ipsec_msft;
        static const Enum::YLeaf irc_serv;
        static const Enum::YLeaf ircs;
        static const Enum::YLeaf ircu;
        static const Enum::YLeaf isakmp;
        static const Enum::YLeaf iscsi;
        static const Enum::YLeaf iscsi_target;
        static const Enum::YLeaf kermit;
        static const Enum::YLeaf ldap_admin;
        static const Enum::YLeaf ldaps;
        static const Enum::YLeaf login;
        static const Enum::YLeaf lotusmtap;
        static const Enum::YLeaf lotusnote;
        static const Enum::YLeaf mapi;
        static const Enum::YLeaf ms_ad_rep;
        static const Enum::YLeaf ms_exch_nspi;
        static const Enum::YLeaf ms_frs;
        static const Enum::YLeaf ms_frsapi;
        static const Enum::YLeaf ms_rfr;
        static const Enum::YLeaf msn_messenger;
        static const Enum::YLeaf netlogon;
        static const Enum::YLeaf microsoft_ds;
        static const Enum::YLeaf ms_cluster_net;
        static const Enum::YLeaf ms_dotnetster;
        static const Enum::YLeaf ms_sna;
        static const Enum::YLeaf ms_sql;
        static const Enum::YLeaf ms_sql_m;
        static const Enum::YLeaf msexch_routing;
        static const Enum::YLeaf msnmsgr;
        static const Enum::YLeaf msrpc;
        static const Enum::YLeaf mysql;
        static const Enum::YLeaf n2h2server;
        static const Enum::YLeaf ncp;
        static const Enum::YLeaf net8_cman;
        static const Enum::YLeaf netbios_dgm;
        static const Enum::YLeaf netbios_ns;
        static const Enum::YLeaf netbios_ssn;
        static const Enum::YLeaf netstat;
        static const Enum::YLeaf oem_agent;
        static const Enum::YLeaf oracle;
        static const Enum::YLeaf oracle_em_vp;
        static const Enum::YLeaf oraclenames;
        static const Enum::YLeaf orasrv;
        static const Enum::YLeaf pcanywheredata;
        static const Enum::YLeaf pcanywherestat;
        static const Enum::YLeaf pop3s;
        static const Enum::YLeaf pwdgen;
        static const Enum::YLeaf qmtp;
        static const Enum::YLeaf r_winsock;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf rdb_dbs_disp;
        static const Enum::YLeaf realmedia;
        static const Enum::YLeaf realsecure;
        static const Enum::YLeaf router;
        static const Enum::YLeaf rsvp_encap;
        static const Enum::YLeaf rsvp_tunnel;
        static const Enum::YLeaf rtc_pm_port;
        static const Enum::YLeaf rtelnet;
        static const Enum::YLeaf send;
        static const Enum::YLeaf shell;
        static const Enum::YLeaf sip_tls;
        static const Enum::YLeaf sms;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf snmptrap;
        static const Enum::YLeaf sql_net;
        static const Enum::YLeaf sqlserv;
        static const Enum::YLeaf sqlsrv;
        static const Enum::YLeaf sshell;
        static const Enum::YLeaf ssp;
        static const Enum::YLeaf syslog_conn;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf tacacs_ds;
        static const Enum::YLeaf tarantella;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf telnets;
        static const Enum::YLeaf time;
        static const Enum::YLeaf timed;
        static const Enum::YLeaf tr_rsrb;
        static const Enum::YLeaf ttc;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf vqp;
        static const Enum::YLeaf webster;
        static const Enum::YLeaf who;
        static const Enum::YLeaf wins;
        static const Enum::YLeaf x11;
        static const Enum::YLeaf xdmcp;
        static const Enum::YLeaf ymsgr;
        static const Enum::YLeaf aarp;
        static const Enum::YLeaf appletalk;
        static const Enum::YLeaf arp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf bridge;
        static const Enum::YLeaf bstun;
        static const Enum::YLeaf cdp;

};

class Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf audio;
        static const Enum::YLeaf audio_video;
        static const Enum::YLeaf control;
        static const Enum::YLeaf data;
        static const Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum : public Enum
{
    public:
        static const Enum::YLeaf x802_11_iapp;
        static const Enum::YLeaf ace_svr;
        static const Enum::YLeaf aol;
        static const Enum::YLeaf appleqtc;
        static const Enum::YLeaf biff;
        static const Enum::YLeaf bittorrent;
        static const Enum::YLeaf bootpc;
        static const Enum::YLeaf bootps;
        static const Enum::YLeaf cddbp;
        static const Enum::YLeaf cifs;
        static const Enum::YLeaf cisco_fna;
        static const Enum::YLeaf cisco_net_mgmt;
        static const Enum::YLeaf cisco_svcs;
        static const Enum::YLeaf cisco_sys;
        static const Enum::YLeaf cisco_tdp;
        static const Enum::YLeaf cisco_tna;
        static const Enum::YLeaf citriximaclient;
        static const Enum::YLeaf clp;
        static const Enum::YLeaf creativepartnr;
        static const Enum::YLeaf creativeserver;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf dbase;
        static const Enum::YLeaf dbcontrol_agent;
        static const Enum::YLeaf ddns_v3;
        static const Enum::YLeaf dhcp_failover;
        static const Enum::YLeaf directconnect;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf dnsix;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf entrust_svc_hdlr;
        static const Enum::YLeaf entrust_svcs;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf fcip_port;
        static const Enum::YLeaf ftps;
        static const Enum::YLeaf gdoi;
        static const Enum::YLeaf giop;
        static const Enum::YLeaf gtpv0;
        static const Enum::YLeaf gtpv1;
        static const Enum::YLeaf h225ras;
        static const Enum::YLeaf h323callsigalt;
        static const Enum::YLeaf hp_alarm_mgr;
        static const Enum::YLeaf hp_collector;
        static const Enum::YLeaf hp_managed_node;
        static const Enum::YLeaf hsrp;
        static const Enum::YLeaf https;
        static const Enum::YLeaf ica;
        static const Enum::YLeaf icabrowser;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf igmpv3lite;
        static const Enum::YLeaf imap3;
        static const Enum::YLeaf imaps;
        static const Enum::YLeaf ipass;
        static const Enum::YLeaf ipsec_msft;
        static const Enum::YLeaf irc_serv;
        static const Enum::YLeaf ircs;
        static const Enum::YLeaf ircu;
        static const Enum::YLeaf isakmp;
        static const Enum::YLeaf iscsi;
        static const Enum::YLeaf iscsi_target;
        static const Enum::YLeaf kermit;
        static const Enum::YLeaf ldap_admin;
        static const Enum::YLeaf ldaps;
        static const Enum::YLeaf login;
        static const Enum::YLeaf lotusmtap;
        static const Enum::YLeaf lotusnote;
        static const Enum::YLeaf mapi;
        static const Enum::YLeaf ms_ad_rep;
        static const Enum::YLeaf ms_exch_nspi;
        static const Enum::YLeaf ms_frs;
        static const Enum::YLeaf ms_frsapi;
        static const Enum::YLeaf ms_rfr;
        static const Enum::YLeaf msn_messenger;
        static const Enum::YLeaf netlogon;
        static const Enum::YLeaf microsoft_ds;
        static const Enum::YLeaf ms_cluster_net;
        static const Enum::YLeaf ms_dotnetster;
        static const Enum::YLeaf ms_sna;
        static const Enum::YLeaf ms_sql;
        static const Enum::YLeaf ms_sql_m;
        static const Enum::YLeaf msexch_routing;
        static const Enum::YLeaf msnmsgr;
        static const Enum::YLeaf msrpc;
        static const Enum::YLeaf mysql;
        static const Enum::YLeaf n2h2server;
        static const Enum::YLeaf ncp;
        static const Enum::YLeaf net8_cman;
        static const Enum::YLeaf netbios_dgm;
        static const Enum::YLeaf netbios_ns;
        static const Enum::YLeaf netbios_ssn;
        static const Enum::YLeaf netstat;
        static const Enum::YLeaf oem_agent;
        static const Enum::YLeaf oracle;
        static const Enum::YLeaf oracle_em_vp;
        static const Enum::YLeaf oraclenames;
        static const Enum::YLeaf orasrv;
        static const Enum::YLeaf pcanywheredata;
        static const Enum::YLeaf pcanywherestat;
        static const Enum::YLeaf pop3s;
        static const Enum::YLeaf pwdgen;
        static const Enum::YLeaf qmtp;
        static const Enum::YLeaf r_winsock;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf rdb_dbs_disp;
        static const Enum::YLeaf realmedia;
        static const Enum::YLeaf realsecure;
        static const Enum::YLeaf router;
        static const Enum::YLeaf rsvp_encap;
        static const Enum::YLeaf rsvp_tunnel;
        static const Enum::YLeaf rtc_pm_port;
        static const Enum::YLeaf rtelnet;
        static const Enum::YLeaf send;
        static const Enum::YLeaf shell;
        static const Enum::YLeaf sip_tls;
        static const Enum::YLeaf sms;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf snmptrap;
        static const Enum::YLeaf sql_net;
        static const Enum::YLeaf sqlserv;
        static const Enum::YLeaf sqlsrv;
        static const Enum::YLeaf sshell;
        static const Enum::YLeaf ssp;
        static const Enum::YLeaf syslog_conn;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf tacacs_ds;
        static const Enum::YLeaf tarantella;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf telnets;
        static const Enum::YLeaf time;
        static const Enum::YLeaf timed;
        static const Enum::YLeaf tr_rsrb;
        static const Enum::YLeaf ttc;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf vqp;
        static const Enum::YLeaf webster;
        static const Enum::YLeaf who;
        static const Enum::YLeaf wins;
        static const Enum::YLeaf x11;
        static const Enum::YLeaf xdmcp;
        static const Enum::YLeaf ymsgr;
        static const Enum::YLeaf aarp;
        static const Enum::YLeaf appletalk;
        static const Enum::YLeaf arp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf bridge;
        static const Enum::YLeaf bstun;
        static const Enum::YLeaf cdp;

};

class Native::Policy::PolicyMap::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf access_control;
        static const Enum::YLeaf appnav;
        static const Enum::YLeaf inspect;
        static const Enum::YLeaf control;
        static const Enum::YLeaf packet_service;
        static const Enum::YLeaf performance_monitor;
        static const Enum::YLeaf service;
        static const Enum::YLeaf service_chain;

};

class Native::Policy::PolicyMap::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf http;
        static const Enum::YLeaf im;
        static const Enum::YLeaf imap;
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Event::EventTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf aaa_available;
        static const Enum::YLeaf absolute_timeout;
        static const Enum::YLeaf agent_found;
        static const Enum::YLeaf authentication_failure;
        static const Enum::YLeaf authentication_success;
        static const Enum::YLeaf authorization_failure;
        static const Enum::YLeaf authorization_success;
        static const Enum::YLeaf identity_update;
        static const Enum::YLeaf inactivity_timeout;
        static const Enum::YLeaf remote_authentication_failure;
        static const Enum::YLeaf remote_authentication_success;
        static const Enum::YLeaf session_disconnected;
        static const Enum::YLeaf session_started;
        static const Enum::YLeaf tag_added;
        static const Enum::YLeaf tag_removed;
        static const Enum::YLeaf template_activated;
        static const Enum::YLeaf template_activation_failed;
        static const Enum::YLeaf template_deactivated;
        static const Enum::YLeaf template_deactivation_failed;
        static const Enum::YLeaf timer_expiry;
        static const Enum::YLeaf violation;

};

class Native::Policy::PolicyMap::Event::MatchTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_first;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ClassEnum : public Enum
{
    public:
        static const Enum::YLeaf always;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ExecutionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf do_all;
        static const Enum::YLeaf do_until_failure;
        static const Enum::YLeaf do_until_success;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::MethodEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1x;
        static const Enum::YLeaf mab;
        static const Enum::YLeaf webauth;

};

class Native::Policy::PolicyMap::Class_::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf inspect;

};

class Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum : public Enum
{
    public:
        static const Enum::YLeaf MS_port_mapper;
        static const Enum::YLeaf cifs;
        static const Enum::YLeaf http;
        static const Enum::YLeaf ica;
        static const Enum::YLeaf mapi;
        static const Enum::YLeaf nfs;
        static const Enum::YLeaf ssl;
        static const Enum::YLeaf video;

};

class Native::Policy::PolicyMap::Class_::Policy_::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf cxsc;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf inspect;
        static const Enum::YLeaf pass;
        static const Enum::YLeaf service_policy;

};

class Native::Policy::PolicyMap::Class_::Policy_::ParameterMapEnum : public Enum
{
    public:
        static const Enum::YLeaf global;
        static const Enum::YLeaf gtp;

};

class Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf gtpv0;
        static const Enum::YLeaf gtpv1;
        static const Enum::YLeaf imap;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum : public Enum
{
    public:
        static const Enum::YLeaf celb;
        static const Enum::YLeaf cn;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf dvi4;
        static const Enum::YLeaf dvi4_2;
        static const Enum::YLeaf dvi4_3;
        static const Enum::YLeaf dvi4_4;
        static const Enum::YLeaf g722;
        static const Enum::YLeaf g723;
        static const Enum::YLeaf g728;
        static const Enum::YLeaf g729;
        static const Enum::YLeaf gsm;
        static const Enum::YLeaf h261;
        static const Enum::YLeaf h263;
        static const Enum::YLeaf jpeg;
        static const Enum::YLeaf l16;
        static const Enum::YLeaf l16_2;
        static const Enum::YLeaf lpc;
        static const Enum::YLeaf mp2t;
        static const Enum::YLeaf mpa;
        static const Enum::YLeaf mpv;
        static const Enum::YLeaf nv;
        static const Enum::YLeaf pcma;
        static const Enum::YLeaf pcmu;
        static const Enum::YLeaf qcelp;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::React::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf media_stop;
        static const Enum::YLeaf mrv;
        static const Enum::YLeaf rtp_jitter_average;
        static const Enum::YLeaf transport_packets_lost_rate;

};

class Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf error;
        static const Enum::YLeaf info;

};

class Native::Policy::PolicyMap::Class_::ActionList::TrustEnum : public Enum
{
    public:
        static const Enum::YLeaf cos;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf ip_precedence;

};

class Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf percent;
        static const Enum::YLeaf ratio;

};

class Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::IpEnum : public Enum
{
    public:
        static const Enum::YLeaf rtp;
        static const Enum::YLeaf tcp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_11_ */

