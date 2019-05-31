#ifndef _CISCO_IOS_XR_PPP_MA_OPER_
#define _CISCO_IOS_XR_PPP_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ma_oper {

class Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

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

        class Nodes; //type: Ppp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes> nodes;
        
}; // Ppp


class Ppp::Nodes : public ydk::Entity
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

        class Node; //type: Ppp::Nodes::Node

        ydk::YList node;
        
}; // Ppp::Nodes


class Ppp::Nodes::Node : public ydk::Entity
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
        class Statistics; //type: Ppp::Nodes::Node::Statistics
        class NodeInterfaces; //type: Ppp::Nodes::Node::NodeInterfaces
        class SsoAlerts; //type: Ppp::Nodes::Node::SsoAlerts
        class NodeInterfaceStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics
        class SsoSummary; //type: Ppp::Nodes::Node::SsoSummary
        class SsoGroups; //type: Ppp::Nodes::Node::SsoGroups
        class Summary; //type: Ppp::Nodes::Node::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces> node_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts> sso_alerts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics> node_interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary> sso_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups> sso_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary> summary;
        
}; // Ppp::Nodes::Node


class Ppp::Nodes::Node::Statistics : public ydk::Entity
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

        class LcpStatistics; //type: Ppp::Nodes::Node::Statistics::LcpStatistics
        class AuthenticationStatistics; //type: Ppp::Nodes::Node::Statistics::AuthenticationStatistics
        class NcpStatisticsArray; //type: Ppp::Nodes::Node::Statistics::NcpStatisticsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics::LcpStatistics> lcp_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics::AuthenticationStatistics> authentication_statistics;
        ydk::YList ncp_statistics_array;
        
}; // Ppp::Nodes::Node::Statistics


class Ppp::Nodes::Node::Statistics::LcpStatistics : public ydk::Entity
{
    public:
        LcpStatistics();
        ~LcpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conf_req_sent; //type: uint64
        ydk::YLeaf conf_req_rcvd; //type: uint64
        ydk::YLeaf conf_ack_sent; //type: uint64
        ydk::YLeaf conf_ack_rcvd; //type: uint64
        ydk::YLeaf conf_nak_sent; //type: uint64
        ydk::YLeaf conf_nak_rcvd; //type: uint64
        ydk::YLeaf conf_rej_sent; //type: uint64
        ydk::YLeaf conf_rej_rcvd; //type: uint64
        ydk::YLeaf term_req_sent; //type: uint64
        ydk::YLeaf term_req_rcvd; //type: uint64
        ydk::YLeaf term_ack_sent; //type: uint64
        ydk::YLeaf term_ack_rcvd; //type: uint64
        ydk::YLeaf code_rej_sent; //type: uint64
        ydk::YLeaf code_rej_rcvd; //type: uint64
        ydk::YLeaf proto_rej_sent; //type: uint64
        ydk::YLeaf proto_rej_rcvd; //type: uint64
        ydk::YLeaf echo_req_sent; //type: uint64
        ydk::YLeaf echo_req_rcvd; //type: uint64
        ydk::YLeaf echo_rep_sent; //type: uint64
        ydk::YLeaf echo_rep_rcvd; //type: uint64
        ydk::YLeaf disc_req_sent; //type: uint64
        ydk::YLeaf disc_req_rcvd; //type: uint64
        ydk::YLeaf link_up; //type: uint64
        ydk::YLeaf link_error; //type: uint64

}; // Ppp::Nodes::Node::Statistics::LcpStatistics


class Ppp::Nodes::Node::Statistics::AuthenticationStatistics : public ydk::Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pap_req_sent; //type: uint64
        ydk::YLeaf pap_req_rcvd; //type: uint64
        ydk::YLeaf pap_ack_sent; //type: uint64
        ydk::YLeaf pap_ack_rcvd; //type: uint64
        ydk::YLeaf pap_nak_sent; //type: uint64
        ydk::YLeaf pap_nak_rcvd; //type: uint64
        ydk::YLeaf chap_chall_sent; //type: uint64
        ydk::YLeaf chap_chall_rcvd; //type: uint64
        ydk::YLeaf chap_resp_sent; //type: uint64
        ydk::YLeaf chap_resp_rcvd; //type: uint64
        ydk::YLeaf chap_rep_succ_sent; //type: uint64
        ydk::YLeaf chap_rep_succ_rcvd; //type: uint64
        ydk::YLeaf chap_rep_fail_sent; //type: uint64
        ydk::YLeaf chap_rep_fail_rcvd; //type: uint64
        ydk::YLeaf auth_timeout_count; //type: uint64

}; // Ppp::Nodes::Node::Statistics::AuthenticationStatistics


