#ifndef _CISCO_IOS_XR_INFRA_XTC_AGENT_OPER_
#define _CISCO_IOS_XR_INFRA_XTC_AGENT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_agent_oper {

class Pcc : public ydk::Entity
{
    public:
        Pcc();
        ~Pcc();

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

        class Plsps; //type: Pcc::Plsps
        class Peers; //type: Pcc::Peers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps> plsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Peers> peers;
        
}; // Pcc


class Pcc::Plsps : public ydk::Entity
{
    public:
        Plsps();
        ~Plsps();

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

        class Plsp; //type: Pcc::Plsps::Plsp

        ydk::YList plsp;
        
}; // Pcc::Plsps


class Pcc::Plsps::Plsp : public ydk::Entity
{
    public:
        Plsp();
        ~Plsp();

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

        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf plsp_id_xr; //type: uint32
        ydk::YLeaf sym_path_name; //type: string
        ydk::YLeaf refcnt; //type: int64
        ydk::YLeaf conn_delegated_to; //type: uint32
        class Stats; //type: Pcc::Plsps::Plsp::Stats
        class EventHistory; //type: Pcc::Plsps::Plsp::EventHistory
        class Path; //type: Pcc::Plsps::Plsp::Path

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Stats> stats;
        ydk::YList event_history;
        ydk::YList path;
        
}; // Pcc::Plsps::Plsp


class Pcc::Plsps::Plsp::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paths_created; //type: uint64
        ydk::YLeaf paths_destroyed; //type: uint64
        ydk::YLeaf path_create_errors; //type: uint64
        ydk::YLeaf path_destroy_errors; //type: uint64
        ydk::YLeaf requests_created; //type: uint64
        ydk::YLeaf requests_destroyed; //type: uint64
        ydk::YLeaf requests_failed; //type: uint64

}; // Pcc::Plsps::Plsp::Stats


class Pcc::Plsps::Plsp::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: uint64
        ydk::YLeaf desc; //type: string

}; // Pcc::Plsps::Plsp::EventHistory


class Pcc::Plsps::Plsp::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used_bw; //type: int64
        ydk::YLeaf requested_bw; //type: int64
        ydk::YLeaf metric_value; //type: int64
        ydk::YLeaf refcnt; //type: int64
        ydk::YLeaf lsp_plsp_id; //type: uint32
        ydk::YLeaf binding_sid_value; //type: uint32
        ydk::YLeaf lsp_id_tlv_ext_tunnel_id; //type: uint32
        ydk::YLeaf lsp_id_tlv_tunnel_endpoint_address; //type: uint32
        ydk::YLeaf lsp_id_tlv_tunnel_sender_address; //type: uint32
        ydk::YLeaf srp_id; //type: uint32
        ydk::YLeaf lsp_id_tlv_lsp_id; //type: uint16
        ydk::YLeaf lsp_id_tlv_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf binding_sid_type; //type: uint16
        ydk::YLeaf lsp_oper; //type: uint8
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf metric_type; //type: uint8
        ydk::YLeaf is_reported; //type: boolean
        ydk::YLeaf lsp_a_flag; //type: boolean
        ydk::YLeaf lsp_r_flag; //type: boolean
        ydk::YLeaf lsp_s_flag; //type: boolean
        ydk::YLeaf lsp_d_flag; //type: boolean
        ydk::YLeaf lsp_c_flag; //type: boolean
        class Stats; //type: Pcc::Plsps::Plsp::Path::Stats
        class EroHop; //type: Pcc::Plsps::Plsp::Path::EroHop
        class RroHop; //type: Pcc::Plsps::Plsp::Path::RroHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::Stats> stats;
        ydk::YList ero_hop;
        ydk::YList rro_hop;
        
}; // Pcc::Plsps::Plsp::Path


class Pcc::Plsps::Plsp::Path::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reports_requested; //type: uint64
        ydk::YLeaf reports_sent; //type: uint64
        ydk::YLeaf reports_failed_to_send; //type: uint64

}; // Pcc::Plsps::Plsp::Path::Stats


class Pcc::Plsps::Plsp::Path::EroHop : public ydk::Entity
{
    public:
        EroHop();
        ~EroHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loose; //type: boolean
        class Data; //type: Pcc::Plsps::Plsp::Path::EroHop::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::EroHop::Data> data;
        
}; // Pcc::Plsps::Plsp::Path::EroHop


