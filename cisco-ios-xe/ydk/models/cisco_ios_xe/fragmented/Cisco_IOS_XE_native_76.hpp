#ifndef _CISCO_IOS_XE_NATIVE_76_
#define _CISCO_IOS_XE_NATIVE_76_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_75.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::AccessList::AccessListExpandedRange : public Entity
{
    public:
        AccessListExpandedRange();
        ~AccessListExpandedRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_extended_range; //type: uint16
        class Permit; //type: Native::AccessList::AccessListExpandedRange::Permit
        class Deny; //type: Native::AccessList::AccessListExpandedRange::Deny

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit> permit;
        
}; // Native::AccessList::AccessListExpandedRange


class Native::AccessList::AccessListExpandedRange::Permit : public Entity
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

        class Ip; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip> ip;
        
}; // Native::AccessList::AccessListExpandedRange::Permit


class Native::AccessList::AccessListExpandedRange::Permit::Ip : public Entity
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

        class Host; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host> host;
        
}; // Native::AccessList::AccessListExpandedRange::Permit::Ip


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        class Host_; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_> host;
        
}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname_; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_> > ipv4_or_hostname;
        
}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_ : public Entity
{
    public:
        Ipv4OrHostname_();
        ~Ipv4OrHostname_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf time_range; //type: string
        class Dscp; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp
        class Tos; //type: Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos> tos;
        
}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp_val; //type: one of uint8, enumeration

}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp


class Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf max_reliability; //type: empty
        YLeaf max_throughput; //type: empty
        YLeaf min_delay; //type: empty
        YLeaf min_monetary_cost; //type: empty
        YLeaf normal; //type: empty

}; // Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos


class Native::AccessList::AccessListExpandedRange::Deny : public Entity
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

        class Ip; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip> ip;
        
}; // Native::AccessList::AccessListExpandedRange::Deny


class Native::AccessList::AccessListExpandedRange::Deny::Ip : public Entity
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

        class Host; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host> host;
        
}; // Native::AccessList::AccessListExpandedRange::Deny::Ip


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname> > ipv4_or_hostname;
        
}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname : public Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        class Host_; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_> host;
        
}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_ : public Entity
{
    public:
        Host_();
        ~Host_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4OrHostname_; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_> > ipv4_or_hostname;
        
}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_ : public Entity
{
    public:
        Ipv4OrHostname_();
        ~Ipv4OrHostname_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_or_hostname; //type: one of union, string
        YLeaf time_range; //type: string
        class Dscp; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp
        class Tos; //type: Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos

        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos> tos;
        
}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp_val; //type: one of uint8, enumeration

}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp


class Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf max_reliability; //type: empty
        YLeaf max_throughput; //type: empty
        YLeaf min_delay; //type: empty
        YLeaf min_monetary_cost; //type: empty
        YLeaf normal; //type: empty

}; // Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos


class Native::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BrdId; //type: Native::BridgeDomain::BrdId
        class CMac; //type: Native::BridgeDomain::CMac
        class Otv; //type: Native::BridgeDomain::Otv
        class Parameterized; //type: Native::BridgeDomain::Parameterized

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId> > brd_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::CMac> c_mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Otv> otv;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized> parameterized;
        
}; // Native::BridgeDomain


class Native::BridgeDomain::BrdId : public Entity
{
    public:
        BrdId();
        ~BrdId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain_id; //type: uint16
        YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::BrdId::Ip
        class Mac; //type: Native::BridgeDomain::BrdId::Mac
        class Member; //type: Native::BridgeDomain::BrdId::Member

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member> member;
        
}; // Native::BridgeDomain::BrdId


class Native::BridgeDomain::BrdId::Ip : public Entity
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

        class Igmp; //type: Native::BridgeDomain::BrdId::Ip::Igmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::BrdId::Ip


