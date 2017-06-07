#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_oper {

class Dhcpv6 : public Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

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

        class IssuStatus; //type: Dhcpv6::IssuStatus
        class Nodes; //type: Dhcpv6::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes> nodes;
        
}; // Dhcpv6


class Dhcpv6::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_start_time; //type: uint64
        YLeaf issu_sync_complete_time; //type: uint64
        YLeaf issu_sync_start_time; //type: uint64
        YLeaf issu_ready_time; //type: uint64
        YLeaf big_bang_time; //type: uint64
        YLeaf primary_role_time; //type: uint64
        YLeaf issu_ready_issu_mgr_connection; //type: boolean
        YLeaf role; //type: Dhcpv6IssuRoleEnum
        YLeaf phase; //type: DhcpIssuPhaseEnum
        YLeaf version; //type: Dhcpv6IssuVersionEnum

}; // Dhcpv6::IssuStatus


class Dhcpv6::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Dhcpv6::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node> > node;
        
}; // Dhcpv6::Nodes


class Dhcpv6::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Proxy; //type: Dhcpv6::Nodes::Node::Proxy
        class Base; //type: Dhcpv6::Nodes::Node::Base
        class Server; //type: Dhcpv6::Nodes::Node::Server
        class Relay; //type: Dhcpv6::Nodes::Node::Relay

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base> base;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy> proxy;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server> server;
        
}; // Dhcpv6::Nodes::Node


class Dhcpv6::Nodes::Node::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs
        class Profiles; //type: Dhcpv6::Nodes::Node::Proxy::Profiles
        class Interfaces; //type: Dhcpv6::Nodes::Node::Proxy::Interfaces
        class Statistics; //type: Dhcpv6::Nodes::Node::Proxy::Statistics
        class Binding; //type: Dhcpv6::Nodes::Node::Proxy::Binding

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding> binding;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs> vrfs;
        
}; // Dhcpv6::Nodes::Node::Proxy


class Dhcpv6::Nodes::Node::Proxy::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf> > vrf;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf : public Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Solicit; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit
        class Advertise; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise
        class Request; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request
        class Reply; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply
        class Confirm; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm
        class Decline; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline
        class Renew; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew
        class Rebind; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind
        class Release; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release
        class Reconfig; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig
        class Inform; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform
        class RelayForward; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward
        class RelayReply; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply
        class LeaseQuery; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseQueryReply; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply
        class LeaseQueryDone; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone
        class LeaseQueryData; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit> solicit;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit : public Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm : public Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew : public Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind : public Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig : public Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward : public Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply : public Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply : public Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone : public Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData : public Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData


class Dhcpv6::Nodes::Node::Proxy::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile> > profile;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        class ThrottleInfos; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos
        class Info; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info> info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos> throttle_infos;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos : public Entity
{
    public:
        ThrottleInfos();
        ~ThrottleInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThrottleInfo; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo> > throttle_info;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo : public Entity
{
    public:
        ThrottleInfo();
        ~ThrottleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf binding_chaddr; //type: string
        YLeaf ifname; //type: string
        YLeaf state; //type: uint32
        YLeaf time_left; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf remote_id; //type: string
        YLeaf profile_link_address; //type: string
        YLeafList profile_helper_address; //type: list of  string
        YLeafList vrf_name; //type: list of  string
        YLeafList interface_name; //type: list of  string
        class InterfaceIdReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences
        class VrfReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences
        class InterfaceReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences> interface_id_references;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences> interface_references;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences> vrf_references;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences : public Entity
{
    public:
        InterfaceIdReferences();
        ~InterfaceIdReferences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DProxyIidReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference> > ipv6_dhcpv6d_proxy_iid_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference : public Entity
{
    public:
        Ipv6Dhcpv6DProxyIidReference();
        ~Ipv6Dhcpv6DProxyIidReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_iid_interface_name; //type: string
        YLeaf proxy_interface_id; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6DProxyIidReference


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences : public Entity
{
    public:
        VrfReferences();
        ~VrfReferences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DProxyVrfReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference> > ipv6_dhcpv6d_proxy_vrf_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference : public Entity
{
    public:
        Ipv6Dhcpv6DProxyVrfReference();
        ~Ipv6Dhcpv6DProxyVrfReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_reference_vrf_name; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6DProxyVrfReference


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences : public Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DProxyInterfaceReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference> > ipv6_dhcpv6d_proxy_interface_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference : public Entity
{
    public:
        Ipv6Dhcpv6DProxyInterfaceReference();
        ~Ipv6Dhcpv6DProxyInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_reference_interface_name; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DProxyInterfaceReference


class Dhcpv6::Nodes::Node::Proxy::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Nodes::Node::Proxy::Interfaces


class Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf proxy_vrf_name; //type: string
        YLeaf proxy_interface_mode; //type: BagDhcpv6DSubModeEnum
        YLeaf is_proxy_interface_ambiguous; //type: uint32
        YLeaf proxy_interface_profile_name; //type: string
        YLeaf proxy_interface_lease_limit_type; //type: LeaseLimitEnum
        YLeaf proxy_interface_lease_limits; //type: uint32
        YLeaf srg_role; //type: BagDhcpv6DIntfSrgRoleEnum
        YLeaf serg_role; //type: BagDhcpv6DIntfSergRoleEnum
        YLeaf mac_throttle; //type: boolean
        YLeaf srg_vrf_name; //type: string
        YLeaf srgp2p; //type: boolean

}; // Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface


class Dhcpv6::Nodes::Node::Proxy::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DProxyStat; //type: Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat> > ipv6_dhcpv6d_proxy_stat;
        
}; // Dhcpv6::Nodes::Node::Proxy::Statistics


class Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat : public Entity
{
    public:
        Ipv6Dhcpv6DProxyStat();
        ~Ipv6Dhcpv6DProxyStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Statistics_; //type: Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat


class Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6DProxyStat::Statistics_


class Dhcpv6::Nodes::Node::Proxy::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Clients; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients
        class Summary; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary> summary;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client> > client;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client : public Entity
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

        YLeaf client_id; //type: string
        YLeaf duid; //type: string
        YLeaf client_flag; //type: uint32
        YLeaf subscriber_label; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf mac_address; //type: string
        YLeaf ia_id_p_ds; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf access_vrf_name; //type: string
        YLeaf proxy_binding_tags; //type: uint8
        YLeaf proxy_binding_outer_tag; //type: uint32
        YLeaf proxy_binding_inner_tag; //type: uint32
        YLeaf class_name; //type: string
        YLeaf pool_name; //type: string
        YLeaf rx_remote_id; //type: string
        YLeaf tx_remote_id; //type: string
        YLeaf rx_interface_id; //type: string
        YLeaf tx_interface_id; //type: string
        YLeaf server_ipv6_address; //type: string
        YLeaf profile_name; //type: string
        YLeaf framed_ipv6_prefix; //type: string
        YLeaf framed_prefix_length; //type: uint8
        YLeaf is_nak_next_renew; //type: boolean
        YLeaf srg_state; //type: uint32
        YLeaf srg_intf_role; //type: uint32
        YLeaf srgp2p; //type: boolean
        YLeaf srg_vrf_name; //type: string
        YLeaf serg_state; //type: uint32
        YLeaf serg_intf_role; //type: uint32
        class IaIdPd; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd> ia_id_pd;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd : public Entity
{
    public:
        IaIdPd();
        ~IaIdPd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BagDhcpv6DIaIdPdInfo; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo> > bag_dhcpv6d_ia_id_pd_info;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo : public Entity
{
    public:
        BagDhcpv6DIaIdPdInfo();
        ~BagDhcpv6DIaIdPdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ia_type; //type: BagDhcpv6DIaIdEnum
        YLeaf ia_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf total_address; //type: uint16
        YLeaf state; //type: BagDhcpv6DFsmStateEnum
        class Addresses; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses> addresses;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BagDhcpv6DAddrAttrb; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb> > bag_dhcpv6d_addr_attrb;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb : public Entity
{
    public:
        BagDhcpv6DAddrAttrb();
        ~BagDhcpv6DAddrAttrb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf lease_time; //type: uint32
        YLeaf remaining_lease_time; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clients; //type: uint32
        class Iana; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana
        class Iapd; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana> iana;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd> iapd;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana : public Entity
{
    public:
        Iana();
        ~Iana();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initializing_clients; //type: uint32
        YLeaf dpm_waiting_clients; //type: uint32
        YLeaf daps_waiting_clients; //type: uint32
        YLeaf msg_waiting_clients; //type: uint32
        YLeaf iedge_waiting_clients; //type: uint32
        YLeaf rib_waiting_clients; //type: uint32
        YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd : public Entity
{
    public:
        Iapd();
        ~Iapd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initializing_clients; //type: uint32
        YLeaf dpm_waiting_clients; //type: uint32
        YLeaf daps_waiting_clients; //type: uint32
        YLeaf msg_waiting_clients; //type: uint32
        YLeaf iedge_waiting_clients; //type: uint32
        YLeaf rib_waiting_clients; //type: uint32
        YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd


class Dhcpv6::Nodes::Node::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Database; //type: Dhcpv6::Nodes::Node::Base::Database
        class AddrBindings; //type: Dhcpv6::Nodes::Node::Base::AddrBindings

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base::AddrBindings> addr_bindings;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base::Database> database;
        
}; // Dhcpv6::Nodes::Node::Base


class Dhcpv6::Nodes::Node::Base::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf configured; //type: boolean
        YLeaf version; //type: uint32
        YLeaf full_file_write_interval; //type: uint32
        YLeaf last_full_write_file_name; //type: string
        YLeaf last_full_write_time; //type: uint32
        YLeaf full_file_write_count; //type: uint32
        YLeaf failed_full_file_write_count; //type: uint32
        YLeaf full_file_record_count; //type: uint32
        YLeaf last_full_file_write_error_timestamp; //type: uint32
        YLeaf incremental_file_write_interval; //type: uint32
        YLeaf last_incremental_write_file_name; //type: string
        YLeaf last_incremental_write_time; //type: uint32
        YLeaf incremental_file_write_count; //type: uint32
        YLeaf failed_incremental_file_write_count; //type: uint32
        YLeaf incremental_file_record_count; //type: uint32
        YLeaf last_incremental_file_write_error_timestamp; //type: uint32

}; // Dhcpv6::Nodes::Node::Base::Database


class Dhcpv6::Nodes::Node::Base::AddrBindings : public Entity
{
    public:
        AddrBindings();
        ~AddrBindings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AddrBinding; //type: Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding> > addr_binding;
        
}; // Dhcpv6::Nodes::Node::Base::AddrBindings


class Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding : public Entity
{
    public:
        AddrBinding();
        ~AddrBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf addr_string; //type: string
        YLeaf mac_address; //type: string
        YLeaf vrf_name; //type: string
        YLeaf server_vrf_name; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf server_ipv6_address; //type: string
        YLeaf reply_server_ipv6_address; //type: string
        YLeaf lease_time; //type: uint32
        YLeaf remaining_lease_time; //type: uint32
        YLeaf state; //type: BagDhcpv6DFsmStateEnum
        YLeaf interface_name; //type: string
        YLeaf access_vrf_name; //type: string
        YLeaf base_binding_tags; //type: uint8
        YLeaf base_binding_outer_tag; //type: uint32
        YLeaf base_binding_inner_tag; //type: uint32
        YLeaf profile_name; //type: string
        YLeaf is_nak_next_renew; //type: boolean
        YLeaf subscriber_label; //type: uint32
        YLeaf old_subscriber_label; //type: uint32
        YLeaf rx_client_duid; //type: string
        YLeaf tx_client_uid; //type: string
        YLeaf rx_remote_id; //type: string
        YLeaf tx_remote_id; //type: string
        YLeaf rx_interface_id; //type: string
        YLeaf tx_interface_id; //type: string

}; // Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding


class Dhcpv6::Nodes::Node::Server : public Entity
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

        class Binding; //type: Dhcpv6::Nodes::Node::Server::Binding
        class Vrfs; //type: Dhcpv6::Nodes::Node::Server::Vrfs
        class Profiles; //type: Dhcpv6::Nodes::Node::Server::Profiles
        class Interfaces; //type: Dhcpv6::Nodes::Node::Server::Interfaces
        class Statistics; //type: Dhcpv6::Nodes::Node::Server::Statistics
        class BindingOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding> binding;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions> binding_options;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs> vrfs;
        
}; // Dhcpv6::Nodes::Node::Server


class Dhcpv6::Nodes::Node::Server::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary
        class Clients; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary> summary;
        
}; // Dhcpv6::Nodes::Node::Server::Binding


class Dhcpv6::Nodes::Node::Server::Binding::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clients; //type: uint32
        class Iana; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana
        class Iapd; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana> iana;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd> iapd;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Summary


class Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana : public Entity
{
    public:
        Iana();
        ~Iana();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initializing_clients; //type: uint32
        YLeaf dpm_waiting_clients; //type: uint32
        YLeaf daps_waiting_clients; //type: uint32
        YLeaf request_waiting_clients; //type: uint32
        YLeaf iedge_waiting_clients; //type: uint32
        YLeaf rib_waiting_clients; //type: uint32
        YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana


class Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd : public Entity
{
    public:
        Iapd();
        ~Iapd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initializing_clients; //type: uint32
        YLeaf dpm_waiting_clients; //type: uint32
        YLeaf daps_waiting_clients; //type: uint32
        YLeaf request_waiting_clients; //type: uint32
        YLeaf iedge_waiting_clients; //type: uint32
        YLeaf rib_waiting_clients; //type: uint32
        YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd


class Dhcpv6::Nodes::Node::Server::Binding::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client> > client;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client : public Entity
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

        YLeaf client_id; //type: string
        YLeaf duid; //type: string
        YLeaf client_id_xr; //type: uint32
        YLeaf client_flag; //type: uint32
        YLeaf subscriber_label; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf mac_address; //type: string
        YLeaf ia_id_p_ds; //type: uint32
        YLeaf link_local_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf access_vrf_name; //type: string
        YLeaf server_binding_tags; //type: uint8
        YLeaf server_binding_outer_tag; //type: uint32
        YLeaf server_binding_inner_tag; //type: uint32
        YLeaf pool_name; //type: string
        YLeaf profile_name; //type: string
        YLeaf framed_ipv6_prefix; //type: string
        YLeaf framed_prefix_length; //type: uint8
        YLeaf class_name; //type: string
        YLeaf rx_remote_id; //type: string
        YLeaf rx_interface_id; //type: string
        YLeaf prefix_pool_name; //type: string
        YLeaf address_pool_name; //type: string
        YLeaf dns_server_count; //type: uint32
        YLeaf is_nak_next_renew; //type: boolean
        YLeaf srg_state; //type: uint32
        YLeaf srg_intf_role; //type: uint32
        YLeaf srgp2p; //type: boolean
        YLeaf srg_vrf_name; //type: string
        YLeaf sesrg_state; //type: uint32
        YLeaf serg_intf_role; //type: uint32
        class IaIdPd; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd> ia_id_pd;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd : public Entity
{
    public:
        IaIdPd();
        ~IaIdPd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BagDhcpv6DIaIdPdInfo; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo> > bag_dhcpv6d_ia_id_pd_info;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo : public Entity
{
    public:
        BagDhcpv6DIaIdPdInfo();
        ~BagDhcpv6DIaIdPdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ia_type; //type: BagDhcpv6DIaIdEnum
        YLeaf ia_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf total_address; //type: uint16
        YLeaf state; //type: BagDhcpv6DFsmStateEnum
        class Addresses; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses> addresses;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BagDhcpv6DAddrAttrb; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb> > bag_dhcpv6d_addr_attrb;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb : public Entity
{
    public:
        BagDhcpv6DAddrAttrb();
        ~BagDhcpv6DAddrAttrb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf lease_time; //type: uint32
        YLeaf remaining_lease_time; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6DIaIdPdInfo::Addresses::BagDhcpv6DAddrAttrb


class Dhcpv6::Nodes::Node::Server::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf> > vrf;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf : public Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Solicit; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit
        class Advertise; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise
        class Request; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request
        class Reply; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply
        class Confirm; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm
        class Decline; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline
        class Renew; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew
        class Rebind; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind
        class Release; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release
        class Reconfig; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig
        class Inform; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform
        class RelayForward; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward
        class RelayReply; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply
        class LeaseQuery; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseQueryReply; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply
        class LeaseQueryDone; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone
        class LeaseQueryData; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit> solicit;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit : public Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm : public Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew : public Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind : public Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig : public Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward : public Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply : public Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply : public Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone : public Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData : public Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData


class Dhcpv6::Nodes::Node::Server::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile> > profile;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles


class Dhcpv6::Nodes::Node::Server::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        class Info; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info
        class ThrottleInfos; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info> info;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos> throttle_infos;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf profile_dns; //type: uint8
        YLeaf aftr_name; //type: string
        YLeaf framed_addr_pool_name; //type: string
        YLeaf delegated_prefix_pool_name; //type: string
        YLeaf rapid_commit; //type: boolean
        YLeafList profile_dns_address; //type: list of  string
        class Lease; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease
        class InterfaceReferences; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences> interface_references;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease> lease;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease : public Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf time; //type: string

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences : public Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DServerInterfaceReference; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference> > ipv6_dhcpv6d_server_interface_reference;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference : public Entity
{
    public:
        Ipv6Dhcpv6DServerInterfaceReference();
        ~Ipv6Dhcpv6DServerInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_reference_interface_name; //type: string

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6DServerInterfaceReference


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos : public Entity
{
    public:
        ThrottleInfos();
        ~ThrottleInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ThrottleInfo; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo> > throttle_info;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo : public Entity
{
    public:
        ThrottleInfo();
        ~ThrottleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf binding_chaddr; //type: string
        YLeaf ifname; //type: string
        YLeaf state; //type: uint32
        YLeaf time_left; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo


class Dhcpv6::Nodes::Node::Server::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Dhcpv6::Nodes::Node::Server::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Interfaces::Interface> > interface;
        
}; // Dhcpv6::Nodes::Node::Server::Interfaces


class Dhcpv6::Nodes::Node::Server::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf server_vrf_name; //type: string
        YLeaf server_interface_mode; //type: BagDhcpv6DSubModeEnum
        YLeaf is_server_interface_ambiguous; //type: uint32
        YLeaf server_interface_profile_name; //type: string
        YLeaf server_interface_lease_limit_type; //type: LeaseLimitEnum
        YLeaf server_interface_lease_limits; //type: uint32
        YLeaf srg_role; //type: BagDhcpv6DIntfSrgRoleEnum
        YLeaf serg_role; //type: BagDhcpv6DIntfSergRoleEnum
        YLeaf mac_throttle; //type: boolean
        YLeaf srg_vrf_name; //type: string
        YLeaf srgp2p; //type: boolean

}; // Dhcpv6::Nodes::Node::Server::Interfaces::Interface


class Dhcpv6::Nodes::Node::Server::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DServerStat; //type: Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat> > ipv6_dhcpv6d_server_stat;
        
}; // Dhcpv6::Nodes::Node::Server::Statistics


class Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat : public Entity
{
    public:
        Ipv6Dhcpv6DServerStat();
        ~Ipv6Dhcpv6DServerStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Statistics_; //type: Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat


class Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6DServerStat::Statistics_


class Dhcpv6::Nodes::Node::Server::BindingOptions : public Entity
{
    public:
        BindingOptions();
        ~BindingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacBindOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions
        class DuidBindOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions> duid_bind_options;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions> mac_bind_options;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions : public Entity
{
    public:
        MacBindOptions();
        ~MacBindOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacBindOption; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption> > mac_bind_option;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption : public Entity
{
    public:
        MacBindOption();
        ~MacBindOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mac_address_xr; //type: string
        YLeaf duid_xr; //type: string
        YLeaf dns_count; //type: uint8
        YLeaf opt17; //type: string
        YLeafList dns_address; //type: list of  string

}; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption


class Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions : public Entity
{
    public:
        DuidBindOptions();
        ~DuidBindOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DuidBindOption; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption> > duid_bind_option;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption : public Entity
{
    public:
        DuidBindOption();
        ~DuidBindOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duid; //type: string
        YLeaf mac_address_xr; //type: string
        YLeaf duid_xr; //type: string
        YLeaf dns_count; //type: uint8
        YLeaf opt17; //type: string
        YLeafList dns_address; //type: list of  string

}; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption


class Dhcpv6::Nodes::Node::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistics; //type: Dhcpv6::Nodes::Node::Relay::Statistics
        class Binding; //type: Dhcpv6::Nodes::Node::Relay::Binding
        class Vrfs; //type: Dhcpv6::Nodes::Node::Relay::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding> binding;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs> vrfs;
        
}; // Dhcpv6::Nodes::Node::Relay


class Dhcpv6::Nodes::Node::Relay::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Dhcpv6DRelayStat; //type: Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat> > ipv6_dhcpv6d_relay_stat;
        
}; // Dhcpv6::Nodes::Node::Relay::Statistics


class Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat : public Entity
{
    public:
        Ipv6Dhcpv6DRelayStat();
        ~Ipv6Dhcpv6DRelayStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Statistics_; //type: Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat


class Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_ : public Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6DRelayStat::Statistics_


class Dhcpv6::Nodes::Node::Relay::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Summary; //type: Dhcpv6::Nodes::Node::Relay::Binding::Summary
        class Clients; //type: Dhcpv6::Nodes::Node::Relay::Binding::Clients

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Summary> summary;
        
}; // Dhcpv6::Nodes::Node::Relay::Binding


class Dhcpv6::Nodes::Node::Relay::Binding::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Relay::Binding::Summary


class Dhcpv6::Nodes::Node::Relay::Binding::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client> > client;
        
}; // Dhcpv6::Nodes::Node::Relay::Binding::Clients


class Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client : public Entity
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

        YLeaf client_id; //type: string
        YLeaf duid; //type: string
        YLeaf client_id_xr; //type: uint32
        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string
        YLeaf vrf_name; //type: string
        YLeaf lifetime; //type: uint32
        YLeaf rem_life_time; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf next_hop_addr; //type: string
        YLeaf ia_id; //type: uint32
        YLeaf relay_profile_name; //type: string

}; // Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Relay::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf> > vrf;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf : public Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Solicit; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit
        class Advertise; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise
        class Request; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request
        class Reply; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply
        class Confirm; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm
        class Decline; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline
        class Renew; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew
        class Rebind; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind
        class Release; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release
        class Reconfig; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig
        class Inform; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform
        class RelayForward; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward
        class RelayReply; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply
        class LeaseQuery; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery
        class LeaseQueryReply; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply
        class LeaseQueryDone; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone
        class LeaseQueryData; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData

        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit> solicit;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit : public Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm : public Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline : public Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew : public Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind : public Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release : public Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig : public Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform : public Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward : public Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply : public Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery : public Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply : public Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone : public Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData : public Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf transmitted_packets; //type: uint64
        YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData

class LeaseLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf interface;
        static const Enum::YLeaf circuit_id;
        static const Enum::YLeaf remote_id;

};

class BagDhcpv6DSubModeEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf server;
        static const Enum::YLeaf proxy;

};

class BagDhcpv6DFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf server_initializing;
        static const Enum::YLeaf server_waiting_dpm;
        static const Enum::YLeaf server_waiting_daps;
        static const Enum::YLeaf server_waiting_client;
        static const Enum::YLeaf server_waiting_subscriber;
        static const Enum::YLeaf server_waiting_rib;
        static const Enum::YLeaf server_bound_client;
        static const Enum::YLeaf proxy_initializing;
        static const Enum::YLeaf proxy_waiting_dpm;
        static const Enum::YLeaf proxy_waiting_daps;
        static const Enum::YLeaf proxy_waiting_client_server;
        static const Enum::YLeaf proxy_waiting_subscriber;
        static const Enum::YLeaf proxy_waiting_rib;
        static const Enum::YLeaf proxy_bound_client;

};

class BagDhcpv6DIntfSrgRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class Dhcpv6IssuVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf version1;
        static const Enum::YLeaf version2;

};

class BagDhcpv6DIaIdEnum : public Enum
{
    public:
        static const Enum::YLeaf iana;
        static const Enum::YLeaf iapd;
        static const Enum::YLeaf iata;

};

class Dhcpv6IssuRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf role_primary;
        static const Enum::YLeaf role_secondary;

};

class BagDhcpv6DIntfSergRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class DhcpIssuPhaseEnum : public Enum
{
    public:
        static const Enum::YLeaf phase_not_started;
        static const Enum::YLeaf phase_load;
        static const Enum::YLeaf phase_run;
        static const Enum::YLeaf phase_completed;
        static const Enum::YLeaf phase_aborted;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_ */

