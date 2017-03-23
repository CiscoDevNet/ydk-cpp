#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_oper {

class MplsLsdNodes : public Entity
{
    public:
        MplsLsdNodes();
        ~MplsLsdNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class MplsLsdNode; //type: MplsLsdNodes::MplsLsdNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode> > mpls_lsd_node;


}; // MplsLsdNodes


class MplsLsdNodes::MplsLsdNode : public Entity
{
    public:
        MplsLsdNode();
        ~MplsLsdNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class Clients; //type: MplsLsdNodes::MplsLsdNode::Clients
        class LabelSummary; //type: MplsLsdNodes::MplsLsdNode::LabelSummary
        class Labels; //type: MplsLsdNodes::MplsLsdNode::Labels
        class FrrDatabase; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase
        class Rewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite
        class RewriteSummary; //type: MplsLsdNodes::MplsLsdNode::RewriteSummary
        class Applications; //type: MplsLsdNodes::MplsLsdNode::Applications
        class LabelSummaryVrfs; //type: MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs
        class LabelRange; //type: MplsLsdNodes::MplsLsdNode::LabelRange
        class RewriteSummaryVrfs; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs
        class Interfaces; //type: MplsLsdNodes::MplsLsdNode::Interfaces

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Applications> applications;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase> frr_database;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelRange> label_range;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummary> label_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs> label_summary_vrfs;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels> labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite> rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary> rewrite_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs> rewrite_summary_vrfs;


}; // MplsLsdNodes::MplsLsdNode


class MplsLsdNodes::MplsLsdNode::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Client; //type: MplsLsdNodes::MplsLsdNode::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client> > client;


}; // MplsLsdNodes::MplsLsdNode::Clients


class MplsLsdNodes::MplsLsdNode::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_name; //type: string
        YLeaf client_index; //type: uint32
        YLeaf node_id; //type: string

        class ClientUnion; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion> client_union;


}; // MplsLsdNodes::MplsLsdNode::Clients::Client


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion : public Entity
{
    public:
        ClientUnion();
        ~ClientUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsd_client_type; //type: MgmtLsdClientEnum

        class Application; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application
        class BcdlAgent; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application> application;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent> bcdl_agent;


}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_instance; //type: string
        YLeaf application_role_primary; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent : public Entity
{
    public:
        BcdlAgent();
        ~BcdlAgent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_conn_index; //type: int32
        YLeaf parent_client_conn_index; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent


class MplsLsdNodes::MplsLsdNode::LabelSummary : public Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name_xr; //type: string
        YLeaf total_labels; //type: uint32
        YLeaf rsi_connected; //type: int32

        class OwnerCount; //type: MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount> > owner_count;


}; // MplsLsdNodes::MplsLsdNode::LabelSummary


class MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount : public Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_name; //type: string
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf number_of_labels; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount


class MplsLsdNodes::MplsLsdNode::Labels : public Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Label; //type: MplsLsdNodes::MplsLsdNode::Labels::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Labels


class MplsLsdNodes::MplsLsdNode::Labels::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_id; //type: int32
        YLeaf label; //type: uint32
        YLeaf rewrite_is_bound; //type: int32
        YLeaf rewrite_owners; //type: uint32
        YLeaf rs_iconnected; //type: int32
        YLeaf vrf_name; //type: string

        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext> label_context;


}; // MplsLsdNodes::MplsLsdNode::Labels::Label


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_data; //type: string

        class Key; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key> key;


}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding


class MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::FrrDatabase : public Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelMidpoints; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints
        class TunnelHeads; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads
        class TunnelHeadSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary
        class SummaryProtectedInterfaces; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces
        class TunnelSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary
        class TunnelMidpointSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces> summary_protected_interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary> tunnel_head_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads> tunnel_heads;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary> tunnel_midpoint_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints> tunnel_midpoints;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary> tunnel_summary;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints : public Entity
{
    public:
        TunnelMidpoints();
        ~TunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelMidpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint> > tunnel_midpoint;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint : public Entity
{
    public:
        TunnelMidpoint();
        ~TunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: int32
        YLeaf tunnel_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtLsdFrrStateEnum

        class FrrEntryId; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId
        class OutPath; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath> > out_path;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: MgmtLsdLspRoleEnum

        class Head; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head
        class Midpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint> midpoint;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint8



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath : public Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf frr_interface; //type: string
        YLeaf frr_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads : public Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelHead; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead> > tunnel_head;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead : public Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf tunnel_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtLsdFrrStateEnum

        class FrrEntryId; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId
        class OutPath; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath> > out_path;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: MgmtLsdLspRoleEnum

        class Head; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head
        class Midpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint> midpoint;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint8



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath : public Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf frr_interface; //type: string
        YLeaf frr_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary : public Entity
{
    public:
        TunnelHeadSummary();
        ~TunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary


class MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces : public Entity
{
    public:
        SummaryProtectedInterfaces();
        ~SummaryProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryProtectedInterface; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface> > summary_protected_interface;


}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces


class MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface : public Entity
{
    public:
        SummaryProtectedInterface();
        ~SummaryProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary : public Entity
{
    public:
        TunnelSummary();
        ~TunnelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary : public Entity
{
    public:
        TunnelMidpointSummary();
        ~TunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary


class MplsLsdNodes::MplsLsdNode::Rewrite : public Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewritePws; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws
        class RewriteIpv4S; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S
        class RewriteTes; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes
        class RewriteLabels; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S> rewrite_ipv4s;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels> rewrite_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws> rewrite_pws;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes> rewrite_tes;


}; // MplsLsdNodes::MplsLsdNode::Rewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws : public Entity
{
    public:
        RewritePws();
        ~RewritePws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewritePw; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw> > rewrite_pw;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw : public Entity
{
    public:
        RewritePw();
        ~RewritePw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_list_id; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey
        class RewriteId; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId
        class AssociatedFpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi
        class V4Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V4Rpf
        class V6Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V6Rpf
        class Mois; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V6Rpf> > v6_rpf;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::V6Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource
        class MoiArray; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray> > moi_array;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi> moi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S : public Entity
{
    public:
        RewriteIpv4S();
        ~RewriteIpv4S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4> > rewrite_ipv4;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4 : public Entity
{
    public:
        RewriteIpv4();
        ~RewriteIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rsi_table_name; //type: string
        YLeaf rsi_table_id; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey
        class RewriteId; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId
        class AssociatedFpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi
        class V4Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf
        class V6Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf
        class Mois; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf> > v6_rpf;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource
        class MoiArray; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray> > moi_array;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi> moi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes : public Entity
{
    public:
        RewriteTes();
        ~RewriteTes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteTe; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe> > rewrite_te;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe : public Entity
{
    public:
        RewriteTe();
        ~RewriteTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey
        class RewriteId; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId
        class AssociatedFpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi
        class V4Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf
        class V6Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf
        class Mois; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf> > v6_rpf;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::V6Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource
        class MoiArray; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray> > moi_array;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi> moi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels : public Entity
{
    public:
        RewriteLabels();
        ~RewriteLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteLabel; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel> > rewrite_label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel : public Entity
{
    public:
        RewriteLabel();
        ~RewriteLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_id; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey
        class RewriteId; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId
        class AssociatedFpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi
        class V4Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf
        class V6Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf
        class Mois; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf> > v6_rpf;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi> fpi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::V6Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource
        class MoiArray; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray> > moi_array;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi> moi;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData


class MplsLsdNodes::MplsLsdNode::RewriteSummary : public Entity
{
    public:
        RewriteSummary();
        ~RewriteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string

        class Ipv4Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths
        class Ipv6Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths> ipv6_paths;


}; // MplsLsdNodes::MplsLsdNode::RewriteSummary


class MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv4Paths


class MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::RewriteSummary::Ipv6Paths


class MplsLsdNodes::MplsLsdNode::Applications : public Entity
{
    public:
        Applications();
        ~Applications();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Application; //type: MplsLsdNodes::MplsLsdNode::Applications::Application

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Applications::Application> > application;


}; // MplsLsdNodes::MplsLsdNode::Applications


class MplsLsdNodes::MplsLsdNode::Applications::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_name_xr; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf app_reg_time; //type: uint64
        YLeaf app_disconnect_time; //type: uint64
        YLeaf app_flow_controlled; //type: int32
        YLeaf flow_ctrl_time; //type: uint64
        YLeaf flow_ctrl_clr_time; //type: uint64
        YLeaf go_act_ts; //type: uint64
        YLeaf application_state; //type: MgmtLsdAppStateEnum
        YLeaf recovery_time_remaining_seconds; //type: uint32
        YLeaf recovery_time_elapsed_seconds; //type: uint32
        YLeaf recovery_time_register_seconds; //type: uint32
        YLeaf node_id; //type: string

        class ApplicationStatistics; //type: MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics> application_statistics;


}; // MplsLsdNodes::MplsLsdNode::Applications::Application


class MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics : public Entity
{
    public:
        ApplicationStatistics();
        ~ApplicationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_enable; //type: uint32
        YLeaf interface_enable_pending; //type: uint32
        YLeaf connect_count; //type: uint32
        YLeafList label_context_count; //type: list of  uint32
        YLeafList label_context_pending_count; //type: list of  uint32

        class Connected; //type: MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected> connected;


}; // MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics


class MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt_set_msg_count; //type: uint32
        YLeaf operation_msg_count; //type: uint32
        YLeaf oor_label_count; //type: uint32
        YLeaf error_msg_count; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::Applications::Application::ApplicationStatistics::Connected


class MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs : public Entity
{
    public:
        LabelSummaryVrfs();
        ~LabelSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelSummaryVrf; //type: MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf> > label_summary_vrf;


}; // MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs


class MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf : public Entity
{
    public:
        LabelSummaryVrf();
        ~LabelSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf vrf_name_xr; //type: string
        YLeaf total_labels; //type: uint32
        YLeaf rsi_connected; //type: int32

        class OwnerCount; //type: MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount> > owner_count;


}; // MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf


class MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount : public Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_name; //type: string
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf number_of_labels; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount


class MplsLsdNodes::MplsLsdNode::LabelRange : public Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_dynamic_label_value; //type: uint32
        YLeaf max_dynamic_label_value; //type: uint32
        YLeaf min_static_label_value; //type: uint32
        YLeaf max_static_label_value; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::LabelRange


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs : public Entity
{
    public:
        RewriteSummaryVrfs();
        ~RewriteSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteSummaryVrf; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf> > rewrite_summary_vrf;


}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf : public Entity
{
    public:
        RewriteSummaryVrf();
        ~RewriteSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string

        class Ipv4Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths
        class Ipv6Paths; //type: MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths> ipv6_paths;


}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths


class MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths


class MplsLsdNodes::MplsLsdNode::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsLsdNodes::MplsLsdNode::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Interfaces::Interface> > interface;


}; // MplsLsdNodes::MplsLsdNode::Interfaces


class MplsLsdNodes::MplsLsdNode::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf interface_state; //type: MgmtLsdIntfStateEnum

        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner> > application_owner;


}; // MplsLsdNodes::MplsLsdNode::Interfaces::Interface


class MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsdNodes::MplsLsdNode::Interfaces::Interface::ApplicationOwner

class MplsLsd : public Entity
{
    public:
        MplsLsd();
        ~MplsLsd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Clients; //type: MplsLsd::Clients
        class LabelSummary; //type: MplsLsd::LabelSummary
        class Labels; //type: MplsLsd::Labels
        class FrrDatabase; //type: MplsLsd::FrrDatabase
        class Rewrite; //type: MplsLsd::Rewrite
        class RewriteSummary; //type: MplsLsd::RewriteSummary
        class Applications; //type: MplsLsd::Applications
        class LabelSummaryVrfs; //type: MplsLsd::LabelSummaryVrfs
        class LabelRange; //type: MplsLsd::LabelRange
        class RewriteSummaryVrfs; //type: MplsLsd::RewriteSummaryVrfs
        class Interfaces; //type: MplsLsd::Interfaces

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications> applications;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients> clients;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase> frr_database;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelRange> label_range;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummary> label_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs> label_summary_vrfs;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels> labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite> rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary> rewrite_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs> rewrite_summary_vrfs;


}; // MplsLsd


class MplsLsd::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Client; //type: MplsLsd::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client> > client;


}; // MplsLsd::Clients


class MplsLsd::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_name; //type: string
        YLeaf client_index; //type: uint32
        YLeaf node_id; //type: string

        class ClientUnion; //type: MplsLsd::Clients::Client::ClientUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion> client_union;


}; // MplsLsd::Clients::Client


class MplsLsd::Clients::Client::ClientUnion : public Entity
{
    public:
        ClientUnion();
        ~ClientUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsd_client_type; //type: MgmtLsdClientEnum

        class Application; //type: MplsLsd::Clients::Client::ClientUnion::Application
        class BcdlAgent; //type: MplsLsd::Clients::Client::ClientUnion::BcdlAgent

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion::Application> application;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Clients::Client::ClientUnion::BcdlAgent> bcdl_agent;


}; // MplsLsd::Clients::Client::ClientUnion


class MplsLsd::Clients::Client::ClientUnion::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_instance; //type: string
        YLeaf application_role_primary; //type: int32



}; // MplsLsd::Clients::Client::ClientUnion::Application


class MplsLsd::Clients::Client::ClientUnion::BcdlAgent : public Entity
{
    public:
        BcdlAgent();
        ~BcdlAgent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf client_conn_index; //type: int32
        YLeaf parent_client_conn_index; //type: int32



}; // MplsLsd::Clients::Client::ClientUnion::BcdlAgent


class MplsLsd::LabelSummary : public Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name_xr; //type: string
        YLeaf total_labels; //type: uint32
        YLeaf rsi_connected; //type: int32

        class OwnerCount; //type: MplsLsd::LabelSummary::OwnerCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummary::OwnerCount> > owner_count;


}; // MplsLsd::LabelSummary


class MplsLsd::LabelSummary::OwnerCount : public Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_name; //type: string
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf number_of_labels; //type: uint32



}; // MplsLsd::LabelSummary::OwnerCount


class MplsLsd::Labels : public Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Label; //type: MplsLsd::Labels::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label> > label;


}; // MplsLsd::Labels


class MplsLsd::Labels::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_id; //type: int32
        YLeaf label; //type: uint32
        YLeaf rewrite_is_bound; //type: int32
        YLeaf rewrite_owners; //type: uint32
        YLeaf rs_iconnected; //type: int32
        YLeaf vrf_name; //type: string

        class LabelContext; //type: MplsLsd::Labels::Label::LabelContext
        class ApplicationOwner; //type: MplsLsd::Labels::Label::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext> label_context;


}; // MplsLsd::Labels::Label


class MplsLsd::Labels::Label::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_data; //type: string

        class Key; //type: MplsLsd::Labels::Label::LabelContext::Key

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key> key;


}; // MplsLsd::Labels::Label::LabelContext


class MplsLsd::Labels::Label::LabelContext::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data
        class Tev4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Labels::Label::LabelContext::Key::PseudowireData
        class LabelBlockData; //type: MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData
        class IpSubData; //type: MplsLsd::Labels::Label::LabelContext::Key::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Labels::Label::LabelContext::Key::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Labels::Label::LabelContext::Key::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Labels::Label::LabelContext::Key::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsd::Labels::Label::LabelContext::Key


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4Data


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6Data


class MplsLsd::Labels::Label::LabelContext::Key::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsd::Labels::Label::LabelContext::Key::Tev4Data


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::VrfL3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::Cev4L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::Cev6L3VpnData


class MplsLsd::Labels::Label::LabelContext::Key::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::PseudowireData


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockData


class MplsLsd::Labels::Label::LabelContext::Key::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::IpSubData


class MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Tev4P2MpData


class MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsd::Labels::Label::LabelContext::Key::MldPv4Data


class MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::PseudowireHeadEndData


class MplsLsd::Labels::Label::LabelContext::Key::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsd::Labels::Label::LabelContext::Key::TpData


class MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation


class MplsLsd::Labels::Label::LabelContext::Key::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::EvpnData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv4BlbData


class MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::Ipv6BlbData


class MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsd::Labels::Label::LabelContext::Key::PiMiPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsd::Labels::Label::LabelContext::Key::PiMsPmsiData


class MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::NextHopSetL3Vpn


class MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::SrPrefixSegment


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4


class MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6


class MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Labels::Label::LabelContext::Key::LabelBlockSrgbData


class MplsLsd::Labels::Label::LabelContext::Key::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsd::Labels::Label::LabelContext::Key::TeBinding


class MplsLsd::Labels::Label::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Labels::Label::ApplicationOwner


class MplsLsd::FrrDatabase : public Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelMidpoints; //type: MplsLsd::FrrDatabase::TunnelMidpoints
        class TunnelHeads; //type: MplsLsd::FrrDatabase::TunnelHeads
        class TunnelHeadSummary; //type: MplsLsd::FrrDatabase::TunnelHeadSummary
        class SummaryProtectedInterfaces; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces
        class TunnelSummary; //type: MplsLsd::FrrDatabase::TunnelSummary
        class TunnelMidpointSummary; //type: MplsLsd::FrrDatabase::TunnelMidpointSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::SummaryProtectedInterfaces> summary_protected_interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeadSummary> tunnel_head_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads> tunnel_heads;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpointSummary> tunnel_midpoint_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints> tunnel_midpoints;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelSummary> tunnel_summary;


}; // MplsLsd::FrrDatabase


class MplsLsd::FrrDatabase::TunnelMidpoints : public Entity
{
    public:
        TunnelMidpoints();
        ~TunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelMidpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint> > tunnel_midpoint;


}; // MplsLsd::FrrDatabase::TunnelMidpoints


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint : public Entity
{
    public:
        TunnelMidpoint();
        ~TunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: int32
        YLeaf tunnel_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtLsdFrrStateEnum

        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath> > out_path;


}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: MgmtLsdLspRoleEnum