class Native::BridgeDomain::BrdId::Ip::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf immediate_leave; //type: empty
        YLeaf last_member_query_count; //type: uint8
        YLeaf last_member_query_interval; //type: uint16
        YLeaf report_suppression; //type: empty
        YLeaf robustness_variable; //type: uint8
        YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check : public Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_alert_option; //type: empty
        YLeaf ttl; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter : public Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier : public Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        YLeaf max_response_time; //type: empty
        YLeaf query_interval; //type: empty
        YLeaf tcn; //type: empty
        YLeaf timer; //type: empty
        YLeaf version; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::BrdId::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aging_time; //type: uint16
        YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::BrdId::Mac::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit> limit;
        
}; // Native::BridgeDomain::BrdId::Mac


class Native::BridgeDomain::BrdId::Mac::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::BrdId::Mac::Limit::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit


class Native::BridgeDomain::BrdId::Mac::Limit::Action : public Entity
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

        class Flooding; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit::Action


class Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding


class Native::BridgeDomain::BrdId::Mac::Limit::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::BrdId::Mac::Limit::Maximum


class Native::BridgeDomain::BrdId::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf analysis_module; //type: uint8
        YLeaf fcpa; //type: uint8
        YLeaf sbc; //type: uint32
        YLeaf sonet_acr; //type: uint8
        YLeaf y_controller; //type: string
        YLeaf service_engine; //type: uint8
        YLeaf tunnel_tp; //type: uint16
        YLeaf vpn; //type: uint32
        YLeaf virtual_tokenring; //type: uint32
        YLeaf ucse; //type: uint8
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        YLeaf vfi; //type: string
        YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::BrdId::Member::MemIpv4
        class Acr; //type: Native::BridgeDomain::BrdId::Member::Acr
        class MemberInterface; //type: Native::BridgeDomain::BrdId::Member::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::Acr> > acr;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::BrdId::Member


class Native::BridgeDomain::BrdId::Member::MemIpv4 : public Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mem_ipv4; //type: string
        YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation> encapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid> > mem_vcid;
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid : public Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_; //type: string

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::BrdId::Member::Acr : public Entity
{
    public:
        Acr();
        ~Acr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::BrdId::Member::Acr


class Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance : public Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance


class Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id


class Native::BridgeDomain::BrdId::Member::MemberInterface : public Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_id; //type: one of string, uint32
        YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::BrdId::Member::MemberInterface


class Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon : public Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon


class Native::BridgeDomain::CMac : public Entity
{
    public:
        CMac();
        ~CMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aging_time; //type: uint16

}; // Native::BridgeDomain::CMac


class Native::BridgeDomain::Otv : public Entity
{
    public:
        Otv();
        ~Otv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::BridgeDomain::Otv::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Otv::Default_> default_;
        
}; // Native::BridgeDomain::Otv


class Native::BridgeDomain::Otv::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf age_time; //type: uint16

}; // Native::BridgeDomain::Otv::Default_


class Native::BridgeDomain::Parameterized : public Entity
{
    public:
        Parameterized();
        ~Parameterized();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::BridgeDomain::Parameterized::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan> vlan; // presence node
        
}; // Native::BridgeDomain::Parameterized


class Native::BridgeDomain::Parameterized::Vlan : public Entity
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

        YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::Parameterized::Vlan::Ip
        class Mac; //type: Native::BridgeDomain::Parameterized::Vlan::Mac
        class Member; //type: Native::BridgeDomain::Parameterized::Vlan::Member

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member> member;
        
}; // Native::BridgeDomain::Parameterized::Vlan


