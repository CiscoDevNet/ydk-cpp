#ifndef _CISCO_IOS_XR_DOT1X_OPER_
#define _CISCO_IOS_XR_DOT1X_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dot1x_oper {

class Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

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

        class Statistics; //type: Dot1X::Statistics
        class Nodes; //type: Dot1X::Nodes
        class Session; //type: Dot1X::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session> session;
        
}; // Dot1X


class Dot1X::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class InterfaceStatistics; //type: Dot1X::Statistics::InterfaceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics::InterfaceStatistics> interface_statistics;
        
}; // Dot1X::Statistics


class Dot1X::Statistics::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

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

        class InterfaceStatistic; //type: Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic> > interface_statistic;
        
}; // Dot1X::Statistics::InterfaceStatistics


class Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic : public ydk::Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

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
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pae; //type: string
        class Idb; //type: Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb
        class Auth; //type: Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth
        class Supp; //type: Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb> idb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth> auth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp> supp;
        
}; // Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic


class Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb : public ydk::Entity
{
    public:
        Idb();
        ~Idb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_total; //type: uint32
        ydk::YLeaf no_rx_on_intf_down; //type: uint32

}; // Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Idb


class Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_start; //type: uint32
        ydk::YLeaf rx_logoff; //type: uint32
        ydk::YLeaf rx_resp; //type: uint32
        ydk::YLeaf rx_resp_id; //type: uint32
        ydk::YLeaf rx_invalid; //type: uint32
        ydk::YLeaf rx_len_err; //type: uint32
        ydk::YLeaf rx_my_mac_err; //type: uint32
        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_req; //type: uint32
        ydk::YLeaf tx_reqid; //type: uint32
        ydk::YLeaf tx_total; //type: uint32

}; // Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Auth


class Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp : public ydk::Entity
{
    public:
        Supp();
        ~Supp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_req; //type: uint32
        ydk::YLeaf rx_invalid; //type: uint32
        ydk::YLeaf rx_len_err; //type: uint32
        ydk::YLeaf rx_my_mac_err; //type: uint32
        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_start; //type: uint32
        ydk::YLeaf tx_logoff; //type: uint32
        ydk::YLeaf tx_resp; //type: uint32
        ydk::YLeaf tx_total; //type: uint32

}; // Dot1X::Statistics::InterfaceStatistics::InterfaceStatistic::Supp


class Dot1X::Nodes : public ydk::Entity
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

        class Node; //type: Dot1X::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node> > node;
        
}; // Dot1X::Nodes


class Dot1X::Nodes::Node : public ydk::Entity
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
        class Dot1XDefaults; //type: Dot1X::Nodes::Node::Dot1XDefaults
        class Statistics; //type: Dot1X::Nodes::Node::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Dot1XDefaults> dot1x_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics> statistics;
        
}; // Dot1X::Nodes::Node


class Dot1X::Nodes::Node::Dot1XDefaults : public ydk::Entity
{
    public:
        Dot1XDefaults();
        ~Dot1XDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint32
        class AuthTimers; //type: Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers
        class SuppTimers; //type: Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers> auth_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers> supp_timers;
        
}; // Dot1X::Nodes::Node::Dot1XDefaults


class Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers : public ydk::Entity
{
    public:
        AuthTimers();
        ~AuthTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quiet_period; //type: uint32
        ydk::YLeaf tx_period; //type: uint32
        ydk::YLeaf max_reauth_req; //type: uint32
        ydk::YLeaf supp_timeout; //type: uint32
        ydk::YLeaf max_req; //type: uint32
        ydk::YLeaf reauth_period; //type: uint32

}; // Dot1X::Nodes::Node::Dot1XDefaults::AuthTimers


class Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers : public ydk::Entity
{
    public:
        SuppTimers();
        ~SuppTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_period; //type: uint32
        ydk::YLeaf held_period; //type: uint32
        ydk::YLeaf start_period; //type: uint32
        ydk::YLeaf max_start; //type: uint32

}; // Dot1X::Nodes::Node::Dot1XDefaults::SuppTimers


class Dot1X::Nodes::Node::Statistics : public ydk::Entity
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

        class GlStats; //type: Dot1X::Nodes::Node::Statistics::GlStats
        class IfStats; //type: Dot1X::Nodes::Node::Statistics::IfStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics::GlStats> gl_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics::IfStats> > if_stats;
        
}; // Dot1X::Nodes::Node::Statistics


class Dot1X::Nodes::Node::Statistics::GlStats : public ydk::Entity
{
    public:
        GlStats();
        ~GlStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_total; //type: uint32
        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf rx_no_idb; //type: uint32

}; // Dot1X::Nodes::Node::Statistics::GlStats


class Dot1X::Nodes::Node::Statistics::IfStats : public ydk::Entity
{
    public:
        IfStats();
        ~IfStats();

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
        ydk::YLeaf pae; //type: string
        class Idb; //type: Dot1X::Nodes::Node::Statistics::IfStats::Idb
        class Auth; //type: Dot1X::Nodes::Node::Statistics::IfStats::Auth
        class Supp; //type: Dot1X::Nodes::Node::Statistics::IfStats::Supp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics::IfStats::Idb> idb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics::IfStats::Auth> auth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Nodes::Node::Statistics::IfStats::Supp> supp;
        
}; // Dot1X::Nodes::Node::Statistics::IfStats