        class Head; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint> midpoint;


}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint8



}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath : public Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf frr_interface; //type: string
        YLeaf frr_label; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath


class MplsLsd::FrrDatabase::TunnelHeads : public Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelHead; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead> > tunnel_head;


}; // MplsLsd::FrrDatabase::TunnelHeads


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead : public Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf tunnel_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf entry_frr_state; //type: MgmtLsdFrrStateEnum

        class FrrEntryId; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId
        class OutPath; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath> > out_path;


}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId : public Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: MgmtLsdLspRoleEnum

        class Head; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head
        class Midpoint; //type: MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head> head;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint> midpoint;


}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head : public Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_prefix; //type: string
        YLeaf destination_prefix_length; //type: uint8



}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint : public Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf lspid; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint


class MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath : public Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf frr_interface; //type: string
        YLeaf frr_label; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelHeads::TunnelHead::OutPath


class MplsLsd::FrrDatabase::TunnelHeadSummary : public Entity
{
    public:
        TunnelHeadSummary();
        ~TunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelHeadSummary


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces : public Entity
{
    public:
        SummaryProtectedInterfaces();
        ~SummaryProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryProtectedInterface; //type: MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface> > summary_protected_interface;


}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces


class MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface : public Entity
{
    public:
        SummaryProtectedInterface();
        ~SummaryProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsd::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface


class MplsLsd::FrrDatabase::TunnelSummary : public Entity
{
    public:
        TunnelSummary();
        ~TunnelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelSummary


class MplsLsd::FrrDatabase::TunnelMidpointSummary : public Entity
{
    public:
        TunnelMidpointSummary();
        ~TunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active; //type: uint32
        YLeaf ready; //type: uint32
        YLeaf partial; //type: uint32
        YLeaf igp; //type: uint32



}; // MplsLsd::FrrDatabase::TunnelMidpointSummary


class MplsLsd::Rewrite : public Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewritePws; //type: MplsLsd::Rewrite::RewritePws
        class RewriteIpv4S; //type: MplsLsd::Rewrite::RewriteIpv4S
        class RewriteTes; //type: MplsLsd::Rewrite::RewriteTes
        class RewriteLabels; //type: MplsLsd::Rewrite::RewriteLabels

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S> rewrite_ipv4s;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels> rewrite_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws> rewrite_pws;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes> rewrite_tes;


}; // MplsLsd::Rewrite


class MplsLsd::Rewrite::RewritePws : public Entity
{
    public:
        RewritePws();
        ~RewritePws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewritePw; //type: MplsLsd::Rewrite::RewritePws::RewritePw

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw> > rewrite_pw;


}; // MplsLsd::Rewrite::RewritePws


class MplsLsd::Rewrite::RewritePws::RewritePw : public Entity
{
    public:
        RewritePw();
        ~RewritePw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_list_id; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf> > v6_rpf;


}; // MplsLsd::Rewrite::RewritePws::RewritePw


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi> fpi;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewritePws::RewritePw::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi> fpi;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewritePws::RewritePw::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::V4Rpf


class MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::V6Rpf


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray> > moi_array;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::ApplicationResource


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi> moi;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewritePws::RewritePw::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteIpv4S : public Entity
{
    public:
        RewriteIpv4S();
        ~RewriteIpv4S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4> > rewrite_ipv4;


}; // MplsLsd::Rewrite::RewriteIpv4S


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4 : public Entity
{
    public:
        RewriteIpv4();
        ~RewriteIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rsi_table_name; //type: string
        YLeaf rsi_table_id; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf> > v6_rpf;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V4Rpf


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::V6Rpf


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray> > moi_array;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi> moi;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteTes : public Entity
{
    public:
        RewriteTes();
        ~RewriteTes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteTe; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe> > rewrite_te;


}; // MplsLsd::Rewrite::RewriteTes


class MplsLsd::Rewrite::RewriteTes::RewriteTe : public Entity
{
    public:
        RewriteTe();
        ~RewriteTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf> > v6_rpf;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray> > moi_array;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi> moi;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteLabels : public Entity
{
    public:
        RewriteLabels();
        ~RewriteLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteLabel; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel> > rewrite_label;


}; // MplsLsd::Rewrite::RewriteLabels


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel : public Entity
{
    public:
        RewriteLabel();
        ~RewriteLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_id; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32

        class FpiKey; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf> > v6_rpf;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteId_; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_> rewrite_id;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum

        class LabelContext; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum

        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_intf; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greipv6_interface; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList label_data; //type: list of  uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi> fpi;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fpi_type; //type: MgmtLsdFpiEnum

        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData> te_data;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pwhe_list_id; //type: uint16



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray> > moi_array;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Moi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi> moi;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf moi_type; //type: MgmtLsdMoiEnum

        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data> tev4_data;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf owner_application_type; //type: MgmtLsdAppEnum

        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nexthop; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string

        class Label; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;


}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dmtc_ext_ifh; //type: string



}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData


class MplsLsd::RewriteSummary : public Entity
{
    public:
        RewriteSummary();
        ~RewriteSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string

        class Ipv4Paths; //type: MplsLsd::RewriteSummary::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummary::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummary::Ipv6Paths> ipv6_paths;


}; // MplsLsd::RewriteSummary


class MplsLsd::RewriteSummary::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsd::RewriteSummary::Ipv4Paths


class MplsLsd::RewriteSummary::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsd::RewriteSummary::Ipv6Paths


class MplsLsd::Applications : public Entity
{
    public:
        Applications();
        ~Applications();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Application; //type: MplsLsd::Applications::Application

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application> > application;


}; // MplsLsd::Applications


class MplsLsd::Applications::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_name_xr; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf app_reg_time; //type: uint64
        YLeaf app_disconnect_time; //type: uint64
        YLeaf app_flow_controlled; //type: int32
        YLeaf flow_ctrl_time; //type: uint64
        YLeaf flow_ctrl_clr_time; //type: uint64
        YLeaf go_act_ts; //type: uint64
        YLeaf application_state; //type: MgmtLsdAppStateEnum
        YLeaf recovery_time_remaining_seconds; //type: uint32
        YLeaf recovery_time_elapsed_seconds; //type: uint32
        YLeaf recovery_time_register_seconds; //type: uint32
        YLeaf node_id; //type: string

        class ApplicationStatistics; //type: MplsLsd::Applications::Application::ApplicationStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics> application_statistics;


}; // MplsLsd::Applications::Application


class MplsLsd::Applications::Application::ApplicationStatistics : public Entity
{
    public:
        ApplicationStatistics();
        ~ApplicationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_enable; //type: uint32
        YLeaf interface_enable_pending; //type: uint32
        YLeaf connect_count; //type: uint32
        YLeafList label_context_count; //type: list of  uint32
        YLeafList label_context_pending_count; //type: list of  uint32