class Ppp::Nodes::Node::Statistics::NcpStatisticsArray : public ydk::Entity
{
    public:
        NcpStatisticsArray();
        ~NcpStatisticsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ncp_identifier; //type: NcpIdent
        ydk::YLeaf conf_req_sent; //type: uint64
        ydk::YLeaf conf_req_rcvd; //type: uint64
        ydk::YLeaf conf_ack_sent; //type: uint64
        ydk::YLeaf conf_ack_rcvd; //type: uint64
        ydk::YLeaf conf_nak_sent; //type: uint64
        ydk::YLeaf conf_nak_rcvd; //type: uint64
        ydk::YLeaf conf_rej_sent; //type: uint64
        ydk::YLeaf conf_rej_rcvd; //type: uint64
        ydk::YLeaf term_req_sent; //type: uint64
        ydk::YLeaf term_req_rcvd; //type: uint64
        ydk::YLeaf term_ack_sent; //type: uint64
        ydk::YLeaf term_ack_rcvd; //type: uint64
        ydk::YLeaf proto_rej_sent; //type: uint64
        ydk::YLeaf proto_rej_rcvd; //type: uint64

}; // Ppp::Nodes::Node::Statistics::NcpStatisticsArray


class Ppp::Nodes::Node::NodeInterfaces : public ydk::Entity
{
    public:
        NodeInterfaces();
        ~NodeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeInterface; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface

        ydk::YList node_interface;
        
}; // Ppp::Nodes::Node::NodeInterfaces


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface : public ydk::Entity
{
    public:
        NodeInterface();
        ~NodeInterface();

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
        ydk::YLeaf parent_state; //type: uint32
        ydk::YLeaf line_state; //type: uint32
        ydk::YLeaf is_loopback_detected; //type: boolean
        ydk::YLeaf caps_idb_srg_role; //type: uint32
        ydk::YLeaf session_srg_role; //type: uint32
        ydk::YLeaf keepalive_period; //type: uint32
        ydk::YLeaf keepalive_retry_count; //type: uint32
        ydk::YLeaf is_ssrp_configured; //type: boolean
        ydk::YLeaf is_l2ac; //type: boolean
        ydk::YLeaf provisioned; //type: boolean
        ydk::YLeaf ip_interworking_enabled; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf is_tunneled_session; //type: boolean
        ydk::YLeaf ssrp_peer_id; //type: string
        ydk::YLeaf lcp_state; //type: PppFsmState
        ydk::YLeaf lcpsso_state; //type: PppSsoFsmState
        ydk::YLeaf is_lcp_delayed; //type: boolean
        ydk::YLeaf local_mru; //type: uint16
        ydk::YLeaf peer_mru; //type: uint16
        ydk::YLeaf local_mrru; //type: uint16
        ydk::YLeaf peer_mrru; //type: uint16
        ydk::YLeaf local_ed; //type: string
        ydk::YLeaf peer_ed; //type: string
        ydk::YLeaf is_mcmp_enabled; //type: boolean
        ydk::YLeaf local_mcmp_classes; //type: uint8
        ydk::YLeaf peer_mcmp_classes; //type: uint8
        ydk::YLeaf session_expires; //type: uint32
        class MpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo
        class ConfiguredTimeout; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout
        class AuthInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo
        class NcpInfoArray; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo> mp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout> configured_timeout;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo> auth_info;
        ydk::YList ncp_info_array;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo : public ydk::Entity
{
    public:
        MpInfo();
        ~MpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mp_bundle; //type: boolean
        ydk::YLeaf mp_bundle_interface; //type: string
        ydk::YLeaf is_mp_bundle_member; //type: boolean
        ydk::YLeaf mp_group; //type: uint32
        ydk::YLeaf active_links; //type: uint16
        ydk::YLeaf inactive_links; //type: uint16
        ydk::YLeaf minimum_active_links; //type: uint16
        ydk::YLeaf mp_state; //type: PppLcpMpMbrState
        class MpMemberInfoArray; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray

        ydk::YList mp_member_info_array;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray : public ydk::Entity
{
    public:
        MpMemberInfoArray();
        ~MpMemberInfoArray();

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
        ydk::YLeaf state; //type: PppLcpMpMbrState

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout : public ydk::Entity
{
    public:
        ConfiguredTimeout();
        ~ConfiguredTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint8

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo : public ydk::Entity
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

        ydk::YLeaf is_authenticated; //type: boolean
        ydk::YLeaf is_sso_authenticated; //type: boolean
        ydk::YLeaf of_us_auth; //type: uint8
        ydk::YLeaf of_peer_auth; //type: uint8
        ydk::YLeaf of_us_name; //type: string
        ydk::YLeaf of_peer_name; //type: string
        ydk::YLeaf of_us_sso_state; //type: PppSsoFsmState
        ydk::YLeaf of_peer_sso_state; //type: PppSsoFsmState

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray : public ydk::Entity
{
    public:
        NcpInfoArray();
        ~NcpInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ncp_state; //type: PppFsmState
        ydk::YLeaf ncpsso_state; //type: PppSsoFsmState
        ydk::YLeaf is_passive; //type: boolean
        ydk::YLeaf ncp_identifier; //type: NcpIdent
        class NcpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo> ncp_info;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo : public ydk::Entity
{
    public:
        NcpInfo();
        ~NcpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: NcpIdent
        class IpcpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo
        class IpcpiwInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo
        class Ipv6cpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6cpInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo> ipcp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo> ipcpiw_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6cpInfo> ipv6cp_info;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo : public ydk::Entity
{
    public:
        IpcpInfo();
        ~IpcpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf peer_netmask; //type: string
        ydk::YLeaf dns_primary; //type: string
        ydk::YLeaf dns_secondary; //type: string
        ydk::YLeaf wins_primary; //type: string
        ydk::YLeaf wins_secondary; //type: string
        ydk::YLeaf is_iphc_configured; //type: boolean
        class LocalIphcOptions; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions
        class PeerIphcOptions; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions> local_iphc_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions> peer_iphc_options;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions : public ydk::Entity
{
    public:
        LocalIphcOptions();
        ~LocalIphcOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf compression_type; //type: PppIphcCompression
        ydk::YLeaf tcp_space; //type: uint16
        ydk::YLeaf non_tcp_space; //type: uint16
        ydk::YLeaf max_period; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf max_header; //type: uint16
        ydk::YLeaf rtp_compression; //type: boolean
        ydk::YLeaf ec_rtp_compression; //type: boolean

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions : public ydk::Entity
{
    public:
        PeerIphcOptions();
        ~PeerIphcOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf compression_type; //type: PppIphcCompression
        ydk::YLeaf tcp_space; //type: uint16
        ydk::YLeaf non_tcp_space; //type: uint16
        ydk::YLeaf max_period; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf max_header; //type: uint16
        ydk::YLeaf rtp_compression; //type: boolean
        ydk::YLeaf ec_rtp_compression; //type: boolean

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo : public ydk::Entity
{
    public:
        IpcpiwInfo();
        ~IpcpiwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf peer_address; //type: string

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6cpInfo : public ydk::Entity
{
    public:
        Ipv6cpInfo();
        ~Ipv6cpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf peer_address; //type: string

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6cpInfo


class Ppp::Nodes::Node::SsoAlerts : public ydk::Entity
{
    public:
        SsoAlerts();
        ~SsoAlerts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsoAlert; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert

        ydk::YList sso_alert;
        
}; // Ppp::Nodes::Node::SsoAlerts


class Ppp::Nodes::Node::SsoAlerts::SsoAlert : public ydk::Entity
{
    public:
        SsoAlert();
        ~SsoAlert();

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
        class LcpError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError
        class OfUsAuthError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError
        class OfPeerAuthError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError
        class IpcpError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError> lcp_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError> of_us_auth_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError> of_peer_auth_error;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError> ipcp_error;
        
}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError : public ydk::Entity
{
    public:
        LcpError();
        ~LcpError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_error; //type: boolean
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError : public ydk::Entity
{
    public:
        OfUsAuthError();
        ~OfUsAuthError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_error; //type: boolean
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError : public ydk::Entity
{
    public:
        OfPeerAuthError();
        ~OfPeerAuthError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_error; //type: boolean
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError : public ydk::Entity
{
    public:
        IpcpError();
        ~IpcpError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_error; //type: boolean
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError


class Ppp::Nodes::Node::NodeInterfaceStatistics : public ydk::Entity
{
    public:
        NodeInterfaceStatistics();
        ~NodeInterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeInterfaceStatistic; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic

        ydk::YList node_interface_statistic;
        
}; // Ppp::Nodes::Node::NodeInterfaceStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic : public ydk::Entity
{
    public:
        NodeInterfaceStatistic();
        ~NodeInterfaceStatistic();

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
        class LcpStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics
        class AuthenticationStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics
        class NcpStatisticsArray; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics> lcp_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics> authentication_statistics;
        ydk::YList ncp_statistics_array;
        
}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics : public ydk::Entity
{
    public:
        LcpStatistics();
        ~LcpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conf_req_sent; //type: uint16
        ydk::YLeaf conf_req_rcvd; //type: uint16
        ydk::YLeaf conf_ack_sent; //type: uint16
        ydk::YLeaf conf_ack_rcvd; //type: uint16
        ydk::YLeaf conf_nak_sent; //type: uint16
        ydk::YLeaf conf_nak_rcvd; //type: uint16
        ydk::YLeaf conf_rej_sent; //type: uint16
        ydk::YLeaf conf_rej_rcvd; //type: uint16
        ydk::YLeaf echo_req_sent; //type: uint16
        ydk::YLeaf echo_req_rcvd; //type: uint16
        ydk::YLeaf echo_rep_sent; //type: uint16
        ydk::YLeaf echo_rep_rcvd; //type: uint16
        ydk::YLeaf disc_req_sent; //type: uint16
        ydk::YLeaf disc_req_rcvd; //type: uint16
        ydk::YLeaf link_up; //type: uint16
        ydk::YLeaf link_error; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics : public ydk::Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pap_req_sent; //type: uint16
        ydk::YLeaf pap_req_rcvd; //type: uint16
        ydk::YLeaf pap_ack_sent; //type: uint16
        ydk::YLeaf pap_ack_rcvd; //type: uint16
        ydk::YLeaf pap_nak_sent; //type: uint16
        ydk::YLeaf pap_nak_rcvd; //type: uint16
        ydk::YLeaf chap_chall_sent; //type: uint16
        ydk::YLeaf chap_chall_rcvd; //type: uint16
        ydk::YLeaf chap_resp_sent; //type: uint16
        ydk::YLeaf chap_resp_rcvd; //type: uint16
        ydk::YLeaf chap_rep_succ_sent; //type: uint16
        ydk::YLeaf chap_rep_succ_rcvd; //type: uint16
        ydk::YLeaf chap_rep_fail_sent; //type: uint16
        ydk::YLeaf chap_rep_fail_rcvd; //type: uint16
        ydk::YLeaf auth_timeout_count; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray : public ydk::Entity
{
    public:
        NcpStatisticsArray();
        ~NcpStatisticsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ncp_identifier; //type: NcpIdent
        ydk::YLeaf conf_req_sent; //type: uint16
        ydk::YLeaf conf_req_rcvd; //type: uint16
        ydk::YLeaf conf_ack_sent; //type: uint16
        ydk::YLeaf conf_ack_rcvd; //type: uint16
        ydk::YLeaf conf_nak_sent; //type: uint16
        ydk::YLeaf conf_nak_rcvd; //type: uint16
        ydk::YLeaf conf_rej_sent; //type: uint16
        ydk::YLeaf conf_rej_rcvd; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray


class Ppp::Nodes::Node::SsoSummary : public ydk::Entity
{
    public:
        SsoSummary();
        ~SsoSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LcpStates; //type: Ppp::Nodes::Node::SsoSummary::LcpStates
        class OfUsAuthStates; //type: Ppp::Nodes::Node::SsoSummary::OfUsAuthStates
        class OfPeerAuthStates; //type: Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates
        class IpcpStates; //type: Ppp::Nodes::Node::SsoSummary::IpcpStates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::LcpStates> lcp_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::OfUsAuthStates> of_us_auth_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates> of_peer_auth_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::IpcpStates> ipcp_states;
        
}; // Ppp::Nodes::Node::SsoSummary


class Ppp::Nodes::Node::SsoSummary::LcpStates : public ydk::Entity
{
    public:
        LcpStates();
        ~LcpStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint16
        ydk::YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::LcpStates


class Ppp::Nodes::Node::SsoSummary::OfUsAuthStates : public ydk::Entity
{
    public:
        OfUsAuthStates();
        ~OfUsAuthStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint16
        ydk::YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::OfUsAuthStates


class Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates : public ydk::Entity
{
    public:
        OfPeerAuthStates();
        ~OfPeerAuthStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint16
        ydk::YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates


class Ppp::Nodes::Node::SsoSummary::IpcpStates : public ydk::Entity
{
    public:
        IpcpStates();
        ~IpcpStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint16
        ydk::YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::IpcpStates


class Ppp::Nodes::Node::SsoGroups : public ydk::Entity
{
    public:
        SsoGroups();
        ~SsoGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsoGroup; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup

        ydk::YList sso_group;
        
}; // Ppp::Nodes::Node::SsoGroups


class Ppp::Nodes::Node::SsoGroups::SsoGroup : public ydk::Entity
{
    public:
        SsoGroup();
        ~SsoGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        class SsoStates; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates> sso_states;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates : public ydk::Entity
{
    public:
        SsoStates();
        ~SsoStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SsoState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState

        ydk::YList sso_state;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState : public ydk::Entity
{
    public:
        SsoState();
        ~SsoState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf session_id_xr; //type: uint32
        ydk::YLeaf interface; //type: string
        class LcpState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState
        class OfUsAuthState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState
        class OfPeerAuthState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState
        class IpcpState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState> lcp_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState> of_us_auth_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState> of_peer_auth_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState> ipcp_state;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState : public ydk::Entity
{
    public:
        LcpState();
        ~LcpState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_running; //type: boolean
        ydk::YLeaf state; //type: PppSsoFsmState

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState : public ydk::Entity
{
    public:
        OfUsAuthState();
        ~OfUsAuthState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_running; //type: boolean
        ydk::YLeaf state; //type: PppSsoFsmState

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState : public ydk::Entity
{
    public:
        OfPeerAuthState();
        ~OfPeerAuthState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_running; //type: boolean
        ydk::YLeaf state; //type: PppSsoFsmState

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState : public ydk::Entity
{
    public:
        IpcpState();
        ~IpcpState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_running; //type: boolean
        ydk::YLeaf state; //type: PppSsoFsmState

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState


class Ppp::Nodes::Node::Summary : public ydk::Entity
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

        class Intfs; //type: Ppp::Nodes::Node::Summary::Intfs
        class FsmStates; //type: Ppp::Nodes::Node::Summary::FsmStates
        class LcpAuthPhases; //type: Ppp::Nodes::Node::Summary::LcpAuthPhases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::Intfs> intfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::FsmStates> fsm_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::LcpAuthPhases> lcp_auth_phases;
        
}; // Ppp::Nodes::Node::Summary


class Ppp::Nodes::Node::Summary::Intfs : public ydk::Entity
{
    public:
        Intfs();
        ~Intfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pos_count; //type: uint32
        ydk::YLeaf serial_count; //type: uint32
        ydk::YLeaf pppoe_count; //type: uint32
        ydk::YLeaf multilink_bundle_count; //type: uint32
        ydk::YLeaf gcc0_count; //type: uint32
        ydk::YLeaf gcc1_count; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Ppp::Nodes::Node::Summary::Intfs


class Ppp::Nodes::Node::Summary::FsmStates : public ydk::Entity
{
    public:
        FsmStates();
        ~FsmStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LcpfsmStates; //type: Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates
        class NcpfsmStatesArray; //type: Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates> lcpfsm_states;
        ydk::YList ncpfsm_states_array;
        
}; // Ppp::Nodes::Node::Summary::FsmStates


class Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates : public ydk::Entity
{
    public:
        LcpfsmStates();
        ~LcpfsmStates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total; //type: uint32
        ydk::YLeafList count; //type: list of  uint32

}; // Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates


class Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray : public ydk::Entity
{
    public:
        NcpfsmStatesArray();
        ~NcpfsmStatesArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ncp_identifier; //type: NcpIdent
        ydk::YLeaf total; //type: uint32
        ydk::YLeafList count; //type: list of  uint32

}; // Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray


class Ppp::Nodes::Node::Summary::LcpAuthPhases : public ydk::Entity
{
    public:
        LcpAuthPhases();
        ~LcpAuthPhases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lcp_not_negotiated; //type: uint32
        ydk::YLeaf authenticating; //type: uint32
        ydk::YLeaf line_held_down; //type: uint32
        ydk::YLeaf up_local_term; //type: uint32
        ydk::YLeaf up_l2_fwded; //type: uint32
        ydk::YLeaf up_tunneled; //type: uint32

}; // Ppp::Nodes::Node::Summary::LcpAuthPhases

class PppIphcCompression : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_iphc_compression_fmt_none;
        static const ydk::Enum::YLeaf ppp_iphc_compression_fmt_vj;
        static const ydk::Enum::YLeaf ppp_iphc_compression_fmt_ietf;
        static const ydk::Enum::YLeaf ppp_iphc_compression_fmt_iphc;
        static const ydk::Enum::YLeaf ppp_iphc_compression_fmt_cisco;

};

class PppLcpMpMbrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_detached;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_lcp_not_negotiated;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_link_noise;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_bundle_shutdown;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mrru_rejected;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mrru_mismatch;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_ed_mismatch;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_auth_name_mismatch;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_rejected;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_not_negotiated;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_local_mismatch;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_peer_mismatch;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_standby_up;
        static const ydk::Enum::YLeaf ppp_lcp_mp_mbr_state_active;

};

class PppSsoFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_sso_state_not_ready_0;
        static const ydk::Enum::YLeaf ppp_sso_state_standby_unnegd_1;
        static const ydk::Enum::YLeaf ppp_sso_state_active_down_2;
        static const ydk::Enum::YLeaf ppp_sso_state_deactivating_3;
        static const ydk::Enum::YLeaf ppp_sso_state_active_unnegd_4;
        static const ydk::Enum::YLeaf ppp_sso_state_standby_negd_5;
        static const ydk::Enum::YLeaf ppp_sso_state_activating_6;
        static const ydk::Enum::YLeaf ppp_sso_state_active_negd_7;

};

class PppFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_fsm_state_initial_0;
        static const ydk::Enum::YLeaf ppp_fsm_state_starting_1;
        static const ydk::Enum::YLeaf ppp_fsm_state_closed_2;
        static const ydk::Enum::YLeaf ppp_fsm_state_stopped_3;
        static const ydk::Enum::YLeaf ppp_fsm_state_closing_4;
        static const ydk::Enum::YLeaf ppp_fsm_state_stopping_5;
        static const ydk::Enum::YLeaf ppp_fsm_state_req_sent_6;
        static const ydk::Enum::YLeaf ppp_fsm_state_ack_rcvd_7;
        static const ydk::Enum::YLeaf ppp_fsm_state_ack_sent_8;
        static const ydk::Enum::YLeaf ppp_fsm_state_opened_9;

};

class NcpIdent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdpcp;
        static const ydk::Enum::YLeaf ipcp;
        static const ydk::Enum::YLeaf ipcpiw;
        static const ydk::Enum::YLeaf ipv6cp;
        static const ydk::Enum::YLeaf mplscp;
        static const ydk::Enum::YLeaf osicp;

};


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_OPER_ */

