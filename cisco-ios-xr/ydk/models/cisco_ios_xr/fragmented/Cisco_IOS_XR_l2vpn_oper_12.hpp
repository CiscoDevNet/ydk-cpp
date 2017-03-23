#ifndef _CISCO_IOS_XR_L2VPN_OPER_12_
#define _CISCO_IOS_XR_L2VPN_OPER_12_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discoveries; //type: L2Vpnv2::Active::Discoveries
        class FlexibleXconnectServiceSummary; //type: L2Vpnv2::Active::FlexibleXconnectServiceSummary
        class MainInterfaces; //type: L2Vpnv2::Active::MainInterfaces
        class IccpSm; //type: L2Vpnv2::Active::IccpSm
        class BridgeSummary; //type: L2Vpnv2::Active::BridgeSummary
        class Nsr; //type: L2Vpnv2::Active::Nsr
        class GlobalSettings; //type: L2Vpnv2::Active::GlobalSettings
        class Pwr; //type: L2Vpnv2::Active::Pwr
        class XconnectMp2MpCe2Ces; //type: L2Vpnv2::Active::XconnectMp2MpCe2Ces
        class Xconnects; //type: L2Vpnv2::Active::Xconnects
        class XconnectGroups; //type: L2Vpnv2::Active::XconnectGroups
        class XconnectMp2Mps; //type: L2Vpnv2::Active::XconnectMp2Mps
        class Indexes; //type: L2Vpnv2::Active::Indexes
        class XconnectSummary; //type: L2Vpnv2::Active::XconnectSummary
        class ProcFsm; //type: L2Vpnv2::Active::ProcFsm
        class MstpPorts; //type: L2Vpnv2::Active::MstpPorts
        class GenericInterfaceListDetails; //type: L2Vpnv2::Active::GenericInterfaceListDetails
        class L2VpnResourceState; //type: L2Vpnv2::Active::L2VpnResourceState
        class BridgeDomains; //type: L2Vpnv2::Active::BridgeDomains
        class DiscoverySummary; //type: L2Vpnv2::Active::DiscoverySummary
        class G8032; //type: L2Vpnv2::Active::G8032
        class PseudowireClasses; //type: L2Vpnv2::Active::PseudowireClasses
        class L2VpnCollaborators; //type: L2Vpnv2::Active::L2VpnCollaborators
        class Mvrp; //type: L2Vpnv2::Active::Mvrp
        class GenericInterfaces; //type: L2Vpnv2::Active::GenericInterfaces
        class MstpVlans; //type: L2Vpnv2::Active::MstpVlans
        class L2VpnPbbBsa; //type: L2Vpnv2::Active::L2VpnPbbBsa
        class FlexibleXconnectServices; //type: L2Vpnv2::Active::FlexibleXconnectServices
        class XconnectBrief; //type: L2Vpnv2::Active::XconnectBrief

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains> bridge_domains;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeSummary> bridge_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries> discoveries;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::DiscoverySummary> discovery_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::FlexibleXconnectServiceSummary> flexible_xconnect_service_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::FlexibleXconnectServices> flexible_xconnect_services;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::G8032> g8032;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GenericInterfaceListDetails> generic_interface_list_details;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GenericInterfaces> generic_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::GlobalSettings> global_settings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm> iccp_sm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Indexes> indexes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnCollaborators> l2vpn_collaborators;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnPbbBsa> l2vpn_pbb_bsa;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::L2VpnResourceState> l2vpn_resource_state;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces> main_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MstpPorts> mstp_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MstpVlans> mstp_vlans;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Mvrp> mvrp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::ProcFsm> proc_fsm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr> pwr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectBrief> xconnect_brief;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectGroups> xconnect_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectMp2MpCe2Ces> xconnect_mp2mp_ce2ces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectMp2Mps> xconnect_mp2mps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectSummary> xconnect_summary;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects> xconnects;


}; // L2Vpnv2::Active


class L2Vpnv2::Active::Discoveries : public Entity
{
    public:
        Discoveries();
        ~Discoveries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Discovery; //type: L2Vpnv2::Active::Discoveries::Discovery

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery> > discovery;


}; // L2Vpnv2::Active::Discoveries


