#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_0_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_lsd_oper {

class MplsLsdNodes : public ydk::Entity
{
    public:
        MplsLsdNodes();
        ~MplsLsdNodes();

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

        class MplsLsdNode; //type: MplsLsdNodes::MplsLsdNode

        ydk::YList mpls_lsd_node;
        
}; // MplsLsdNodes


class MplsLsdNodes::MplsLsdNode : public ydk::Entity
{
    public:
        MplsLsdNode();
        ~MplsLsdNode();

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummary> label_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels> labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase> frr_database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite> rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummary> rewrite_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Applications> applications;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelSummaryVrfs> label_summary_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::LabelRange> label_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::RewriteSummaryVrfs> rewrite_summary_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Interfaces> interfaces;
        
}; // MplsLsdNodes::MplsLsdNode


class MplsLsdNodes::MplsLsdNode::Clients : public ydk::Entity
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

        class Client; //type: MplsLsdNodes::MplsLsdNode::Clients::Client

        ydk::YList client;
        
}; // MplsLsdNodes::MplsLsdNode::Clients


class MplsLsdNodes::MplsLsdNode::Clients::Client : public ydk::Entity
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

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf client_index; //type: uint32
        ydk::YLeaf node_id; //type: string
        class ClientUnion; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion> client_union;
        
}; // MplsLsdNodes::MplsLsdNode::Clients::Client


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion : public ydk::Entity
{
    public:
        ClientUnion();
        ~ClientUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsd_client_type; //type: MgmtLsdClient
        class Application; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application
        class BcdlAgent; //type: MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application> application;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent> bcdl_agent;
        
}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf application_role_primary; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::Application


class MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent : public ydk::Entity
{
    public:
        BcdlAgent();
        ~BcdlAgent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_conn_index; //type: int32
        ydk::YLeaf parent_client_conn_index; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Clients::Client::ClientUnion::BcdlAgent


class MplsLsdNodes::MplsLsdNode::LabelSummary : public ydk::Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name_xr; //type: string
        ydk::YLeaf total_labels; //type: uint32
        ydk::YLeaf rsi_connected; //type: int32
        class OwnerCount; //type: MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount

        ydk::YList owner_count;
        
}; // MplsLsdNodes::MplsLsdNode::LabelSummary


class MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount : public ydk::Entity
{
    public:
        OwnerCount();
        ~OwnerCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf number_of_labels; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::LabelSummary::OwnerCount


class MplsLsdNodes::MplsLsdNode::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Label; //type: MplsLsdNodes::MplsLsdNode::Labels::Label

        ydk::YList label;
        
}; // MplsLsdNodes::MplsLsdNode::Labels