class Native::BridgeDomain::Parameterized::Vlan::Ip : public Entity
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

        class Igmp; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snooping; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf immediate_leave; //type: empty
        YLeaf last_member_query_count; //type: uint8
        YLeaf last_member_query_interval; //type: uint16
        YLeaf report_suppression; //type: empty
        YLeaf robustness_variable; //type: uint8
        YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check : public Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_alert_option; //type: empty
        YLeaf ttl; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking : public Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter : public Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier : public Entity
{
    public:
        Querier();
        ~Querier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        YLeaf max_response_time; //type: empty
        YLeaf query_interval; //type: empty
        YLeaf tcn; //type: empty
        YLeaf timer; //type: empty
        YLeaf version; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::Parameterized::Vlan::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aging_time; //type: uint16
        YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit> limit;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action : public Entity
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

        class Flooding; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum


class Native::BridgeDomain::Parameterized::Vlan::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf analysis_module; //type: uint8
        YLeaf fcpa; //type: uint8
        YLeaf sbc; //type: uint32
        YLeaf sonet_acr; //type: uint8
        YLeaf y_controller; //type: string
        YLeaf service_engine; //type: uint8
        YLeaf tunnel_tp; //type: uint16
        YLeaf vpn; //type: uint32
        YLeaf virtual_tokenring; //type: uint32
        YLeaf ucse; //type: uint8
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        YLeaf vfi; //type: string
        YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4
        class Acr; //type: Native::BridgeDomain::Parameterized::Vlan::Member::Acr
        class MemberInterface; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::Acr> > acr;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4 : public Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mem_ipv4; //type: string
        YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation> encapsulation;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid> > mem_vcid;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid : public Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_; //type: string

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::Acr : public Entity
{
    public:
        Acr();
        ~Acr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::Acr


class Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance : public Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance


class Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface : public Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf interface_id; //type: one of string, uint32
        YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon : public Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon


class Native::Crypto : public Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xauth; //type: string
        class Call; //type: Native::Crypto::Call
        class DynamicMap; //type: Native::Crypto::DynamicMap
        class Engine; //type: Native::Crypto::Engine
        class Gdoi; //type: Native::Crypto::Gdoi
        class Ikev2; //type: Native::Crypto::Ikev2
        class Gkm; //type: Native::Crypto::Gkm
        class Identity; //type: Native::Crypto::Identity
        class Ipsec; //type: Native::Crypto::Ipsec
        class Isakmp; //type: Native::Crypto::Isakmp
        class Key; //type: Native::Crypto::Key
        class Keyring; //type: Native::Crypto::Keyring
        class Logging; //type: Native::Crypto::Logging
        class MapIpv6; //type: Native::Crypto::MapIpv6
        class MapIpv6Gdoi; //type: Native::Crypto::MapIpv6Gdoi
        class MapClient; //type: Native::Crypto::MapClient
        class Mib; //type: Native::Crypto::Mib
        class Pki; //type: Native::Crypto::Pki
        class TlsTunnel; //type: Native::Crypto::TlsTunnel
        class Ssl; //type: Native::Crypto::Ssl
        class Vpn; //type: Native::Crypto::Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call> call;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap> > dynamic_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Engine> engine;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi> gdoi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gkm> gkm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Identity> > identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ikev2> ikev2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Isakmp> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Key> key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Keyring> > keyring;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapClient> map_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6> map_ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::MapIpv6Gdoi> map_ipv6_gdoi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Mib> mib;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Pki> pki;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Ssl> ssl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::TlsTunnel> tls_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Vpn> vpn;
        
}; // Native::Crypto


class Native::Crypto::Call : public Entity
{
    public:
        Call();
        ~Call();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Admission; //type: Native::Crypto::Call::Admission

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call::Admission> admission;
        
}; // Native::Crypto::Call


class Native::Crypto::Call::Admission : public Entity
{
    public:
        Admission();
        ~Admission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Crypto::Call::Admission::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit> limit;
        
}; // Native::Crypto::Call::Admission


class Native::Crypto::Call::Admission::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Crypto::Call::Admission::Limit::All
        class Ike; //type: Native::Crypto::Call::Admission::Limit::Ike
        class Ipsec; //type: Native::Crypto::Call::Admission::Limit::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::All> all;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ike> ike;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Call::Admission::Limit::Ipsec> ipsec;
        
}; // Native::Crypto::Call::Admission::Limit


class Native::Crypto::Call::Admission::Limit::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_negotiation_sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::All


