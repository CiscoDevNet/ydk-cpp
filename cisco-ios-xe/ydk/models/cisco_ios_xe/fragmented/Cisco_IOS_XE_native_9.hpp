#ifndef _CISCO_IOS_XE_NATIVE_9_
#define _CISCO_IOS_XE_NATIVE_9_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Ip::Igmp::Snooping::Tcn::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Query; //type: Native::Ip::Igmp::Snooping::Tcn::Flood::Query

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Tcn::Flood::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Tcn::Flood


class Native::Ip::Igmp::Snooping::Tcn::Flood::Query : public Entity
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

        YLeaf count; //type: uint8

}; // Native::Ip::Igmp::Snooping::Tcn::Flood::Query


class Native::Ip::Igmp::Snooping::Tcn::Query : public Entity
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

        YLeaf solicit; //type: empty

}; // Native::Ip::Igmp::Snooping::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan : public Entity
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

        class Range; //type: Native::Ip::Igmp::Snooping::Vlan::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range> > range;
        
}; // Native::Ip::Igmp::Snooping::Vlan


class Native::Ip::Igmp::Snooping::Vlan::Range : public Entity
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

        YLeaf range; //type: uint16
        YLeaf immediate_leave; //type: empty
        YLeaf last_member_query_count; //type: uint8
        YLeaf last_member_query_interval; //type: uint16
        YLeaf robustness_variable; //type: uint8
        class Mrouter; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter
        class Querier; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier
        class Static_; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter> mrouter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier> querier; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static_> static_;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter : public Entity
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

        YLeaf interface; //type: string
        class Learn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn> learn;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter


class Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn : public Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cgmp; //type: empty
        YLeaf pim_dvmrp; //type: empty

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier : public Entity
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

        YLeaf address; //type: string
        YLeaf max_response_time; //type: uint8
        YLeaf query_interval; //type: uint16
        YLeaf version; //type: uint8
        class Tcn; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn
        class Timer; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn> tcn;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer> timer;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn : public Entity
{
    public:
        Tcn();
        ~Tcn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Query; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query> query;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query : public Entity
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

        YLeaf count; //type: uint8
        YLeaf interval; //type: uint8

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query


class Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expiry; //type: uint16

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer


class Native::Ip::Igmp::Snooping::Vlan::Range::Static_ : public Entity
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

        class Ipv4; //type: Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4> > ipv4;
        
}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static_


class Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf interface; //type: string

}; // Native::Ip::Igmp::Snooping::Vlan::Range::Static_::Ipv4


class Native::Ip::Igmp::SsmMap : public Entity
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
        class Query; //type: Native::Ip::Igmp::SsmMap::Query
        class Static_; //type: Native::Ip::Igmp::SsmMap::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Query> query;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::SsmMap::Static_> static_;
        
}; // Native::Ip::Igmp::SsmMap


class Native::Ip::Igmp::SsmMap::Query : public Entity
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

}; // Native::Ip::Igmp::SsmMap::Query


class Native::Ip::Igmp::SsmMap::Static_ : public Entity
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

        YLeaf acl; //type: one of uint16, string
        YLeaf source_ip; //type: string

}; // Native::Ip::Igmp::SsmMap::Static_


class Native::Ip::Igmp::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class SsmMap; //type: Native::Ip::Igmp::Vrf::SsmMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf::SsmMap> ssm_map;
        
}; // Native::Ip::Igmp::Vrf


class Native::Ip::Igmp::Vrf::SsmMap : public Entity
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
        class Static_; //type: Native::Ip::Igmp::Vrf::SsmMap::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp::Vrf::SsmMap::Static_> > static_;
        
}; // Native::Ip::Igmp::Vrf::SsmMap


class Native::Ip::Igmp::Vrf::SsmMap::Static_ : public Entity
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

        YLeaf srcaddress; //type: string
        YLeaf aclname; //type: string

}; // Native::Ip::Igmp::Vrf::SsmMap::Static_


class Native::Ip::Msdp : public Entity
{
    public:
        Msdp();
        ~Msdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_rejected_sa; //type: uint32
        YLeaf cache_sa_state; //type: empty
        YLeaf originator_id; //type: string
        YLeaf rpf; //type: RpfEnum
        YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::MeshGroup
        class Password; //type: Native::Ip::Msdp::Password
        class Redistribute; //type: Native::Ip::Msdp::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::TtlThreshold
        class Vrf; //type: Native::Ip::Msdp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::DefaultPeer> default_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Description> description;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::FilterSaRequest> filter_sa_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::MeshGroup> mesh_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter> sa_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::SaLimit> sa_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Shutdown> shutdown;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::TtlThreshold> ttl_threshold;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf> > vrf;
                class RpfEnum;

}; // Native::Ip::Msdp


class Native::Ip::Msdp::Peer : public Entity
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

        YLeaf addr; //type: string
        YLeaf connect_source; //type: string
        YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Peer


class Native::Ip::Msdp::DefaultPeer : public Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::DefaultPeer


class Native::Ip::Msdp::Description : public Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf description; //type: string

}; // Native::Ip::Msdp::Description


class Native::Ip::Msdp::FilterSaRequest : public Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::FilterSaRequest


class Native::Ip::Msdp::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf keepalive; //type: uint8
        YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Keepalive


class Native::Ip::Msdp::MeshGroup : public Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf addr; //type: string

}; // Native::Ip::Msdp::MeshGroup


class Native::Ip::Msdp::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Ip::Msdp::Password::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Password