class Dot1X::Nodes::Node::Statistics::IfStats::Idb : public ydk::Entity
{
    public:
        Idb();
        ~Idb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_total; //type: uint32
        ydk::YLeaf no_rx_on_intf_down; //type: uint32

}; // Dot1X::Nodes::Node::Statistics::IfStats::Idb


class Dot1X::Nodes::Node::Statistics::IfStats::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_start; //type: uint32
        ydk::YLeaf rx_logoff; //type: uint32
        ydk::YLeaf rx_resp; //type: uint32
        ydk::YLeaf rx_resp_id; //type: uint32
        ydk::YLeaf rx_invalid; //type: uint32
        ydk::YLeaf rx_len_err; //type: uint32
        ydk::YLeaf rx_my_mac_err; //type: uint32
        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_req; //type: uint32
        ydk::YLeaf tx_reqid; //type: uint32
        ydk::YLeaf tx_total; //type: uint32

}; // Dot1X::Nodes::Node::Statistics::IfStats::Auth


class Dot1X::Nodes::Node::Statistics::IfStats::Supp : public ydk::Entity
{
    public:
        Supp();
        ~Supp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_req; //type: uint32
        ydk::YLeaf rx_invalid; //type: uint32
        ydk::YLeaf rx_len_err; //type: uint32
        ydk::YLeaf rx_my_mac_err; //type: uint32
        ydk::YLeaf rx_total; //type: uint32
        ydk::YLeaf tx_start; //type: uint32
        ydk::YLeaf tx_logoff; //type: uint32
        ydk::YLeaf tx_resp; //type: uint32
        ydk::YLeaf tx_total; //type: uint32

}; // Dot1X::Nodes::Node::Statistics::IfStats::Supp


class Dot1X::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class InterfaceSessions; //type: Dot1X::Session::InterfaceSessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions> interface_sessions;
        
}; // Dot1X::Session


class Dot1X::Session::InterfaceSessions : public ydk::Entity
{
    public:
        InterfaceSessions();
        ~InterfaceSessions();

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

        class InterfaceSession; //type: Dot1X::Session::InterfaceSessions::InterfaceSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession> > interface_session;
        
}; // Dot1X::Session::InterfaceSessions


class Dot1X::Session::InterfaceSessions::InterfaceSession : public ydk::Entity
{
    public:
        InterfaceSession();
        ~InterfaceSession();

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
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_sname; //type: string
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf ethertype; //type: string
        class IntfInfo; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo
        class MkaStatusInfo; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo> intf_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo> mka_status_info;
        
}; // Dot1X::Session::InterfaceSessions::InterfaceSession


class Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo : public ydk::Entity
{
    public:
        IntfInfo();
        ~IntfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pae; //type: string
        ydk::YLeaf port_status; //type: string
        ydk::YLeaf dot1x_profile; //type: string
        class AuthInfo; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo
        class SuppInfo; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo> auth_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo> supp_info;
        
}; // Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo


class Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo : public ydk::Entity
{
    public:
        AuthInfo();
        ~AuthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauth; //type: string
        ydk::YLeaf config_dependency; //type: string
        class Client; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client> > client;
        
}; // Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo


class Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client : public ydk::Entity
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

        ydk::YLeaf mac; //type: string
        ydk::YLeaf auth_sm_state; //type: string
        ydk::YLeaf auth_bend_sm_state; //type: string
        ydk::YLeaf time_to_next_reauth; //type: string
        ydk::YLeaf last_auth_time; //type: string

}; // Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::AuthInfo::Client


class Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo : public ydk::Entity
{
    public:
        SuppInfo();
        ~SuppInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap_profile; //type: string
        ydk::YLeaf config_dependency; //type: string
        class Client; //type: Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_oper::Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client> > client;
        
}; // Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo


class Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client : public ydk::Entity
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

        ydk::YLeaf mac; //type: string
        ydk::YLeaf eap_method; //type: string
        ydk::YLeaf last_auth_time; //type: string
        ydk::YLeaf auth_sm_state; //type: string
        ydk::YLeaf auth_bend_sm_state; //type: string

}; // Dot1X::Session::InterfaceSessions::InterfaceSession::IntfInfo::SuppInfo::Client


class Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo : public ydk::Entity
{
    public:
        MkaStatusInfo();
        ~MkaStatusInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tie_break_role; //type: string
        ydk::YLeaf eap_based_macsec; //type: string
        ydk::YLeaf mka_start_time; //type: string
        ydk::YLeaf mka_stop_time; //type: string
        ydk::YLeaf mka_response_time; //type: string

}; // Dot1X::Session::InterfaceSessions::InterfaceSession::MkaStatusInfo


}
}

#endif /* _CISCO_IOS_XR_DOT1X_OPER_ */