        class Connected; //type: MplsLsd::Applications::Application::ApplicationStatistics::Connected

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Applications::Application::ApplicationStatistics::Connected> connected;


}; // MplsLsd::Applications::Application::ApplicationStatistics


class MplsLsd::Applications::Application::ApplicationStatistics::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rt_set_msg_count; //type: uint32
        YLeaf operation_msg_count; //type: uint32
        YLeaf oor_label_count; //type: uint32
        YLeaf error_msg_count; //type: uint32



}; // MplsLsd::Applications::Application::ApplicationStatistics::Connected


class MplsLsd::LabelSummaryVrfs : public Entity
{
    public:
        LabelSummaryVrfs();
        ~LabelSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelSummaryVrf; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf> > label_summary_vrf;


}; // MplsLsd::LabelSummaryVrfs


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf : public Entity
{
    public:
        LabelSummaryVrf();
        ~LabelSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf vrf_name_xr; //type: string
        YLeaf total_labels; //type: uint32
        YLeaf rsi_connected; //type: int32

        class OwnerCount; //type: MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount> > owner_count;


}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf


class MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount : public Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_name; //type: string
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf number_of_labels; //type: uint32



}; // MplsLsd::LabelSummaryVrfs::LabelSummaryVrf::OwnerCount


class MplsLsd::LabelRange : public Entity
{
    public:
        LabelRange();
        ~LabelRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf min_dynamic_label_value; //type: uint32
        YLeaf max_dynamic_label_value; //type: uint32
        YLeaf min_static_label_value; //type: uint32
        YLeaf max_static_label_value; //type: uint32



}; // MplsLsd::LabelRange


