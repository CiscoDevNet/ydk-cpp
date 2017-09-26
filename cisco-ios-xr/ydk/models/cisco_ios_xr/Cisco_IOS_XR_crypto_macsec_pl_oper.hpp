#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_pl_oper {

class MacsecPlatform : public ydk::Entity
{
    public:
        MacsecPlatform();
        ~MacsecPlatform();

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

        class Nodes; //type: MacsecPlatform::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes> nodes;
        
}; // MacsecPlatform


class MacsecPlatform::Nodes : public ydk::Entity
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

        class Node; //type: MacsecPlatform::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node> > node;
        
}; // MacsecPlatform::Nodes


class MacsecPlatform::Nodes::Node : public ydk::Entity
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
        class Interfaces; //type: MacsecPlatform::Nodes::Node::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces> interfaces;
        
}; // MacsecPlatform::Nodes::Node


class MacsecPlatform::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface> > interface;
        
}; // MacsecPlatform::Nodes::Node::Interfaces


class MacsecPlatform::Nodes::Node::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class HwStatistics; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics
        class HwSas; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas
        class HwFlowS; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS
        class SwStatistics; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS> hw_flow_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas> hw_sas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics> hw_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics> sw_statistics;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS : public ydk::Entity
{
    public:
        HwFlowS();
        ~HwFlowS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HwFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow> > hw_flow;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow : public ydk::Entity
{
    public:
        HwFlow();
        ~HwFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_id; //type: int32
        class Ext; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext> ext;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MacsecCard
        class MsfpgaFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow
        class Es200Flow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow> es200_flow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow> msfpga_flow;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow : public ydk::Entity
{
    public:
        Es200Flow();
        ~Es200Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow
        class RxFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow> rx_flow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow> tx_flow;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow : public ydk::Entity
{
    public:
        RxFlow();
        ~RxFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_no; //type: uint32
        ydk::YLeaf is_flow_enabled; //type: boolean
        ydk::YLeaf ethertype; //type: uint16
        ydk::YLeaf outer_vlan_id; //type: uint16
        ydk::YLeaf outer_vlan_user_pri; //type: uint8
        ydk::YLeaf inner_vlan_id; //type: uint16
        ydk::YLeaf inner_vlan_user_pri; //type: uint8
        ydk::YLeaf psci; //type: uint64
        ydk::YLeaf match_priority; //type: uint8
        ydk::YLeaf tci_v; //type: uint8
        ydk::YLeaf tci_e_xr; //type: uint8
        ydk::YLeaf tci_sc; //type: uint8
        ydk::YLeaf tci_scb; //type: uint8
        ydk::YLeaf tci; //type: uint8
        ydk::YLeaf tci_c; //type: uint8
        ydk::YLeaf tci_chk; //type: boolean
        ydk::YLeaf pkt_type; //type: string
        ydk::YLeaf tag_num; //type: string
        ydk::YLeaf inner_vlan_dei; //type: boolean
        ydk::YLeaf outer_vlan_dei; //type: boolean
        ydk::YLeaf pbb_sid; //type: uint32
        ydk::YLeaf pbb_bvid; //type: uint32
        ydk::YLeaf pbb_pcp; //type: uint8
        ydk::YLeaf pbb_dei; //type: uint8
        ydk::YLeaf mpls1_label; //type: uint32
        ydk::YLeaf mpls1_exp; //type: uint8
        ydk::YLeaf mpls1_bos; //type: uint8
        ydk::YLeaf mpls2_label; //type: uint32
        ydk::YLeaf mpls2_exp; //type: uint8
        ydk::YLeaf mpls2_bos; //type: uint8
        ydk::YLeaf plain_bits; //type: uint64
        ydk::YLeaf plain_bits_size; //type: uint8
        ydk::YLeaf force_ctrl; //type: boolean
        ydk::YLeaf drop; //type: boolean
        ydk::YLeaf mask_da; //type: uint64
        ydk::YLeaf mask_ethertype; //type: uint32
        ydk::YLeaf mask_plain_bits; //type: uint64
        ydk::YLeaf flow_hits; //type: uint64
        ydk::YLeafList macda; //type: list of  uint8

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::RxFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow : public ydk::Entity
{
    public:
        TxFlow();
        ~TxFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_no; //type: uint32
        ydk::YLeaf is_flow_enabled; //type: boolean
        ydk::YLeaf ethertype; //type: uint16
        ydk::YLeaf outer_vlan_id; //type: uint16
        ydk::YLeaf outer_vlan_user_pri; //type: uint8
        ydk::YLeaf inner_vlan_id; //type: uint16
        ydk::YLeaf inner_vlan_user_pri; //type: uint8
        ydk::YLeaf psci; //type: uint64
        ydk::YLeaf match_priority; //type: uint8
        ydk::YLeaf tci_v; //type: uint8
        ydk::YLeaf tci_e_xr; //type: uint8
        ydk::YLeaf tci_sc; //type: uint8
        ydk::YLeaf tci_scb; //type: uint8
        ydk::YLeaf tci; //type: uint8
        ydk::YLeaf tci_c; //type: uint8
        ydk::YLeaf tci_chk; //type: boolean
        ydk::YLeaf pkt_type; //type: string
        ydk::YLeaf tag_num; //type: string
        ydk::YLeaf inner_vlan_dei; //type: boolean
        ydk::YLeaf outer_vlan_dei; //type: boolean
        ydk::YLeaf pbb_sid; //type: uint32
        ydk::YLeaf pbb_bvid; //type: uint32
        ydk::YLeaf pbb_pcp; //type: uint8
        ydk::YLeaf pbb_dei; //type: uint8
        ydk::YLeaf mpls1_label; //type: uint32
        ydk::YLeaf mpls1_exp; //type: uint8
        ydk::YLeaf mpls1_bos; //type: uint8
        ydk::YLeaf mpls2_label; //type: uint32
        ydk::YLeaf mpls2_exp; //type: uint8
        ydk::YLeaf mpls2_bos; //type: uint8
        ydk::YLeaf plain_bits; //type: uint64
        ydk::YLeaf plain_bits_size; //type: uint8
        ydk::YLeaf force_ctrl; //type: boolean
        ydk::YLeaf drop; //type: boolean
        ydk::YLeaf mask_da; //type: uint64
        ydk::YLeaf mask_ethertype; //type: uint32
        ydk::YLeaf mask_plain_bits; //type: uint64
        ydk::YLeaf flow_hits; //type: uint64
        ydk::YLeafList macda; //type: list of  uint8

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::Es200Flow::TxFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow : public ydk::Entity
{
    public:
        MsfpgaFlow();
        ~MsfpgaFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow
        class RxFlow; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow> rx_flow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow> tx_flow;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow : public ydk::Entity
{
    public:
        RxFlow();
        ~RxFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_id; //type: uint8
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf is_egress; //type: boolean
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf action; //type: uint8
        ydk::YLeaf smac_inuse; //type: boolean
        ydk::YLeaf dmac_inuse; //type: boolean
        ydk::YLeaf ethertype; //type: uint16
        ydk::YLeaf outer_vlan; //type: uint16
        ydk::YLeaf outer_vlan_up; //type: uint8
        ydk::YLeaf outer_vlan_tpid; //type: uint16
        ydk::YLeaf inner_vlan; //type: uint16
        ydk::YLeaf inner_vlan_up; //type: uint8
        ydk::YLeaf inner_vlan_tpid; //type: uint16
        ydk::YLeaf source_port; //type: uint32
        ydk::YLeaf source_port_chk; //type: boolean
        ydk::YLeaf sci_inuse; //type: boolean
        ydk::YLeaf sci; //type: uint64
        ydk::YLeaf match_pri; //type: uint8
        ydk::YLeaf is_ctrl_pkt; //type: boolean
        ydk::YLeaf ctrl_check; //type: boolean
        ydk::YLeaf match_untagged; //type: boolean
        ydk::YLeaf match_tagged; //type: boolean
        ydk::YLeaf match_bad_tag; //type: boolean
        ydk::YLeaf match_kay_tag; //type: boolean
        ydk::YLeaf tci_v; //type: uint8
        ydk::YLeaf tci_e_xr; //type: uint8
        ydk::YLeaf tci_sc; //type: uint8
        ydk::YLeaf tci_scb; //type: uint8
        ydk::YLeaf tci; //type: uint8
        ydk::YLeaf tci_c; //type: uint8
        ydk::YLeaf tci_an; //type: uint8
        ydk::YLeaf tci_an_chk; //type: boolean
        ydk::YLeaf tci_chk; //type: boolean
        ydk::YLeaf sai; //type: uint32
        ydk::YLeafList macsa; //type: list of  uint8
        ydk::YLeafList macda; //type: list of  uint8

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::RxFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow : public ydk::Entity
{
    public:
        TxFlow();
        ~TxFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_id; //type: uint8
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf is_egress; //type: boolean
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf action; //type: uint8
        ydk::YLeaf smac_inuse; //type: boolean
        ydk::YLeaf dmac_inuse; //type: boolean
        ydk::YLeaf ethertype; //type: uint16
        ydk::YLeaf outer_vlan; //type: uint16
        ydk::YLeaf outer_vlan_up; //type: uint8
        ydk::YLeaf outer_vlan_tpid; //type: uint16
        ydk::YLeaf inner_vlan; //type: uint16
        ydk::YLeaf inner_vlan_up; //type: uint8
        ydk::YLeaf inner_vlan_tpid; //type: uint16
        ydk::YLeaf source_port; //type: uint32
        ydk::YLeaf source_port_chk; //type: boolean
        ydk::YLeaf sci_inuse; //type: boolean
        ydk::YLeaf sci; //type: uint64
        ydk::YLeaf match_pri; //type: uint8
        ydk::YLeaf is_ctrl_pkt; //type: boolean
        ydk::YLeaf ctrl_check; //type: boolean
        ydk::YLeaf match_untagged; //type: boolean
        ydk::YLeaf match_tagged; //type: boolean
        ydk::YLeaf match_bad_tag; //type: boolean
        ydk::YLeaf match_kay_tag; //type: boolean
        ydk::YLeaf tci_v; //type: uint8
        ydk::YLeaf tci_e_xr; //type: uint8
        ydk::YLeaf tci_sc; //type: uint8
        ydk::YLeaf tci_scb; //type: uint8
        ydk::YLeaf tci; //type: uint8
        ydk::YLeaf tci_c; //type: uint8
        ydk::YLeaf tci_an; //type: uint8
        ydk::YLeaf tci_an_chk; //type: boolean
        ydk::YLeaf tci_chk; //type: boolean
        ydk::YLeaf sai; //type: uint32
        ydk::YLeafList macsa; //type: list of  uint8
        ydk::YLeafList macda; //type: list of  uint8

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Ext::MsfpgaFlow::TxFlow


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas : public ydk::Entity
{
    public:
        HwSas();
        ~HwSas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HwSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa> > hw_sa;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa : public ydk::Entity
{
    public:
        HwSa();
        ~HwSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_id; //type: int32
        class Ext; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext> ext;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MacsecCard
        class MsfpgaSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa
        class XlfpgaSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa
        class Es200Sa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa> es200_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa> msfpga_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa> xlfpga_sa;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa : public ydk::Entity
{
    public:
        Es200Sa();
        ~Es200Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa
        class RxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa> > rx_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa> tx_sa;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa : public ydk::Entity
{
    public:
        RxSa();
        ~RxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf sa_id; //type: uint8
        ydk::YLeaf sc_no; //type: uint32
        ydk::YLeaf in_pkts_unchecked; //type: uint8
        ydk::YLeaf in_pkts_delayed; //type: uint8
        ydk::YLeaf in_pkts_late; //type: uint8
        ydk::YLeaf in_pkts_ok; //type: uint8
        ydk::YLeaf in_pkts_invalid; //type: uint8
        ydk::YLeaf in_pkts_not_valid; //type: uint8
        ydk::YLeaf in_pkts_not_using_sa; //type: uint8
        ydk::YLeaf in_pkts_unused_sa; //type: uint8
        ydk::YLeaf in_octets_decrypted_validated1; //type: uint8
        ydk::YLeaf in_octets_validated; //type: uint8
        class XformParams; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams> xform_params;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams : public ydk::Entity
{
    public:
        XformParams();
        ~XformParams();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replay_win_size; //type: uint32
        ydk::YLeaf crypt_algo; //type: string
        ydk::YLeaf is_egress_tr; //type: boolean
        ydk::YLeaf aes_key_len; //type: string
        ydk::YLeaf assoc_num; //type: uint8
        ydk::YLeaf is_seq_num64_bit; //type: boolean
        ydk::YLeaf bgen_auth_key; //type: boolean

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::RxSa::XformParams


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa : public ydk::Entity
{
    public:
        TxSa();
        ~TxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf sa_id; //type: uint8
        ydk::YLeaf sc_no; //type: uint32
        ydk::YLeaf out_pkts_too_long; //type: uint8
        ydk::YLeaf out_pkts_encrypted_protected; //type: uint8
        ydk::YLeaf out_octets_encrypted_protected1; //type: uint8
        ydk::YLeaf initial_pkt_number; //type: uint8
        ydk::YLeaf current_pkt_number; //type: uint64
        ydk::YLeaf max_pkt_number; //type: uint64
        class XformParams; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams> xform_params;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams : public ydk::Entity
{
    public:
        XformParams();
        ~XformParams();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf replay_win_size; //type: uint32
        ydk::YLeaf crypt_algo; //type: string
        ydk::YLeaf is_egress_tr; //type: boolean
        ydk::YLeaf aes_key_len; //type: string
        ydk::YLeaf assoc_num; //type: uint8
        ydk::YLeaf is_seq_num64_bit; //type: boolean
        ydk::YLeaf bgen_auth_key; //type: boolean

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::Es200Sa::TxSa::XformParams


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa : public ydk::Entity
{
    public:
        MsfpgaSa();
        ~MsfpgaSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa
        class RxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa> rx_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa> tx_sa;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa : public ydk::Entity
{
    public:
        RxSa();
        ~RxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_id; //type: uint8
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf is_egress; //type: boolean
        ydk::YLeaf crypto_algo; //type: uint8
        ydk::YLeaf key_len; //type: uint8
        ydk::YLeaf an; //type: uint8
        ydk::YLeaf xpn; //type: uint8
        ydk::YLeaf sci; //type: uint64
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf next_pn; //type: uint64
        ydk::YLeaf c_offset; //type: uint8
        ydk::YLeaf action; //type: uint8
        ydk::YLeaf q_bit; //type: boolean
        ydk::YLeaf qq_bit; //type: boolean

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::RxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa : public ydk::Entity
{
    public:
        TxSa();
        ~TxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_id; //type: uint8
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf is_egress; //type: boolean
        ydk::YLeaf crypto_algo; //type: uint8
        ydk::YLeaf key_len; //type: uint8
        ydk::YLeaf an; //type: uint8
        ydk::YLeaf xpn; //type: uint8
        ydk::YLeaf sci; //type: uint64
        ydk::YLeaf in_use; //type: boolean
        ydk::YLeaf next_pn; //type: uint64
        ydk::YLeaf c_offset; //type: uint8
        ydk::YLeaf action; //type: uint8
        ydk::YLeaf q_bit; //type: boolean
        ydk::YLeaf qq_bit; //type: boolean

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::MsfpgaSa::TxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa : public ydk::Entity
{
    public:
        XlfpgaSa();
        ~XlfpgaSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa
        class RxSa; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa> rx_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa> tx_sa;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa : public ydk::Entity
{
    public:
        RxSa();
        ~RxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enable; //type: boolean
        ydk::YLeaf secure_mode; //type: uint32
        ydk::YLeaf replay_protect_mode; //type: boolean
        ydk::YLeaf validation_mode; //type: uint32
        ydk::YLeaf replay_window; //type: uint32
        ydk::YLeaf secure_channel_id; //type: uint64
        ydk::YLeaf cipher_suite; //type: uint32
        ydk::YLeaf confidentiality_offset; //type: uint8
        ydk::YLeaf fcs_err_cfg; //type: uint32
        ydk::YLeaf auth_err_cfg; //type: uint32
        ydk::YLeaf max_packet_num; //type: uint64
        ydk::YLeaf num_an_in_use; //type: uint32
        ydk::YLeaf an; //type: string
        ydk::YLeaf recent_an; //type: uint8
        ydk::YLeaf pkt_untagged_detected; //type: boolean
        ydk::YLeaf pkt_tagged_detected; //type: boolean
        ydk::YLeaf pkt_tagged_validated; //type: boolean
        ydk::YLeaf current_packet_num; //type: uint64
        ydk::YLeafList ssci; //type: list of  uint32
        ydk::YLeafList lowest_acceptable_packet_num; //type: list of  uint64
        ydk::YLeafList next_expected_packet_num; //type: list of  uint64
        ydk::YLeafList crc_value; //type: list of  uint32

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::RxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa : public ydk::Entity
{
    public:
        TxSa();
        ~TxSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection_enable; //type: boolean
        ydk::YLeaf secure_mode; //type: uint8
        ydk::YLeaf secure_channel_id; //type: uint64
        ydk::YLeaf sectag_length; //type: uint32
        ydk::YLeaf cipher_suite; //type: uint32
        ydk::YLeaf confidentiality_offset; //type: uint8
        ydk::YLeaf fcs_err_cfg; //type: uint8
        ydk::YLeaf max_packet_num; //type: uint64
        ydk::YLeaf an; //type: uint8
        ydk::YLeaf initial_packet_number; //type: uint64
        ydk::YLeaf ssci; //type: uint32
        ydk::YLeaf current_packet_num; //type: uint64
        ydk::YLeaf crc_value; //type: uint32

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Ext::XlfpgaSa::TxSa


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics : public ydk::Entity
{
    public:
        HwStatistics();
        ~HwStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ext; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext> ext;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MacsecCard
        class MsfpgaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats
        class XlfpgaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats
        class Es200Stats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats> es200_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats> msfpga_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats> xlfpga_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats : public ydk::Entity
{
    public:
        Es200Stats();
        ~Es200Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats
        class RxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats
        class TxScMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats
        class RxScMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats
        class TxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats
        class RxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats
        class TxPortStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats
        class RxPortStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats> rx_port_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats> rx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats> rx_sc_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats> tx_port_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats> tx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats> tx_sc_macsec_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats : public ydk::Entity
{
    public:
        RxInterfaceMacsecStats();
        ~RxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transform_error_pkts; //type: uint64
        ydk::YLeaf in_pkt_ctrl; //type: uint64
        ydk::YLeaf in_pkt_no_tag; //type: uint64
        ydk::YLeaf in_pkts_untagged; //type: uint64
        ydk::YLeaf in_pkt_bad_tag; //type: uint64
        ydk::YLeaf in_pkt_no_sci; //type: uint64
        ydk::YLeaf in_pkts_unknown_sci; //type: uint64
        ydk::YLeaf in_pkts_tagged_ctrl; //type: uint64
        ydk::YLeaf in_octets_unctrl; //type: uint64
        ydk::YLeaf in_octets_ctrl; //type: uint64
        ydk::YLeaf in_ucast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_ucast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_mcast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_mcast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_bcast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_bcast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_rx_drop_pkts_unctrl; //type: uint64
        ydk::YLeaf in_rx_drop_pkts_ctrl; //type: uint64
        ydk::YLeaf in_rx_error_pkts_unctrl; //type: uint64
        ydk::YLeaf in_rx_error_pkts_ctrl; //type: uint64
        ydk::YLeaf in_drop_pkts_class; //type: uint64
        ydk::YLeaf in_drop_pkts_data; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats : public ydk::Entity
{
    public:
        RxPortStats();
        ~RxPortStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_flow_match; //type: uint64
        ydk::YLeaf parser_dropped; //type: uint64
        ydk::YLeaf flow_miss; //type: uint64
        ydk::YLeaf pkts_ctrl; //type: uint64
        ydk::YLeaf pkts_data; //type: uint64
        ydk::YLeaf pkts_dropped; //type: uint64
        ydk::YLeaf pkts_err_in; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxPortStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats : public ydk::Entity
{
    public:
        RxSaStats();
        ~RxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_unchecked; //type: uint64
        ydk::YLeaf in_pkts_delayed; //type: uint64
        ydk::YLeaf in_pkts_late; //type: uint64
        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf in_octets_decrypted_validated1; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats : public ydk::Entity
{
    public:
        RxScMacsecStats();
        ~RxScMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_sa_not_in_use; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::RxScMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats : public ydk::Entity
{
    public:
        TxInterfaceMacsecStats();
        ~TxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transform_error_pkts; //type: uint64
        ydk::YLeaf out_pkt_ctrl; //type: uint64
        ydk::YLeaf out_pkts_untagged; //type: uint64
        ydk::YLeaf out_octets_unctrl; //type: uint64
        ydk::YLeaf out_octets_ctrl; //type: uint64
        ydk::YLeaf out_octets_common; //type: uint64
        ydk::YLeaf out_ucast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_ucast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_mcast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_mcast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_bcast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_bcast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_rx_drop_pkts_unctrl; //type: uint64
        ydk::YLeaf out_rx_drop_pkts_ctrl; //type: uint64
        ydk::YLeaf out_rx_err_pkts_unctrl; //type: uint64
        ydk::YLeaf out_rx_err_pkts_ctrl; //type: uint64
        ydk::YLeaf out_drop_pkts_class; //type: uint64
        ydk::YLeaf out_drop_pkts_data; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats : public ydk::Entity
{
    public:
        TxPortStats();
        ~TxPortStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_flow_match; //type: uint64
        ydk::YLeaf parser_dropped; //type: uint64
        ydk::YLeaf flow_miss; //type: uint64
        ydk::YLeaf pkts_ctrl; //type: uint64
        ydk::YLeaf pkts_data; //type: uint64
        ydk::YLeaf pkts_dropped; //type: uint64
        ydk::YLeaf pkts_err_in; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxPortStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats : public ydk::Entity
{
    public:
        TxSaStats();
        ~TxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_too_long; //type: uint64
        ydk::YLeaf out_pkts_encrypted_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted_protected1; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats : public ydk::Entity
{
    public:
        TxScMacsecStats();
        ~TxScMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_sa_not_in_use; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::Es200Stats::TxScMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats : public ydk::Entity
{
    public:
        MsfpgaStats();
        ~MsfpgaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats
        class RxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats
        class TxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats
        class RxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats> rx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats> tx_sa_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats : public ydk::Entity
{
    public:
        RxInterfaceMacsecStats();
        ~RxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkt_untagged; //type: uint64
        ydk::YLeaf in_pkt_notag; //type: uint64
        ydk::YLeaf in_pkt_bad_tag; //type: uint64
        ydk::YLeaf in_pkt_no_sci; //type: uint64
        ydk::YLeaf in_pkt_unknown_sci; //type: uint64
        ydk::YLeaf in_pkt_tagged; //type: uint64
        ydk::YLeaf in_pkt_overrun; //type: uint64
        ydk::YLeaf in_pkt_uncontrolled; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats : public ydk::Entity
{
    public:
        RxSaStats();
        ~RxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_delayed; //type: uint64
        ydk::YLeaf in_pkts_late; //type: uint64
        ydk::YLeaf in_pkts_unchecked; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64
        ydk::YLeaf in_octets_decrypted; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::RxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats : public ydk::Entity
{
    public:
        TxInterfaceMacsecStats();
        ~TxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkt_uncontrolled; //type: uint64
        ydk::YLeaf out_pkt_untagged; //type: uint64
        ydk::YLeaf out_pkt_too_long; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats : public ydk::Entity
{
    public:
        TxSaStats();
        ~TxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_protected; //type: uint64
        ydk::YLeaf out_pkts_encrypted; //type: uint64
        ydk::YLeaf out_octets_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::MsfpgaStats::TxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats : public ydk::Entity
{
    public:
        XlfpgaStats();
        ~XlfpgaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecTxStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats
        class MacsecRxStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats> macsec_rx_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats> macsec_tx_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats : public ydk::Entity
{
    public:
        MacsecRxStats();
        ~MacsecRxStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sc_decrypted_octets; //type: uint64
        ydk::YLeaf sc_no_tag_pkts; //type: uint64
        ydk::YLeaf sc_untagged_pkts; //type: uint64
        ydk::YLeaf sc_bad_tag_pkts; //type: uint64
        ydk::YLeaf sc_late_pkts; //type: uint64
        ydk::YLeaf sc_delayed_pkts; //type: uint64
        ydk::YLeaf sc_unchecked_pkts; //type: uint64
        ydk::YLeaf sc_no_sci_pkts; //type: uint64
        ydk::YLeaf sc_unknown_sci_pkts; //type: uint64
        ydk::YLeaf sc_ok_pkts; //type: uint64
        ydk::YLeaf sc_not_using_pkts; //type: uint64
        ydk::YLeaf sc_unused_pkts; //type: uint64
        ydk::YLeaf sc_not_valid_pkts; //type: uint64
        ydk::YLeaf sc_invalid_pkts; //type: uint64
        ydk::YLeaf sc_overrun_pkts; //type: uint64
        ydk::YLeaf sc_bypass_pkts; //type: uint64
        ydk::YLeaf sc_eapol_pkts; //type: uint64
        ydk::YLeaf sc_dropped_pkts; //type: uint64
        class RxSaStat; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat> > rx_sa_stat;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat : public ydk::Entity
{
    public:
        RxSaStat();
        ~RxSaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf an; //type: uint64
        ydk::YLeaf sa_ok_pkts; //type: uint64
        ydk::YLeaf sa_not_using_pkts; //type: uint64
        ydk::YLeaf sa_unused_pkts; //type: uint64
        ydk::YLeaf sa_not_valid_pkts; //type: uint64
        ydk::YLeaf sa_invalid_pkts; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat


class MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats : public ydk::Entity
{
    public:
        MacsecTxStats();
        ~MacsecTxStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sc_encrypted_octets; //type: uint64
        ydk::YLeaf sc_toolong_pkts; //type: uint64
        ydk::YLeaf sc_encrypted_pkts; //type: uint64
        ydk::YLeaf sc_untagged_pkts; //type: uint64
        ydk::YLeaf sc_overrun_pkts; //type: uint64
        ydk::YLeaf sc_bypass_pkts; //type: uint64
        ydk::YLeaf sc_eapol_pkts; //type: uint64
        ydk::YLeaf sc_dropped_pkts; //type: uint64
        ydk::YLeaf current_an; //type: uint64
        ydk::YLeaf sa_encrypted_pkts; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::HwStatistics::Ext::XlfpgaStats::MacsecTxStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics : public ydk::Entity
{
    public:
        SwStatistics();
        ~SwStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ext; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext> ext;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext : public ydk::Entity
{
    public:
        Ext();
        ~Ext();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MacsecCard
        class MsfpgaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats
        class XlfpgaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats
        class Es200Stats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats> es200_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats> msfpga_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats> xlfpga_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats : public ydk::Entity
{
    public:
        Es200Stats();
        ~Es200Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats
        class RxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats
        class TxScMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats
        class RxScMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats
        class TxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats
        class RxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats
        class TxPortStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats
        class RxPortStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats> rx_port_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats> rx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats> rx_sc_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats> tx_port_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats> tx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats> tx_sc_macsec_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats : public ydk::Entity
{
    public:
        RxInterfaceMacsecStats();
        ~RxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transform_error_pkts; //type: uint64
        ydk::YLeaf in_pkt_ctrl; //type: uint64
        ydk::YLeaf in_pkt_no_tag; //type: uint64
        ydk::YLeaf in_pkts_untagged; //type: uint64
        ydk::YLeaf in_pkt_bad_tag; //type: uint64
        ydk::YLeaf in_pkt_no_sci; //type: uint64
        ydk::YLeaf in_pkts_unknown_sci; //type: uint64
        ydk::YLeaf in_pkts_tagged_ctrl; //type: uint64
        ydk::YLeaf in_octets_unctrl; //type: uint64
        ydk::YLeaf in_octets_ctrl; //type: uint64
        ydk::YLeaf in_ucast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_ucast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_mcast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_mcast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_bcast_pkts_unctrl; //type: uint64
        ydk::YLeaf in_bcast_pkts_ctrl; //type: uint64
        ydk::YLeaf in_rx_drop_pkts_unctrl; //type: uint64
        ydk::YLeaf in_rx_drop_pkts_ctrl; //type: uint64
        ydk::YLeaf in_rx_error_pkts_unctrl; //type: uint64
        ydk::YLeaf in_rx_error_pkts_ctrl; //type: uint64
        ydk::YLeaf in_drop_pkts_class; //type: uint64
        ydk::YLeaf in_drop_pkts_data; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats : public ydk::Entity
{
    public:
        RxPortStats();
        ~RxPortStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_flow_match; //type: uint64
        ydk::YLeaf parser_dropped; //type: uint64
        ydk::YLeaf flow_miss; //type: uint64
        ydk::YLeaf pkts_ctrl; //type: uint64
        ydk::YLeaf pkts_data; //type: uint64
        ydk::YLeaf pkts_dropped; //type: uint64
        ydk::YLeaf pkts_err_in; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxPortStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats : public ydk::Entity
{
    public:
        RxSaStats();
        ~RxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_unchecked; //type: uint64
        ydk::YLeaf in_pkts_delayed; //type: uint64
        ydk::YLeaf in_pkts_late; //type: uint64
        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf in_octets_decrypted_validated1; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats : public ydk::Entity
{
    public:
        RxScMacsecStats();
        ~RxScMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_sa_not_in_use; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::RxScMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats : public ydk::Entity
{
    public:
        TxInterfaceMacsecStats();
        ~TxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transform_error_pkts; //type: uint64
        ydk::YLeaf out_pkt_ctrl; //type: uint64
        ydk::YLeaf out_pkts_untagged; //type: uint64
        ydk::YLeaf out_octets_unctrl; //type: uint64
        ydk::YLeaf out_octets_ctrl; //type: uint64
        ydk::YLeaf out_octets_common; //type: uint64
        ydk::YLeaf out_ucast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_ucast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_mcast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_mcast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_bcast_pkts_unctrl; //type: uint64
        ydk::YLeaf out_bcast_pkts_ctrl; //type: uint64
        ydk::YLeaf out_rx_drop_pkts_unctrl; //type: uint64
        ydk::YLeaf out_rx_drop_pkts_ctrl; //type: uint64
        ydk::YLeaf out_rx_err_pkts_unctrl; //type: uint64
        ydk::YLeaf out_rx_err_pkts_ctrl; //type: uint64
        ydk::YLeaf out_drop_pkts_class; //type: uint64
        ydk::YLeaf out_drop_pkts_data; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats : public ydk::Entity
{
    public:
        TxPortStats();
        ~TxPortStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_flow_match; //type: uint64
        ydk::YLeaf parser_dropped; //type: uint64
        ydk::YLeaf flow_miss; //type: uint64
        ydk::YLeaf pkts_ctrl; //type: uint64
        ydk::YLeaf pkts_data; //type: uint64
        ydk::YLeaf pkts_dropped; //type: uint64
        ydk::YLeaf pkts_err_in; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxPortStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats : public ydk::Entity
{
    public:
        TxSaStats();
        ~TxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_too_long; //type: uint64
        ydk::YLeaf out_pkts_encrypted_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted_protected1; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats : public ydk::Entity
{
    public:
        TxScMacsecStats();
        ~TxScMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_sa_not_in_use; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::Es200Stats::TxScMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats : public ydk::Entity
{
    public:
        MsfpgaStats();
        ~MsfpgaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats
        class RxSaStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats
        class TxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats
        class RxInterfaceMacsecStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats> rx_sa_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats> tx_sa_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats : public ydk::Entity
{
    public:
        RxInterfaceMacsecStats();
        ~RxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkt_untagged; //type: uint64
        ydk::YLeaf in_pkt_notag; //type: uint64
        ydk::YLeaf in_pkt_bad_tag; //type: uint64
        ydk::YLeaf in_pkt_no_sci; //type: uint64
        ydk::YLeaf in_pkt_unknown_sci; //type: uint64
        ydk::YLeaf in_pkt_tagged; //type: uint64
        ydk::YLeaf in_pkt_overrun; //type: uint64
        ydk::YLeaf in_pkt_uncontrolled; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats : public ydk::Entity
{
    public:
        RxSaStats();
        ~RxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_delayed; //type: uint64
        ydk::YLeaf in_pkts_late; //type: uint64
        ydk::YLeaf in_pkts_unchecked; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64
        ydk::YLeaf in_octets_decrypted; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::RxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats : public ydk::Entity
{
    public:
        TxInterfaceMacsecStats();
        ~TxInterfaceMacsecStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkt_uncontrolled; //type: uint64
        ydk::YLeaf out_pkt_untagged; //type: uint64
        ydk::YLeaf out_pkt_too_long; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxInterfaceMacsecStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats : public ydk::Entity
{
    public:
        TxSaStats();
        ~TxSaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_protected; //type: uint64
        ydk::YLeaf out_pkts_encrypted; //type: uint64
        ydk::YLeaf out_octets_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::MsfpgaStats::TxSaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats : public ydk::Entity
{
    public:
        XlfpgaStats();
        ~XlfpgaStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecTxStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats
        class MacsecRxStats; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats> macsec_rx_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats> macsec_tx_stats;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats : public ydk::Entity
{
    public:
        MacsecRxStats();
        ~MacsecRxStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sc_decrypted_octets; //type: uint64
        ydk::YLeaf sc_no_tag_pkts; //type: uint64
        ydk::YLeaf sc_untagged_pkts; //type: uint64
        ydk::YLeaf sc_bad_tag_pkts; //type: uint64
        ydk::YLeaf sc_late_pkts; //type: uint64
        ydk::YLeaf sc_delayed_pkts; //type: uint64
        ydk::YLeaf sc_unchecked_pkts; //type: uint64
        ydk::YLeaf sc_no_sci_pkts; //type: uint64
        ydk::YLeaf sc_unknown_sci_pkts; //type: uint64
        ydk::YLeaf sc_ok_pkts; //type: uint64
        ydk::YLeaf sc_not_using_pkts; //type: uint64
        ydk::YLeaf sc_unused_pkts; //type: uint64
        ydk::YLeaf sc_not_valid_pkts; //type: uint64
        ydk::YLeaf sc_invalid_pkts; //type: uint64
        ydk::YLeaf sc_overrun_pkts; //type: uint64
        ydk::YLeaf sc_bypass_pkts; //type: uint64
        ydk::YLeaf sc_eapol_pkts; //type: uint64
        ydk::YLeaf sc_dropped_pkts; //type: uint64
        class RxSaStat; //type: MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_pl_oper::MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat> > rx_sa_stat;
        
}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat : public ydk::Entity
{
    public:
        RxSaStat();
        ~RxSaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf an; //type: uint64
        ydk::YLeaf sa_ok_pkts; //type: uint64
        ydk::YLeaf sa_not_using_pkts; //type: uint64
        ydk::YLeaf sa_unused_pkts; //type: uint64
        ydk::YLeaf sa_not_valid_pkts; //type: uint64
        ydk::YLeaf sa_invalid_pkts; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecRxStats::RxSaStat


class MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats : public ydk::Entity
{
    public:
        MacsecTxStats();
        ~MacsecTxStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sc_encrypted_octets; //type: uint64
        ydk::YLeaf sc_toolong_pkts; //type: uint64
        ydk::YLeaf sc_encrypted_pkts; //type: uint64
        ydk::YLeaf sc_untagged_pkts; //type: uint64
        ydk::YLeaf sc_overrun_pkts; //type: uint64
        ydk::YLeaf sc_bypass_pkts; //type: uint64
        ydk::YLeaf sc_eapol_pkts; //type: uint64
        ydk::YLeaf sc_dropped_pkts; //type: uint64
        ydk::YLeaf current_an; //type: uint64
        ydk::YLeaf sa_encrypted_pkts; //type: uint64

}; // MacsecPlatform::Nodes::Node::Interfaces::Interface::SwStatistics::Ext::XlfpgaStats::MacsecTxStats

class MacsecCard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf macsec_none;
        static const ydk::Enum::YLeaf macsec_msfpga;
        static const ydk::Enum::YLeaf macsec_xlmsfpga;
        static const ydk::Enum::YLeaf macsec_apm;

};


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_ */