class Native::Ip::Msdp::Password::Peer : public Entity
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

        YLeaf addr; //type: string
        YLeaf encryption; //type: uint8
        YLeaf password; //type: string

}; // Native::Ip::Msdp::Password::Peer


class Native::Ip::Msdp::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: one of uint16, string
        YLeaf asn; //type: uint16
        YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Redistribute


class Native::Ip::Msdp::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Ip::Msdp::SaFilter::In
        class Out; //type: Native::Ip::Msdp::SaFilter::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::SaFilter


class Native::Ip::Msdp::SaFilter::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr; //type: string
        YLeaf list; //type: one of uint16, string
        YLeaf route_map; //type: string
        YLeaf rp_list; //type: one of uint16, string
        YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::In


class Native::Ip::Msdp::SaFilter::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr; //type: string
        YLeaf list; //type: one of uint16, string
        YLeaf route_map; //type: string
        YLeaf rp_list; //type: one of uint16, string
        YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::SaFilter::Out


class Native::Ip::Msdp::SaLimit : public Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::SaLimit


class Native::Ip::Msdp::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Shutdown


class Native::Ip::Msdp::TtlThreshold : public Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::TtlThreshold


class Native::Ip::Msdp::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf cache_rejected_sa; //type: uint32
        YLeaf cache_sa_state; //type: empty
        YLeaf originator_id; //type: string
        YLeaf rpf; //type: RpfEnum
        YLeaf timer; //type: uint8
        class Peer; //type: Native::Ip::Msdp::Vrf::Peer
        class DefaultPeer; //type: Native::Ip::Msdp::Vrf::DefaultPeer
        class Description; //type: Native::Ip::Msdp::Vrf::Description
        class FilterSaRequest; //type: Native::Ip::Msdp::Vrf::FilterSaRequest
        class Keepalive; //type: Native::Ip::Msdp::Vrf::Keepalive
        class MeshGroup; //type: Native::Ip::Msdp::Vrf::MeshGroup
        class Password; //type: Native::Ip::Msdp::Vrf::Password
        class Redistribute; //type: Native::Ip::Msdp::Vrf::Redistribute
        class SaFilter; //type: Native::Ip::Msdp::Vrf::SaFilter
        class SaLimit; //type: Native::Ip::Msdp::Vrf::SaLimit
        class Shutdown; //type: Native::Ip::Msdp::Vrf::Shutdown
        class TtlThreshold; //type: Native::Ip::Msdp::Vrf::TtlThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::DefaultPeer> default_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Description> description;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::FilterSaRequest> filter_sa_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Keepalive> keepalive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::MeshGroup> mesh_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter> sa_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaLimit> sa_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Shutdown> shutdown;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::TtlThreshold> ttl_threshold;
                class RpfEnum;

}; // Native::Ip::Msdp::Vrf


class Native::Ip::Msdp::Vrf::Peer : public Entity
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

        YLeaf addr; //type: string
        YLeaf connect_source; //type: string
        YLeaf remote_as; //type: uint16

}; // Native::Ip::Msdp::Vrf::Peer


class Native::Ip::Msdp::Vrf::DefaultPeer : public Entity
{
    public:
        DefaultPeer();
        ~DefaultPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf prefix_list; //type: string

}; // Native::Ip::Msdp::Vrf::DefaultPeer


class Native::Ip::Msdp::Vrf::Description : public Entity
{
    public:
        Description();
        ~Description();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf description; //type: string

}; // Native::Ip::Msdp::Vrf::Description


class Native::Ip::Msdp::Vrf::FilterSaRequest : public Entity
{
    public:
        FilterSaRequest();
        ~FilterSaRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf list; //type: one of uint16, string

}; // Native::Ip::Msdp::Vrf::FilterSaRequest


class Native::Ip::Msdp::Vrf::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf keepalive; //type: uint8
        YLeaf max_wait; //type: uint8

}; // Native::Ip::Msdp::Vrf::Keepalive


class Native::Ip::Msdp::Vrf::MeshGroup : public Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf addr; //type: string

}; // Native::Ip::Msdp::Vrf::MeshGroup


class Native::Ip::Msdp::Vrf::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Ip::Msdp::Vrf::Password::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::Password::Peer> peer;
        
}; // Native::Ip::Msdp::Vrf::Password


class Native::Ip::Msdp::Vrf::Password::Peer : public Entity
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

        YLeaf addr; //type: string
        YLeaf encryption; //type: uint8
        YLeaf password; //type: string

}; // Native::Ip::Msdp::Vrf::Password::Peer


class Native::Ip::Msdp::Vrf::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: one of uint16, string
        YLeaf asn; //type: uint16
        YLeaf route_map; //type: string

}; // Native::Ip::Msdp::Vrf::Redistribute


class Native::Ip::Msdp::Vrf::SaFilter : public Entity
{
    public:
        SaFilter();
        ~SaFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Ip::Msdp::Vrf::SaFilter::In
        class Out; //type: Native::Ip::Msdp::Vrf::SaFilter::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp::Vrf::SaFilter::Out> out;
        
}; // Native::Ip::Msdp::Vrf::SaFilter


class Native::Ip::Msdp::Vrf::SaFilter::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr; //type: string
        YLeaf list; //type: one of uint16, string
        YLeaf route_map; //type: string
        YLeaf rp_list; //type: one of uint16, string
        YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::In


class Native::Ip::Msdp::Vrf::SaFilter::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr; //type: string
        YLeaf list; //type: one of uint16, string
        YLeaf route_map; //type: string
        YLeaf rp_list; //type: one of uint16, string
        YLeaf rp_route_map; //type: string

}; // Native::Ip::Msdp::Vrf::SaFilter::Out