class L2Vpnv2::Active::Discoveries::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_name; //type: L2VpnServiceEnum
        YLeaf group_name; //type: string
        YLeaf vpn_name; //type: string
        YLeaf mtu_mismatch_ignore; //type: boolean
        YLeaf number_vpn; //type: uint32
        YLeaf vpn_id; //type: uint32
        YLeaf service_name_xr; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf vpn_name_xr; //type: string
        YLeaf is_service_connected; //type: boolean

        class SignallingInfo; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo> signalling_info;


}; // L2Vpnv2::Active::Discoveries::Discovery


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo : public Entity
{
    public:
        SignallingInfo();
        ~SignallingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ad_signalling_method; //type: L2VpnAdSigMethodEnum

        class BgpSigInfo; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo
        class LdpSigInfo; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo> bgp_sig_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo> ldp_sig_info;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo : public Entity
{
    public:
        BgpSigInfo();
        ~BgpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_edges; //type: uint32
        YLeaf number_remote_edges; //type: uint32

        class Edge; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge
        class Redge; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge> > edge;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge> > redge;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32

        class LabelBlock; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock> > label_block;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge : public Entity
{
    public:
        Redge();
        ~Redge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf edge_id; //type: uint32
        YLeaf label_count; //type: uint32

        class LabelBlock; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock> > label_block;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock : public Entity
{
    public:
        LabelBlock();
        ~LabelBlock();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_time_created; //type: uint32
        YLeaf label_base; //type: uint32
        YLeaf block_offset; //type: uint32
        YLeaf block_size; //type: uint32
        YLeaf local_edge_id; //type: uint32
        YLeaf next_hop; //type: string
        YLeaf label_error; //type: L2VpnAdLsdErrEnum
        YLeafList status_vector; //type: list of  uint8



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo : public Entity
{
    public:
        LdpSigInfo();
        ~LdpSigInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_l2_router_id; //type: string
        YLeaf number_remote_edges; //type: uint32

        class LocalVplsId; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId
        class RemoteNlri; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId> local_vpls_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri> > remote_nlri;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId : public Entity
{
    public:
        LocalVplsId();
        ~LocalVplsId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum

        class Auto_; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr> v4_addr;


}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr


class L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri : public Entity
{
    public:
        RemoteNlri();
        ~RemoteNlri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nlri_time_created; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf remote_l2_router_id; //type: string



}; // L2Vpnv2::Active::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri


class L2Vpnv2::Active::FlexibleXconnectServiceSummary : public Entity
{
    public:
        FlexibleXconnectServiceSummary();
        ~FlexibleXconnectServiceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_fxc; //type: uint32
        YLeaf number_fxc_up; //type: uint32
        YLeaf number_fxc_down; //type: uint32



}; // L2Vpnv2::Active::FlexibleXconnectServiceSummary


class L2Vpnv2::Active::MainInterfaces : public Entity
{
    public:
        MainInterfaces();
        ~MainInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MainInterface; //type: L2Vpnv2::Active::MainInterfaces::MainInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface> > main_interface;


}; // L2Vpnv2::Active::MainInterfaces


class L2Vpnv2::Active::MainInterfaces::MainInterface : public Entity
{
    public:
        MainInterface();
        ~MainInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class MainInterfaceInstances; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances
        class MainInterfaceInfo; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo> main_interface_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances> main_interface_instances;


}; // L2Vpnv2::Active::MainInterfaces::MainInterface


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances : public Entity
{
    public:
        MainInterfaceInstances();
        ~MainInterfaceInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MainInterfaceInstance; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance> > main_interface_instance;


}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance : public Entity
{
    public:
        MainInterfaceInstance();
        ~MainInterfaceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance; //type: int32

        class MainInterfaceInstanceInfo; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo
        class MainInterfaceInstanceBridgePorts; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts> main_interface_instance_bridge_ports;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo> main_interface_instance_info;


}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo : public Entity
{
    public:
        MainInterfaceInstanceInfo();
        ~MainInterfaceInstanceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_instance; //type: uint32
        YLeaf flush_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf instance_flags; //type: uint32
        YLeaf instance_id; //type: uint32
        YLeaf instance_state; //type: L2VpnMainIfInstanceStateEnum



}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts : public Entity
{
    public:
        MainInterfaceInstanceBridgePorts();
        ~MainInterfaceInstanceBridgePorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MainInterfaceInstanceBridgePort; //type: L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort> > main_interface_instance_bridge_port;


}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort : public Entity
{
    public:
        MainInterfaceInstanceBridgePort();
        ~MainInterfaceInstanceBridgePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bridge_port; //type: string
        YLeaf bridge_port_xr; //type: string
        YLeaf instance_id; //type: uint32



}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort


class L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo : public Entity
{
    public:
        MainInterfaceInfo();
        ~MainInterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf main_interface_handle; //type: string
        YLeaf protected_; //type: L2VpnMainIfProtectectedEnum
        YLeaf interface_count; //type: uint32



}; // L2Vpnv2::Active::MainInterfaces::MainInterface::MainInterfaceInfo


class L2Vpnv2::Active::IccpSm : public Entity
{
    public:
        IccpSm();
        ~IccpSm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpSmSummary; //type: L2Vpnv2::Active::IccpSm::IccpSmSummary
        class IccpGroups; //type: L2Vpnv2::Active::IccpSm::IccpGroups

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpSmSummary> iccp_sm_summary;


}; // L2Vpnv2::Active::IccpSm


class L2Vpnv2::Active::IccpSm::IccpSmSummary : public Entity
{
    public:
        IccpSmSummary();
        ~IccpSmSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf groups; //type: uint32
        YLeaf unresolved_groups; //type: uint32
        YLeaf provisioned_groups; //type: uint32
        YLeaf connecting_groups; //type: uint32
        YLeaf connected_groups; //type: uint32
        YLeaf synchronizing_groups; //type: uint32
        YLeaf synchronized_groups; //type: uint32
        YLeaf ports; //type: uint32
        YLeaf operational_ports; //type: uint32
        YLeaf failed_ports; //type: uint32
        YLeaf unknown_ports; //type: uint32
        YLeaf unconfigured_ports; //type: uint32
        YLeaf unsynchronized_ports; //type: uint32
        YLeaf reverting_ports; //type: uint32



}; // L2Vpnv2::Active::IccpSm::IccpSmSummary


class L2Vpnv2::Active::IccpSm::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroup; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup> > iccp_group;


}; // L2Vpnv2::Active::IccpSm::IccpGroups


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_id; //type: uint32

        class IccpGroupInfo; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo
        class IccpPorts; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo> iccp_group_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts> iccp_ports;


}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo : public Entity
{
    public:
        IccpGroupInfo();
        ~IccpGroupInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_id; //type: uint32
        YLeaf local_node_id; //type: uint8
        YLeaf remote_node_id; //type: uint8
        YLeaf state; //type: IccpSmStateEnum
        YLeaf iccp_transport_up; //type: boolean
        YLeaf iccp_member_up; //type: boolean

        class Ports; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports> > ports;


}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports : public Entity
{
    public:
        Ports();
        ~Ports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf mac_flush_tcn; //type: boolean

        class LocalPort; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort
        class RemotePort; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort> local_port;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort> remote_port;


}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort : public Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32



}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32



}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts : public Entity
{
    public:
        IccpPorts();
        ~IccpPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpPort; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort> > iccp_port;


}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort : public Entity
{
    public:
        IccpPort();
        ~IccpPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf mac_flush_tcn; //type: boolean

        class LocalPort; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort
        class RemotePort; //type: L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort> local_port;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort> remote_port;


}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort : public Entity
{
    public:
        LocalPort();
        ~LocalPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32



}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort


class L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_state; //type: IccpSmPortStateEnum
        YLeaf port_fail_code; //type: uint8
        YLeaf fsm_state; //type: uint8
        YLeaf vlan_state; //type: uint8
        YLeaf vlan_vector; //type: string
        YLeaf reversion_time; //type: uint32
        YLeaf reversion_time_remaining; //type: uint32



}; // L2Vpnv2::Active::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort


class L2Vpnv2::Active::BridgeSummary : public Entity
{
    public:
        BridgeSummary();
        ~BridgeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number_groups; //type: uint32
        YLeaf number_bridge_domains; //type: uint32
        YLeaf number_bridge_domains_up; //type: uint32
        YLeaf number_bridge_domains_shut; //type: uint32
        YLeaf number_default_bridge_doamins; //type: uint32
        YLeaf number_pbb_edge; //type: uint32
        YLeaf number_pbb_core; //type: uint32
        YLeaf number_p2mp; //type: uint32
        YLeaf number_p2mp_up; //type: uint32
        YLeaf number_p2mp_down; //type: uint32
        YLeaf number_a_cs; //type: uint32
        YLeaf number_a_cs_up; //type: uint32
        YLeaf number_pseudowires; //type: uint32
        YLeaf number_p_ws_up; //type: uint32
        YLeaf standby_pseudowires; //type: uint32
        YLeaf num_vn_is; //type: uint32
        YLeaf num_vn_is_up; //type: uint32
        YLeaf num_vn_is_down; //type: uint32
        YLeaf num_vn_is_unresolved; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf partially_programmed_bridges; //type: uint32
        YLeaf partially_programmed_pseudowires; //type: uint32
        YLeaf partially_programmed_a_cs; //type: uint32



}; // L2Vpnv2::Active::BridgeSummary