class Native::Crypto::Call::Admission::Limit::Ike : public Entity
{
    public:
        Ike();
        ~Ike();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_negotiation_sa; //type: uint32
        YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ike


class Native::Crypto::Call::Admission::Limit::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sa; //type: uint32

}; // Native::Crypto::Call::Admission::Limit::Ipsec


class Native::Crypto::DynamicMap : public Entity
{
    public:
        DynamicMap();
        ~DynamicMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf sequence; //type: uint16
        YLeaf description; //type: string
        class Default_; //type: Native::Crypto::DynamicMap::Default_
        class Dialer; //type: Native::Crypto::DynamicMap::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Match
        class Qos; //type: Native::Crypto::DynamicMap::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set> set;
        
}; // Native::Crypto::DynamicMap


class Native::Crypto::DynamicMap::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: empty
        class Dialer; //type: Native::Crypto::DynamicMap::Default_::Dialer
        class Match; //type: Native::Crypto::DynamicMap::Default_::Match
        class Qos; //type: Native::Crypto::DynamicMap::Default_::Qos
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default_::ReverseRoute
        class Set; //type: Native::Crypto::DynamicMap::Default_::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Dialer> dialer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Qos> qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set> set;
        
}; // Native::Crypto::DynamicMap::Default_


class Native::Crypto::DynamicMap::Default_::Dialer : public Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Dialer


class Native::Crypto::DynamicMap::Default_::Match : public Entity
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

        YLeaf address; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Match


class Native::Crypto::DynamicMap::Default_::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Qos


class Native::Crypto::DynamicMap::Default_::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::DynamicMap::Default_::ReverseRoute


class Native::Crypto::DynamicMap::Default_::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: empty
        YLeaf identity; //type: empty
        YLeaf ikev2_profile; //type: string
        YLeaf isakmp_profile; //type: string
        YLeaf transform_set; //type: empty
        class Ip; //type: Native::Crypto::DynamicMap::Default_::Set::Ip
        class Nat; //type: Native::Crypto::DynamicMap::Default_::Set::Nat
        class PeerContainer; //type: Native::Crypto::DynamicMap::Default_::Set::PeerContainer
        class Pfs; //type: Native::Crypto::DynamicMap::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::PeerContainer> peer_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::DynamicMap::Default_::Set


class Native::Crypto::DynamicMap::Default_::Set::Ip : public Entity
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

        YLeaf access_group; //type: one of uint16, string
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Crypto::DynamicMap::Default_::Set::Ip


class Native::Crypto::DynamicMap::Default_::Set::Nat : public Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf demux; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Set::Nat


class Native::Crypto::DynamicMap::Default_::Set::PeerContainer : public Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: one of union, string
        YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Set::PeerContainer


class Native::Crypto::DynamicMap::Default_::Set::Pfs : public Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::DynamicMap::Default_::Set::Pfs


class Native::Crypto::DynamicMap::Default_::Set::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::DynamicMap::Default_::Set::ReverseRoute


class Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation : public Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dfbit; //type: empty
        YLeaf ecn; //type: empty
        class Dummy; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay> replay;
        
}; // Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation


class Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer : public Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: empty
        YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: empty
        YLeaf kilobytes; //type: empty
        YLeaf seconds; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf window_size; //type: empty

}; // Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::DynamicMap::Dialer : public Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Dialer


class Native::Crypto::DynamicMap::Match : public Entity
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

        YLeaf address; //type: one of uint16, string

}; // Native::Crypto::DynamicMap::Match


class Native::Crypto::DynamicMap::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pre_classify; //type: empty

}; // Native::Crypto::DynamicMap::Qos


class Native::Crypto::DynamicMap::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        class RemotePeerConatiner; //type: Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner> remote_peer_conatiner;
        
}; // Native::Crypto::DynamicMap::ReverseRoute


class Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner : public Entity
{
    public:
        RemotePeerConatiner();
        ~RemotePeerConatiner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_peer; //type: string
        YLeaf gateway; //type: empty
        YLeaf static_; //type: empty

}; // Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner


class Native::Crypto::DynamicMap::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string
        YLeaf identity; //type: string
        YLeaf ikev2_profile; //type: string
        YLeaf isakmp_profile; //type: string
        YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::DynamicMap::Set::Peer
        class Pfs; //type: Native::Crypto::DynamicMap::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::DynamicMap::Set::ReverseRoute
        class IpIn; //type: Native::Crypto::DynamicMap::Set::IpIn
        class IpOut; //type: Native::Crypto::DynamicMap::Set::IpOut
        class Nat; //type: Native::Crypto::DynamicMap::Set::Nat
        class PeerContainer; //type: Native::Crypto::DynamicMap::Set::PeerContainer
        class SecurityAssociation; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpIn> ip_in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpOut> ip_out;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::PeerContainer> peer_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::Pfs> pfs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::ReverseRoute> reverse_route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation> security_association;
        
}; // Native::Crypto::DynamicMap::Set


class Native::Crypto::DynamicMap::Set::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf default_; //type: empty
        YLeaf dynamic; //type: empty

}; // Native::Crypto::DynamicMap::Set::Peer


class Native::Crypto::DynamicMap::Set::Pfs : public Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: GroupEnum
        class GroupEnum;

}; // Native::Crypto::DynamicMap::Set::Pfs


class Native::Crypto::DynamicMap::Set::ReverseRoute : public Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint8
        YLeaf tag; //type: uint64

}; // Native::Crypto::DynamicMap::Set::ReverseRoute


class Native::Crypto::DynamicMap::Set::IpIn : public Entity
{
    public:
        IpIn();
        ~IpIn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Crypto::DynamicMap::Set::IpIn::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpIn::Ip> ip;
        
}; // Native::Crypto::DynamicMap::Set::IpIn


class Native::Crypto::DynamicMap::Set::IpIn::Ip : public Entity
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

        YLeaf access_group; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Crypto::DynamicMap::Set::IpIn::Ip


class Native::Crypto::DynamicMap::Set::IpOut : public Entity
{
    public:
        IpOut();
        ~IpOut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Crypto::DynamicMap::Set::IpOut::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::IpOut::Ip> ip;
        
}; // Native::Crypto::DynamicMap::Set::IpOut


class Native::Crypto::DynamicMap::Set::IpOut::Ip : public Entity
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

        YLeaf access_group; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Crypto::DynamicMap::Set::IpOut::Ip


class Native::Crypto::DynamicMap::Set::Nat : public Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf demux; //type: empty

}; // Native::Crypto::DynamicMap::Set::Nat


class Native::Crypto::DynamicMap::Set::PeerContainer : public Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: one of union, string
        YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Set::PeerContainer


class Native::Crypto::DynamicMap::Set::SecurityAssociation : public Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dfbit; //type: DfbitEnum
        YLeaf ecn; //type: EcnEnum
        class Dummy; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay> replay;
                class DfbitEnum;
        class EcnEnum;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pps; //type: uint8
        YLeaf seconds; //type: uint16

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy


class Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer : public Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf idle_time; //type: uint32
        YLeaf default_; //type: empty

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime : public Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint8
        YLeaf kilobytes; //type: one of uint64, enumeration
        YLeaf seconds; //type: uint64
        class KilobytesEnum;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime


class Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay : public Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf window_size; //type: WindowSizeEnum
        class WindowSizeEnum;

}; // Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay


class Native::Crypto::Engine : public Entity
{
    public:
        Engine();
        ~Engine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf software; //type: SoftwareEnum
        class SoftwareEnum;

}; // Native::Crypto::Engine


class Native::Crypto::Gdoi : public Entity
{
    public:
        Gdoi();
        ~Gdoi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Native::Crypto::Gdoi::Group

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group> > group;
        
}; // Native::Crypto::Gdoi