class Native::Ip::Msdp::Vrf::SaLimit : public Entity
{
    public:
        SaLimit();
        ~SaLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf limit; //type: uint32

}; // Native::Ip::Msdp::Vrf::SaLimit


class Native::Ip::Msdp::Vrf::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string

}; // Native::Ip::Msdp::Vrf::Shutdown


class Native::Ip::Msdp::Vrf::TtlThreshold : public Entity
{
    public:
        TtlThreshold();
        ~TtlThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_addr; //type: string
        YLeaf threshold; //type: uint8

}; // Native::Ip::Msdp::Vrf::TtlThreshold


class Native::Ip::McrConf : public Entity
{
    public:
        McrConf();
        ~McrConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_routing; //type: empty

}; // Native::Ip::McrConf


class Native::Ip::MulticastRouting : public Entity
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

        YLeaf distributed; //type: empty
        class Vrf; //type: Native::Ip::MulticastRouting::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::MulticastRouting::Vrf> > vrf;
        
}; // Native::Ip::MulticastRouting


class Native::Ip::MulticastRouting::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf distributed; //type: empty

}; // Native::Ip::MulticastRouting::Vrf


class Native::Ip::Mroute : public Entity
{
    public:
        Mroute();
        ~Mroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf subnet_mask; //type: string
        YLeaf tunnel; //type: int32

}; // Native::Ip::Mroute


class Native::Ip::Nat : public Entity
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

        class Pool; //type: Native::Ip::Nat::Pool
        class Inside; //type: Native::Ip::Nat::Inside
        class Outside; //type: Native::Ip::Nat::Outside

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside> inside;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Outside> outside;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Pool> > pool;
        
}; // Native::Ip::Nat


class Native::Ip::Nat::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf start_address; //type: string
        YLeaf end_address; //type: string
        YLeaf netmask; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf accounting; //type: string
        YLeaf arp_ping; //type: empty
        YLeaf type; //type: TypeEnum
        YLeaf add_route; //type: empty
        class TypeEnum;

}; // Native::Ip::Nat::Pool


class Native::Ip::Nat::Inside : public Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Ip::Nat::Inside::Source
        class Destination; //type: Native::Ip::Nat::Inside::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source> source;
        
}; // Native::Ip::Nat::Inside


class Native::Ip::Nat::Inside::Source : public Entity
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

        class List; //type: Native::Ip::Nat::Inside::Source::List
        class RouteMap; //type: Native::Ip::Nat::Inside::Source::RouteMap
        class Static_; //type: Native::Ip::Nat::Inside::Source::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List> > list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap> > route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_> static_;
        
}; // Native::Ip::Nat::Inside::Source


class Native::Ip::Nat::Inside::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        YLeaf pool; //type: string
        YLeaf redundancy; //type: uint8
        YLeaf mapping_id; //type: uint32
        YLeaf no_payload; //type: empty
        YLeaf reversible; //type: empty
        YLeaf vrf; //type: string
        YLeaf match_in_vrf; //type: empty
        YLeaf overload; //type: empty
        YLeaf oer; //type: empty
        class Interface; //type: Native::Ip::Nat::Inside::Source::List::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface> interface;
        
}; // Native::Ip::Nat::Inside::Source::List


class Native::Ip::Nat::Inside::Source::List::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::List::Interface


class Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface


class Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map_name; //type: string
        class Interface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface
        class Oer; //type: Native::Ip::Nat::Inside::Source::RouteMap::Oer
        class Overload; //type: Native::Ip::Nat::Inside::Source::RouteMap::Overload
        class Vrf; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Oer> oer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Overload> overload;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf> > vrf;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap


class Native::Ip::Nat::Inside::Source::RouteMap::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Source::RouteMap::Oer : public Entity
{
    public:
        Oer();
        ~Oer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf overload; //type: empty
        YLeaf extended; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Oer


class Native::Ip::Nat::Inside::Source::RouteMap::Overload : public Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty
        YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Overload


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Oer; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer
        class Overload; //type: Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer> oer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload> overload; // presence node
        
}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer : public Entity
{
    public:
        Oer();
        ~Oer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf overload; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer


class Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload : public Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oer; //type: empty

}; // Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload


class Native::Ip::Nat::Inside::Source::Static_ : public Entity
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

        class NatStaticTransportList; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList
        class NatStaticTransportInterfaceList; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList> > nat_static_transport_interface_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList> > nat_static_transport_list;
        
}; // Native::Ip::Nat::Inside::Source::Static_


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList : public Entity
{
    public:
        NatStaticTransportList();
        ~NatStaticTransportList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_ip; //type: string
        YLeaf global_ip; //type: string
        YLeaf proto; //type: ProtoEnum
        YLeaf network; //type: empty
        YLeaf local_port; //type: uint16
        YLeaf mask; //type: string
        YLeaf global_port; //type: uint16
        YLeaf extendable; //type: empty
        YLeaf no_alias; //type: empty
        YLeaf no_payload; //type: empty
        YLeaf route_map; //type: string
        YLeaf reversible; //type: empty
        YLeaf redundancy; //type: one of uint8, string
        YLeaf mapping_id; //type: uint32
        YLeaf vrf; //type: string
        YLeaf match_in_vrf; //type: empty
        YLeaf forced; //type: empty
        YLeaf overload; //type: empty
        class ProtoEnum;

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList : public Entity
{
    public:
        NatStaticTransportInterfaceList();
        ~NatStaticTransportInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proto; //type: ProtoEnum
        YLeaf local_ip; //type: string
        YLeaf local_port; //type: uint16
        YLeaf global_port; //type: uint16
        class Interface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface> interface;
                class ProtoEnum;

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface


class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface


class Native::Ip::Nat::Inside::Destination : public Entity
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

        class List; //type: Native::Ip::Nat::Inside::Destination::List

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Inside::Destination::List> > list;
        
}; // Native::Ip::Nat::Inside::Destination


class Native::Ip::Nat::Inside::Destination::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        YLeaf pool; //type: string
        YLeaf redundancy; //type: uint8
        YLeaf mapping_id; //type: uint32

}; // Native::Ip::Nat::Inside::Destination::List