class Pcc::Plsps::Plsp::Path::EroHop::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_type; //type: uint8
        class Ipv4; //type: Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4
        class SrV4; //type: Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4> sr_v4;
        
}; // Pcc::Plsps::Plsp::Path::EroHop::Data


class Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4 : public ydk::Entity
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

        ydk::YLeaf v4_addr; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8

}; // Pcc::Plsps::Plsp::Path::EroHop::Data::Ipv4


class Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4 : public ydk::Entity
{
    public:
        SrV4();
        ~SrV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cflag; //type: boolean
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf remote_addr; //type: uint32
        ydk::YLeaf local_addr; //type: uint32

}; // Pcc::Plsps::Plsp::Path::EroHop::Data::SrV4


class Pcc::Plsps::Plsp::Path::RroHop : public ydk::Entity
{
    public:
        RroHop();
        ~RroHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loose; //type: boolean
        class Data; //type: Pcc::Plsps::Plsp::Path::RroHop::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::RroHop::Data> data;
        
}; // Pcc::Plsps::Plsp::Path::RroHop


class Pcc::Plsps::Plsp::Path::RroHop::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_type; //type: uint8
        class Ipv4; //type: Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4
        class SrV4; //type: Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4> sr_v4;
        
}; // Pcc::Plsps::Plsp::Path::RroHop::Data


class Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4 : public ydk::Entity
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

        ydk::YLeaf v4_addr; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8

}; // Pcc::Plsps::Plsp::Path::RroHop::Data::Ipv4


class Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4 : public ydk::Entity
{
    public:
        SrV4();
        ~SrV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cflag; //type: boolean
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf remote_addr; //type: uint32
        ydk::YLeaf local_addr; //type: uint32

}; // Pcc::Plsps::Plsp::Path::RroHop::Data::SrV4


class Pcc::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: Pcc::Peers::Peer

        ydk::YList peer;
        
}; // Pcc::Peers


class Pcc::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer_addr; //type: string
        ydk::YLeaf handle; //type: uint32
        ydk::YLeaf state_str; //type: string
        ydk::YLeaf local_ok; //type: boolean
        ydk::YLeaf remote_ok; //type: boolean
        ydk::YLeaf open_retry; //type: uint32
        ydk::YLeaf ref_cnt; //type: uint32
        ydk::YLeaf rx_state_str; //type: string
        ydk::YLeaf holddown_counter; //type: uint16
        ydk::YLeaf pcep_up_ts; //type: uint64
        ydk::YLeaf precedence; //type: uint8
        ydk::YLeaf ka_interval_local; //type: uint32
        ydk::YLeaf ka_interval_remote; //type: uint32
        ydk::YLeaf dead_interval_local; //type: uint32
        ydk::YLeaf dead_interval_remote; //type: uint32
        ydk::YLeaf pcep_session_id_local; //type: uint32
        ydk::YLeaf pcep_session_id_remote; //type: uint32
        ydk::YLeaf pcep_server_ipv4_addr; //type: string
        ydk::YLeaf pcep_client_ipv4_addr; //type: string
        ydk::YLeaf is_stateful_local; //type: boolean
        ydk::YLeaf is_stateful_remote; //type: boolean
        ydk::YLeaf is_stateful_u_flag_local; //type: boolean
        ydk::YLeaf is_stateful_u_flag_remote; //type: boolean
        ydk::YLeaf is_segment_routing_local; //type: boolean
        ydk::YLeaf is_segment_routing_remote; //type: boolean
        ydk::YLeaf is_initiate_local; //type: boolean
        ydk::YLeaf is_initiate_remote; //type: boolean
        ydk::YLeaf is_best_pce; //type: boolean
        ydk::YLeaf sr_msd_local; //type: uint8
        ydk::YLeaf sr_msd_remote; //type: uint8
        class SocketInfo; //type: Pcc::Peers::Peer::SocketInfo
        class Stats; //type: Pcc::Peers::Peer::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Peers::Peer::SocketInfo> socket_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Pcc::Peers::Peer::Stats> stats;
        
}; // Pcc::Peers::Peer


class Pcc::Peers::Peer::SocketInfo : public ydk::Entity
{
    public:
        SocketInfo();
        ~SocketInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fd; //type: int64
        ydk::YLeaf wnotify; //type: boolean
        ydk::YLeaf rnotify; //type: boolean
        ydk::YLeaf refcnt; //type: uint32
        ydk::YLeaf selected; //type: boolean
        ydk::YLeaf owner; //type: uint32
        ydk::YLeaf csockaddr_str; //type: string
        ydk::YLeaf ssockaddr_str; //type: string

}; // Pcc::Peers::Peer::SocketInfo