class Native::Crypto::Gdoi::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ipv6; //type: empty
        YLeaf passive; //type: empty
        class Client; //type: Native::Crypto::Gdoi::Group::Client
        class Identity; //type: Native::Crypto::Gdoi::Group::Identity
        class Server; //type: Native::Crypto::Gdoi::Group::Server
        class Default_; //type: Native::Crypto::Gdoi::Group::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Identity> identity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server> server;
        
}; // Native::Crypto::Gdoi::Group


class Native::Crypto::Gdoi::Group::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bypass_policy; //type: empty
        YLeaf transport_encrypt_key; //type: TransportEncryptKeyEnum
        YLeafList transform_sets; //type: list of  string
        class Protocol; //type: Native::Crypto::Gdoi::Group::Client::Protocol
        class RecoveryCheck; //type: Native::Crypto::Gdoi::Group::Client::RecoveryCheck
        class Registration; //type: Native::Crypto::Gdoi::Group::Client::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Client::Rekey
        class Status; //type: Native::Crypto::Gdoi::Group::Client::Status

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::RecoveryCheck> recovery_check;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Status> status;
                class TransportEncryptKeyEnum;

}; // Native::Crypto::Gdoi::Group::Client


class Native::Crypto::Gdoi::Group::Client::Protocol : public Entity
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

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: string

}; // Native::Crypto::Gdoi::Group::Client::Protocol


class Native::Crypto::Gdoi::Group::Client::RecoveryCheck : public Entity
{
    public:
        RecoveryCheck();
        ~RecoveryCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Crypto::Gdoi::Group::Client::RecoveryCheck


class Native::Crypto::Gdoi::Group::Client::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Crypto::Gdoi::Group::Client::Registration


class Native::Crypto::Gdoi::Group::Client::Rekey : public Entity
{
    public:
        Rekey();
        ~Rekey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encryption; //type: Native::Crypto::Gdoi::Group::Client::Rekey::Encryption
        class Hash; //type: Native::Crypto::Gdoi::Group::Client::Rekey::Hash

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Rekey::Hash> hash;
        
}; // Native::Crypto::Gdoi::Group::Client::Rekey


class Native::Crypto::Gdoi::Group::Client::Rekey::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rekey_3des_cbc; //type: empty
        YLeaf aes_128; //type: empty
        YLeaf aes_192; //type: empty
        YLeaf aes_256; //type: empty
        YLeaf des_cbc; //type: empty

}; // Native::Crypto::Gdoi::Group::Client::Rekey::Encryption


class Native::Crypto::Gdoi::Group::Client::Rekey::Hash : public Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sha; //type: empty
        YLeaf sha256; //type: empty
        YLeaf sha384; //type: empty
        YLeaf sha512; //type: empty

}; // Native::Crypto::Gdoi::Group::Client::Rekey::Hash


class Native::Crypto::Gdoi::Group::Client::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ActiveSa; //type: Native::Crypto::Gdoi::Group::Client::Status::ActiveSa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Client::Status::ActiveSa> active_sa;
        
}; // Native::Crypto::Gdoi::Group::Client::Status


class Native::Crypto::Gdoi::Group::Client::Status::ActiveSa : public Entity
{
    public:
        ActiveSa();
        ~ActiveSa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf track; //type: uint16

}; // Native::Crypto::Gdoi::Group::Client::Status::ActiveSa


class Native::Crypto::Gdoi::Group::Identity : public Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint64
        class Address; //type: Native::Crypto::Gdoi::Group::Identity::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Identity::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Identity


class Native::Crypto::Gdoi::Group::Identity::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Identity::Address


class Native::Crypto::Gdoi::Group::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Address
        class Hostname; //type: Native::Crypto::Gdoi::Group::Server::Hostname
        class Local; //type: Native::Crypto::Gdoi::Group::Server::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local> local;
        
}; // Native::Crypto::Gdoi::Group::Server


class Native::Crypto::Gdoi::Group::Server::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Address


class Native::Crypto::Gdoi::Group::Server::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Hostname


