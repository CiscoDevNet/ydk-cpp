#ifndef _CISCO_IOS_XR_PPP_MA_OPER_
#define _CISCO_IOS_XR_PPP_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_oper {

class Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

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

        class Nodes; //type: Ppp::Nodes

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes> nodes;
        
}; // Ppp


class Ppp::Nodes : public Entity
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

        class Node; //type: Ppp::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node> > node;
        
}; // Ppp::Nodes


class Ppp::Nodes::Node : public Entity
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
        class Statistics; //type: Ppp::Nodes::Node::Statistics
        class NodeInterfaces; //type: Ppp::Nodes::Node::NodeInterfaces
        class SsoAlerts; //type: Ppp::Nodes::Node::SsoAlerts
        class NodeInterfaceStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics
        class SsoSummary; //type: Ppp::Nodes::Node::SsoSummary
        class SsoGroups; //type: Ppp::Nodes::Node::SsoGroups
        class Summary; //type: Ppp::Nodes::Node::Summary

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics> node_interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces> node_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts> sso_alerts;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups> sso_groups;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary> sso_summary;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary> summary;
        
}; // Ppp::Nodes::Node


class Ppp::Nodes::Node::Statistics : public Entity
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

        class LcpStatistics; //type: Ppp::Nodes::Node::Statistics::LcpStatistics
        class AuthenticationStatistics; //type: Ppp::Nodes::Node::Statistics::AuthenticationStatistics
        class NcpStatisticsArray; //type: Ppp::Nodes::Node::Statistics::NcpStatisticsArray

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics::LcpStatistics> lcp_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Statistics::NcpStatisticsArray> > ncp_statistics_array;
        
}; // Ppp::Nodes::Node::Statistics


class Ppp::Nodes::Node::Statistics::LcpStatistics : public Entity
{
    public:
        LcpStatistics();
        ~LcpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conf_req_sent; //type: uint64
        YLeaf conf_req_rcvd; //type: uint64
        YLeaf conf_ack_sent; //type: uint64
        YLeaf conf_ack_rcvd; //type: uint64
        YLeaf conf_nak_sent; //type: uint64
        YLeaf conf_nak_rcvd; //type: uint64
        YLeaf conf_rej_sent; //type: uint64
        YLeaf conf_rej_rcvd; //type: uint64
        YLeaf term_req_sent; //type: uint64
        YLeaf term_req_rcvd; //type: uint64
        YLeaf term_ack_sent; //type: uint64
        YLeaf term_ack_rcvd; //type: uint64
        YLeaf code_rej_sent; //type: uint64
        YLeaf code_rej_rcvd; //type: uint64
        YLeaf proto_rej_sent; //type: uint64
        YLeaf proto_rej_rcvd; //type: uint64
        YLeaf echo_req_sent; //type: uint64
        YLeaf echo_req_rcvd; //type: uint64
        YLeaf echo_rep_sent; //type: uint64
        YLeaf echo_rep_rcvd; //type: uint64
        YLeaf disc_req_sent; //type: uint64
        YLeaf disc_req_rcvd; //type: uint64
        YLeaf link_up; //type: uint64
        YLeaf link_error; //type: uint64

}; // Ppp::Nodes::Node::Statistics::LcpStatistics


class Ppp::Nodes::Node::Statistics::AuthenticationStatistics : public Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pap_req_sent; //type: uint64
        YLeaf pap_req_rcvd; //type: uint64
        YLeaf pap_ack_sent; //type: uint64
        YLeaf pap_ack_rcvd; //type: uint64
        YLeaf pap_nak_sent; //type: uint64
        YLeaf pap_nak_rcvd; //type: uint64
        YLeaf chap_chall_sent; //type: uint64
        YLeaf chap_chall_rcvd; //type: uint64
        YLeaf chap_resp_sent; //type: uint64
        YLeaf chap_resp_rcvd; //type: uint64
        YLeaf chap_rep_succ_sent; //type: uint64
        YLeaf chap_rep_succ_rcvd; //type: uint64
        YLeaf chap_rep_fail_sent; //type: uint64
        YLeaf chap_rep_fail_rcvd; //type: uint64
        YLeaf auth_timeout_count; //type: uint64

}; // Ppp::Nodes::Node::Statistics::AuthenticationStatistics