class Native::Ip::Nat::Outside : public Entity
{
    public:
        Outside();
        ~Outside();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Ip::Nat::Outside::List
        class RouteMap; //type: Native::Ip::Nat::Outside::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Outside::List> > list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat::Outside::RouteMap> > route_map;
        
}; // Native::Ip::Nat::Outside


class Native::Ip::Nat::Outside::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        YLeaf pool; //type: string
        YLeaf mapping_id; //type: uint32
        YLeaf vrf; //type: string
        YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::List


class Native::Ip::Nat::Outside::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf pool; //type: string
        YLeaf mapping_id; //type: uint32
        YLeaf vrf; //type: string
        YLeaf add_route; //type: empty

}; // Native::Ip::Nat::Outside::RouteMap


class Native::Ip::Nbar : public Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attribute; //type: Native::Ip::Nbar::Attribute
        class AttributeMap; //type: Native::Ip::Nbar::AttributeMap
        class AttributeSet; //type: Native::Ip::Nbar::AttributeSet
        class Custom; //type: Native::Ip::Nbar::Custom

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute> attribute;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap> > attribute_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeSet> > attribute_set;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Custom> > custom;
        
}; // Native::Ip::Nbar


class Native::Ip::Nbar::Attribute : public Entity
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

        class ApplicationGroup; //type: Native::Ip::Nbar::Attribute::ApplicationGroup
        class Category; //type: Native::Ip::Nbar::Attribute::Category
        class SubCategory; //type: Native::Ip::Nbar::Attribute::SubCategory

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup> application_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category> category;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory> sub_category;
        
}; // Native::Ip::Nbar::Attribute


class Native::Ip::Nbar::Attribute::ApplicationGroup : public Entity
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

        class Custom; //type: Native::Ip::Nbar::Attribute::ApplicationGroup::Custom

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::ApplicationGroup::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::ApplicationGroup


class Native::Ip::Nbar::Attribute::ApplicationGroup::Custom : public Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::ApplicationGroup::Custom


class Native::Ip::Nbar::Attribute::Category : public Entity
{
    public:
        Category();
        ~Category();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::Category::Custom

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::Category::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::Category


class Native::Ip::Nbar::Attribute::Category::Custom : public Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::Category::Custom


class Native::Ip::Nbar::Attribute::SubCategory : public Entity
{
    public:
        SubCategory();
        ~SubCategory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Custom; //type: Native::Ip::Nbar::Attribute::SubCategory::Custom

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Attribute::SubCategory::Custom> > custom;
        
}; // Native::Ip::Nbar::Attribute::SubCategory


class Native::Ip::Nbar::Attribute::SubCategory::Custom : public Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf help; //type: string

}; // Native::Ip::Nbar::Attribute::SubCategory::Custom


class Native::Ip::Nbar::AttributeMap : public Entity
{
    public:
        AttributeMap();
        ~AttributeMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Attribute; //type: Native::Ip::Nbar::AttributeMap::Attribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::AttributeMap::Attribute> attribute;
        
}; // Native::Ip::Nbar::AttributeMap


class Native::Ip::Nbar::AttributeMap::Attribute : public Entity
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

        YLeaf application_group; //type: one of string, enumeration
        YLeaf business_relevance; //type: BusinessRelevanceEnum
        YLeaf category; //type: one of string, enumeration
        YLeaf encrypted; //type: EncryptedEnum
        YLeaf sub_category; //type: one of string, enumeration
        YLeaf traffic_class; //type: TrafficClassEnum
        YLeaf tunnel; //type: TunnelEnum
        class ApplicationGroupEnum;
        class BusinessRelevanceEnum;
        class CategoryEnum;
        class EncryptedEnum;
        class SubCategoryEnum;
        class TrafficClassEnum;
        class TunnelEnum;

}; // Native::Ip::Nbar::AttributeMap::Attribute


class Native::Ip::Nbar::AttributeSet : public Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: string
        YLeaf profile_name; //type: string

}; // Native::Ip::Nbar::AttributeSet


class Native::Ip::Nbar::Custom : public Entity
{
    public:
        Custom();
        ~Custom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Http; //type: Native::Ip::Nbar::Custom::Http

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar::Custom::Http> http;
        
}; // Native::Ip::Nbar::Custom


class Native::Ip::Nbar::Custom::Http : public Entity
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

        YLeaf cookie; //type: string
        YLeaf host; //type: string
        YLeaf method; //type: string
        YLeaf referer; //type: string
        YLeaf url; //type: string
        YLeaf user_agent; //type: string
        YLeaf version; //type: string
        YLeaf via; //type: string
        YLeaf id; //type: uint16

}; // Native::Ip::Nbar::Custom::Http