class Pcc::Peers::Peer::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ka_msg_rx; //type: uint64
        ydk::YLeaf ka_msg_fail_rx; //type: uint64
        ydk::YLeaf ka_msg_tx; //type: uint64
        ydk::YLeaf ka_msg_fail_tx; //type: uint64
        ydk::YLeaf pcreq_msg_rx; //type: uint64
        ydk::YLeaf pcreq_msg_fail_rx; //type: uint64
        ydk::YLeaf pcreq_msg_tx; //type: uint64
        ydk::YLeaf pcreq_msg_fail_tx; //type: uint64
        ydk::YLeaf pcrep_msg_rx; //type: uint64
        ydk::YLeaf pcrep_msg_fail_rx; //type: uint64
        ydk::YLeaf pcrep_msg_tx; //type: uint64
        ydk::YLeaf pcrep_msg_fail_tx; //type: uint64
        ydk::YLeaf pcrpt_msg_rx; //type: uint64
        ydk::YLeaf pcrpt_msg_fail_rx; //type: uint64
        ydk::YLeaf pcrpt_msg_tx; //type: uint64
        ydk::YLeaf pcrpt_msg_fail_tx; //type: uint64
        ydk::YLeaf pcupd_msg_rx; //type: uint64
        ydk::YLeaf pcupd_msg_fail_rx; //type: uint64
        ydk::YLeaf pcupd_msg_tx; //type: uint64
        ydk::YLeaf pcupd_msg_fail_tx; //type: uint64
        ydk::YLeaf open_msg_rx; //type: uint64
        ydk::YLeaf open_msg_fail_rx; //type: uint64
        ydk::YLeaf open_msg_tx; //type: uint64
        ydk::YLeaf open_msg_fail_tx; //type: uint64
        ydk::YLeaf pcerr_msg_rx; //type: uint64
        ydk::YLeaf pcerr_msg_fail_rx; //type: uint64
        ydk::YLeaf pcerr_msg_tx; //type: uint64
        ydk::YLeaf pcerr_msg_fail_tx; //type: uint64
        ydk::YLeaf pcntf_msg_rx; //type: uint64
        ydk::YLeaf pcntf_msg_fail_rx; //type: uint64
        ydk::YLeaf pcntf_msg_tx; //type: uint64
        ydk::YLeaf pcntf_msg_fail_tx; //type: uint64
        ydk::YLeaf pce_eos_msg_tx; //type: uint64
        ydk::YLeaf pce_eos_msg_fail_tx; //type: uint64
        ydk::YLeaf close_msg_rx; //type: uint64
        ydk::YLeaf close_msg_fail_rx; //type: uint64
        ydk::YLeaf close_msg_tx; //type: uint64
        ydk::YLeaf close_msg_fail_tx; //type: uint64
        ydk::YLeaf unexpected_msg_rx; //type: uint64
        ydk::YLeaf corrupted_msg_rx; //type: uint64
        ydk::YLeaf reply_time_index; //type: uint32
        ydk::YLeaf minimum_reply_time; //type: uint64
        ydk::YLeaf maximum_reply_time; //type: uint64
        ydk::YLeaf requests_timed_out; //type: uint64
        ydk::YLeaf last_pcerr_type_rx; //type: uint8
        ydk::YLeaf last_pcerr_val_rx; //type: uint8
        ydk::YLeaf last_pcerr_rx_ts; //type: uint64
        ydk::YLeaf last_pcerr_type_tx; //type: uint8
        ydk::YLeaf last_pcerr_val_tx; //type: uint8
        ydk::YLeaf last_pcerr_tx_ts; //type: uint64
        ydk::YLeaf pcinitiate_msg_rx; //type: uint64
        ydk::YLeaf pcinitiate_msg_fail_rx; //type: uint64
        ydk::YLeafList recorded_reply_time; //type: list of  uint64

}; // Pcc::Peers::Peer::Stats

class Xtc : public ydk::Entity
{
    public:
        Xtc();
        ~Xtc();

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

        class Policies; //type: Xtc::Policies
        class PolicyForwardings; //type: Xtc::PolicyForwardings
        class PolicySummary; //type: Xtc::PolicySummary
        class OnDemandColors; //type: Xtc::OnDemandColors
        class Controller; //type: Xtc::Controller
        class TopologySummary; //type: Xtc::TopologySummary
        class TopologyNodes; //type: Xtc::TopologyNodes
        class PrefixInfos; //type: Xtc::PrefixInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies> policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PolicyForwardings> policy_forwardings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PolicySummary> policy_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::OnDemandColors> on_demand_colors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller> controller;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologySummary> topology_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos> prefix_infos;
        
}; // Xtc