class L2Vpnv2::Active::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process_role; //type: uint8
        YLeaf process_state; //type: uint8
        YLeaf sync_flags; //type: uint32
        YLeaf sw_install_in_progress; //type: boolean
        YLeafList state_transition_time; //type: list of  uint32

        class FailoverStatus; //type: L2Vpnv2::Active::Nsr::FailoverStatus
        class NsrStatus; //type: L2Vpnv2::Active::Nsr::NsrStatus
        class IssuStatus; //type: L2Vpnv2::Active::Nsr::IssuStatus
        class XidInfo; //type: L2Vpnv2::Active::Nsr::XidInfo
        class ReportCard; //type: L2Vpnv2::Active::Nsr::ReportCard
        class EventHistory; //type: L2Vpnv2::Active::Nsr::EventHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::EventHistory> > event_history;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::FailoverStatus> failover_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::NsrStatus> nsr_status;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::ReportCard> > report_card;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::XidInfo> > xid_info;


}; // L2Vpnv2::Active::Nsr


class L2Vpnv2::Active::Nsr::FailoverStatus : public Entity
{
    public:
        FailoverStatus();
        ~FailoverStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf triggered_time; //type: uint32
        YLeaf start_time; //type: uint32
        YLeaf master_time; //type: uint32



}; // L2Vpnv2::Active::Nsr::FailoverStatus


class L2Vpnv2::Active::Nsr::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: L2VpnProcRoleEnum

        class IdtStatus; //type: L2Vpnv2::Active::Nsr::NsrStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus> previ_ous_idt_status;


}; // L2Vpnv2::Active::Nsr::NsrStatus


class L2Vpnv2::Active::Nsr::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // L2Vpnv2::Active::Nsr::NsrStatus::IdtStatus


class L2Vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // L2Vpnv2::Active::Nsr::NsrStatus::PreviOusIdtStatus


class L2Vpnv2::Active::Nsr::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: L2VpnProcRoleEnum

        class IdtStatus; //type: L2Vpnv2::Active::Nsr::IssuStatus::IdtStatus
        class PreviOusIdtStatus; //type: L2Vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus> previ_ous_idt_status;


}; // L2Vpnv2::Active::Nsr::IssuStatus


class L2Vpnv2::Active::Nsr::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // L2Vpnv2::Active::Nsr::IssuStatus::IdtStatus


