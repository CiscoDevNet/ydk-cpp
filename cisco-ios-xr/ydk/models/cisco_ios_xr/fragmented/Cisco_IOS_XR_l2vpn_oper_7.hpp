#ifndef _CISCO_IOS_XR_L2VPN_OPER_7_
#define _CISCO_IOS_XR_L2VPN_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_6.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::Statistics::SequenceNumber


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection : public Entity
{
    public:
        L2VpnProtection();
        ~L2VpnProtection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protection_type; //type: L2VpnProtectionEnum
        YLeaf protection_configured; //type: L2VpnProtectionRoleEnum
        YLeaf protection_name; //type: string
        YLeaf protected_name; //type: string
        YLeaf active; //type: boolean

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::AttachmentCircuit::L2VpnProtection


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire : public Entity
{
    public:
        PseudoWire();
        ~PseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_source_address; //type: string
        YLeaf ipv6_local_source_address; //type: string
        YLeaf pseudo_wire_id; //type: uint64
        YLeaf is_pwr_type; //type: boolean
        YLeaf is_evpnvpws_type; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf pseudo_wire_state; //type: L2VpnPwStateEnum
        YLeaf protocol; //type: L2VpnSignallingProtoEnum
        YLeaf pw_class_name; //type: string
        YLeaf tag_rewrite; //type: uint16
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf fe_ctype; //type: L2VpnPwFecEnum
        YLeaf evpn_src_acid; //type: uint32
        YLeaf sequencing_type; //type: L2VpnPwSequenceEnum
        YLeaf resync_enabled; //type: boolean
        YLeaf resync_threshold; //type: uint32
        YLeaf local_control_word; //type: L2VpnPwControlWordEnum
        YLeaf remote_control_word; //type: L2VpnPwControlWordEnum
        YLeaf local_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf remote_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf imposed_vlan_id; //type: uint32
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf last_time_status_down; //type: string
        YLeaf time_elapsed_status_down; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf pseudo_wire_type_mismatched; //type: boolean
        YLeaf payload_bytes_mismatched; //type: boolean
        YLeaf bitrate_mismatched; //type: boolean
        YLeaf rtp_mismatched; //type: boolean
        YLeaf diff_ts_mismatched; //type: boolean
        YLeaf sig_pkts_mismatched; //type: boolean
        YLeaf cas_mismatched; //type: boolean
        YLeaf payload_type_mismatched; //type: boolean
        YLeaf freq_mismatched; //type: boolean
        YLeaf ssrc_mismatched; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf illegal_control_word; //type: boolean
        YLeaf ad_remote_down; //type: boolean
        YLeaf not_supported_qinq; //type: boolean
        YLeaf local_label_failed; //type: boolean
        YLeaf remote_label_failed; //type: boolean
        YLeaf preferred_path_disable_fallback; //type: boolean
        YLeaf backup_pw; //type: boolean
        YLeaf primary_pw; //type: boolean
        YLeaf backup_active; //type: boolean
        YLeaf backup_force_active; //type: boolean
        YLeaf disable_never; //type: boolean
        YLeaf disable_delay; //type: uint8
        YLeaf primary_peer_id; //type: string
        YLeaf primary_pseudo_wire_id; //type: uint64
        YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf transport_lsp_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf pw_status_use; //type: boolean
        YLeaf auto_discovery; //type: boolean
        YLeaf ad_method; //type: uint32
        YLeaf pwlsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertise_failed; //type: boolean
        YLeaf is_vfi; //type: boolean
        YLeaf is_multi_segment_pseudowire; //type: boolean
        YLeaf pw_redundancy_one_way; //type: boolean
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf pw_flow_label_type; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_type_cfg; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_code17_disabled; //type: boolean
        YLeaf is_flow_label_static; //type: boolean
        YLeaf is_partially_programmed; //type: boolean
        YLeaf pw_redundancy_initial_delay; //type: uint8
        YLeaf bridge_pw_type_mismatch; //type: boolean
        YLeaf required_bw; //type: uint32
        YLeaf admited_bw; //type: uint32
        YLeaf forward_class; //type: uint8
        YLeaf table_policy_name; //type: string
        class PeerId; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics
        class P2MpPw; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling> local_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw> p2mp_pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId> peer_id;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface> remote_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling> remote_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics> statistics;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId : public Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnPeerEnum
        YLeaf ipv4_peer_id; //type: string
        YLeaf ipv6_peer_id; //type: string
        YLeaf internal_label; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PeerId


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo : public Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: L2VpnEncapMethodEnum
        class Atom; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_pseudowire_headend; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf remote_label; //type: uint32
        YLeaf local_group_id; //type: uint32
        YLeaf remote_group_id; //type: uint32
        YLeaf local_cv_type; //type: uint8
        YLeaf local_c_ctype; //type: uint8
        YLeaf remote_cv_type; //type: uint8
        YLeaf remote_c_ctype; //type: uint8
        YLeaf local_veid; //type: uint32
        YLeaf remote_veid; //type: uint32
        YLeaf local_ceid; //type: uint32
        YLeaf remote_ceid; //type: uint32
        YLeaf source_address; //type: string
        YLeaf remote_source_address; //type: string
        YLeaf local_ldp_id; //type: string
        YLeaf remote_ldp_id; //type: string
        YLeaf saii; //type: string
        YLeaf taii; //type: string
        YLeaf is_sai_itype2; //type: boolean
        YLeaf local_saii_gbl_id; //type: uint32
        YLeaf local_saiiac_id; //type: uint32
        YLeaf is_tai_itype2; //type: boolean
        YLeaf local_taii_gbl_id; //type: uint32
        YLeaf local_taiiac_id; //type: uint32
        YLeaf rem_saii_gbl_id; //type: uint32
        YLeaf rem_saiiac_id; //type: uint32
        YLeaf rem_taii_gbl_id; //type: uint32
        YLeaf rem_taiiac_id; //type: uint32
        YLeaf rem_saii; //type: string
        YLeaf rem_taii; //type: string
        YLeaf lsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertisment_failed; //type: boolean
        class LocalAgi; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi : public Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi : public Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3 : public Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2tp_class_name; //type: string
        YLeaf ipv4_source_address; //type: string
        YLeaf ipv6_source_address; //type: string
        YLeaf path_mtu_enabled; //type: boolean
        YLeaf path_mtu_max_value; //type: uint16
        YLeaf dont_fragment_bit; //type: boolean
        YLeaf tos_mode; //type: L2VpnTosModeEnum
        YLeaf tos; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf local_session_id; //type: uint32
        YLeaf remote_session_id; //type: uint32
        YLeaf local_cookie_size; //type: uint8
        YLeaf remote_cookie_size; //type: uint8
        YLeaf local_cookie_low_value; //type: uint32
        YLeaf remote_cookie_low_value; //type: uint32
        YLeaf local_cookie_high_value; //type: uint32
        YLeaf remote_cookie_high_value; //type: uint32
        YLeaf remote_circuit_status_up; //type: boolean
        YLeaf tunnel_state; //type: L2VpnL2TpTunnelStateEnum
        YLeaf local_secondary_cookie_size; //type: uint8
        YLeaf local_secondary_cookie_low_value; //type: uint32
        YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface : public Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnInterfaceEnum
        class Ethernet; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan : public Entity
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

        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16
        class VlanRange; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum
        class TdmOptions; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Atm


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::Fr


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
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
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
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
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface : public Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters> parameters;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnInterfaceEnum
        class Ethernet; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan : public Entity
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

        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16
        class VlanRange; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum
        class TdmOptions; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
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
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
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
        YLeaf replicate_status; //type: IflistRepStatusEnum

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option; //type: L2VpnPrefpathOptionEnum
        YLeaf next_hop_ip; //type: uint32
        YLeaf te_tunnel_interface_number; //type: uint32
        YLeaf ip_tunnel_interface_number; //type: uint32
        YLeaf tp_tunnel_interface_number; //type: uint32

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::PreferredPath


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling : public Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::StatusTlv


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::LocalSignalling::Tlv


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling : public Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::StatusTlv


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::RemoteSignalling::Tlv


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics : public Entity
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

        class ImpostionStats; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImpositionStat; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DispositionStat; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        
}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::Statistics::SequenceNumber


class L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw : public Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_available; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf local_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf local_tunnel_id; //type: uint32
        YLeaf local_extended_tunnel_id; //type: string
        YLeaf local_p2mp_id; //type: uint32
        YLeaf local_flags; //type: uint8
        YLeaf remote_available; //type: boolean
        YLeaf remote_label; //type: uint32
        YLeaf remote_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf remote_extended_tunnel_id; //type: string
        YLeaf remote_p2mp_id; //type: uint32
        YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Standby::Xconnects::Xconnect::BackupSegment::PseudoWire::P2MpPw


class L2Vpnv2::Standby::XconnectGroups : public Entity
{
    public:
        XconnectGroups();
        ~XconnectGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XconnectGroup; //type: L2Vpnv2::Standby::XconnectGroups::XconnectGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectGroups::XconnectGroup> > xconnect_group;
        
}; // L2Vpnv2::Standby::XconnectGroups


class L2Vpnv2::Standby::XconnectGroups::XconnectGroup : public Entity
{
    public:
        XconnectGroup();
        ~XconnectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf number_xconnects; //type: uint32

}; // L2Vpnv2::Standby::XconnectGroups::XconnectGroup


class L2Vpnv2::Standby::XconnectMp2Mps : public Entity
{
    public:
        XconnectMp2Mps();
        ~XconnectMp2Mps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XconnectMp2Mp; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp> > xconnect_mp2mp;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp : public Entity
{
    public:
        XconnectMp2Mp();
        ~XconnectMp2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: string
        YLeaf mp2_mp_name; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf mp2mp_name; //type: string
        YLeaf mp2mpid; //type: uint32
        YLeaf vpn_id; //type: uint32
        YLeaf vpn_mtu; //type: uint32
        YLeaf l2_encapsulation; //type: L2VpnBagAdEncapEnum
        YLeaf xconnect_shutdown; //type: boolean
        class Discovery; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery> discovery;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ad_method; //type: uint32
        YLeaf vpn_added; //type: boolean
        YLeaf ad_service_connected; //type: boolean
        YLeaf ad_signalling_method; //type: uint32
        YLeaf ce_range; //type: uint16
        YLeaf export_route_policy; //type: string
        YLeaf number_a_cs_up; //type: uint32
        YLeaf number_p_ws_up; //type: uint32
        YLeaf number_ce2ce_advertised; //type: uint32
        YLeaf number_a_cs; //type: uint32
        YLeaf number_pseudowires; //type: uint32
        YLeaf number_ce2c_es; //type: uint32
        class RdValue; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue
        class ImportRt; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt
        class ExportRt; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt> > export_rt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt> > import_rt;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue> rd_value;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue : public Entity
{
    public:
        RdValue();
        ~RdValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: L2VpnAdRdEnum
        class Auto_; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::Auto_


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::TwoByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::FourByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::RdValue::V4Addr


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt : public Entity
{
    public:
        ImportRt();
        ~ImportRt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt; //type: L2VpnAdRtEnum
        class TwoByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::TwoByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::FourByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::V4Addr


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ImportRt::EsImport


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt : public Entity
{
    public:
        ExportRt();
        ~ExportRt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt; //type: L2VpnAdRtEnum
        class TwoByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs
        class V4Addr; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr
        class EsImport; //type: L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport> es_import;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::TwoByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::FourByteAs


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::V4Addr


class L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport : public Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high_bytes; //type: uint32
        YLeaf low_bytes; //type: uint16

}; // L2Vpnv2::Standby::XconnectMp2Mps::XconnectMp2Mp::Discovery::ExportRt::EsImport


class L2Vpnv2::Standby::Indexes : public Entity
{
    public:
        Indexes();
        ~Indexes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Index_; //type: L2Vpnv2::Standby::Indexes::Index_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::Indexes::Index_> > index_;
        
}; // L2Vpnv2::Standby::Indexes


class L2Vpnv2::Standby::Indexes::Index_ : public Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pool_id; //type: string
        YLeaf pool_id_xr; //type: uint32
        YLeaf application_type; //type: L2VpnIdMgrAppEnum
        YLeaf allocated_ids; //type: uint32
        YLeaf zombied_ids; //type: uint32
        YLeaf pool_size; //type: uint32
        YLeaf max_num_id_mgr; //type: uint32
        YLeaf num_id_mgr_in_use; //type: uint32

}; // L2Vpnv2::Standby::Indexes::Index_


class L2Vpnv2::Standby::XconnectSummary : public Entity
{
    public:
        XconnectSummary();
        ~XconnectSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_groups; //type: uint32
        YLeaf number_xconnects; //type: uint32
        YLeaf number_xconnects_up; //type: uint32
        YLeaf number_xconnects_down; //type: uint32
        YLeaf number_xconnects_unresolved; //type: uint32
        YLeaf number_xconnects_administratively_down; //type: uint32
        YLeaf number_xconnects_type_attachment_circuit_to_pseudo_wire; //type: uint32
        YLeaf number_xconnects_type_monitor_session_to_pseudo_wire; //type: uint32
        YLeaf number_xconnects_locally_switched; //type: uint32
        YLeaf number_xconnects_with_backup_pw; //type: uint32
        YLeaf number_xconnects_currently_using_backup; //type: uint32
        YLeaf down_backup_xconnects; //type: uint32
        YLeaf admin_down_backup_xconnects; //type: uint32
        YLeaf unresolved_backup_xconnects; //type: uint32
        YLeaf standby_backup_xconnects; //type: uint32
        YLeaf standby_ready_backup_xconnects; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf number_xconnects_type_pseudo_wire_to_pseudo_wire; //type: uint32
        YLeaf number_mp2mp_xconnects; //type: uint32
        YLeaf number_mp2mp_xconnects_up; //type: uint32
        YLeaf number_mp2mp_xconnects_down; //type: uint32
        YLeaf number_mp2mp_xconnects_advertised; //type: uint32
        YLeaf number_mp2mp_xconnectss_not_advertised; //type: uint32
        YLeaf number_ce2_ceconnections; //type: uint32
        YLeaf number_ce2ce_advertized; //type: uint32
        YLeaf number_ce2ce_not_advertized; //type: uint32
        YLeaf partially_programmed_xconnects; //type: uint32
        YLeaf number_xconnects_with_backup_interface; //type: uint32
        YLeaf number_xconnects_currently_using_backup_interface; //type: uint32
        YLeaf down_backup_interface_xconnects; //type: uint32
        YLeaf admin_down_backup_interface_xconnects; //type: uint32
        YLeaf unresolved_backup_interface_xconnects; //type: uint32
        YLeaf standby_backup_interface_xconnects; //type: uint32

}; // L2Vpnv2::Standby::XconnectSummary


class L2Vpnv2::Standby::ProcFsm : public Entity
{
    public:
        ProcFsm();
        ~ProcFsm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_role; //type: uint8
        YLeaf process_state; //type: uint8
        YLeaf sync_flags; //type: uint32
        YLeaf sw_install_in_progress; //type: boolean
        YLeafList state_transition_time; //type: list of  uint32
        class FailoverStatus; //type: L2Vpnv2::Standby::ProcFsm::FailoverStatus
        class NsrStatus; //type: L2Vpnv2::Standby::ProcFsm::NsrStatus
        class IssuStatus; //type: L2Vpnv2::Standby::ProcFsm::IssuStatus
        class XidInfo; //type: L2Vpnv2::Standby::ProcFsm::XidInfo
        class ReportCard; //type: L2Vpnv2::Standby::ProcFsm::ReportCard
        class EventHistory; //type: L2Vpnv2::Standby::ProcFsm::EventHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::EventHistory> > event_history;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::FailoverStatus> failover_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::NsrStatus> nsr_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::ReportCard> > report_card;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::XidInfo> > xid_info;
        
}; // L2Vpnv2::Standby::ProcFsm


class L2Vpnv2::Standby::ProcFsm::FailoverStatus : public Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf triggered_time; //type: uint32
        YLeaf start_time; //type: uint32
        YLeaf master_time; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::FailoverStatus


class L2Vpnv2::Standby::ProcFsm::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role; //type: L2VpnProcRoleEnum
        class IdtStatus; //type: L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Standby::ProcFsm::NsrStatus


class L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus


class L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus


class L2Vpnv2::Standby::ProcFsm::IssuStatus : public Entity
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

        YLeaf role; //type: L2VpnProcRoleEnum
        class IdtStatus; //type: L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;
        
}; // L2Vpnv2::Standby::ProcFsm::IssuStatus


class L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus


class L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus


class L2Vpnv2::Standby::ProcFsm::XidInfo : public Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf app_type; //type: L2VpnIdMgrAppEnum
        YLeaf sent_ids; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::XidInfo


class L2Vpnv2::Standby::ProcFsm::ReportCard : public Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf collaborator_is_connected; //type: boolean
        YLeaf connection_change_time; //type: uint32
        YLeaf collaborator_idt_done; //type: boolean
        YLeaf idt_time; //type: uint32
        YLeaf collaborator_skipped; //type: boolean

}; // L2Vpnv2::Standby::ProcFsm::ReportCard


class L2Vpnv2::Standby::ProcFsm::EventHistory : public Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf previous_state; //type: uint8
        YLeaf new_state; //type: uint8
        YLeaf process_event; //type: uint16
        YLeaf process_collaborator; //type: uint16
        YLeaf event_timestamp; //type: uint32

}; // L2Vpnv2::Standby::ProcFsm::EventHistory


class L2Vpnv2::Standby::MstpPorts : public Entity
{
    public:
        MstpPorts();
        ~MstpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MstpPort; //type: L2Vpnv2::Standby::MstpPorts::MstpPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MstpPorts::MstpPort> > mstp_port;
        
}; // L2Vpnv2::Standby::MstpPorts


class L2Vpnv2::Standby::MstpPorts::MstpPort : public Entity
{
    public:
        MstpPort();
        ~MstpPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf mstp_interface_handle; //type: string
        YLeaf interface_name; //type: string
        YLeaf protected_; //type: boolean
        YLeaf reference_count; //type: uint32
        class MstiEntry; //type: L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry> > msti_entry;
        
}; // L2Vpnv2::Standby::MstpPorts::MstpPort


class L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry : public Entity
{
    public:
        MstiEntry();
        ~MstiEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cfg_ms_ti; //type: uint32
        YLeaf rcv_count; //type: uint32
        YLeaf ack_count; //type: uint32
        YLeaf nack_count; //type: uint32
        YLeaf flush_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf bd_count; //type: uint32
        YLeaf msti_flags; //type: uint32
        YLeaf msti_state; //type: L2VpnMstiStateEnum
        class BdEntry; //type: L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry> > bd_entry;
        
}; // L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry


class L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry : public Entity
{
    public:
        BdEntry();
        ~BdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bdid; //type: uint32
        YLeaf bdif_count; //type: uint32

}; // L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry


class L2Vpnv2::Standby::GenericInterfaceListDetails : public Entity
{
    public:
        GenericInterfaceListDetails();
        ~GenericInterfaceListDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericInterfaceListDetail; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail> > generic_interface_list_detail;
        
}; // L2Vpnv2::Standby::GenericInterfaceListDetails


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail : public Entity
{
    public:
        GenericInterfaceListDetail();
        ~GenericInterfaceListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_list_name; //type: string
        YLeaf items; //type: uint32
        YLeaf is_provisioned; //type: boolean
        YLeaf psedowire_ether_items; //type: uint32
        YLeaf pseudowire_iw_items; //type: uint32
        class Summary; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary
        class Interface; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface
        class PseudowireEtherRange; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange
        class PseudowireIwRange; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface> > interface;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange> > pseudowire_ether_range;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange> > pseudowire_iw_range;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary> summary;
        
}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary : public Entity
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

        YLeaf interface_list_name_xr; //type: string
        YLeaf interface_list_id; //type: uint32
        YLeaf number_of_interfaces; //type: uint32
        YLeaf items; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface> > interface;
        
}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface : public Entity
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
        YLeaf pending_replications; //type: uint32
        YLeaf not_supported_replications; //type: uint32
        YLeaf is_fib_downloaded; //type: boolean

}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface : public Entity
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
        YLeaf pending_replications; //type: uint32
        YLeaf not_supported_replications; //type: uint32
        YLeaf is_fib_downloaded; //type: boolean

}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange : public Entity
{
    public:
        PseudowireEtherRange();
        ~PseudowireEtherRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange


class L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange : public Entity
{
    public:
        PseudowireIwRange();
        ~PseudowireIwRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange


class L2Vpnv2::Standby::L2VpnResourceState : public Entity
{
    public:
        L2VpnResourceState();
        ~L2VpnResourceState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf resource_out_of_memory_state; //type: uint32

}; // L2Vpnv2::Standby::L2VpnResourceState


class L2Vpnv2::Standby::BridgeDomains : public Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgeDomain; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // L2Vpnv2::Standby::BridgeDomains


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain : public Entity
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

        YLeaf bridge_domain_group_name; //type: string
        YLeaf bridge_domain_name; //type: string
        class BridgeAccessVfiTable; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable
        class BridgeCoreVfiTable; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable
        class BridgeAcs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAcs
        class BridgeAccessPws; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws
        class BridgeDomainInfo; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws> bridge_access_pws;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable> bridge_access_vfi_table;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAcs> bridge_acs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeCoreVfiTable> bridge_core_vfi_table;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo> bridge_domain_info;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable : public Entity
{
    public:
        BridgeAccessVfiTable();
        ~BridgeAccessVfiTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgePws; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws> bridge_pws;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws : public Entity
{
    public:
        BridgePws();
        ~BridgePws();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BridgePw; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw> > bridge_pw;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw : public Entity
{
    public:
        BridgePw();
        ~BridgePw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor; //type: string
        YLeaf pw_type; //type: L2VpnpwEnum
        YLeaf pseudowire_id; //type: uint32
        YLeaf ve_id_vpls_id_0_3; //type: uint32
        YLeaf vpls_id_4_7; //type: uint32
        YLeaf is_access; //type: boolean
        class Pseudowire; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire> pseudowire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac> > static_mac;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_source_address; //type: string
        YLeaf ipv6_local_source_address; //type: string
        YLeaf pseudo_wire_id; //type: uint64
        YLeaf is_pwr_type; //type: boolean
        YLeaf is_evpnvpws_type; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf pseudo_wire_state; //type: L2VpnPwStateEnum
        YLeaf protocol; //type: L2VpnSignallingProtoEnum
        YLeaf pw_class_name; //type: string
        YLeaf tag_rewrite; //type: uint16
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf fe_ctype; //type: L2VpnPwFecEnum
        YLeaf evpn_src_acid; //type: uint32
        YLeaf sequencing_type; //type: L2VpnPwSequenceEnum
        YLeaf resync_enabled; //type: boolean
        YLeaf resync_threshold; //type: uint32
        YLeaf local_control_word; //type: L2VpnPwControlWordEnum
        YLeaf remote_control_word; //type: L2VpnPwControlWordEnum
        YLeaf local_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf remote_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf imposed_vlan_id; //type: uint32
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf last_time_status_down; //type: string
        YLeaf time_elapsed_status_down; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf pseudo_wire_type_mismatched; //type: boolean
        YLeaf payload_bytes_mismatched; //type: boolean
        YLeaf bitrate_mismatched; //type: boolean
        YLeaf rtp_mismatched; //type: boolean
        YLeaf diff_ts_mismatched; //type: boolean
        YLeaf sig_pkts_mismatched; //type: boolean
        YLeaf cas_mismatched; //type: boolean
        YLeaf payload_type_mismatched; //type: boolean
        YLeaf freq_mismatched; //type: boolean
        YLeaf ssrc_mismatched; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf illegal_control_word; //type: boolean
        YLeaf ad_remote_down; //type: boolean
        YLeaf not_supported_qinq; //type: boolean
        YLeaf local_label_failed; //type: boolean
        YLeaf remote_label_failed; //type: boolean
        YLeaf preferred_path_disable_fallback; //type: boolean
        YLeaf backup_pw; //type: boolean
        YLeaf primary_pw; //type: boolean
        YLeaf backup_active; //type: boolean
        YLeaf backup_force_active; //type: boolean
        YLeaf disable_never; //type: boolean
        YLeaf disable_delay; //type: uint8
        YLeaf primary_peer_id; //type: string
        YLeaf primary_pseudo_wire_id; //type: uint64
        YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf transport_lsp_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf pw_status_use; //type: boolean
        YLeaf auto_discovery; //type: boolean
        YLeaf ad_method; //type: uint32
        YLeaf pwlsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertise_failed; //type: boolean
        YLeaf is_vfi; //type: boolean
        YLeaf is_multi_segment_pseudowire; //type: boolean
        YLeaf pw_redundancy_one_way; //type: boolean
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf pw_flow_label_type; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_type_cfg; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_code17_disabled; //type: boolean
        YLeaf is_flow_label_static; //type: boolean
        YLeaf is_partially_programmed; //type: boolean
        YLeaf pw_redundancy_initial_delay; //type: uint8
        YLeaf bridge_pw_type_mismatch; //type: boolean
        YLeaf required_bw; //type: uint32
        YLeaf admited_bw; //type: uint32
        YLeaf forward_class; //type: uint8
        YLeaf table_policy_name; //type: string
        class PeerId; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics
        class P2MpPw; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw> p2mp_pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics> statistics;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId : public Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnPeerEnum
        YLeaf ipv4_peer_id; //type: string
        YLeaf ipv6_peer_id; //type: string
        YLeaf internal_label; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo : public Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: L2VpnEncapMethodEnum
        class Atom; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3> l2tpv3;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_pseudowire_headend; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf remote_label; //type: uint32
        YLeaf local_group_id; //type: uint32
        YLeaf remote_group_id; //type: uint32
        YLeaf local_cv_type; //type: uint8
        YLeaf local_c_ctype; //type: uint8
        YLeaf remote_cv_type; //type: uint8
        YLeaf remote_c_ctype; //type: uint8
        YLeaf local_veid; //type: uint32
        YLeaf remote_veid; //type: uint32
        YLeaf local_ceid; //type: uint32
        YLeaf remote_ceid; //type: uint32
        YLeaf source_address; //type: string
        YLeaf remote_source_address; //type: string
        YLeaf local_ldp_id; //type: string
        YLeaf remote_ldp_id; //type: string
        YLeaf saii; //type: string
        YLeaf taii; //type: string
        YLeaf is_sai_itype2; //type: boolean
        YLeaf local_saii_gbl_id; //type: uint32
        YLeaf local_saiiac_id; //type: uint32
        YLeaf is_tai_itype2; //type: boolean
        YLeaf local_taii_gbl_id; //type: uint32
        YLeaf local_taiiac_id; //type: uint32
        YLeaf rem_saii_gbl_id; //type: uint32
        YLeaf rem_saiiac_id; //type: uint32
        YLeaf rem_taii_gbl_id; //type: uint32
        YLeaf rem_taiiac_id; //type: uint32
        YLeaf rem_saii; //type: string
        YLeaf rem_taii; //type: string
        YLeaf lsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertisment_failed; //type: boolean
        class LocalAgi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum
        class Auto_; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_packets; //type: uint64
        YLeaf received_bytes; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3 : public Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2tp_class_name; //type: string
        YLeaf ipv4_source_address; //type: string
        YLeaf ipv6_source_address; //type: string
        YLeaf path_mtu_enabled; //type: boolean
        YLeaf path_mtu_max_value; //type: uint16
        YLeaf dont_fragment_bit; //type: boolean
        YLeaf tos_mode; //type: L2VpnTosModeEnum
        YLeaf tos; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf local_session_id; //type: uint32
        YLeaf remote_session_id; //type: uint32
        YLeaf local_cookie_size; //type: uint8
        YLeaf remote_cookie_size; //type: uint8
        YLeaf local_cookie_low_value; //type: uint32
        YLeaf remote_cookie_low_value; //type: uint32
        YLeaf local_cookie_high_value; //type: uint32
        YLeaf remote_cookie_high_value; //type: uint32
        YLeaf remote_circuit_status_up; //type: boolean
        YLeaf tunnel_state; //type: L2VpnL2TpTunnelStateEnum
        YLeaf local_secondary_cookie_size; //type: uint8
        YLeaf local_secondary_cookie_low_value; //type: uint32
        YLeaf local_secondary_cookie_high_value; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface : public Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters> parameters;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: L2VpnInterfaceEnum
        class Ethernet; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan : public Entity
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

        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16
        class VlanRange; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_7_ */