class Xtc::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

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

        class Policy; //type: Xtc::Policies::Policy

        ydk::YList policy;
        
}; // Xtc::Policies


class Xtc::Policies::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf administrative_up; //type: uint32
        ydk::YLeaf operational_up; //type: uint32
        ydk::YLeaf color; //type: uint32
        ydk::YLeaf transition_count; //type: uint32
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf up_time; //type: uint64
        ydk::YLeaf up_age; //type: uint64
        ydk::YLeaf down_time; //type: uint64
        ydk::YLeaf down_age; //type: uint64
        ydk::YLeaf steering_bgp_disabled; //type: boolean
        ydk::YLeaf interface_handle; //type: uint32
        ydk::YLeaf profile_id; //type: uint16
        ydk::YLeaf ipv6_caps_enabled; //type: boolean
        class DestinationAddress; //type: Xtc::Policies::Policy::DestinationAddress
        class BindingSid; //type: Xtc::Policies::Policy::BindingSid
        class CandidatePath; //type: Xtc::Policies::Policy::CandidatePath
        class LsPs; //type: Xtc::Policies::Policy::LsPs
        class EventBuffer; //type: Xtc::Policies::Policy::EventBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::BindingSid> binding_sid;
        ydk::YList candidate_path;
        ydk::YList ls_ps;
        ydk::YList event_buffer;
        
}; // Xtc::Policies::Policy


class Xtc::Policies::Policy::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::DestinationAddress


class Xtc::Policies::Policy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_fallback_dynamic; //type: boolean
        ydk::YLeaf is_within_srlb_range; //type: boolean
        class Value; //type: Xtc::Policies::Policy::BindingSid::Value

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::BindingSid::Value> value_;
        
}; // Xtc::Policies::Policy::BindingSid


class Xtc::Policies::Policy::BindingSid::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::BindingSid::Value


class Xtc::Policies::Policy::CandidatePath : public ydk::Entity
{
    public:
        CandidatePath();
        ~CandidatePath();

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
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf protocol_originator; //type: XtcPolicyCpathProtoOrigin
        ydk::YLeaf discriminator; //type: uint32
        ydk::YLeaf is_current; //type: boolean
        ydk::YLeaf is_reoptimizing; //type: boolean
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf error; //type: string
        class Originator; //type: Xtc::Policies::Policy::CandidatePath::Originator
        class SrPathConstraints; //type: Xtc::Policies::Policy::CandidatePath::SrPathConstraints
        class RequestedBsid; //type: Xtc::Policies::Policy::CandidatePath::RequestedBsid
        class PccInformation; //type: Xtc::Policies::Policy::CandidatePath::PccInformation
        class SegmentList; //type: Xtc::Policies::Policy::CandidatePath::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::Originator> originator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SrPathConstraints> sr_path_constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::RequestedBsid> requested_bsid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::PccInformation> pcc_information;
        ydk::YList segment_list;
        
}; // Xtc::Policies::Policy::CandidatePath


class Xtc::Policies::Policy::CandidatePath::Originator : public ydk::Entity
{
    public:
        Originator();
        ~Originator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system_number; //type: uint32
        class NodeAddress; //type: Xtc::Policies::Policy::CandidatePath::Originator::NodeAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::Originator::NodeAddress> node_address;
        
}; // Xtc::Policies::Policy::CandidatePath::Originator