class Native::Ip::Sla : public Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Entry; //type: Native::Ip::Sla::Entry
        class Enable; //type: Native::Ip::Sla::Enable
        class Responder; //type: Native::Ip::Sla::Responder
        class Logging; //type: Native::Ip::Sla::Logging
        class Group; //type: Native::Ip::Sla::Group
        class Schedule; //type: Native::Ip::Sla::Schedule
        class ReactionConfiguration; //type: Native::Ip::Sla::ReactionConfiguration
        class Server; //type: Native::Ip::Sla::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Enable> enable;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry> > entry;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration> > reaction_configuration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Responder> responder; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Schedule> > schedule;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Server> server;
        
}; // Native::Ip::Sla


class Native::Ip::Sla::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        class IcmpEcho; //type: Native::Ip::Sla::Entry::IcmpEcho
        class PathEcho; //type: Native::Ip::Sla::Entry::PathEcho
        class PathJitter; //type: Native::Ip::Sla::Entry::PathJitter
        class UdpEcho; //type: Native::Ip::Sla::Entry::UdpEcho
        class UdpJitter; //type: Native::Ip::Sla::Entry::UdpJitter
        class Http; //type: Native::Ip::Sla::Entry::Http
        class Dhcp; //type: Native::Ip::Sla::Entry::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http> http;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho> icmp_echo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathEcho> path_echo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter> path_jitter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpEcho> udp_echo;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter> udp_jitter;
        
}; // Native::Ip::Sla::Entry


class Native::Ip::Sla::Entry::IcmpEcho : public Entity
{
    public:
        IcmpEcho();
        ~IcmpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: string
        YLeaf source_interface; //type: string
        YLeaf source_ip; //type: string
        YLeaf data_pattern; //type: string
        YLeaf frequency; //type: uint32
        YLeaf owner; //type: string
        YLeaf request_data_size; //type: uint32
        YLeaf tag; //type: string
        YLeaf threshold; //type: uint32
        YLeaf timeout; //type: uint64
        YLeaf tos; //type: uint8
        YLeaf verify_data; //type: empty
        YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::IcmpEcho::History

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History> history;
        
}; // Native::Ip::Sla::Entry::IcmpEcho


class Native::Ip::Sla::Entry::IcmpEcho::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf buckets_kept; //type: uint8
        YLeaf distributions_of_statistics_kept; //type: uint8
        YLeaf filter; //type: FilterEnum
        YLeaf hours_of_statistics_kept; //type: uint8
        YLeaf lives_kept; //type: uint8
        YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced> enhanced;
                class FilterEnum;

}; // Native::Ip::Sla::Entry::IcmpEcho::History


class Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced : public Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced


class Native::Ip::Sla::Entry::PathEcho : public Entity
{
    public:
        PathEcho();
        ~PathEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_ip; //type: string
        YLeaf source_ip; //type: string
        YLeaf paths_of_statistics_kept; //type: uint8
        YLeaf samples_of_history_kept; //type: uint8
        YLeaf hops_of_statistics_kept; //type: uint8

}; // Native::Ip::Sla::Entry::PathEcho


class Native::Ip::Sla::Entry::PathJitter : public Entity
{
    public:
        PathJitter();
        ~PathJitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_ip; //type: string
        YLeaf source_ip; //type: string
        YLeaf frequency; //type: uint32
        YLeaf owner; //type: string
        YLeaf request_data_size; //type: uint32
        YLeaf tag; //type: string
        YLeaf threshold; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf tos; //type: uint8
        YLeaf verify_data; //type: empty
        YLeaf vrf; //type: string
        YLeafList lsr_path; //type: list of  string
        class Default_; //type: Native::Ip::Sla::Entry::PathJitter::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter::Default_> default_;
        
}; // Native::Ip::Sla::Entry::PathJitter


class Native::Ip::Sla::Entry::PathJitter::Default_ : public Entity
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

        YLeaf frequency; //type: empty
        YLeaf lsr_path; //type: empty
        YLeaf owner; //type: empty
        YLeaf request_data_size; //type: empty
        YLeaf tag; //type: empty
        YLeaf threshold; //type: empty
        YLeaf timeout; //type: empty
        YLeaf tos; //type: empty
        YLeaf verify_data; //type: empty
        YLeaf vrf; //type: empty

}; // Native::Ip::Sla::Entry::PathJitter::Default_


class Native::Ip::Sla::Entry::UdpEcho : public Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_addr; //type: one of union, string
        YLeaf dest_port; //type: uint16
        YLeaf source_ip; //type: one of union, string
        YLeaf source_port; //type: uint16

}; // Native::Ip::Sla::Entry::UdpEcho


class Native::Ip::Sla::Entry::UdpJitter : public Entity
{
    public:
        UdpJitter();
        ~UdpJitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_addr; //type: one of union, string
        YLeaf portno; //type: uint16
        YLeaf source_ip; //type: one of union, string
        YLeaf num_packets; //type: uint16
        YLeaf interval; //type: uint16
        YLeaf owner; //type: string
        YLeaf request_data_size; //type: uint16
        YLeaf tag; //type: string
        YLeaf threshold; //type: uint16
        YLeaf timeout; //type: uint32
        YLeaf tos; //type: uint8
        YLeaf traffic_class; //type: uint8
        YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::UdpJitter::History

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History> history;
        
}; // Native::Ip::Sla::Entry::UdpJitter