class MplsLsd::RewriteSummaryVrfs : public Entity
{
    public:
        RewriteSummaryVrfs();
        ~RewriteSummaryVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RewriteSummaryVrf; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf> > rewrite_summary_vrf;


}; // MplsLsd::RewriteSummaryVrfs


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf : public Entity
{
    public:
        RewriteSummaryVrf();
        ~RewriteSummaryVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf num_label_fpi; //type: uint32
        YLeaf num_tefpi; //type: uint32
        YLeaf num_ipv4fpi; //type: uint32
        YLeaf num_ipv6fpi; //type: uint32
        YLeaf num_pw_list_tefpi; //type: uint32
        YLeaf num_dmtctefpi; //type: uint32
        YLeaf num_rewrite; //type: uint32
        YLeaf total_forward_update; //type: uint32
        YLeaf total_forwad_update_message; //type: uint32
        YLeaf total_paths; //type: uint32
        YLeaf total_t_ev4_paths; //type: uint32
        YLeaf total_te_head_paths; //type: uint32
        YLeaf total_pw_paths; //type: uint32
        YLeaf total_ip_sub_paths; //type: uint32
        YLeaf total_ipv4rpf_neighbors; //type: uint32
        YLeaf total_ipv6rpf_neighbors; //type: uint32
        YLeaf num_rewrite_rpf_neighbors; //type: uint32
        YLeaf total_dmtc_intf; //type: uint32
        YLeaf vrf_name_xr; //type: string

        class Ipv4Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths
        class Ipv6Paths; //type: MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths> ipv4_paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths> ipv6_paths;


}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths : public Entity
{
    public:
        Ipv4Paths();
        ~Ipv4Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv4Paths


class MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths : public Entity
{
    public:
        Ipv6Paths();
        ~Ipv6Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf total_backup_paths; //type: uint32
        YLeaf total_remote_backup_paths; //type: uint32
        YLeaf total_protected_paths; //type: uint32
        YLeaf total_pop_lkup_paths; //type: uint32



}; // MplsLsd::RewriteSummaryVrfs::RewriteSummaryVrf::Ipv6Paths


class MplsLsd::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsLsd::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface> > interface;


}; // MplsLsd::Interfaces