class L2Vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus : public Entity
{
    public:
        PreviOusIdtStatus();
        ~PreviOusIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: L2VpnSyncStatusEnum
        YLeaf not_ready_reason; //type: L2VpnProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // L2Vpnv2::Active::Nsr::IssuStatus::PreviOusIdtStatus


class L2Vpnv2::Active::Nsr::XidInfo : public Entity
{
    public:
        XidInfo();
        ~XidInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf app_type; //type: L2VpnIdMgrAppEnum
        YLeaf sent_ids; //type: uint32



}; // L2Vpnv2::Active::Nsr::XidInfo


class L2Vpnv2::Active::Nsr::ReportCard : public Entity
{
    public:
        ReportCard();
        ~ReportCard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf collaborator_is_connected; //type: boolean
        YLeaf connection_change_time; //type: uint32
        YLeaf collaborator_idt_done; //type: boolean
        YLeaf idt_time; //type: uint32
        YLeaf collaborator_skipped; //type: boolean



}; // L2Vpnv2::Active::Nsr::ReportCard


class L2Vpnv2::Active::Nsr::EventHistory : public Entity
{
    public:
        EventHistory();
        ~EventHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf previous_state; //type: uint8
        YLeaf new_state; //type: uint8
        YLeaf process_event; //type: uint16
        YLeaf process_collaborator; //type: uint16
        YLeaf event_timestamp; //type: uint32



}; // L2Vpnv2::Active::Nsr::EventHistory


class L2Vpnv2::Active::GlobalSettings : public Entity
{
    public:
        GlobalSettings();
        ~GlobalSettings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_grouping_enabled; //type: boolean
        YLeaf pw_status_enabled; //type: boolean
        YLeaf logging_pw_enabled; //type: boolean
        YLeaf logging_bd_enabled; //type: boolean
        YLeaf logging_vfi_enabled; //type: boolean
        YLeaf logging_nsr_enabled; //type: boolean
        YLeaf logging_df_election_enabled; //type: boolean
        YLeaf tcn_propagation_enabled; //type: boolean
        YLeaf pw_oam_refresh_transmit_time; //type: uint32
        YLeaf ha_role; //type: string
        YLeaf issu_role; //type: string
        YLeaf process_fsm; //type: string
        YLeaf going_active; //type: boolean



}; // L2Vpnv2::Active::GlobalSettings


class L2Vpnv2::Active::Pwr : public Entity
{
    public:
        Pwr();
        ~Pwr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: L2Vpnv2::Active::Pwr::Summary

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary> summary;


}; // L2Vpnv2::Active::Pwr


class L2Vpnv2::Active::Pwr::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bgp_router_id; //type: string
        YLeaf cfg_router_id; //type: string
        YLeaf bgp_as; //type: uint32
        YLeaf cfg_global_id; //type: uint32
        YLeaf l2vpn_has_bgp_eod; //type: boolean

        class RdAuto; //type: L2Vpnv2::Active::Pwr::Summary::RdAuto
        class RdConfigured; //type: L2Vpnv2::Active::Pwr::Summary::RdConfigured

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdAuto> rd_auto;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdConfigured> rd_configured;


}; // L2Vpnv2::Active::Pwr::Summary


class L2Vpnv2::Active::Pwr::Summary::RdAuto : public Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: L2Vpnv2::Active::Pwr::Summary::RdAuto::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs
        class V4Addr; //type: L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdAuto::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr> v4_addr;


}; // L2Vpnv2::Active::Pwr::Summary::RdAuto


class L2Vpnv2::Active::Pwr::Summary::RdAuto::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdAuto::Auto_


class L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::Pwr::Summary::RdAuto::TwoByteAs


class L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdAuto::FourByteAs


class L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdAuto::V4Addr


class L2Vpnv2::Active::Pwr::Summary::RdConfigured : public Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: L2VpnAdRdEnum

        class Auto_; //type: L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs
        class FourByteAs; //type: L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs
        class V4Addr; //type: L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr> v4_addr;


}; // L2Vpnv2::Active::Pwr::Summary::RdConfigured


class L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf router_id; //type: string
        YLeaf auto_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdConfigured::Auto_


class L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::Pwr::Summary::RdConfigured::TwoByteAs


class L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs : public Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf four_byte_as; //type: uint32
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdConfigured::FourByteAs


class L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Pwr::Summary::RdConfigured::V4Addr


class L2Vpnv2::Active::XconnectMp2MpCe2Ces : public Entity
{
    public:
        XconnectMp2MpCe2Ces();
        ~XconnectMp2MpCe2Ces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class XconnectMp2MpCe2Ce; //type: L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce> > xconnect_mp2mp_ce2ce;


}; // L2Vpnv2::Active::XconnectMp2MpCe2Ces