class Native::Ip::Sla::Entry::UdpJitter::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distributions_of_statistics_kept; //type: uint8
        YLeaf hours_of_statistics_kept; //type: uint8
        YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::UdpJitter::History::Enhanced

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History::Enhanced> enhanced;
        
}; // Native::Ip::Sla::Entry::UdpJitter::History


class Native::Ip::Sla::Entry::UdpJitter::History::Enhanced : public Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16
        YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::UdpJitter::History::Enhanced


class Native::Ip::Sla::Entry::Http : public Entity
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

        YLeaf owner; //type: string
        YLeaf tag; //type: string
        YLeaf vrf; //type: string
        class Get; //type: Native::Ip::Sla::Entry::Http::Get
        class Raw; //type: Native::Ip::Sla::Entry::Http::Raw

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Get> get;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Raw> raw;
        
}; // Native::Ip::Sla::Entry::Http


class Native::Ip::Sla::Entry::Http::Get : public Entity
{
    public:
        Get();
        ~Get();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf url; //type: string
        YLeaf source_ip; //type: one of union, string
        YLeaf source_port; //type: uint16
        YLeaf name_server; //type: one of union, string

}; // Native::Ip::Sla::Entry::Http::Get


class Native::Ip::Sla::Entry::Http::Raw : public Entity
{
    public:
        Raw();
        ~Raw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf url; //type: string
        YLeaf source_ip; //type: one of union, string
        YLeaf source_port; //type: uint16
        YLeaf name_server; //type: one of union, string

}; // Native::Ip::Sla::Entry::Http::Raw


class Native::Ip::Sla::Entry::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_ip; //type: string
        YLeaf source_ip; //type: string

}; // Native::Ip::Sla::Entry::Dhcp


class Native::Ip::Sla::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reaction_alerts; //type: empty

}; // Native::Ip::Sla::Enable


class Native::Ip::Sla::Responder : public Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdpEcho; //type: Native::Ip::Sla::Responder::UdpEcho
        class TcpConnect; //type: Native::Ip::Sla::Responder::TcpConnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect> tcp_connect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho> udp_echo;
        
}; // Native::Ip::Sla::Responder


class Native::Ip::Sla::Responder::UdpEcho : public Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::UdpEcho::Ipaddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho::Ipaddress> > ipaddress;
        
}; // Native::Ip::Sla::Responder::UdpEcho


class Native::Ip::Sla::Responder::UdpEcho::Ipaddress : public Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: string
        YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::UdpEcho::Ipaddress


class Native::Ip::Sla::Responder::TcpConnect : public Entity
{
    public:
        TcpConnect();
        ~TcpConnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::TcpConnect::Ipaddress

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect::Ipaddress> > ipaddress;
        
}; // Native::Ip::Sla::Responder::TcpConnect


class Native::Ip::Sla::Responder::TcpConnect::Ipaddress : public Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: string
        YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::TcpConnect::Ipaddress


class Native::Ip::Sla::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traps; //type: empty

}; // Native::Ip::Sla::Logging


class Native::Ip::Sla::Group : public Entity
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

        class Schedule; //type: Native::Ip::Sla::Group::Schedule

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule> > schedule;
        
}; // Native::Ip::Sla::Group


class Native::Ip::Sla::Group::Schedule : public Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry_number; //type: uint32
        class ProbeIds; //type: Native::Ip::Sla::Group::Schedule::ProbeIds

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds> > probe_ids;
        
}; // Native::Ip::Sla::Group::Schedule


class Native::Ip::Sla::Group::Schedule::ProbeIds : public Entity
{
    public:
        ProbeIds();
        ~ProbeIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class SchedulePeriod; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod> schedule_period;
        
}; // Native::Ip::Sla::Group::Schedule::ProbeIds


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod : public Entity
{
    public:
        SchedulePeriod();
        ~SchedulePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf life; //type: one of uint32, enumeration
        class Frequency; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency
        class StartTime; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency> frequency;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime> start_time;
                class LifeEnum;

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency : public Entity
{
    public:
        Frequency();
        ~Frequency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frequency_val; //type: uint32
        YLeaf range; //type: string

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf now; //type: empty

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime


class Native::Ip::Sla::Schedule : public Entity
{
    public:
        Schedule();
        ~Schedule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry_number; //type: uint32
        YLeaf ageout; //type: uint32
        YLeaf life; //type: one of uint32, enumeration
        YLeaf recurring; //type: empty
        class StartTime; //type: Native::Ip::Sla::Schedule::StartTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Schedule::StartTime> start_time;
                class LifeEnum;

}; // Native::Ip::Sla::Schedule


class Native::Ip::Sla::Schedule::StartTime : public Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf after; //type: string
        YLeaf hour_min; //type: string
        YLeaf hour_min_sec; //type: string
        YLeaf now; //type: empty
        YLeaf pending; //type: empty
        YLeaf random; //type: uint32

}; // Native::Ip::Sla::Schedule::StartTime


class Native::Ip::Sla::ReactionConfiguration : public Entity
{
    public:
        ReactionConfiguration();
        ~ReactionConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry_number; //type: uint64
        class React; //type: Native::Ip::Sla::ReactionConfiguration::React

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React> react;
        
}; // Native::Ip::Sla::ReactionConfiguration


class Native::Ip::Sla::ReactionConfiguration::React : public Entity
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

        class Connectionloss; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss
        class Rtt; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss> connectionloss; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt> rtt; // presence node
        
}; // Native::Ip::Sla::ReactionConfiguration::React


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss : public Entity
{
    public:
        Connectionloss();
        ~Connectionloss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdType; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType> threshold_type;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType : public Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xofy; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy> xofy;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy : public Entity
{
    public:
        Xofy();
        ~Xofy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf x_val; //type: uint8
        YLeaf y_val; //type: uint8
        YLeaf action_type; //type: ActionTypeEnum
        class ActionTypeEnum;

}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy


class Native::Ip::Sla::ReactionConfiguration::React::Rtt : public Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThresholdValue; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue> threshold_value;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt


class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue : public Entity
{
    public:
        ThresholdValue();
        ~ThresholdValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf upper_limit_val; //type: uint32
        YLeaf lower_limit_val; //type: uint32
        YLeaf threshold_type; //type: ThresholdTypeEnum
        YLeaf action_type; //type: ActionTypeEnum
        class ThresholdTypeEnum;
        class ActionTypeEnum;

}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue


class Native::Ip::Sla::Server : public Entity
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

        class Twamp; //type: Native::Ip::Sla::Server::Twamp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla::Server::Twamp> twamp; // presence node
        
}; // Native::Ip::Sla::Server