class Ppp::Nodes::Node::Statistics::NcpStatisticsArray : public Entity
{
    public:
        NcpStatisticsArray();
        ~NcpStatisticsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ncp_identifier; //type: NcpIdentEnum
        YLeaf conf_req_sent; //type: uint64
        YLeaf conf_req_rcvd; //type: uint64
        YLeaf conf_ack_sent; //type: uint64
        YLeaf conf_ack_rcvd; //type: uint64
        YLeaf conf_nak_sent; //type: uint64
        YLeaf conf_nak_rcvd; //type: uint64
        YLeaf conf_rej_sent; //type: uint64
        YLeaf conf_rej_rcvd; //type: uint64
        YLeaf term_req_sent; //type: uint64
        YLeaf term_req_rcvd; //type: uint64
        YLeaf term_ack_sent; //type: uint64
        YLeaf term_ack_rcvd; //type: uint64
        YLeaf proto_rej_sent; //type: uint64
        YLeaf proto_rej_rcvd; //type: uint64

}; // Ppp::Nodes::Node::Statistics::NcpStatisticsArray


class Ppp::Nodes::Node::NodeInterfaces : public Entity
{
    public:
        NodeInterfaces();
        ~NodeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeInterface; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface> > node_interface;
        
}; // Ppp::Nodes::Node::NodeInterfaces


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface : public Entity
{
    public:
        NodeInterface();
        ~NodeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf parent_state; //type: uint32
        YLeaf line_state; //type: uint32
        YLeaf is_loopback_detected; //type: boolean
        YLeaf srg_role; //type: uint32
        YLeaf keepalive_period; //type: uint32
        YLeaf keepalive_retry_count; //type: uint32
        YLeaf is_ssrp_configured; //type: boolean
        YLeaf is_l2ac; //type: boolean
        YLeaf provisioned; //type: boolean
        YLeaf ip_interworking_enabled; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf is_tunneled_session; //type: boolean
        YLeaf ssrp_peer_id; //type: string
        YLeaf lcp_state; //type: PppFsmStateEnum
        YLeaf lcpsso_state; //type: PppSsoFsmStateEnum
        YLeaf is_lcp_delayed; //type: boolean
        YLeaf local_mru; //type: uint16
        YLeaf peer_mru; //type: uint16
        YLeaf local_mrru; //type: uint16
        YLeaf peer_mrru; //type: uint16
        YLeaf local_ed; //type: string
        YLeaf peer_ed; //type: string
        YLeaf is_mcmp_enabled; //type: boolean
        YLeaf local_mcmp_classes; //type: uint8
        YLeaf peer_mcmp_classes; //type: uint8
        YLeaf session_expires; //type: uint32
        class MpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo
        class ConfiguredTimeout; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout
        class AuthInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo
        class NcpInfoArray; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo> auth_info;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout> configured_timeout;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo> mp_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray> > ncp_info_array;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo : public Entity
{
    public:
        MpInfo();
        ~MpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_mp_bundle; //type: boolean
        YLeaf mp_bundle_interface; //type: string
        YLeaf is_mp_bundle_member; //type: boolean
        YLeaf mp_group; //type: uint32
        YLeaf active_links; //type: uint16
        YLeaf inactive_links; //type: uint16
        YLeaf minimum_active_links; //type: uint16
        YLeaf mp_state; //type: PppLcpMpMbrStateEnum
        class MpMemberInfoArray; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray> > mp_member_info_array;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray : public Entity
{
    public:
        MpMemberInfoArray();
        ~MpMemberInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf state; //type: PppLcpMpMbrStateEnum

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout : public Entity
{
    public:
        ConfiguredTimeout();
        ~ConfiguredTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minutes; //type: uint32
        YLeaf seconds; //type: uint8

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo : public Entity
{
    public:
        AuthInfo();
        ~AuthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_authenticated; //type: boolean
        YLeaf is_sso_authenticated; //type: boolean
        YLeaf of_us_auth; //type: uint8
        YLeaf of_peer_auth; //type: uint8
        YLeaf of_us_name; //type: string
        YLeaf of_peer_name; //type: string
        YLeaf of_us_sso_state; //type: PppSsoFsmStateEnum
        YLeaf of_peer_sso_state; //type: PppSsoFsmStateEnum

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray : public Entity
{
    public:
        NcpInfoArray();
        ~NcpInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ncp_state; //type: PppFsmStateEnum
        YLeaf ncpsso_state; //type: PppSsoFsmStateEnum
        YLeaf is_passive; //type: boolean
        YLeaf ncp_identifier; //type: NcpIdentEnum
        class NcpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo> ncp_info;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo : public Entity
{
    public:
        NcpInfo();
        ~NcpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: NcpIdentEnum
        class IpcpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo
        class IpcpiwInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo
        class Ipv6CpInfo; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo> ipcp_info;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo> ipcpiw_info;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo> ipv6cp_info;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo : public Entity
{
    public:
        IpcpInfo();
        ~IpcpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf peer_address; //type: string
        YLeaf peer_netmask; //type: string
        YLeaf dns_primary; //type: string
        YLeaf dns_secondary; //type: string
        YLeaf wins_primary; //type: string
        YLeaf wins_secondary; //type: string
        YLeaf is_iphc_configured; //type: boolean
        class LocalIphcOptions; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions
        class PeerIphcOptions; //type: Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions> local_iphc_options;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions> peer_iphc_options;
        
}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions : public Entity
{
    public:
        LocalIphcOptions();
        ~LocalIphcOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compression_type; //type: PppIphcCompressionEnum
        YLeaf tcp_space; //type: uint16
        YLeaf non_tcp_space; //type: uint16
        YLeaf max_period; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf max_header; //type: uint16
        YLeaf rtp_compression; //type: boolean
        YLeaf ec_rtp_compression; //type: boolean

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions : public Entity
{
    public:
        PeerIphcOptions();
        ~PeerIphcOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compression_type; //type: PppIphcCompressionEnum
        YLeaf tcp_space; //type: uint16
        YLeaf non_tcp_space; //type: uint16
        YLeaf max_period; //type: uint16
        YLeaf max_time; //type: uint16
        YLeaf max_header; //type: uint16
        YLeaf rtp_compression; //type: boolean
        YLeaf ec_rtp_compression; //type: boolean

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo : public Entity
{
    public:
        IpcpiwInfo();
        ~IpcpiwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf peer_address; //type: string

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo


class Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo : public Entity
{
    public:
        Ipv6CpInfo();
        ~Ipv6CpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_address; //type: string
        YLeaf peer_address; //type: string

}; // Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo


class Ppp::Nodes::Node::SsoAlerts : public Entity
{
    public:
        SsoAlerts();
        ~SsoAlerts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsoAlert; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert> > sso_alert;
        
}; // Ppp::Nodes::Node::SsoAlerts


class Ppp::Nodes::Node::SsoAlerts::SsoAlert : public Entity
{
    public:
        SsoAlert();
        ~SsoAlert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        class LcpError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError
        class OfUsAuthError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError
        class OfPeerAuthError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError
        class IpcpError; //type: Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError> ipcp_error;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError> lcp_error;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError> of_peer_auth_error;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError> of_us_auth_error;
        
}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError : public Entity
{
    public:
        LcpError();
        ~LcpError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_error; //type: boolean
        YLeaf error; //type: uint32
        YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError : public Entity
{
    public:
        OfUsAuthError();
        ~OfUsAuthError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_error; //type: boolean
        YLeaf error; //type: uint32
        YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError : public Entity
{
    public:
        OfPeerAuthError();
        ~OfPeerAuthError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_error; //type: boolean
        YLeaf error; //type: uint32
        YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError


class Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError : public Entity
{
    public:
        IpcpError();
        ~IpcpError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_error; //type: boolean
        YLeaf error; //type: uint32
        YLeaf context; //type: uint32

}; // Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError


class Ppp::Nodes::Node::NodeInterfaceStatistics : public Entity
{
    public:
        NodeInterfaceStatistics();
        ~NodeInterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeInterfaceStatistic; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic> > node_interface_statistic;
        
}; // Ppp::Nodes::Node::NodeInterfaceStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic : public Entity
{
    public:
        NodeInterfaceStatistic();
        ~NodeInterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class LcpStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics
        class AuthenticationStatistics; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics
        class NcpStatisticsArray; //type: Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics> authentication_statistics;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics> lcp_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray> > ncp_statistics_array;
        
}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics : public Entity
{
    public:
        LcpStatistics();
        ~LcpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf conf_req_sent; //type: uint16
        YLeaf conf_req_rcvd; //type: uint16
        YLeaf conf_ack_sent; //type: uint16
        YLeaf conf_ack_rcvd; //type: uint16
        YLeaf conf_nak_sent; //type: uint16
        YLeaf conf_nak_rcvd; //type: uint16
        YLeaf conf_rej_sent; //type: uint16
        YLeaf conf_rej_rcvd; //type: uint16
        YLeaf echo_req_sent; //type: uint16
        YLeaf echo_req_rcvd; //type: uint16
        YLeaf echo_rep_sent; //type: uint16
        YLeaf echo_rep_rcvd; //type: uint16
        YLeaf disc_req_sent; //type: uint16
        YLeaf disc_req_rcvd; //type: uint16
        YLeaf link_up; //type: uint16
        YLeaf link_error; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics : public Entity
{
    public:
        AuthenticationStatistics();
        ~AuthenticationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pap_req_sent; //type: uint16
        YLeaf pap_req_rcvd; //type: uint16
        YLeaf pap_ack_sent; //type: uint16
        YLeaf pap_ack_rcvd; //type: uint16
        YLeaf pap_nak_sent; //type: uint16
        YLeaf pap_nak_rcvd; //type: uint16
        YLeaf chap_chall_sent; //type: uint16
        YLeaf chap_chall_rcvd; //type: uint16
        YLeaf chap_resp_sent; //type: uint16
        YLeaf chap_resp_rcvd; //type: uint16
        YLeaf chap_rep_succ_sent; //type: uint16
        YLeaf chap_rep_succ_rcvd; //type: uint16
        YLeaf chap_rep_fail_sent; //type: uint16
        YLeaf chap_rep_fail_rcvd; //type: uint16
        YLeaf auth_timeout_count; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics


class Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray : public Entity
{
    public:
        NcpStatisticsArray();
        ~NcpStatisticsArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ncp_identifier; //type: NcpIdentEnum
        YLeaf conf_req_sent; //type: uint16
        YLeaf conf_req_rcvd; //type: uint16
        YLeaf conf_ack_sent; //type: uint16
        YLeaf conf_ack_rcvd; //type: uint16
        YLeaf conf_nak_sent; //type: uint16
        YLeaf conf_nak_rcvd; //type: uint16
        YLeaf conf_rej_sent; //type: uint16
        YLeaf conf_rej_rcvd; //type: uint16

}; // Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray


class Ppp::Nodes::Node::SsoSummary : public Entity
{
    public:
        SsoSummary();
        ~SsoSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LcpStates; //type: Ppp::Nodes::Node::SsoSummary::LcpStates
        class OfUsAuthStates; //type: Ppp::Nodes::Node::SsoSummary::OfUsAuthStates
        class OfPeerAuthStates; //type: Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates
        class IpcpStates; //type: Ppp::Nodes::Node::SsoSummary::IpcpStates

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::IpcpStates> ipcp_states;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::LcpStates> lcp_states;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates> of_peer_auth_states;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoSummary::OfUsAuthStates> of_us_auth_states;
        
}; // Ppp::Nodes::Node::SsoSummary


class Ppp::Nodes::Node::SsoSummary::LcpStates : public Entity
{
    public:
        LcpStates();
        ~LcpStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint16
        YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::LcpStates


class Ppp::Nodes::Node::SsoSummary::OfUsAuthStates : public Entity
{
    public:
        OfUsAuthStates();
        ~OfUsAuthStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint16
        YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::OfUsAuthStates


class Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates : public Entity
{
    public:
        OfPeerAuthStates();
        ~OfPeerAuthStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint16
        YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates


class Ppp::Nodes::Node::SsoSummary::IpcpStates : public Entity
{
    public:
        IpcpStates();
        ~IpcpStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint16
        YLeafList count; //type: list of  uint16

}; // Ppp::Nodes::Node::SsoSummary::IpcpStates


class Ppp::Nodes::Node::SsoGroups : public Entity
{
    public:
        SsoGroups();
        ~SsoGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsoGroup; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup> > sso_group;
        
}; // Ppp::Nodes::Node::SsoGroups


class Ppp::Nodes::Node::SsoGroups::SsoGroup : public Entity
{
    public:
        SsoGroup();
        ~SsoGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        class SsoStates; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates> sso_states;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates : public Entity
{
    public:
        SsoStates();
        ~SsoStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SsoState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState> > sso_state;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState : public Entity
{
    public:
        SsoState();
        ~SsoState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: uint32
        YLeaf session_id_xr; //type: uint32
        YLeaf interface; //type: string
        class LcpState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState
        class OfUsAuthState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState
        class OfPeerAuthState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState
        class IpcpState; //type: Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState> ipcp_state;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState> lcp_state;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState> of_peer_auth_state;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState> of_us_auth_state;
        
}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState : public Entity
{
    public:
        LcpState();
        ~LcpState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_running; //type: boolean
        YLeaf state; //type: PppSsoFsmStateEnum

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState : public Entity
{
    public:
        OfUsAuthState();
        ~OfUsAuthState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_running; //type: boolean
        YLeaf state; //type: PppSsoFsmStateEnum

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState : public Entity
{
    public:
        OfPeerAuthState();
        ~OfPeerAuthState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_running; //type: boolean
        YLeaf state; //type: PppSsoFsmStateEnum

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState


class Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState : public Entity
{
    public:
        IpcpState();
        ~IpcpState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_running; //type: boolean
        YLeaf state; //type: PppSsoFsmStateEnum

}; // Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState


class Ppp::Nodes::Node::Summary : public Entity
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

        class Intfs; //type: Ppp::Nodes::Node::Summary::Intfs
        class FsmStates; //type: Ppp::Nodes::Node::Summary::FsmStates
        class LcpAuthPhases; //type: Ppp::Nodes::Node::Summary::LcpAuthPhases

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::FsmStates> fsm_states;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::Intfs> intfs;
        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::LcpAuthPhases> lcp_auth_phases;
        
}; // Ppp::Nodes::Node::Summary


class Ppp::Nodes::Node::Summary::Intfs : public Entity
{
    public:
        Intfs();
        ~Intfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pos_count; //type: uint32
        YLeaf serial_count; //type: uint32
        YLeaf pppoe_count; //type: uint32
        YLeaf multilink_bundle_count; //type: uint32
        YLeaf gcc0_count; //type: uint32
        YLeaf gcc1_count; //type: uint32
        YLeaf total; //type: uint32

}; // Ppp::Nodes::Node::Summary::Intfs


class Ppp::Nodes::Node::Summary::FsmStates : public Entity
{
    public:
        FsmStates();
        ~FsmStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LcpfsmStates; //type: Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates
        class NcpfsmStatesArray; //type: Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates> lcpfsm_states;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_oper::Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray> > ncpfsm_states_array;
        
}; // Ppp::Nodes::Node::Summary::FsmStates


class Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates : public Entity
{
    public:
        LcpfsmStates();
        ~LcpfsmStates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total; //type: uint32
        YLeafList count; //type: list of  uint32

}; // Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates


class Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray : public Entity
{
    public:
        NcpfsmStatesArray();
        ~NcpfsmStatesArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ncp_identifier; //type: NcpIdentEnum
        YLeaf total; //type: uint32
        YLeafList count; //type: list of  uint32

}; // Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray


class Ppp::Nodes::Node::Summary::LcpAuthPhases : public Entity
{
    public:
        LcpAuthPhases();
        ~LcpAuthPhases();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lcp_not_negotiated; //type: uint32
        YLeaf authenticating; //type: uint32
        YLeaf line_held_down; //type: uint32
        YLeaf up_local_term; //type: uint32
        YLeaf up_l2_fwded; //type: uint32
        YLeaf up_tunneled; //type: uint32

}; // Ppp::Nodes::Node::Summary::LcpAuthPhases

class NcpIdentEnum : public Enum
{
    public:
        static const Enum::YLeaf cdpcp;
        static const Enum::YLeaf ipcp;
        static const Enum::YLeaf ipcpiw;
        static const Enum::YLeaf ipv6cp;
        static const Enum::YLeaf mplscp;
        static const Enum::YLeaf osicp;

};

class PppSsoFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_sso_state_not_ready_0;
        static const Enum::YLeaf ppp_sso_state_standby_unnegd_1;
        static const Enum::YLeaf ppp_sso_state_active_down_2;
        static const Enum::YLeaf ppp_sso_state_deactivating_3;
        static const Enum::YLeaf ppp_sso_state_active_unnegd_4;
        static const Enum::YLeaf ppp_sso_state_standby_negd_5;
        static const Enum::YLeaf ppp_sso_state_activating_6;
        static const Enum::YLeaf ppp_sso_state_active_negd_7;

};

class PppIphcCompressionEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_iphc_compression_fmt_none;
        static const Enum::YLeaf ppp_iphc_compression_fmt_vj;
        static const Enum::YLeaf ppp_iphc_compression_fmt_ietf;
        static const Enum::YLeaf ppp_iphc_compression_fmt_iphc;
        static const Enum::YLeaf ppp_iphc_compression_fmt_cisco;

};

class PppFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_fsm_state_initial_0;
        static const Enum::YLeaf ppp_fsm_state_starting_1;
        static const Enum::YLeaf ppp_fsm_state_closed_2;
        static const Enum::YLeaf ppp_fsm_state_stopped_3;
        static const Enum::YLeaf ppp_fsm_state_closing_4;
        static const Enum::YLeaf ppp_fsm_state_stopping_5;
        static const Enum::YLeaf ppp_fsm_state_req_sent_6;
        static const Enum::YLeaf ppp_fsm_state_ack_rcvd_7;
        static const Enum::YLeaf ppp_fsm_state_ack_sent_8;
        static const Enum::YLeaf ppp_fsm_state_opened_9;

};

class PppLcpMpMbrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_detached;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_lcp_not_negotiated;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_link_noise;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_bundle_shutdown;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mrru_rejected;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mrru_mismatch;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_ed_mismatch;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_auth_name_mismatch;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_rejected;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_not_negotiated;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_local_mismatch;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_mcmp_peer_mismatch;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_standby_up;
        static const Enum::YLeaf ppp_lcp_mp_mbr_state_active;

};


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_OPER_ */

