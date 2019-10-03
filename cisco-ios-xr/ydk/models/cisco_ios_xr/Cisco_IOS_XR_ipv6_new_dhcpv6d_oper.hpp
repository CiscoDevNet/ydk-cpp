#ifndef _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_
#define _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_new_dhcpv6d_oper {

class Dhcpv6 : public ydk::Entity
{
    public:
        Dhcpv6();
        ~Dhcpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class IssuStatus; //type: Dhcpv6::IssuStatus
        class Nodes; //type: Dhcpv6::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::IssuStatus> issu_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes> nodes;
        
}; // Dhcpv6


class Dhcpv6::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

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

        ydk::YLeaf process_start_time; //type: uint64
        ydk::YLeaf issu_sync_complete_time; //type: uint64
        ydk::YLeaf issu_sync_start_time; //type: uint64
        ydk::YLeaf issu_ready_time; //type: uint64
        ydk::YLeaf big_bang_time; //type: uint64
        ydk::YLeaf primary_role_time; //type: uint64
        ydk::YLeaf issu_ready_issu_mgr_connection; //type: boolean
        ydk::YLeaf role; //type: Dhcpv6IssuRole
        ydk::YLeaf phase; //type: DhcpIssuPhase
        ydk::YLeaf version; //type: Dhcpv6IssuVersion

}; // Dhcpv6::IssuStatus


class Dhcpv6::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Dhcpv6::Nodes::Node

        ydk::YList node;
        
}; // Dhcpv6::Nodes


class Dhcpv6::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Proxy; //type: Dhcpv6::Nodes::Node::Proxy
        class Base; //type: Dhcpv6::Nodes::Node::Base
        class Server; //type: Dhcpv6::Nodes::Node::Server
        class Relay; //type: Dhcpv6::Nodes::Node::Relay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy> proxy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server> server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay> relay;
        
}; // Dhcpv6::Nodes::Node


class Dhcpv6::Nodes::Node::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrfs; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs
        class Profiles; //type: Dhcpv6::Nodes::Node::Proxy::Profiles
        class DisconnectHistories; //type: Dhcpv6::Nodes::Node::Proxy::DisconnectHistories
        class Interfaces; //type: Dhcpv6::Nodes::Node::Proxy::Interfaces
        class Statistics; //type: Dhcpv6::Nodes::Node::Proxy::Statistics
        class Binding; //type: Dhcpv6::Nodes::Node::Proxy::Binding

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::DisconnectHistories> disconnect_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding> binding;
        
}; // Dhcpv6::Nodes::Node::Proxy


class Dhcpv6::Nodes::Node::Proxy::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf : public ydk::Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit> solicit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        
}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit : public ydk::Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm : public ydk::Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew : public ydk::Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind : public ydk::Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig : public ydk::Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward : public ydk::Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply : public ydk::Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply : public ydk::Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone : public ydk::Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData : public ydk::Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Vrfs::Vrf::Statistics::LeaseQueryData


class Dhcpv6::Nodes::Node::Proxy::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile

        ydk::YList profile;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        class ThrottleInfos; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos
        class ProxyClasses; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses
        class Info; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos> throttle_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses> proxy_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info> info;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos : public ydk::Entity
{
    public:
        ThrottleInfos();
        ~ThrottleInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThrottleInfo; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo

        ydk::YList throttle_info;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo : public ydk::Entity
{
    public:
        ThrottleInfo();
        ~ThrottleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf binding_chaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf time_left; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ThrottleInfos::ThrottleInfo


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses : public ydk::Entity
{
    public:
        ProxyClasses();
        ~ProxyClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProxyClass; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses::ProxyClass

        ydk::YList proxy_class;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses::ProxyClass : public ydk::Entity
{
    public:
        ProxyClass();
        ~ProxyClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeafList profile_helper_address; //type: list of  string
        ydk::YLeafList vrf_name; //type: list of  string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::ProxyClasses::ProxyClass


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf profile_link_address; //type: string
        ydk::YLeaf proxy_profile_linkaddress_from_ra_enable; //type: boolean
        ydk::YLeafList profile_helper_address; //type: list of  string
        ydk::YLeafList vrf_name; //type: list of  string
        ydk::YLeafList interface_name; //type: list of  string
        class InterfaceIdReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences
        class VrfReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences
        class InterfaceReferences; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences> interface_id_references;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences> vrf_references;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences> interface_references;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences : public ydk::Entity
{
    public:
        InterfaceIdReferences();
        ~InterfaceIdReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dProxyIidReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6dProxyIidReference

        ydk::YList ipv6_dhcpv6d_proxy_iid_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6dProxyIidReference : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dProxyIidReference();
        ~Ipv6Dhcpv6dProxyIidReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_iid_interface_name; //type: string
        ydk::YLeaf proxy_interface_id; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceIdReferences::Ipv6Dhcpv6dProxyIidReference


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences : public ydk::Entity
{
    public:
        VrfReferences();
        ~VrfReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dProxyVrfReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6dProxyVrfReference

        ydk::YList ipv6_dhcpv6d_proxy_vrf_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6dProxyVrfReference : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dProxyVrfReference();
        ~Ipv6Dhcpv6dProxyVrfReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_reference_vrf_name; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::VrfReferences::Ipv6Dhcpv6dProxyVrfReference


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences : public ydk::Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dProxyInterfaceReference; //type: Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dProxyInterfaceReference

        ydk::YList ipv6_dhcpv6d_proxy_interface_reference;
        
}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences


class Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dProxyInterfaceReference : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dProxyInterfaceReference();
        ~Ipv6Dhcpv6dProxyInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_reference_interface_name; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dProxyInterfaceReference


class Dhcpv6::Nodes::Node::Proxy::DisconnectHistories : public ydk::Entity
{
    public:
        DisconnectHistories();
        ~DisconnectHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisconnectHistory; //type: Dhcpv6::Nodes::Node::Proxy::DisconnectHistories::DisconnectHistory

        ydk::YList disconnect_history;
        
}; // Dhcpv6::Nodes::Node::Proxy::DisconnectHistories


class Dhcpv6::Nodes::Node::Proxy::DisconnectHistories::DisconnectHistory : public ydk::Entity
{
    public:
        DisconnectHistory();
        ~DisconnectHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf session_start_time_epoch; //type: uint64
        ydk::YLeaf session_end_time_epoch; //type: uint64
        ydk::YLeaf disc_reason; //type: string
        ydk::YLeaf sub_label; //type: uint32
        ydk::YLeaf duid; //type: string
        ydk::YLeaf ia_type; //type: string
        ydk::YLeaf ia_id; //type: uint32
        ydk::YLeaf mac_address; //type: string

}; // Dhcpv6::Nodes::Node::Proxy::DisconnectHistories::DisconnectHistory


class Dhcpv6::Nodes::Node::Proxy::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface

        ydk::YList interface;
        
}; // Dhcpv6::Nodes::Node::Proxy::Interfaces


class Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf proxy_vrf_name; //type: string
        ydk::YLeaf proxy_interface_mode; //type: BagDhcpv6dSubMode
        ydk::YLeaf is_proxy_interface_ambiguous; //type: uint32
        ydk::YLeaf proxy_interface_profile_name; //type: string
        ydk::YLeaf proxy_interface_lease_limit_type; //type: LeaseLimit
        ydk::YLeaf proxy_interface_lease_limits; //type: uint32
        ydk::YLeaf srg_role; //type: BagDhcpv6dIntfSrgRole
        ydk::YLeaf serg_role; //type: BagDhcpv6dIntfSergRole
        ydk::YLeaf mac_throttle; //type: boolean
        ydk::YLeaf srg_vrf_name; //type: string
        ydk::YLeaf srgp2p; //type: boolean

}; // Dhcpv6::Nodes::Node::Proxy::Interfaces::Interface


class Dhcpv6::Nodes::Node::Proxy::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dProxyStat; //type: Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat

        ydk::YList ipv6_dhcpv6d_proxy_stat;
        
}; // Dhcpv6::Nodes::Node::Proxy::Statistics


class Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dProxyStat();
        ~Ipv6Dhcpv6dProxyStat();

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
        class Statistics_; //type: Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat


class Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Proxy::Statistics::Ipv6Dhcpv6dProxyStat::Statistics_


class Dhcpv6::Nodes::Node::Proxy::Binding : public ydk::Entity
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

        class Clients; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients
        class Summary; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary> summary;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client

        ydk::YList client;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: string
        ydk::YLeaf duid; //type: string
        ydk::YLeaf client_flag; //type: uint32
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ia_id_p_ds; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf access_vrf_name; //type: string
        ydk::YLeaf proxy_binding_tags; //type: uint8
        ydk::YLeaf proxy_binding_outer_tag; //type: uint32
        ydk::YLeaf proxy_binding_inner_tag; //type: uint32
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf rx_remote_id; //type: string
        ydk::YLeaf tx_remote_id; //type: string
        ydk::YLeaf rx_interface_id; //type: string
        ydk::YLeaf tx_interface_id; //type: string
        ydk::YLeaf server_ipv6_address; //type: string
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf framed_ipv6_prefix; //type: string
        ydk::YLeaf framed_prefix_length; //type: uint8
        ydk::YLeaf is_nak_next_renew; //type: boolean
        ydk::YLeaf srg_state; //type: uint32
        ydk::YLeaf srg_intf_role; //type: uint32
        ydk::YLeaf srgp2p; //type: boolean
        ydk::YLeaf srg_vrf_name; //type: string
        ydk::YLeaf serg_state; //type: uint32
        ydk::YLeaf serg_intf_role; //type: uint32
        class IaIdPd; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd> ia_id_pd;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd : public ydk::Entity
{
    public:
        IaIdPd();
        ~IaIdPd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BagDhcpv6dIaIdPdInfo; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo

        ydk::YList bag_dhcpv6d_ia_id_pd_info;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo : public ydk::Entity
{
    public:
        BagDhcpv6dIaIdPdInfo();
        ~BagDhcpv6dIaIdPdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ia_type; //type: BagDhcpv6dIaId
        ydk::YLeaf ia_id; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf total_address; //type: uint16
        ydk::YLeaf state; //type: BagDhcpv6dFsmState
        class Addresses; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses> addresses;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BagDhcpv6dAddrAttrb; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb

        ydk::YList bag_dhcpv6d_addr_attrb;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses


class Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb : public ydk::Entity
{
    public:
        BagDhcpv6dAddrAttrb();
        ~BagDhcpv6dAddrAttrb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf remaining_lease_time; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clients; //type: uint32
        class Iana; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana
        class Iapd; //type: Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana> iana;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd> iapd;
        
}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana : public ydk::Entity
{
    public:
        Iana();
        ~Iana();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf dpm_waiting_clients; //type: uint32
        ydk::YLeaf daps_waiting_clients; //type: uint32
        ydk::YLeaf msg_waiting_clients; //type: uint32
        ydk::YLeaf iedge_waiting_clients; //type: uint32
        ydk::YLeaf rib_waiting_clients; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iana


class Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd : public ydk::Entity
{
    public:
        Iapd();
        ~Iapd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf dpm_waiting_clients; //type: uint32
        ydk::YLeaf daps_waiting_clients; //type: uint32
        ydk::YLeaf msg_waiting_clients; //type: uint32
        ydk::YLeaf iedge_waiting_clients; //type: uint32
        ydk::YLeaf rib_waiting_clients; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Proxy::Binding::Summary::Iapd


class Dhcpv6::Nodes::Node::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Dhcpv6::Nodes::Node::Base::Database
        class AddrBindings; //type: Dhcpv6::Nodes::Node::Base::AddrBindings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Base::AddrBindings> addr_bindings;
        
}; // Dhcpv6::Nodes::Node::Base


class Dhcpv6::Nodes::Node::Base::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf full_file_write_interval; //type: uint32
        ydk::YLeaf last_full_write_file_name; //type: string
        ydk::YLeaf last_full_write_time; //type: uint32
        ydk::YLeaf full_file_write_count; //type: uint32
        ydk::YLeaf failed_full_file_write_count; //type: uint32
        ydk::YLeaf full_file_record_count; //type: uint32
        ydk::YLeaf last_full_file_write_error_timestamp; //type: uint32
        ydk::YLeaf incremental_file_write_interval; //type: uint32
        ydk::YLeaf last_incremental_write_file_name; //type: string
        ydk::YLeaf last_incremental_write_time; //type: uint32
        ydk::YLeaf incremental_file_write_count; //type: uint32
        ydk::YLeaf failed_incremental_file_write_count; //type: uint32
        ydk::YLeaf incremental_file_record_count; //type: uint32
        ydk::YLeaf last_incremental_file_write_error_timestamp; //type: uint32

}; // Dhcpv6::Nodes::Node::Base::Database


class Dhcpv6::Nodes::Node::Base::AddrBindings : public ydk::Entity
{
    public:
        AddrBindings();
        ~AddrBindings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrBinding; //type: Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding

        ydk::YList addr_binding;
        
}; // Dhcpv6::Nodes::Node::Base::AddrBindings


class Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding : public ydk::Entity
{
    public:
        AddrBinding();
        ~AddrBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr_string; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf server_vrf_name; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf server_ipv6_address; //type: string
        ydk::YLeaf reply_server_ipv6_address; //type: string
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf remaining_lease_time; //type: uint32
        ydk::YLeaf state; //type: BagDhcpv6dFsmState
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf access_vrf_name; //type: string
        ydk::YLeaf base_binding_tags; //type: uint8
        ydk::YLeaf base_binding_outer_tag; //type: uint32
        ydk::YLeaf base_binding_inner_tag; //type: uint32
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf is_nak_next_renew; //type: boolean
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf old_subscriber_label; //type: uint32
        ydk::YLeaf rx_client_duid; //type: string
        ydk::YLeaf tx_client_uid; //type: string
        ydk::YLeaf rx_remote_id; //type: string
        ydk::YLeaf tx_remote_id; //type: string
        ydk::YLeaf rx_interface_id; //type: string
        ydk::YLeaf tx_interface_id; //type: string

}; // Dhcpv6::Nodes::Node::Base::AddrBindings::AddrBinding


class Dhcpv6::Nodes::Node::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisconnectHistories; //type: Dhcpv6::Nodes::Node::Server::DisconnectHistories
        class Binding; //type: Dhcpv6::Nodes::Node::Server::Binding
        class Vrfs; //type: Dhcpv6::Nodes::Node::Server::Vrfs
        class Profiles; //type: Dhcpv6::Nodes::Node::Server::Profiles
        class Interfaces; //type: Dhcpv6::Nodes::Node::Server::Interfaces
        class Statistics; //type: Dhcpv6::Nodes::Node::Server::Statistics
        class BindingOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::DisconnectHistories> disconnect_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding> binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions> binding_options;
        
}; // Dhcpv6::Nodes::Node::Server


class Dhcpv6::Nodes::Node::Server::DisconnectHistories : public ydk::Entity
{
    public:
        DisconnectHistories();
        ~DisconnectHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisconnectHistory; //type: Dhcpv6::Nodes::Node::Server::DisconnectHistories::DisconnectHistory

        ydk::YList disconnect_history;
        
}; // Dhcpv6::Nodes::Node::Server::DisconnectHistories


class Dhcpv6::Nodes::Node::Server::DisconnectHistories::DisconnectHistory : public ydk::Entity
{
    public:
        DisconnectHistory();
        ~DisconnectHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: string
        ydk::YLeaf session_start_time_epoch; //type: uint64
        ydk::YLeaf session_end_time_epoch; //type: uint64
        ydk::YLeaf disc_reason; //type: string
        ydk::YLeaf sub_label; //type: uint32
        ydk::YLeaf duid; //type: string
        ydk::YLeaf ia_type; //type: string
        ydk::YLeaf ia_id; //type: uint32
        ydk::YLeaf mac_address; //type: string

}; // Dhcpv6::Nodes::Node::Server::DisconnectHistories::DisconnectHistory


class Dhcpv6::Nodes::Node::Server::Binding : public ydk::Entity
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

        class Summary; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary
        class Clients; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients> clients;
        
}; // Dhcpv6::Nodes::Node::Server::Binding


class Dhcpv6::Nodes::Node::Server::Binding::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clients; //type: uint32
        class Iana; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana
        class Iapd; //type: Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana> iana;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd> iapd;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Summary


class Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana : public ydk::Entity
{
    public:
        Iana();
        ~Iana();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf dpm_waiting_clients; //type: uint32
        ydk::YLeaf daps_waiting_clients; //type: uint32
        ydk::YLeaf request_waiting_clients; //type: uint32
        ydk::YLeaf iedge_waiting_clients; //type: uint32
        ydk::YLeaf rib_waiting_clients; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iana


class Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd : public ydk::Entity
{
    public:
        Iapd();
        ~Iapd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initializing_clients; //type: uint32
        ydk::YLeaf dpm_waiting_clients; //type: uint32
        ydk::YLeaf daps_waiting_clients; //type: uint32
        ydk::YLeaf request_waiting_clients; //type: uint32
        ydk::YLeaf iedge_waiting_clients; //type: uint32
        ydk::YLeaf rib_waiting_clients; //type: uint32
        ydk::YLeaf bound_clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Summary::Iapd


class Dhcpv6::Nodes::Node::Server::Binding::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client

        ydk::YList client;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: string
        ydk::YLeaf duid; //type: string
        ydk::YLeaf client_id_xr; //type: uint32
        ydk::YLeaf client_flag; //type: uint32
        ydk::YLeaf subscriber_label; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ia_id_p_ds; //type: uint32
        ydk::YLeaf link_local_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf access_vrf_name; //type: string
        ydk::YLeaf server_binding_tags; //type: uint8
        ydk::YLeaf server_binding_outer_tag; //type: uint32
        ydk::YLeaf server_binding_inner_tag; //type: uint32
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf framed_ipv6_prefix; //type: string
        ydk::YLeaf framed_prefix_length; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf rx_remote_id; //type: string
        ydk::YLeaf rx_interface_id; //type: string
        ydk::YLeaf prefix_pool_name; //type: string
        ydk::YLeaf address_pool_name; //type: string
        ydk::YLeaf dns_server_count; //type: uint32
        ydk::YLeaf is_nak_next_renew; //type: boolean
        ydk::YLeaf srg_state; //type: uint32
        ydk::YLeaf srg_intf_role; //type: uint32
        ydk::YLeaf srgp2p; //type: boolean
        ydk::YLeaf srg_vrf_name; //type: string
        ydk::YLeaf sesrg_state; //type: uint32
        ydk::YLeaf serg_intf_role; //type: uint32
        class IaIdPd; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd> ia_id_pd;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd : public ydk::Entity
{
    public:
        IaIdPd();
        ~IaIdPd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BagDhcpv6dIaIdPdInfo; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo

        ydk::YList bag_dhcpv6d_ia_id_pd_info;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo : public ydk::Entity
{
    public:
        BagDhcpv6dIaIdPdInfo();
        ~BagDhcpv6dIaIdPdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ia_type; //type: BagDhcpv6dIaId
        ydk::YLeaf ia_id; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf total_address; //type: uint16
        ydk::YLeaf state; //type: BagDhcpv6dFsmState
        class Addresses; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses> addresses;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BagDhcpv6dAddrAttrb; //type: Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb

        ydk::YList bag_dhcpv6d_addr_attrb;
        
}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses


class Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb : public ydk::Entity
{
    public:
        BagDhcpv6dAddrAttrb();
        ~BagDhcpv6dAddrAttrb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf remaining_lease_time; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Binding::Clients::Client::IaIdPd::BagDhcpv6dIaIdPdInfo::Addresses::BagDhcpv6dAddrAttrb


class Dhcpv6::Nodes::Node::Server::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf : public ydk::Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit> solicit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        
}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit : public ydk::Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm : public ydk::Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew : public ydk::Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind : public ydk::Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig : public ydk::Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward : public ydk::Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply : public ydk::Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply : public ydk::Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone : public ydk::Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData : public ydk::Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Vrfs::Vrf::Statistics::LeaseQueryData


class Dhcpv6::Nodes::Node::Server::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile

        ydk::YList profile;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles


class Dhcpv6::Nodes::Node::Server::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        class Info; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info
        class ThrottleInfos; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos
        class ServerClasses; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos> throttle_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses> server_classes;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf profile_allowed_duid_type; //type: uint16
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf profile_dns; //type: uint8
        ydk::YLeaf aftr_name; //type: string
        ydk::YLeaf framed_addr_pool_name; //type: string
        ydk::YLeaf delegated_prefix_pool_name; //type: string
        ydk::YLeaf rapid_commit; //type: boolean
        ydk::YLeafList profile_dns_address; //type: list of  string
        class Lease; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease
        class InterfaceReferences; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease> lease;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences> interface_references;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf time; //type: string

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::Lease


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences : public ydk::Entity
{
    public:
        InterfaceReferences();
        ~InterfaceReferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dServerInterfaceReference; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dServerInterfaceReference

        ydk::YList ipv6_dhcpv6d_server_interface_reference;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dServerInterfaceReference : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dServerInterfaceReference();
        ~Ipv6Dhcpv6dServerInterfaceReference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_reference_interface_name; //type: string

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::Info::InterfaceReferences::Ipv6Dhcpv6dServerInterfaceReference


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos : public ydk::Entity
{
    public:
        ThrottleInfos();
        ~ThrottleInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThrottleInfo; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo

        ydk::YList throttle_info;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo : public ydk::Entity
{
    public:
        ThrottleInfo();
        ~ThrottleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf binding_chaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf time_left; //type: uint32

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ThrottleInfos::ThrottleInfo


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses : public ydk::Entity
{
    public:
        ServerClasses();
        ~ServerClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerClass; //type: Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses::ServerClass

        ydk::YList server_class;
        
}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses


class Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses::ServerClass : public ydk::Entity
{
    public:
        ServerClass();
        ~ServerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf profile_dns; //type: uint8
        ydk::YLeaf framed_addr_pool_name; //type: string
        ydk::YLeaf delegated_prefix_pool_name; //type: string
        ydk::YLeafList profile_dns_address; //type: list of  string

}; // Dhcpv6::Nodes::Node::Server::Profiles::Profile::ServerClasses::ServerClass


class Dhcpv6::Nodes::Node::Server::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Dhcpv6::Nodes::Node::Server::Interfaces::Interface

        ydk::YList interface;
        
}; // Dhcpv6::Nodes::Node::Server::Interfaces


class Dhcpv6::Nodes::Node::Server::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf server_vrf_name; //type: string
        ydk::YLeaf server_interface_mode; //type: BagDhcpv6dSubMode
        ydk::YLeaf is_server_interface_ambiguous; //type: uint32
        ydk::YLeaf server_interface_profile_name; //type: string
        ydk::YLeaf server_interface_lease_limit_type; //type: LeaseLimit
        ydk::YLeaf server_interface_lease_limits; //type: uint32
        ydk::YLeaf srg_role; //type: BagDhcpv6dIntfSrgRole
        ydk::YLeaf serg_role; //type: BagDhcpv6dIntfSergRole
        ydk::YLeaf mac_throttle; //type: boolean
        ydk::YLeaf srg_vrf_name; //type: string
        ydk::YLeaf srgp2p; //type: boolean

}; // Dhcpv6::Nodes::Node::Server::Interfaces::Interface


class Dhcpv6::Nodes::Node::Server::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dServerStat; //type: Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat

        ydk::YList ipv6_dhcpv6d_server_stat;
        
}; // Dhcpv6::Nodes::Node::Server::Statistics


class Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dServerStat();
        ~Ipv6Dhcpv6dServerStat();

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
        class Statistics_; //type: Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat


class Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Server::Statistics::Ipv6Dhcpv6dServerStat::Statistics_


class Dhcpv6::Nodes::Node::Server::BindingOptions : public ydk::Entity
{
    public:
        BindingOptions();
        ~BindingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacBindOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions
        class DuidBindOptions; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions> mac_bind_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions> duid_bind_options;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions : public ydk::Entity
{
    public:
        MacBindOptions();
        ~MacBindOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacBindOption; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption

        ydk::YList mac_bind_option;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption : public ydk::Entity
{
    public:
        MacBindOption();
        ~MacBindOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf duid_xr; //type: string
        ydk::YLeaf dns_count; //type: uint8
        ydk::YLeaf opt17; //type: string
        ydk::YLeafList dns_address; //type: list of  string

}; // Dhcpv6::Nodes::Node::Server::BindingOptions::MacBindOptions::MacBindOption


class Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions : public ydk::Entity
{
    public:
        DuidBindOptions();
        ~DuidBindOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DuidBindOption; //type: Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption

        ydk::YList duid_bind_option;
        
}; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions


class Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption : public ydk::Entity
{
    public:
        DuidBindOption();
        ~DuidBindOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duid; //type: string
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf duid_xr; //type: string
        ydk::YLeaf dns_count; //type: uint8
        ydk::YLeaf opt17; //type: string
        ydk::YLeafList dns_address; //type: list of  string

}; // Dhcpv6::Nodes::Node::Server::BindingOptions::DuidBindOptions::DuidBindOption


class Dhcpv6::Nodes::Node::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistics; //type: Dhcpv6::Nodes::Node::Relay::Statistics
        class Binding; //type: Dhcpv6::Nodes::Node::Relay::Binding
        class Vrfs; //type: Dhcpv6::Nodes::Node::Relay::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding> binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs> vrfs;
        
}; // Dhcpv6::Nodes::Node::Relay


class Dhcpv6::Nodes::Node::Relay::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Dhcpv6dRelayStat; //type: Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat

        ydk::YList ipv6_dhcpv6d_relay_stat;
        
}; // Dhcpv6::Nodes::Node::Relay::Statistics


class Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat : public ydk::Entity
{
    public:
        Ipv6Dhcpv6dRelayStat();
        ~Ipv6Dhcpv6dRelayStat();

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
        class Statistics_; //type: Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat::Statistics_> statistics;
        
}; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat


class Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Statistics::Ipv6Dhcpv6dRelayStat::Statistics_


class Dhcpv6::Nodes::Node::Relay::Binding : public ydk::Entity
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

        class Summary; //type: Dhcpv6::Nodes::Node::Relay::Binding::Summary
        class Clients; //type: Dhcpv6::Nodes::Node::Relay::Binding::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Binding::Clients> clients;
        
}; // Dhcpv6::Nodes::Node::Relay::Binding


class Dhcpv6::Nodes::Node::Relay::Binding::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clients; //type: uint32

}; // Dhcpv6::Nodes::Node::Relay::Binding::Summary


class Dhcpv6::Nodes::Node::Relay::Binding::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client

        ydk::YList client;
        
}; // Dhcpv6::Nodes::Node::Relay::Binding::Clients


class Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id; //type: string
        ydk::YLeaf duid; //type: string
        ydk::YLeaf client_id_xr; //type: uint32
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf rem_life_time; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf next_hop_addr; //type: string
        ydk::YLeaf ia_id; //type: uint32
        ydk::YLeaf relay_profile_name; //type: string

}; // Dhcpv6::Nodes::Node::Relay::Binding::Clients::Client


class Dhcpv6::Nodes::Node::Relay::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf : public ydk::Entity
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
        class Statistics; //type: Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics> statistics;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit> solicit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise> advertise;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply> reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm> confirm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline> decline;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew> renew;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind> rebind;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release> release;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig> reconfig;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform> inform;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward> relay_forward;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply> relay_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery> lease_query;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply> lease_query_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone> lease_query_done;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData> lease_query_data;
        
}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit : public ydk::Entity
{
    public:
        Solicit();
        ~Solicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Solicit


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Advertise


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Request


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm : public ydk::Entity
{
    public:
        Confirm();
        ~Confirm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Confirm


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline : public ydk::Entity
{
    public:
        Decline();
        ~Decline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Decline


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew : public ydk::Entity
{
    public:
        Renew();
        ~Renew();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Renew


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind : public ydk::Entity
{
    public:
        Rebind();
        ~Rebind();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Rebind


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release : public ydk::Entity
{
    public:
        Release();
        ~Release();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Release


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig : public ydk::Entity
{
    public:
        Reconfig();
        ~Reconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Reconfig


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform : public ydk::Entity
{
    public:
        Inform();
        ~Inform();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::Inform


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward : public ydk::Entity
{
    public:
        RelayForward();
        ~RelayForward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayForward


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply : public ydk::Entity
{
    public:
        RelayReply();
        ~RelayReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::RelayReply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery : public ydk::Entity
{
    public:
        LeaseQuery();
        ~LeaseQuery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQuery


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply : public ydk::Entity
{
    public:
        LeaseQueryReply();
        ~LeaseQueryReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryReply


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone : public ydk::Entity
{
    public:
        LeaseQueryDone();
        ~LeaseQueryDone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryDone


class Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData : public ydk::Entity
{
    public:
        LeaseQueryData();
        ~LeaseQueryData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_packets; //type: uint64
        ydk::YLeaf transmitted_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64

}; // Dhcpv6::Nodes::Node::Relay::Vrfs::Vrf::Statistics::LeaseQueryData

class LeaseLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf circuit_id;
        static const ydk::Enum::YLeaf remote_id;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "interface") return 1;
            if (name == "circuit-id") return 2;
            if (name == "remote-id") return 3;
            return -1;
        }
};

class BagDhcpv6dSubMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf proxy;

        static int get_enum_value(const std::string & name) {
            if (name == "base") return 0;
            if (name == "server") return 1;
            if (name == "proxy") return 2;
            return -1;
        }
};

class BagDhcpv6dFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf server_initializing;
        static const ydk::Enum::YLeaf server_waiting_dpm;
        static const ydk::Enum::YLeaf server_waiting_daps;
        static const ydk::Enum::YLeaf server_waiting_client;
        static const ydk::Enum::YLeaf server_waiting_subscriber;
        static const ydk::Enum::YLeaf server_waiting_rib;
        static const ydk::Enum::YLeaf server_bound_client;
        static const ydk::Enum::YLeaf proxy_initializing;
        static const ydk::Enum::YLeaf proxy_waiting_dpm;
        static const ydk::Enum::YLeaf proxy_waiting_daps;
        static const ydk::Enum::YLeaf proxy_waiting_client_server;
        static const ydk::Enum::YLeaf proxy_waiting_subscriber;
        static const ydk::Enum::YLeaf proxy_waiting_rib;
        static const ydk::Enum::YLeaf proxy_bound_client;

        static int get_enum_value(const std::string & name) {
            if (name == "server-initializing") return 0;
            if (name == "server-waiting-dpm") return 1;
            if (name == "server-waiting-daps") return 2;
            if (name == "server-waiting-client") return 3;
            if (name == "server-waiting-subscriber") return 4;
            if (name == "server-waiting-rib") return 5;
            if (name == "server-bound-client") return 6;
            if (name == "proxy-initializing") return 10;
            if (name == "proxy-waiting-dpm") return 11;
            if (name == "proxy-waiting-daps") return 12;
            if (name == "proxy-waiting-client-server") return 13;
            if (name == "proxy-waiting-subscriber") return 14;
            if (name == "proxy-waiting-rib") return 15;
            if (name == "proxy-bound-client") return 16;
            return -1;
        }
};

class BagDhcpv6dIntfSrgRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "master") return 1;
            if (name == "slave") return 2;
            return -1;
        }
};

class Dhcpv6IssuVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;
        static const ydk::Enum::YLeaf version2;

        static int get_enum_value(const std::string & name) {
            if (name == "version1") return 1;
            if (name == "version2") return 2;
            return -1;
        }
};

class BagDhcpv6dIaId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iana;
        static const ydk::Enum::YLeaf iapd;
        static const ydk::Enum::YLeaf iata;

        static int get_enum_value(const std::string & name) {
            if (name == "iana") return 0;
            if (name == "iapd") return 1;
            if (name == "iata") return 2;
            return -1;
        }
};

class Dhcpv6IssuRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf role_primary;
        static const ydk::Enum::YLeaf role_secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "role-primary") return 0;
            if (name == "role-secondary") return 1;
            return -1;
        }
};

class BagDhcpv6dIntfSergRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "master") return 1;
            if (name == "slave") return 2;
            return -1;
        }
};

class DhcpIssuPhase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phase_not_started;
        static const ydk::Enum::YLeaf phase_load;
        static const ydk::Enum::YLeaf phase_run;
        static const ydk::Enum::YLeaf phase_completed;
        static const ydk::Enum::YLeaf phase_aborted;

        static int get_enum_value(const std::string & name) {
            if (name == "phase-not-started") return 0;
            if (name == "phase-load") return 1;
            if (name == "phase-run") return 2;
            if (name == "phase-completed") return 3;
            if (name == "phase-aborted") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV6_NEW_DHCPV6D_OPER_ */