class Xtc::Policies::Policy::CandidatePath::Originator::NodeAddress : public ydk::Entity
{
    public:
        NodeAddress();
        ~NodeAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::CandidatePath::Originator::NodeAddress


class Xtc::Policies::Policy::CandidatePath::SrPathConstraints : public ydk::Entity
{
    public:
        SrPathConstraints();
        ~SrPathConstraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathMetrics; //type: Xtc::Policies::Policy::CandidatePath::SrPathConstraints::PathMetrics
        class Segments; //type: Xtc::Policies::Policy::CandidatePath::SrPathConstraints::Segments
        class AffinityConstraint; //type: Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SrPathConstraints::PathMetrics> path_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SrPathConstraints::Segments> segments;
        ydk::YList affinity_constraint;
        
}; // Xtc::Policies::Policy::CandidatePath::SrPathConstraints


class Xtc::Policies::Policy::CandidatePath::SrPathConstraints::PathMetrics : public ydk::Entity
{
    public:
        PathMetrics();
        ~PathMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf margin_relative; //type: uint32
        ydk::YLeaf margin_absolute; //type: uint32
        ydk::YLeaf maximum_segments; //type: uint16
        ydk::YLeaf accumulative_te_metric; //type: uint32
        ydk::YLeaf accumulative_igp_metric; //type: uint32
        ydk::YLeaf accumulative_delay; //type: uint32

}; // Xtc::Policies::Policy::CandidatePath::SrPathConstraints::PathMetrics


class Xtc::Policies::Policy::CandidatePath::SrPathConstraints::Segments : public ydk::Entity
{
    public:
        Segments();
        ~Segments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_algorithm; //type: uint8

}; // Xtc::Policies::Policy::CandidatePath::SrPathConstraints::Segments


class Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint : public ydk::Entity
{
    public:
        AffinityConstraint();
        ~AffinityConstraint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf value_; //type: uint32
        class Color; //type: Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint::Color

        ydk::YList color;
        
}; // Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint


class Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint::Color : public ydk::Entity
{
    public:
        Color();
        ~Color();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color; //type: string

}; // Xtc::Policies::Policy::CandidatePath::SrPathConstraints::AffinityConstraint::Color


class Xtc::Policies::Policy::CandidatePath::RequestedBsid : public ydk::Entity
{
    public:
        RequestedBsid();
        ~RequestedBsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::CandidatePath::RequestedBsid


class Xtc::Policies::Policy::CandidatePath::PccInformation : public ydk::Entity
{
    public:
        PccInformation();
        ~PccInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf is_orphan; //type: boolean
        class OrphanTimer; //type: Xtc::Policies::Policy::CandidatePath::PccInformation::OrphanTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::PccInformation::OrphanTimer> orphan_timer;
        
}; // Xtc::Policies::Policy::CandidatePath::PccInformation


class Xtc::Policies::Policy::CandidatePath::PccInformation::OrphanTimer : public ydk::Entity
{
    public:
        OrphanTimer();
        ~OrphanTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running; //type: boolean
        ydk::YLeaf remaining_seconds; //type: int64
        ydk::YLeaf remaining_nano_seconds; //type: int64

}; // Xtc::Policies::Policy::CandidatePath::PccInformation::OrphanTimer


class Xtc::Policies::Policy::CandidatePath::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

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
        ydk::YLeaf type; //type: XtcPolicyPath
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf metric_type; //type: uint8
        ydk::YLeaf metric_value; //type: uint64
        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf pce_based_path; //type: boolean
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf error; //type: string
        class Hops; //type: Xtc::Policies::Policy::CandidatePath::SegmentList::Hops

        ydk::YList hops;
        
}; // Xtc::Policies::Policy::CandidatePath::SegmentList


class Xtc::Policies::Policy::CandidatePath::SegmentList::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSrSid
        ydk::YLeaf algorithm; //type: uint8
        class Sid; //type: Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::Sid
        class LocalAddress; //type: Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::LocalAddress
        class RemoteAddress; //type: Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::RemoteAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::Sid> sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::RemoteAddress> remote_address;
        
}; // Xtc::Policies::Policy::CandidatePath::SegmentList::Hops


class Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::Sid


class Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::LocalAddress


class Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::RemoteAddress : public ydk::Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::CandidatePath::SegmentList::Hops::RemoteAddress


class Xtc::Policies::Policy::LsPs : public ydk::Entity
{
    public:
        LsPs();
        ~LsPs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf policy_id; //type: uint16
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf state; //type: XtcPolicyLspSmState
        ydk::YLeaf is_current_lsp; //type: boolean
        ydk::YLeaf is_reoptimized_lsp; //type: boolean
        class BindingSid; //type: Xtc::Policies::Policy::LsPs::BindingSid
        class InstallTimer; //type: Xtc::Policies::Policy::LsPs::InstallTimer
        class CleanupTimer; //type: Xtc::Policies::Policy::LsPs::CleanupTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::LsPs::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::LsPs::InstallTimer> install_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::LsPs::CleanupTimer> cleanup_timer;
        
}; // Xtc::Policies::Policy::LsPs


class Xtc::Policies::Policy::LsPs::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_fallback_dynamic; //type: boolean
        ydk::YLeaf is_within_srlb_range; //type: boolean
        class Value; //type: Xtc::Policies::Policy::LsPs::BindingSid::Value

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Policies::Policy::LsPs::BindingSid::Value> value_;
        
}; // Xtc::Policies::Policy::LsPs::BindingSid