class MplsLsd::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf interface_state; //type: MgmtLsdIntfStateEnum

        class ApplicationOwner; //type: MplsLsd::Interfaces::Interface::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Interfaces::Interface::ApplicationOwner> > application_owner;


}; // MplsLsd::Interfaces::Interface


class MplsLsd::Interfaces::Interface::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum



}; // MplsLsd::Interfaces::Interface::ApplicationOwner

class MgmtLsdClientEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_client_type_app;
        static const Enum::YLeaf mgmt_lsd_client_type_ba;

};

class MgmtLsdFrrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_frr_state_partial;
        static const Enum::YLeaf mgmt_lsd_frr_state_active;
        static const Enum::YLeaf mgmt_lsd_frr_state_ready;
        static const Enum::YLeaf mgmt_lsd_frr_state_complete;
        static const Enum::YLeaf mgmt_lsd_frr_state_any;
        static const Enum::YLeaf mgmt_lsd_frr_state_igp;

};

class MgmtLsdMoiEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv4;
        static const Enum::YLeaf mgmt_lsd_moi_type_ipv4;
        static const Enum::YLeaf mgmt_lsd_moi_type_ipv6;
        static const Enum::YLeaf mgmt_lsd_moi_type_tev4;
        static const Enum::YLeaf mgmt_lsd_moi_type_pw;
        static const Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv6;
        static const Enum::YLeaf mgmt_lsd_moi_type_ip_sub;
        static const Enum::YLeaf mgmt_lsd_moi_type_pwhe;
        static const Enum::YLeaf mgmt_lsd_moi_type_pw_list;
        static const Enum::YLeaf mgmt_lsd_moi_type_ipv4_stack;
        static const Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_tp;
        static const Enum::YLeaf mgmt_lsd_moi_type_ipv6_stack;
        static const Enum::YLeaf mgmt_lsd_moi_type_te_head;
        static const Enum::YLeaf mgmt_lsd_moi_type_dmtc_ext_intf;

};

class MgmtLsdFpiEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_fpi_type_label;
        static const Enum::YLeaf mgmt_lsd_fpi_type_te;
        static const Enum::YLeaf mgmt_lsd_fpi_type_ipv4;
        static const Enum::YLeaf mgmt_lsd_fpi_type_ipv6;
        static const Enum::YLeaf mgmt_lsd_fpi_type_pw_list;
        static const Enum::YLeaf mgmt_lsd_fpi_type_te_v2;
        static const Enum::YLeaf mgmt_lsd_fpi_type_dmtc_ext_intf;

};

class MgmtLsdLblCtxEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_none;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_vrf;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_pw;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_ip_sub;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4_p2mp;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_mldpv4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_pwhe;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_tp;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_evpn;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_i_pmsi;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_s_pmsi;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_nh_set;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_pfx_seg;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv4;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk_srgb;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_te_binding;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre_ipv6;
        static const Enum::YLeaf mgmt_lsd_lbl_ctx_type_any;

};

class MgmtLsdLspRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_lsp_role_head;
        static const Enum::YLeaf mgmt_lsd_lsp_role_mid;

};

class MgmtLsdAppRsrcStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_app_rsrc_state_active;
        static const Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd;
        static const Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd_svr;

};

class MgmtLsdRwIdEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_rw_id_type_none;
        static const Enum::YLeaf mgmt_lsd_rw_id_type_lbl_ctx;
        static const Enum::YLeaf mgmt_lsd_rw_id_type_loc_lbl;

};

class MgmtLsdAppEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_app_type_none;
        static const Enum::YLeaf mgmt_lsd_app_type_int;
        static const Enum::YLeaf mgmt_lsd_app_type_test;
        static const Enum::YLeaf mgmt_lsd_app_type_static;
        static const Enum::YLeaf mgmt_lsd_app_type_ldp;
        static const Enum::YLeaf mgmt_lsd_app_type_te;
        static const Enum::YLeaf mgmt_lsd_app_type_app_controller;
        static const Enum::YLeaf mgmt_lsd_app_type_bgp_ipv4;
        static const Enum::YLeaf mgmt_lsd_app_type_bgp_vpn_ipv4;
        static const Enum::YLeaf mgmt_lsd_app_type_l2vpn;
        static const Enum::YLeaf mgmt_lsd_app_type_bgp_spkr;
        static const Enum::YLeaf mgmt_lsd_app_type_bfd;
        static const Enum::YLeaf mgmt_lsd_app_type_pim;
        static const Enum::YLeaf mgmt_lsd_app_type_v2_lsd;
        static const Enum::YLeaf mgmt_lsd_app_type_pim6;
        static const Enum::YLeaf mgmt_lsd_app_type_isis;
        static const Enum::YLeaf mgmt_lsd_app_type_ospf;
        static const Enum::YLeaf mgmt_lsd_app_type_cgn;
        static const Enum::YLeaf mgmt_lsd_app_type_dmtc;
        static const Enum::YLeaf mgmt_lsd_app_type_any;

};

class MgmtLsdTeBindingEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_ident_p2p_tun_id;
        static const Enum::YLeaf mgmt_lsd_ident_p2p_grp_id;
        static const Enum::YLeaf mgmt_lsd_ident_p2mp_tun_id;
        static const Enum::YLeaf mgmt_lsd_ident_p2mp_grp_id;

};

class MgmtLsdAppStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_app_state_active;
        static const Enum::YLeaf mgmt_lsd_app_state_zombie;
        static const Enum::YLeaf mgmt_lsd_app_state_recover;

};

class MgmtLsdIntfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_lsd_intf_state_unknown;
        static const Enum::YLeaf mgmt_lsd_intf_state_up;
        static const Enum::YLeaf mgmt_lsd_intf_state_down;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_ */