class MplsLsdNodes::MplsLsdNode::Labels::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_id; //type: uint32
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf rewrite_is_bound; //type: int32
        ydk::YLeaf rewrite_owners; //type: uint32
        ydk::YLeaf rs_iconnected; //type: int32
        ydk::YLeaf vrf_name; //type: string
        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext> label_context;
        ydk::YList application_owner;
        
}; // MplsLsdNodes::MplsLsdNode::Labels::Label


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_data; //type: string
        class Key; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key> key;
        
}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data
        class Ipv4l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4l3vpnData
        class Ipv6l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6l3vpnData
        class VrfL3vpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3vpnData
        class Cev4l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4l3vpnData
        class Cev6l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6l3vpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData
        class Tev4p2mpData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4p2mpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData
        class Ipv4blbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4blbData
        class Ipv6blbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6blbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData
        class NextHopSetL3vpn; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding
        class LabelBlockSrlbData; //type: MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4l3vpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6l3vpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3vpnData> vrf_l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4l3vpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6l3vpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4p2mpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4blbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6blbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData> label_block_srlb_data;
        
}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4l3vpnData : public ydk::Entity
{
    public:
        Ipv4l3vpnData();
        ~Ipv4l3vpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4l3vpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6l3vpnData : public ydk::Entity
{
    public:
        Ipv6l3vpnData();
        ~Ipv6l3vpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6l3vpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3vpnData : public ydk::Entity
{
    public:
        VrfL3vpnData();
        ~VrfL3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::VrfL3vpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4l3vpnData : public ydk::Entity
{
    public:
        Cev4l3vpnData();
        ~Cev4l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev4l3vpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6l3vpnData : public ydk::Entity
{
    public:
        Cev6l3vpnData();
        ~Cev6l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Cev6l3vpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::IpSubData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4p2mpData : public ydk::Entity
{
    public:
        Tev4p2mpData();
        ~Tev4p2mpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Tev4p2mpData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TpData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string
        ydk::YLeaf evpn_encap; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::EvpnData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4blbData : public ydk::Entity
{
    public:
        Ipv4blbData();
        ~Ipv4blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv4blbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6blbData : public ydk::Entity
{
    public:
        Ipv6blbData();
        ~Ipv6blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::Ipv6blbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3vpn : public ydk::Entity
{
    public:
        NextHopSetL3vpn();
        ~NextHopSetL3vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::NextHopSetL3vpn


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::TeBinding


class MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::LabelContext::Key::LabelBlockSrlbData


class MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsdNodes::MplsLsdNode::Labels::Label::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::FrrDatabase : public ydk::Entity
{
    public:
        FrrDatabase();
        ~FrrDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TunnelMidpoints; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints
        class TunnelHeads; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads
        class TunnelHeadSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary
        class SummaryProtectedInterfaces; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces
        class TunnelSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary
        class TunnelMidpointSummary; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints> tunnel_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads> tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary> tunnel_head_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces> summary_protected_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary> tunnel_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary> tunnel_midpoint_summary;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints : public ydk::Entity
{
    public:
        TunnelMidpoints();
        ~TunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TunnelMidpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint

        ydk::YList tunnel_midpoint;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint : public ydk::Entity
{
    public:
        TunnelMidpoint();
        ~TunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId
        class OutPath; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId> frr_entry_id;
        ydk::YList out_path;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head
        class Midpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Head


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::FrrEntryId::Midpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpoints::TunnelMidpoint::OutPath


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads : public ydk::Entity
{
    public:
        TunnelHeads();
        ~TunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TunnelHead; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead

        ydk::YList tunnel_head;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead : public ydk::Entity
{
    public:
        TunnelHead();
        ~TunnelHead();

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
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtLsdFrrState
        class FrrEntryId; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId
        class OutPath; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId> frr_entry_id;
        ydk::YList out_path;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId : public ydk::Entity
{
    public:
        FrrEntryId();
        ~FrrEntryId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: MgmtLsdLspRole
        class Head; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head
        class Midpoint; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint> midpoint;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head : public ydk::Entity
{
    public:
        Head();
        ~Head();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Head


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint : public ydk::Entity
{
    public:
        Midpoint();
        ~Midpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf lspid; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::FrrEntryId::Midpoint


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath : public ydk::Entity
{
    public:
        OutPath();
        ~OutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf frr_interface; //type: string
        ydk::YLeaf frr_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeads::TunnelHead::OutPath


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary : public ydk::Entity
{
    public:
        TunnelHeadSummary();
        ~TunnelHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelHeadSummary


class MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces : public ydk::Entity
{
    public:
        SummaryProtectedInterfaces();
        ~SummaryProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryProtectedInterface; //type: MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface

        ydk::YList summary_protected_interface;
        
}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces


class MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface : public ydk::Entity
{
    public:
        SummaryProtectedInterface();
        ~SummaryProtectedInterface();

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
        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::SummaryProtectedInterfaces::SummaryProtectedInterface


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary : public ydk::Entity
{
    public:
        TunnelSummary();
        ~TunnelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelSummary


class MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary : public ydk::Entity
{
    public:
        TunnelMidpointSummary();
        ~TunnelMidpointSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active; //type: uint32
        ydk::YLeaf ready; //type: uint32
        ydk::YLeaf partial; //type: uint32
        ydk::YLeaf igp; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::FrrDatabase::TunnelMidpointSummary


class MplsLsdNodes::MplsLsdNode::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteLabelRangeCnts; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts
        class RewritePws; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws
        class RewriteIpv4s; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4s
        class RewriteTes; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes
        class RewriteLabels; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts> rewrite_label_range_cnts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewritePws> rewrite_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteIpv4s> rewrite_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteTes> rewrite_tes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabels> rewrite_labels;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts : public ydk::Entity
{
    public:
        RewriteLabelRangeCnts();
        ~RewriteLabelRangeCnts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteLabelRangeCnt; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt

        ydk::YList rewrite_label_range_cnt;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt : public ydk::Entity
{
    public:
        RewriteLabelRangeCnt();
        ~RewriteLabelRangeCnt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_range_type; //type: uint32
        ydk::YLeaf label_range_index; //type: uint32
        ydk::YLeaf rewrite_version; //type: uint64
        ydk::YLeaf bcdl_priority; //type: uint8
        ydk::YLeaf lsd_queue; //type: uint8
        ydk::YLeaf rw_install_time; //type: uint64
        ydk::YLeaf rw_install_age; //type: uint64
        ydk::YLeaf rw_updated; //type: int32
        ydk::YLeaf priority_updated; //type: int32
        ydk::YLeaf rw_redist; //type: int32
        class FpiKey; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey
        class RewriteId; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId
        class AssociatedFpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi
        class V4Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf
        class V6Rpf; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf
        class Mois; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey> fpi_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId> rewrite_id;
        ydk::YList associated_fpi;
        ydk::YList v4_rpf;
        ydk::YList v6_rpf;
        ydk::YList mois;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey : public ydk::Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange> label_range;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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
        ydk::YLeaf index_; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::Fpi::LabelRange


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::FpiKey::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId : public ydk::Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RewriteId_; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_ : public ydk::Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rewrite_id_type; //type: MgmtLsdRwId
        class LabelContext; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext : public ydk::Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_context_type; //type: MgmtLsdLblCtx
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData
        class Ipv6l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData
        class VrfL3vpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData
        class Cev4l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData
        class Cev6l3vpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4p2mpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData
        class MldPv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4blbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData
        class Ipv6blbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData
        class PiMiPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3vpn; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn
        class SrPrefixSegment; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding
        class LabelBlockSrlbData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData> ipv4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData> ipv6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData> vrf_l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData> cev4l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData> cev6l3vpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData> tev4p2mp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData> ipv4blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData> ipv6blb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn> next_hop_set_l3vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData> label_block_srlb_data;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf tunnel_dest; //type: string
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf is_srte; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData : public ydk::Entity
{
    public:
        Ipv4l3vpnData();
        ~Ipv4l3vpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4l3vpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData : public ydk::Entity
{
    public:
        Ipv6l3vpnData();
        ~Ipv6l3vpnData();

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
        ydk::YLeaf route_distinguisher; //type: uint64

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6l3vpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData : public ydk::Entity
{
    public:
        VrfL3vpnData();
        ~VrfL3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::VrfL3vpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData : public ydk::Entity
{
    public:
        Cev4l3vpnData();
        ~Cev4l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev4l3vpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData : public ydk::Entity
{
    public:
        Cev6l3vpnData();
        ~Cev6l3vpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf security_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Cev6l3vpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

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
        ydk::YLeaf pseudowire_id; //type: uint64
        ydk::YLeaf remote_l2_router_id; //type: uint32
        ydk::YLeaf subinterface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData : public ydk::Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: uint8
        ydk::YLeaf vpn_id; //type: uint16
        ydk::YLeaf edge_id; //type: uint16
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf parent_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData : public ydk::Entity
{
    public:
        Tev4p2mpData();
        ~Tev4p2mpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf tunnel_source; //type: string
        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf tunnel_id_extension; //type: uint32
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf previous_hop; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Tev4p2mpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data : public ydk::Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf lsm_id; //type: uint32
        ydk::YLeaf peer_lsrid; //type: string
        ydk::YLeaf peer_label_space_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_intf; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData : public ydk::Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf dest_global_id; //type: uint32
        ydk::YLeaf dest_node_id; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint16
        ydk::YLeaf dest_tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public ydk::Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf greipv6_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData : public ydk::Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_id; //type: uint32
        ydk::YLeaf evpn_tag; //type: uint32
        ydk::YLeaf ethernet_segment; //type: string
        ydk::YLeaf evpn_encap; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData : public ydk::Entity
{
    public:
        Ipv4blbData();
        ~Ipv4blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv4blbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData : public ydk::Entity
{
    public:
        Ipv6blbData();
        ~Ipv6blbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blb_intf; //type: string
        ydk::YLeaf prefix; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::Ipv6blbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public ydk::Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public ydk::Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf head; //type: int32
        ydk::YLeaf v6; //type: int32
        ydk::YLeaf hli; //type: uint32
        ydk::YLeaf seg; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn : public ydk::Entity
{
    public:
        NextHopSetL3vpn();
        ~NextHopSetL3vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf next_hop_set_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::NextHopSetL3vpn


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public ydk::Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf segment_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public ydk::Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf intf; //type: string
        ydk::YLeaf addr; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public ydk::Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding : public ydk::Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_identifier; //type: uint32
        ydk::YLeaf te_type; //type: MgmtLsdTeBinding

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData : public ydk::Entity
{
    public:
        LabelBlockSrlbData();
        ~LabelBlockSrlbData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_label; //type: uint32
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf size; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LabelContext::LabelBlockSrlbData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite : public ydk::Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData

        ydk::YList label_data;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::RewriteId::RewriteId_::LocalLabelRewrite::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi : public ydk::Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fpi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi> fpi;
        ydk::YList application_owner;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi : public ydk::Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpi_type; //type: MgmtLsdFpi
        class LabelData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData
        class LabelRange; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData> te_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange> label_range;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData : public ydk::Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf security_id; //type: uint32
        ydk::YLeaf elc; //type: int32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData : public ydk::Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::TeData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf sr_local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf router_flags; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf version; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_list_id; //type: uint16

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData : public ydk::Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange : public ydk::Entity
{
    public:
        LabelRange();
        ~LabelRange();

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
        ydk::YLeaf index_; //type: uint8

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::Fpi::LabelRange


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner : public ydk::Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::AssociatedFpi::ApplicationOwner


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf : public ydk::Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V4Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf : public ydk::Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::V6Rpf


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois : public ydk::Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationResource; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource
        class MoiArray; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource> application_resource;
        ydk::YList moi_array;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource : public ydk::Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_type; //type: MgmtLsdApp
        ydk::YLeaf application_role_primary; //type: int32
        ydk::YLeaf application_instance; //type: string
        ydk::YLeaf resource_state; //type: MgmtLsdAppRsrcState

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::ApplicationResource


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray : public ydk::Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Moi; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi> moi;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi : public ydk::Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf moi_type; //type: MgmtLsdMoi
        class PopAndLookupIpv4; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData
        class NnhStackv4Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data
        class NnhStackv6Data; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data
        class LabelRange; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data> nnh_stackv4_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv6Data> nnh_stackv6_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::LabelRange> label_range;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4 : public ydk::Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp : public ydk::Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6 : public ydk::Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data : public ydk::Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Ipv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data : public ydk::Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf backup_ipv4_next_hop; //type: string
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf backup_local_label; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf tunnel_weight; //type: uint32
        ydk::YLeaf data_out_parent_interface; //type: string
        ydk::YLeaf tunnel_class; //type: uint32
        ydk::YLeaf ipv4_next_next_hop; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Tev4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData : public ydk::Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf pseuodo_wire_connect_id; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf bridge_id; //type: uint32
        ydk::YLeaf split_horizon_id; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData : public ydk::Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::IpSubData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData : public ydk::Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf control_word; //type: int32
        ydk::YLeaf imposition; //type: int32
        ydk::YLeaf vctype; //type: uint8
        ydk::YLeaf pw_list_id; //type: uint16
        ydk::YLeaf pwhe_interface; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData : public ydk::Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf l3_interface; //type: string
        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf path_flags_decode; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::PwListData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data : public ydk::Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop
        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data : public ydk::Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf ipv6_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf out_interface_parent; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop
        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf outgoing_label_str; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData : public ydk::Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_local_label_str; //type: string
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint32
        ydk::YLeaf flags_decode; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::TeHeadData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData : public ydk::Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::DmtcData


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data : public ydk::Entity
{
    public:
        NnhStackv4Data();
        ~NnhStackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Stack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack
        class NeighborNextHop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack> ipv4_stack;
        ydk::YList neighbor_next_hop;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack : public ydk::Entity
{
    public:
        Ipv4Stack();
        ~Ipv4Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_application_type; //type: MgmtLsdApp
        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop
        class InnerStack; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack> inner_stack;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf path_flags_decode; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_interface_parent; //type: string
        ydk::YLeaf ipv4_next_hop; //type: string
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf backup_path_id; //type: uint8
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_label_name; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf tunnel_type; //type: uint16
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf local_label; //type: uint32

}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::Nexthop


class MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack : public ydk::Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_nexthops; //type: uint8
        ydk::YLeaf num_lbls; //type: uint8
        class Nexthop; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Nexthop
        class Label; //type: MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack::Label

        ydk::YList nexthop;
        ydk::YList label;
        
}; // MplsLsdNodes::MplsLsdNode::Rewrite::RewriteLabelRangeCnts::RewriteLabelRangeCnt::Mois::MoiArray::Moi::NnhStackv4Data::Ipv4Stack::InnerStack

class MgmtLsdClient : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_client_type_app;
        static const ydk::Enum::YLeaf mgmt_lsd_client_type_ba;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-client-type-app") return 0;
            if (name == "mgmt-lsd-client-type-ba") return 1;
            return -1;
        }
};

class MgmtLsdFrrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_partial;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_ready;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_complete;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_any;
        static const ydk::Enum::YLeaf mgmt_lsd_frr_state_igp;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-frr-state-partial") return 0;
            if (name == "mgmt-lsd-frr-state-active") return 1;
            if (name == "mgmt-lsd-frr-state-ready") return 2;
            if (name == "mgmt-lsd-frr-state-complete") return 3;
            if (name == "mgmt-lsd-frr-state-any") return 4;
            if (name == "mgmt-lsd-frr-state-igp") return 5;
            return -1;
        }
};

class MgmtLsdMoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_tev4;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pw;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ip_sub;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pwhe;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pw_list;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv4_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_pop_and_lkup_tp;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv6_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_te_head;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_dmtc_ext_intf;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv4_nnh_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_ipv6_nnh_stack;
        static const ydk::Enum::YLeaf mgmt_lsd_moi_type_label_range;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-moi-type-pop-and-lkup-ipv4") return 0;
            if (name == "mgmt-lsd-moi-type-ipv4") return 1;
            if (name == "mgmt-lsd-moi-type-ipv6") return 2;
            if (name == "mgmt-lsd-moi-type-tev4") return 3;
            if (name == "mgmt-lsd-moi-type-pw") return 4;
            if (name == "mgmt-lsd-moi-type-pop-and-lkup-ipv6") return 5;
            if (name == "mgmt-lsd-moi-type-ip-sub") return 6;
            if (name == "mgmt-lsd-moi-type-pwhe") return 7;
            if (name == "mgmt-lsd-moi-type-pw-list") return 8;
            if (name == "mgmt-lsd-moi-type-ipv4-stack") return 9;
            if (name == "mgmt-lsd-moi-type-pop-and-lkup-tp") return 10;
            if (name == "mgmt-lsd-moi-type-ipv6-stack") return 11;
            if (name == "mgmt-lsd-moi-type-te-head") return 12;
            if (name == "mgmt-lsd-moi-type-dmtc-ext-intf") return 13;
            if (name == "mgmt-lsd-moi-type-ipv4-nnh-stack") return 14;
            if (name == "mgmt-lsd-moi-type-ipv6-nnh-stack") return 15;
            if (name == "mgmt-lsd-moi-type-label-range") return 16;
            return -1;
        }
};

class MgmtLsdFpi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_label;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_te;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_pw_list;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_te_v2;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_dmtc_ext_intf;
        static const ydk::Enum::YLeaf mgmt_lsd_fpi_type_label_range;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-fpi-type-label") return 0;
            if (name == "mgmt-lsd-fpi-type-te") return 1;
            if (name == "mgmt-lsd-fpi-type-ipv4") return 2;
            if (name == "mgmt-lsd-fpi-type-ipv6") return 3;
            if (name == "mgmt-lsd-fpi-type-pw-list") return 4;
            if (name == "mgmt-lsd-fpi-type-te-v2") return 5;
            if (name == "mgmt-lsd-fpi-type-dmtc-ext-intf") return 6;
            if (name == "mgmt-lsd-fpi-type-label-range") return 7;
            return -1;
        }
};

class MgmtLsdLblCtx : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_vrf;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_cev6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pw;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_ip_sub;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tev4_p2mp;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_mldpv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pwhe;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_tp;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_evpn;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_blb_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_i_pmsi;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_pim_s_pmsi;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_l3vpn_nh_set;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_pfx_seg;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_sr_adj_seg_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk_srgb;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_te_binding;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_gre_ipv6;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_any;
        static const ydk::Enum::YLeaf mgmt_lsd_lbl_ctx_type_lbl_blk_srlb;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-lbl-ctx-type-none") return 0;
            if (name == "mgmt-lsd-lbl-ctx-type-ipv4") return 1;
            if (name == "mgmt-lsd-lbl-ctx-type-ipv6") return 2;
            if (name == "mgmt-lsd-lbl-ctx-type-tev4") return 3;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-ipv4") return 4;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-ipv6") return 5;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-vrf") return 6;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-cev4") return 7;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-cev6") return 8;
            if (name == "mgmt-lsd-lbl-ctx-type-pw") return 9;
            if (name == "mgmt-lsd-lbl-ctx-type-lbl-blk") return 10;
            if (name == "mgmt-lsd-lbl-ctx-type-ip-sub") return 11;
            if (name == "mgmt-lsd-lbl-ctx-type-tev4-p2mp") return 12;
            if (name == "mgmt-lsd-lbl-ctx-type-mldpv4") return 13;
            if (name == "mgmt-lsd-lbl-ctx-type-pwhe") return 14;
            if (name == "mgmt-lsd-lbl-ctx-type-tp") return 15;
            if (name == "mgmt-lsd-lbl-ctx-type-gre") return 16;
            if (name == "mgmt-lsd-lbl-ctx-type-evpn") return 17;
            if (name == "mgmt-lsd-lbl-ctx-type-blb-ipv4") return 18;
            if (name == "mgmt-lsd-lbl-ctx-type-blb-ipv6") return 19;
            if (name == "mgmt-lsd-lbl-ctx-type-pim-i-pmsi") return 20;
            if (name == "mgmt-lsd-lbl-ctx-type-pim-s-pmsi") return 21;
            if (name == "mgmt-lsd-lbl-ctx-type-l3vpn-nh-set") return 22;
            if (name == "mgmt-lsd-lbl-ctx-type-sr-pfx-seg") return 23;
            if (name == "mgmt-lsd-lbl-ctx-type-sr-adj-seg-ipv4") return 24;
            if (name == "mgmt-lsd-lbl-ctx-type-sr-adj-seg-ipv6") return 25;
            if (name == "mgmt-lsd-lbl-ctx-type-lbl-blk-srgb") return 26;
            if (name == "mgmt-lsd-lbl-ctx-type-te-binding") return 27;
            if (name == "mgmt-lsd-lbl-ctx-type-gre-ipv6") return 28;
            if (name == "mgmt-lsd-lbl-ctx-type-any") return 29;
            if (name == "mgmt-lsd-lbl-ctx-type-lbl-blk-srlb") return 30;
            return -1;
        }
};

class MgmtLsdLspRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_lsp_role_head;
        static const ydk::Enum::YLeaf mgmt_lsd_lsp_role_mid;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-lsp-role-head") return 0;
            if (name == "mgmt-lsd-lsp-role-mid") return 1;
            return -1;
        }
};

class MgmtLsdAppRsrcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_rsrc_state_pnd_svr;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-app-rsrc-state-active") return 0;
            if (name == "mgmt-lsd-app-rsrc-state-pnd") return 1;
            if (name == "mgmt-lsd-app-rsrc-state-pnd-svr") return 2;
            return -1;
        }
};

class MplsLsdNnh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf interface_name;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ipv4-address") return 1;
            if (name == "interface-name") return 2;
            return -1;
        }
};

class MgmtLsdApp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_int;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_test;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_static;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_ldp;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_te;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_app_controller;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_vpn_ipv4;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_l2vpn;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bgp_spkr;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_bfd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_pim;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_v2_lsd;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_pim6;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_isis;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_ospf;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_cgn;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_dmtc;
        static const ydk::Enum::YLeaf mgmt_lsd_app_type_any;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-app-type-none") return 0;
            if (name == "mgmt-lsd-app-type-int") return 1;
            if (name == "mgmt-lsd-app-type-test") return 2;
            if (name == "mgmt-lsd-app-type-static") return 3;
            if (name == "mgmt-lsd-app-type-ldp") return 4;
            if (name == "mgmt-lsd-app-type-te") return 5;
            if (name == "mgmt-lsd-app-type-app-controller") return 6;
            if (name == "mgmt-lsd-app-type-bgp-ipv4") return 7;
            if (name == "mgmt-lsd-app-type-bgp-vpn-ipv4") return 8;
            if (name == "mgmt-lsd-app-type-l2vpn") return 9;
            if (name == "mgmt-lsd-app-type-bgp-spkr") return 10;
            if (name == "mgmt-lsd-app-type-bfd") return 11;
            if (name == "mgmt-lsd-app-type-pim") return 12;
            if (name == "mgmt-lsd-app-type-v2-lsd") return 13;
            if (name == "mgmt-lsd-app-type-pim6") return 14;
            if (name == "mgmt-lsd-app-type-isis") return 15;
            if (name == "mgmt-lsd-app-type-ospf") return 16;
            if (name == "mgmt-lsd-app-type-cgn") return 17;
            if (name == "mgmt-lsd-app-type-dmtc") return 18;
            if (name == "mgmt-lsd-app-type-any") return 19;
            return -1;
        }
};

class MgmtLsdTeBinding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2p_tun_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2p_grp_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2mp_tun_id;
        static const ydk::Enum::YLeaf mgmt_lsd_ident_p2mp_grp_id;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-ident-p2p-tun-id") return 0;
            if (name == "mgmt-lsd-ident-p2p-grp-id") return 1;
            if (name == "mgmt-lsd-ident-p2mp-tun-id") return 2;
            if (name == "mgmt-lsd-ident-p2mp-grp-id") return 3;
            return -1;
        }
};

class MgmtLsdAppState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_active;
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_zombie;
        static const ydk::Enum::YLeaf mgmt_lsd_app_state_recover;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-app-state-active") return 0;
            if (name == "mgmt-lsd-app-state-zombie") return 1;
            if (name == "mgmt-lsd-app-state-recover") return 2;
            return -1;
        }
};

class MgmtLsdIntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_unknown;
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_up;
        static const ydk::Enum::YLeaf mgmt_lsd_intf_state_down;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-intf-state-unknown") return 0;
            if (name == "mgmt-lsd-intf-state-up") return 1;
            if (name == "mgmt-lsd-intf-state-down") return 2;
            return -1;
        }
};

class MgmtLsdRwId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_none;
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_lbl_ctx;
        static const ydk::Enum::YLeaf mgmt_lsd_rw_id_type_loc_lbl;

        static int get_enum_value(const std::string & name) {
            if (name == "mgmt-lsd-rw-id-type-none") return 0;
            if (name == "mgmt-lsd-rw-id-type-lbl-ctx") return 1;
            if (name == "mgmt-lsd-rw-id-type-loc-lbl") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_0_ */