class Xtc::Policies::Policy::LsPs::BindingSid::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Policies::Policy::LsPs::BindingSid::Value


class Xtc::Policies::Policy::LsPs::InstallTimer : public ydk::Entity
{
    public:
        InstallTimer();
        ~InstallTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running; //type: boolean
        ydk::YLeaf remaining_seconds; //type: int64
        ydk::YLeaf remaining_nano_seconds; //type: int64

}; // Xtc::Policies::Policy::LsPs::InstallTimer


class Xtc::Policies::Policy::LsPs::CleanupTimer : public ydk::Entity
{
    public:
        CleanupTimer();
        ~CleanupTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf running; //type: boolean
        ydk::YLeaf remaining_seconds; //type: int64
        ydk::YLeaf remaining_nano_seconds; //type: int64

}; // Xtc::Policies::Policy::LsPs::CleanupTimer


class Xtc::Policies::Policy::EventBuffer : public ydk::Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_message; //type: string
        ydk::YLeaf time_stamp; //type: uint32

}; // Xtc::Policies::Policy::EventBuffer


class Xtc::PolicyForwardings : public ydk::Entity
{
    public:
        PolicyForwardings();
        ~PolicyForwardings();

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

        class PolicyForwarding; //type: Xtc::PolicyForwardings::PolicyForwarding

        ydk::YList policy_forwarding;
        
}; // Xtc::PolicyForwardings


class Xtc::PolicyForwardings::PolicyForwarding : public ydk::Entity
{
    public:
        PolicyForwarding();
        ~PolicyForwarding();

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
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf color; //type: uint32
        ydk::YLeaf is_local_label_valid; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf are_stats_valid; //type: boolean
        ydk::YLeaf forwarding_stats_pkts; //type: uint64
        ydk::YLeaf forwarding_stats_bytes; //type: uint64
        class EndpointAddress; //type: Xtc::PolicyForwardings::PolicyForwarding::EndpointAddress
        class Paths; //type: Xtc::PolicyForwardings::PolicyForwarding::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PolicyForwardings::PolicyForwarding::EndpointAddress> endpoint_address;
        ydk::YList paths;
        
}; // Xtc::PolicyForwardings::PolicyForwarding


class Xtc::PolicyForwardings::PolicyForwarding::EndpointAddress : public ydk::Entity
{
    public:
        EndpointAddress();
        ~EndpointAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::PolicyForwardings::PolicyForwarding::EndpointAddress


class Xtc::PolicyForwardings::PolicyForwarding::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_ipv4; //type: string
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf is_protected; //type: boolean
        ydk::YLeaf is_pure_bkup; //type: boolean
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf bkup_path_id; //type: uint8
        ydk::YLeaf segment_list_name; //type: string
        ydk::YLeaf are_stats_valid; //type: boolean
        ydk::YLeaf forwarding_stats_pkts; //type: uint64
        ydk::YLeaf forwarding_stats_bytes; //type: uint64
        ydk::YLeafList label_stack; //type: list of  uint32

}; // Xtc::PolicyForwardings::PolicyForwarding::Paths


class Xtc::PolicySummary : public ydk::Entity
{
    public:
        PolicySummary();
        ~PolicySummary();

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

        ydk::YLeaf configured_total_policy_count; //type: uint32
        ydk::YLeaf configured_up_policy_count; //type: uint32
        ydk::YLeaf configured_down_policy_count; //type: uint32
        class Ipv4SourceAddress; //type: Xtc::PolicySummary::Ipv4SourceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PolicySummary::Ipv4SourceAddress> ipv4_source_address;
        
}; // Xtc::PolicySummary


class Xtc::PolicySummary::Ipv4SourceAddress : public ydk::Entity
{
    public:
        Ipv4SourceAddress();
        ~Ipv4SourceAddress();

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

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::PolicySummary::Ipv4SourceAddress


class Xtc::OnDemandColors : public ydk::Entity
{
    public:
        OnDemandColors();
        ~OnDemandColors();

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

        class OnDemandColor; //type: Xtc::OnDemandColors::OnDemandColor

        ydk::YList on_demand_color;
        
}; // Xtc::OnDemandColors


class Xtc::OnDemandColors::OnDemandColor : public ydk::Entity
{
    public:
        OnDemandColor();
        ~OnDemandColor();

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