class Native::Ip::Sla::Server::Twamp : public Entity
{
    public:
        Twamp();
        ~Twamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Ip::Sla::Server::Twamp


class Native::Ip::Wccp : public Entity
{
    public:
        Wccp();
        ~Wccp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_interface; //type: string
        class WccpList; //type: Native::Ip::Wccp::WccpList
        class WebCache; //type: Native::Ip::Wccp::WebCache
        class Check; //type: Native::Ip::Wccp::Check
        class Vrf; //type: Native::Ip::Wccp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Check> check;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf> > vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache> web_cache;
        
}; // Native::Ip::Wccp


class Native::Ip::Wccp::WccpList : public Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeaf group_address; //type: string
        YLeaf group_list; //type: one of uint16, string
        YLeaf mode; //type: ModeEnum
        YLeaf redirect_list; //type: one of uint16, string
        YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WccpList::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::WccpList::Password> password;
                class ModeEnum;

}; // Native::Ip::Wccp::WccpList


class Native::Ip::Wccp::WccpList::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::Ip::Wccp::WccpList::Password


class Native::Ip::Wccp::WebCache : public Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf group_list; //type: one of uint16, string
        YLeaf mode; //type: ModeEnum
        YLeaf redirect_list; //type: one of uint16, string
        YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WebCache::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache::Password> password;
                class ModeEnum;

}; // Native::Ip::Wccp::WebCache


class Native::Ip::Wccp::WebCache::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf clear_key; //type: string
        class EncryptionEnum;

}; // Native::Ip::Wccp::WebCache::Password


class Native::Ip::Wccp::Check : public Entity
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

        class Acl; //type: Native::Ip::Wccp::Check::Acl
        class Services; //type: Native::Ip::Wccp::Check::Services

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Services> services;
        
}; // Native::Ip::Wccp::Check


class Native::Ip::Wccp::Check::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outbound; //type: empty

}; // Native::Ip::Wccp::Check::Acl


class Native::Ip::Wccp::Check::Services : public Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Ip::Wccp::Check::Services

class Native::Ip::Msdp::RpfEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc3618;

};

class Native::Ip::Msdp::Vrf::RpfEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc3618;

};

class Native::Ip::Nat::Pool::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf match_host;
        static const Enum::YLeaf rotary;

};

class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::ProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::ProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;

};

class Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf aol_group;
        static const Enum::YLeaf apple_group;
        static const Enum::YLeaf apple_talk_group;
        static const Enum::YLeaf banyan_group;
        static const Enum::YLeaf bittorrent_group;
        static const Enum::YLeaf capwap_group;
        static const Enum::YLeaf cisco_jabber_group;
        static const Enum::YLeaf cisco_phone_group;
        static const Enum::YLeaf corba_group;
        static const Enum::YLeaf dameware_group;
        static const Enum::YLeaf edonkey_emule_group;
        static const Enum::YLeaf espn_group;
        static const Enum::YLeaf fasttrack_group;
        static const Enum::YLeaf flash_group;
        static const Enum::YLeaf fring_group;
        static const Enum::YLeaf ftp_group;
        static const Enum::YLeaf gnutella_group;
        static const Enum::YLeaf google_group;
        static const Enum::YLeaf gtalk_group;
        static const Enum::YLeaf icq_group;
        static const Enum::YLeaf imap_group;
        static const Enum::YLeaf ipsec_group;
        static const Enum::YLeaf irc_group;
        static const Enum::YLeaf kakao_group;
        static const Enum::YLeaf kerberos_group;
        static const Enum::YLeaf ldap_group;
        static const Enum::YLeaf ms_cloud_group;
        static const Enum::YLeaf ms_crm_group;
        static const Enum::YLeaf ms_lync_group;
        static const Enum::YLeaf msn_messenger_group;
        static const Enum::YLeaf netbios_group;
        static const Enum::YLeaf nntp_group;
        static const Enum::YLeaf npmp_group;
        static const Enum::YLeaf other;
        static const Enum::YLeaf pop3_group;
        static const Enum::YLeaf prm_group;
        static const Enum::YLeaf qq_group;
        static const Enum::YLeaf skype_group;
        static const Enum::YLeaf smtp_group;
        static const Enum::YLeaf snmp_group;
        static const Enum::YLeaf sqlsvr_group;
        static const Enum::YLeaf stun_group;
        static const Enum::YLeaf telepresence_group;
        static const Enum::YLeaf tftp_group;
        static const Enum::YLeaf vmware_group;
        static const Enum::YLeaf vnc_group;
        static const Enum::YLeaf wap_group;
        static const Enum::YLeaf webex_group;
        static const Enum::YLeaf xns_xerox_group;
        static const Enum::YLeaf xunlei_group;
        static const Enum::YLeaf yahoo_group;
        static const Enum::YLeaf yahoo_messenger_group;

};

class Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevanceEnum : public Enum
{
    public:
        static const Enum::YLeaf business_irrelevant;
        static const Enum::YLeaf business_relevant;
        static const Enum::YLeaf default_;

};

class Native::Ip::Nbar::AttributeMap::Attribute::CategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf anonymizers;
        static const Enum::YLeaf backup_and_storage;
        static const Enum::YLeaf browsing;
        static const Enum::YLeaf business_and_productivity_tools;
        static const Enum::YLeaf consumer_file_sharing;
        static const Enum::YLeaf consumer_internet;
        static const Enum::YLeaf consumer_messaging;
        static const Enum::YLeaf consumer_streaming;
        static const Enum::YLeaf database;
        static const Enum::YLeaf email;
        static const Enum::YLeaf epayement;
        static const Enum::YLeaf file_sharing;
        static const Enum::YLeaf gaming;
        static const Enum::YLeaf industrial_protocols;
        static const Enum::YLeaf instant_messaging;
        static const Enum::YLeaf inter_process_rpc;
        static const Enum::YLeaf internet_security;
        static const Enum::YLeaf layer3_over_ip;
        static const Enum::YLeaf location_based_services;
        static const Enum::YLeaf net_admin;
        static const Enum::YLeaf newsgroup;
        static const Enum::YLeaf other;
        static const Enum::YLeaf social_networking;
        static const Enum::YLeaf software_updates;
        static const Enum::YLeaf trojan;
        static const Enum::YLeaf voice_and_video;

};

class Native::Ip::Nbar::AttributeMap::Attribute::EncryptedEnum : public Enum
{
    public:
        static const Enum::YLeaf encrypted_no;
        static const Enum::YLeaf encrypted_unassigned;
        static const Enum::YLeaf encrypted_yes;

};

class Native::Ip::Nbar::AttributeMap::Attribute::SubCategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf authentication_services;
        static const Enum::YLeaf backup_systems;
        static const Enum::YLeaf consumer_audio_streaming;
        static const Enum::YLeaf consumer_cloud_storage;
        static const Enum::YLeaf consumer_multimedia_messaging;
        static const Enum::YLeaf consumer_video_streaming;
        static const Enum::YLeaf consumer_web_browsing;
        static const Enum::YLeaf control_and_signaling;
        static const Enum::YLeaf desktop_virtualization;
        static const Enum::YLeaf enterprise_cloud_data_storage;
        static const Enum::YLeaf enterprise_cloud_services;
        static const Enum::YLeaf enterprise_data_center_storage;
        static const Enum::YLeaf enterprise_media_conferencing;
        static const Enum::YLeaf enterprise_realtime_apps;
        static const Enum::YLeaf enterprise_rich_media_content;
        static const Enum::YLeaf enterprise_sw_deployment_tools;
        static const Enum::YLeaf enterprise_transactional_apps;
        static const Enum::YLeaf enterprise_video_broadcast;
        static const Enum::YLeaf enterprise_voice_collaboration;
        static const Enum::YLeaf file_transfer;
        static const Enum::YLeaf naming_services;
        static const Enum::YLeaf network_management;
        static const Enum::YLeaf os_updates;
        static const Enum::YLeaf other;
        static const Enum::YLeaf p2p_file_transfer;
        static const Enum::YLeaf p2p_networking;
        static const Enum::YLeaf remote_access_terminal;
        static const Enum::YLeaf routing_protocol;
        static const Enum::YLeaf tunneling_protocols;

};

class Native::Ip::Nbar::AttributeMap::Attribute::TrafficClassEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast_video;
        static const Enum::YLeaf bulk_data;
        static const Enum::YLeaf multimedia_conferencing;
        static const Enum::YLeaf multimedia_streaming;
        static const Enum::YLeaf network_control;
        static const Enum::YLeaf ops_admin_mgmt;
        static const Enum::YLeaf real_time_interactive;
        static const Enum::YLeaf signaling;
        static const Enum::YLeaf transactional_data;
        static const Enum::YLeaf voip_telephony;

};

class Native::Ip::Nbar::AttributeMap::Attribute::TunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_no;
        static const Enum::YLeaf tunnel_unassigned;
        static const Enum::YLeaf tunnel_yes;

};

class Native::Ip::Sla::Entry::IcmpEcho::History::FilterEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf failures;
        static const Enum::YLeaf none;
        static const Enum::YLeaf overThreshold;

};

class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::LifeEnum : public Enum
{
    public:
        static const Enum::YLeaf forever;

};

class Native::Ip::Sla::Schedule::LifeEnum : public Enum
{
    public:
        static const Enum::YLeaf forever;

};

class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf trapAndTrigger;
        static const Enum::YLeaf trapOnly;
        static const Enum::YLeaf triggerOnly;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf immediate;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf trapAndTrigger;
        static const Enum::YLeaf trapOnly;
        static const Enum::YLeaf triggerOnly;

};

class Native::Ip::Wccp::WccpList::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf open;

};

class Native::Ip::Wccp::WccpList::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Ip::Wccp::WebCache::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf open;

};

class Native::Ip::Wccp::WebCache::Password::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_9_ */