class L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce : public Entity
{
    public:
        XconnectMp2MpCe2Ce();
        ~XconnectMp2MpCe2Ce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_name; //type: string
        YLeaf mp2_mp_name; //type: string
        YLeaf local_ceid; //type: uint32
        YLeaf remote_ceid; //type: uint32
        YLeaf local_customer_edge_id; //type: uint16
        YLeaf remote_customer_edge_id; //type: uint16
        YLeaf ce_added; //type: boolean



}; // L2Vpnv2::Active::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce


class L2Vpnv2::Active::Xconnects : public Entity
{
    public:
        Xconnects();
        ~Xconnects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Xconnect; //type: L2Vpnv2::Active::Xconnects::Xconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect> > xconnect;


}; // L2Vpnv2::Active::Xconnects


class L2Vpnv2::Active::Xconnects::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_name; //type: string
        YLeaf xconnect_name; //type: string
        YLeaf group_name_xr; //type: string
        YLeaf xconnect_name_xr; //type: string
        YLeaf number_of_backup_p_ws; //type: uint32
        YLeaf state; //type: L2VpnXcStateEnum
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf diag_mask; //type: uint32
        YLeaf description; //type: string
        YLeaf is_mp2mp; //type: boolean

        class Backup; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup
        class Segment1; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment1
        class Segment2; //type: L2Vpnv2::Active::Xconnects::Xconnect::Segment2
        class Ce2Ce; //type: L2Vpnv2::Active::Xconnects::Xconnect::Ce2Ce
        class BackupSegment; //type: L2Vpnv2::Active::Xconnects::Xconnect::BackupSegment

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup> backup;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::BackupSegment> > backup_segment;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Ce2Ce> ce2ce;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Segment2> segment2;


}; // L2Vpnv2::Active::Xconnects::Xconnect


class L2Vpnv2::Active::Xconnects::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf segment_type; //type: L2VpnSegmentEnum

        class AttachmentCircuit; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit
        class PseudoWire; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit> attachment_circuit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire> pseudo_wire;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit : public Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf msti; //type: string
        YLeaf internal_ms_ti; //type: string
        YLeaf interface_handle; //type: string
        YLeaf node_id; //type: string
        YLeaf xconnect_id; //type: uint32
        YLeaf ms_ti_mismatch; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf tdm_media_mismatched; //type: boolean
        YLeaf bvi_mac_conflict; //type: boolean
        YLeaf bvi_no_port_up; //type: boolean
        YLeaf control_word_mismatched; //type: boolean
        YLeaf encapsulation_mismatched; //type: boolean
        YLeaf encapsulation_error; //type: string
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf out_of_memory_state; //type: uint32
        YLeaf msti_mismatch_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_group_state; //type: L2VpnRgStateEnum
        YLeaf redundancy_object_id; //type: uint64
        YLeaf is_ac_partially_programmed; //type: boolean
        YLeaf evpn_internal_label; //type: uint32

        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface
        class Statistics; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics
        class L2VpnProtection; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection> l2vpn_protection;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics> statistics;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters> parameters;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_> > interface;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_> > interface;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection : public Entity
{
    public:
        L2VpnProtection();
        ~L2VpnProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protection_type; //type: L2VpnProtectionEnum
        YLeaf protection_configured; //type: L2VpnProtectionRoleEnum
        YLeaf protection_name; //type: string
        YLeaf protected_name; //type: string
        YLeaf active; //type: boolean



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire : public Entity
{
    public:
        PseudoWire();
        ~PseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class PeerId; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics
        class P2MpPw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling> local_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw> p2mp_pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId> peer_id;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface> remote_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling> remote_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::Statistics> statistics;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId : public Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnPeerEnum
        YLeaf ipv4_peer_id; //type: string
        YLeaf ipv6_peer_id; //type: string
        YLeaf internal_label; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::PeerId


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo : public Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf encapsulation; //type: L2VpnEncapMethodEnum

        class Atom; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3> l2tpv3;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class LocalAgi; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi : public Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum

        class Auto_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi : public Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum

        class Auto_; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf received_bytes; //type: uint64



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3 : public Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface : public Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters> parameters;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface : public Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters> parameters;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface::Parameters::PseudowireIw


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_12_ */