        ydk::YLeaf color; //type: uint32
        ydk::YLeaf color_xr; //type: uint32
        ydk::YLeaf absolute_margin; //type: uint32
        ydk::YLeaf relative_margin; //type: uint32
        ydk::YLeaf maximum_sid_depth; //type: uint32
        class DisjointPathInfo; //type: Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo> disjoint_path_info;
        
}; // Xtc::OnDemandColors::OnDemandColor


class Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo : public ydk::Entity
{
    public:
        DisjointPathInfo();
        ~DisjointPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disjointness_type; //type: XtcDisjointness
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf sub_id; //type: uint32

}; // Xtc::OnDemandColors::OnDemandColor::DisjointPathInfo


class Xtc::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        class PolicyRequests; //type: Xtc::Controller::PolicyRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller::PolicyRequests> policy_requests;
        
}; // Xtc::Controller


class Xtc::Controller::PolicyRequests : public ydk::Entity
{
    public:
        PolicyRequests();
        ~PolicyRequests();

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

        class PolicyRequest; //type: Xtc::Controller::PolicyRequests::PolicyRequest

        ydk::YList policy_request;
        
}; // Xtc::Controller::PolicyRequests


class Xtc::Controller::PolicyRequests::PolicyRequest : public ydk::Entity
{
    public:
        PolicyRequest();
        ~PolicyRequest();

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
        ydk::YLeaf end_point_type; //type: XtcAddressFamily
        ydk::YLeaf end_point_address; //type: string
        ydk::YLeaf color; //type: uint32
        ydk::YLeaf route_distinguisher; //type: uint32
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf color_xr; //type: uint32
        ydk::YLeaf route_distinguisher_xr; //type: uint32
        ydk::YLeaf creation_time; //type: uint32
        ydk::YLeaf last_updated_time; //type: uint32
        class EndPoint; //type: Xtc::Controller::PolicyRequests::PolicyRequest::EndPoint
        class SegmentList; //type: Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller::PolicyRequests::PolicyRequest::EndPoint> end_point;
        ydk::YList segment_list;
        
}; // Xtc::Controller::PolicyRequests::PolicyRequest


class Xtc::Controller::PolicyRequests::PolicyRequest::EndPoint : public ydk::Entity
{
    public:
        EndPoint();
        ~EndPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Controller::PolicyRequests::PolicyRequest::EndPoint


class Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList : public ydk::Entity
{
    public:
        SegmentList();
        ~SegmentList();

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
        ydk::YLeaf type; //type: XtcPolicyPath
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf metric_type; //type: uint8
        ydk::YLeaf metric_value; //type: uint64
        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf pce_based_path; //type: boolean
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf error; //type: string
        class Hops; //type: Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops

        ydk::YList hops;
        
}; // Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList


class Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops : public ydk::Entity
{
    public:
        Hops();
        ~Hops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSrSid
        ydk::YLeaf algorithm; //type: uint8
        class Sid; //type: Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::Sid
        class LocalAddress; //type: Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::LocalAddress
        class RemoteAddress; //type: Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::RemoteAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::Sid> sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::LocalAddress> local_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::RemoteAddress> remote_address;
        
}; // Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops


class Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::Sid : public ydk::Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::Sid


class Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::LocalAddress : public ydk::Entity
{
    public:
        LocalAddress();
        ~LocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::LocalAddress


class Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::RemoteAddress : public ydk::Entity
{
    public:
        RemoteAddress();
        ~RemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::Controller::PolicyRequests::PolicyRequest::SegmentList::Hops::RemoteAddress


class Xtc::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

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

        ydk::YLeaf nodes; //type: uint32
        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf prefix_sids; //type: uint32
        ydk::YLeaf links; //type: uint32
        ydk::YLeaf adjacency_sids; //type: uint32

}; // Xtc::TopologySummary


class Xtc::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: Xtc::TopologyNodes::TopologyNode

        ydk::YList topology_node;
        
}; // Xtc::TopologyNodes


class Xtc::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        ydk::YLeaf overload; //type: boolean
        class NodeProtocolIdentifier; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class PrefixSid; //type: Xtc::TopologyNodes::TopologyNode::PrefixSid
        class Ipv4Link; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList prefix_sid;
        ydk::YList ipv4_link;
        ydk::YList ipv6_link;
        
}; // Xtc::TopologyNodes::TopologyNode


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation

        ydk::YList igp_information;
        
}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Xtc::TopologyNodes::TopologyNode::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid1
        ydk::YLeaf algorithm; //type: uint32
        ydk::YLeaf mpls_label; //type: uint32
        class SidPrefix; //type: Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix> sid_prefix;
        
}; // Xtc::TopologyNodes::TopologyNode::PrefixSid


class Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::TopologyNodes::TopologyNode::PrefixSid::SidPrefix


class Xtc::TopologyNodes::TopologyNode::Ipv4Link : public ydk::Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        ydk::YLeaf administrative_groups; //type: uint32
        ydk::YLeafList srlgs; //type: list of  uint32
        class LocalIgpInformation; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        ydk::YList adjacency_sid;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp> igp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation

        ydk::YList igp_information;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid1
        ydk::YLeaf algorithm; //type: uint32
        ydk::YLeaf mpls_label; //type: uint32
        class SidPrefix; //type: Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class Xtc::TopologyNodes::TopologyNode::Ipv6Link : public ydk::Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf remote_ipv6_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        ydk::YList adjacency_sid;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp> igp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation

        ydk::YList igp_information;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: XtcSid1
        ydk::YLeaf algorithm; //type: uint32
        ydk::YLeaf mpls_label; //type: uint32
        class SidPrefix; //type: Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class Xtc::PrefixInfos : public ydk::Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

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

        class PrefixInfo; //type: Xtc::PrefixInfos::PrefixInfo

        ydk::YList prefix_info;
        
}; // Xtc::PrefixInfos


class Xtc::PrefixInfos::PrefixInfo : public ydk::Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

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

        ydk::YLeaf node_identifier; //type: uint32
        ydk::YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: Xtc::PrefixInfos::PrefixInfo::Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        ydk::YList address;
        
}; // Xtc::PrefixInfos::PrefixInfo


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation

        ydk::YList igp_information;
        
}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        class Igp; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: XtcIgpInfoId
        class Isis; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        
}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Xtc::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Xtc::PrefixInfos::PrefixInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpAddress; //type: Xtc::PrefixInfos::PrefixInfo::Address::IpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_agent_oper::Xtc::PrefixInfos::PrefixInfo::Address::IpAddress> ip_address;
        
}; // Xtc::PrefixInfos::PrefixInfo::Address


class Xtc::PrefixInfos::PrefixInfo::Address::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: XtcAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Xtc::PrefixInfos::PrefixInfo::Address::IpAddress

class XtcSrSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_node_sid;
        static const ydk::Enum::YLeaf ipv4_adjacency_sid;
        static const ydk::Enum::YLeaf unknown_sid;

};

class XtcIgpInfoId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;

};

class XtcAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class XtcSid1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sr_protected_adj_sid;
        static const ydk::Enum::YLeaf sr_unprotected_adj_sid;
        static const ydk::Enum::YLeaf sr_bgp_egress_peer_engineering_sid;
        static const ydk::Enum::YLeaf sr_reqular_prefix_sid;
        static const ydk::Enum::YLeaf sr_strict_prefix_sid;

};

class XtcPolicyCpathProtoOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf pcep;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf configuration;

};

class XtcDisjointness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_disjointness;
        static const ydk::Enum::YLeaf link_disjointness;
        static const ydk::Enum::YLeaf node_disjointness;
        static const ydk::Enum::YLeaf srlg_disjointness;
        static const ydk::Enum::YLeaf srlg_node_disjointness;

};

class XtcPolicyLspSmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf programmed;
        static const ydk::Enum::YLeaf egress_paths_pending;
        static const ydk::Enum::YLeaf label_allocation_pending;
        static const ydk::Enum::YLeaf label_allocation_cleanup_pending;
        static const ydk::Enum::YLeaf label_rewrite_pending;
        static const ydk::Enum::YLeaf label_rewrite_cleanup_pending;
        static const ydk::Enum::YLeaf bsid_allocation_pending;
        static const ydk::Enum::YLeaf bsid_allocation_cleanup_pending;
        static const ydk::Enum::YLeaf bsid_rewrite_pending;
        static const ydk::Enum::YLeaf bsid_rewrite_cleanup_pending;
        static const ydk::Enum::YLeaf tunnel_rewrite_pending;
        static const ydk::Enum::YLeaf tunnel_rewrite_cleanup_pending;
        static const ydk::Enum::YLeaf install_timer_pending;
        static const ydk::Enum::YLeaf cleanup_timer_pending;

};

class XtcPolicyPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf dynamic_pce;

};

class XtcSid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf ipv6;

};

class XtcAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_AGENT_OPER_ */