class Native::Crypto::Gdoi::Group::Server::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gdoi; //type: empty
        YLeaf gikev2; //type: string
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Address
        class Authorization; //type: Native::Crypto::Gdoi::Group::Server::Local::Authorization
        class Group_; //type: Native::Crypto::Gdoi::Group::Server::Local::Group_
        class Identifier; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier
        class Redundancy; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy
        class Registration; //type: Native::Crypto::Gdoi::Group::Server::Local::Registration
        class Rekey; //type: Native::Crypto::Gdoi::Group::Server::Local::Rekey
        class Sa; //type: Native::Crypto::Gdoi::Group::Server::Local::Sa
        class Default_; //type: Native::Crypto::Gdoi::Group::Server::Local::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Group_> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier> identifier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Rekey> rekey;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Sa> sa;
        
}; // Native::Crypto::Gdoi::Group::Server::Local


class Native::Crypto::Gdoi::Group::Server::Local::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Address


class Native::Crypto::Gdoi::Group::Server::Local::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identity; //type: string
        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Authorization


class Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: one of uint16, string

}; // Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address


class Native::Crypto::Gdoi::Group::Server::Local::Group_ : public Entity
{
    public:
        Group_();
        ~Group_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Size; //type: Native::Crypto::Gdoi::Group::Server::Local::Group_::Size

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Group_::Size> size;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Group_


class Native::Crypto::Gdoi::Group::Server::Local::Group_::Size : public Entity
{
    public:
        Size();
        ~Size();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf large; //type: empty
        YLeaf medium; //type: empty
        YLeaf small; //type: SmallEnum
        class SmallEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Group_::Size


class Native::Crypto::Gdoi::Group::Server::Local::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        class Default_; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_
        class Range; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range> range;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8
        class Range; //type: Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range> range;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range : public Entity
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

        YLeaf lowest; //type: uint8
        YLeaf hyphen; //type: empty
        YLeaf highest; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range


class Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range : public Entity
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

        YLeaf lowest; //type: uint8
        YLeaf hyphen; //type: empty
        YLeaf highest; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_
        class Local_; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_
        class Peer; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer
        class Protocol; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local_; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_
        class Peer; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer
        class Protocol; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_> local; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol> protocol; // presence node
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_ : public Entity
{
    public:
        Local_();
        ~Local_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol : public Entity
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

        YLeaf pdu; //type: uint32
        YLeaf version; //type: VersionEnum
        class VersionEnum;

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_ : public Entity
{
    public:
        Local_();
        ~Local_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint8

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address> address;
        
}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer


class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string

}; // Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address

class Native::Crypto::DynamicMap::Default_::Set::Ip::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Crypto::DynamicMap::Set::Pfs::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf group1;
        static const Enum::YLeaf group14;
        static const Enum::YLeaf group15;
        static const Enum::YLeaf group16;
        static const Enum::YLeaf group19;
        static const Enum::YLeaf group2;
        static const Enum::YLeaf group20;
        static const Enum::YLeaf group21;
        static const Enum::YLeaf group24;
        static const Enum::YLeaf group5;

};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::DfbitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::EcnEnum : public Enum
{
    public:
        static const Enum::YLeaf discard;
        static const Enum::YLeaf propagate;

};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::KilobytesEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1024;
        static const Enum::YLeaf Y_128;
        static const Enum::YLeaf Y_256;
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_64;

};

class Native::Crypto::Engine::SoftwareEnum : public Enum
{
    public:
        static const Enum::YLeaf ipsec;
        static const Enum::YLeaf isakmp;

};

class Native::Crypto::Gdoi::Group::Client::TransportEncryptKeyEnum : public Enum
{
    public:
        static const Enum::YLeaf group_key;
        static const Enum::YLeaf pair_wise_key;

};

class Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::SmallEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_12;
        static const Enum::YLeaf Y_16;
        static const Enum::YLeaf Y_8;

};

class Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf optimize;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_76_ */

