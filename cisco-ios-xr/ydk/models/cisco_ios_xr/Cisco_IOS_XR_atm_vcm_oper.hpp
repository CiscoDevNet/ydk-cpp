#ifndef _CISCO_IOS_XR_ATM_VCM_OPER_
#define _CISCO_IOS_XR_ATM_VCM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_vcm_oper {

class AtmVcm : public ydk::Entity
{
    public:
        AtmVcm();
        ~AtmVcm();

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

        class Nodes; //type: AtmVcm::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes> nodes;
        
}; // AtmVcm


class AtmVcm::Nodes : public ydk::Entity
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

        class Node; //type: AtmVcm::Nodes::Node

        ydk::YList node;
        
}; // AtmVcm::Nodes


class AtmVcm::Nodes::Node : public ydk::Entity
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
        class Vcs; //type: AtmVcm::Nodes::Node::Vcs
        class CellPacks; //type: AtmVcm::Nodes::Node::CellPacks
        class Pvps; //type: AtmVcm::Nodes::Node::Pvps
        class ClassLinks; //type: AtmVcm::Nodes::Node::ClassLinks
        class Interfaces; //type: AtmVcm::Nodes::Node::Interfaces
        class VpTunnels; //type: AtmVcm::Nodes::Node::VpTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs> vcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks> cell_packs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps> pvps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks> class_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::VpTunnels> vp_tunnels;
        
}; // AtmVcm::Nodes::Node


class AtmVcm::Nodes::Node::Vcs : public ydk::Entity
{
    public:
        Vcs();
        ~Vcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vc; //type: AtmVcm::Nodes::Node::Vcs::Vc

        ydk::YList vc;
        
}; // AtmVcm::Nodes::Node::Vcs


class AtmVcm::Nodes::Node::Vcs::Vc : public ydk::Entity
{
    public:
        Vc();
        ~Vc();

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
        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf vci; //type: uint32
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf sub_interface; //type: string
        ydk::YLeaf vc_interface; //type: string
        ydk::YLeaf vpi_xr; //type: uint16
        ydk::YLeaf vci_xr; //type: uint16
        ydk::YLeaf type; //type: Vc
        ydk::YLeaf encapsulation; //type: VcEncap
        ydk::YLeaf shape; //type: VcTrafShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_rate; //type: uint32
        ydk::YLeaf encaps_inherit_level; //type: VcInheritLevel
        ydk::YLeaf qos_inherit_level; //type: VcInheritLevel
        ydk::YLeaf transmit_mtu; //type: uint32
        ydk::YLeaf receive_mtu; //type: uint32
        ydk::YLeaf vc_onvp_tunnel; //type: boolean
        ydk::YLeaf vc_on_p2p_sub_interface; //type: boolean
        ydk::YLeaf oper_status; //type: boolean
        ydk::YLeaf amin_status; //type: boolean
        ydk::YLeaf internal_state; //type: VcState
        ydk::YLeaf last_state_change_time; //type: uint32
        ydk::YLeaf test_mode; //type: VcTestMode
        class CellPackingData; //type: AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData> cell_packing_data;
        
}; // AtmVcm::Nodes::Node::Vcs::Vc


class AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData : public ydk::Entity
{
    public:
        CellPackingData();
        ~CellPackingData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf max_cell_packed_timeout; //type: uint16

}; // AtmVcm::Nodes::Node::Vcs::Vc::CellPackingData


class AtmVcm::Nodes::Node::CellPacks : public ydk::Entity
{
    public:
        CellPacks();
        ~CellPacks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CellPack; //type: AtmVcm::Nodes::Node::CellPacks::CellPack

        ydk::YList cell_pack;
        
}; // AtmVcm::Nodes::Node::CellPacks


class AtmVcm::Nodes::Node::CellPacks::CellPack : public ydk::Entity
{
    public:
        CellPack();
        ~CellPack();

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
        ydk::YLeaf pci; //type: uint32
        ydk::YLeaf sub_interface_name; //type: string
        ydk::YLeaf cell_packing_mode; //type: VcCellPackingMode
        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf vci; //type: uint32
        ydk::YLeaf received_average_cells_packets; //type: uint64
        ydk::YLeaf sent_cells_packets; //type: uint64
        class CellPacking; //type: AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking> cell_packing;
        
}; // AtmVcm::Nodes::Node::CellPacks::CellPack


class AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking : public ydk::Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf max_cell_packed_timeout; //type: uint16

}; // AtmVcm::Nodes::Node::CellPacks::CellPack::CellPacking


class AtmVcm::Nodes::Node::Pvps : public ydk::Entity
{
    public:
        Pvps();
        ~Pvps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pvp; //type: AtmVcm::Nodes::Node::Pvps::Pvp

        ydk::YList pvp;
        
}; // AtmVcm::Nodes::Node::Pvps


class AtmVcm::Nodes::Node::Pvps::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

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
        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf sub_interface; //type: string
        ydk::YLeaf vc_interface; //type: string
        ydk::YLeaf vpi_xr; //type: uint16
        ydk::YLeaf vci_xr; //type: uint16
        ydk::YLeaf type; //type: Vc
        ydk::YLeaf encapsulation; //type: VcEncap
        ydk::YLeaf shape; //type: VcTrafShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_rate; //type: uint32
        ydk::YLeaf encaps_inherit_level; //type: VcInheritLevel
        ydk::YLeaf qos_inherit_level; //type: VcInheritLevel
        ydk::YLeaf transmit_mtu; //type: uint32
        ydk::YLeaf receive_mtu; //type: uint32
        ydk::YLeaf vc_onvp_tunnel; //type: boolean
        ydk::YLeaf vc_on_p2p_sub_interface; //type: boolean
        ydk::YLeaf oper_status; //type: boolean
        ydk::YLeaf amin_status; //type: boolean
        ydk::YLeaf internal_state; //type: VcState
        ydk::YLeaf last_state_change_time; //type: uint32
        ydk::YLeaf test_mode; //type: VcTestMode
        class CellPackingData; //type: AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData> cell_packing_data;
        
}; // AtmVcm::Nodes::Node::Pvps::Pvp


class AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData : public ydk::Entity
{
    public:
        CellPackingData();
        ~CellPackingData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf max_cell_packed_timeout; //type: uint16

}; // AtmVcm::Nodes::Node::Pvps::Pvp::CellPackingData


class AtmVcm::Nodes::Node::ClassLinks : public ydk::Entity
{
    public:
        ClassLinks();
        ~ClassLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassLink; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink

        ydk::YList class_link;
        
}; // AtmVcm::Nodes::Node::ClassLinks


class AtmVcm::Nodes::Node::ClassLinks::ClassLink : public ydk::Entity
{
    public:
        ClassLink();
        ~ClassLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf vci; //type: uint32
        ydk::YLeaf sub_interface_name; //type: string
        class VcClassNotSupported; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported
        class OamConfig; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported> vc_class_not_supported;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig> oam_config;
        
}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported : public ydk::Entity
{
    public:
        VcClassNotSupported();
        ~VcClassNotSupported();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation_not_supported; //type: VcEncap
        ydk::YLeaf not_supported_inherit_level; //type: VcInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::VcClassNotSupported


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig : public ydk::Entity
{
    public:
        OamConfig();
        ~OamConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassLinkShaping; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping
        class ClassLinkEncapsulation; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation
        class OamPvc; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc
        class OamRetry; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry
        class AisRdi; //type: AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping> class_link_shaping;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation> class_link_encapsulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc> oam_pvc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry> oam_retry;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi> ais_rdi;
        
}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping : public ydk::Entity
{
    public:
        ClassLinkShaping();
        ~ClassLinkShaping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shaping_type; //type: VcTrafShaping
        ydk::YLeaf peak_output_rate; //type: uint32
        ydk::YLeaf average_output_rate; //type: uint32
        ydk::YLeaf burst_output_rate; //type: uint32
        ydk::YLeaf shaping_inherit_level; //type: VcInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkShaping


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation : public ydk::Entity
{
    public:
        ClassLinkEncapsulation();
        ~ClassLinkEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation_type; //type: VcEncap
        ydk::YLeaf encapsulation_inherit_level; //type: VcInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::ClassLinkEncapsulation


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc : public ydk::Entity
{
    public:
        OamPvc();
        ~OamPvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf manage_level; //type: VcManageLevel
        ydk::YLeaf pvc_frequency; //type: uint32
        ydk::YLeaf keep_vc_up; //type: boolean
        ydk::YLeaf ais_rdi_failure; //type: boolean
        ydk::YLeaf manage_inherit_level; //type: ClassLinkOamInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamPvc


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry : public ydk::Entity
{
    public:
        OamRetry();
        ~OamRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry_up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf retry_frequency; //type: uint32
        ydk::YLeaf retry_inherit_level; //type: ClassLinkOamInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::OamRetry


class AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi : public ydk::Entity
{
    public:
        AisRdi();
        ~AisRdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais_rdi_up_count; //type: uint32
        ydk::YLeaf ais_rdi_up_time; //type: uint32
        ydk::YLeaf ais_rdi_inherit_level; //type: ClassLinkOamInheritLevel

}; // AtmVcm::Nodes::Node::ClassLinks::ClassLink::OamConfig::AisRdi


class AtmVcm::Nodes::Node::Interfaces : public ydk::Entity
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

        class Interface; //type: AtmVcm::Nodes::Node::Interfaces::Interface

        ydk::YList interface;
        
}; // AtmVcm::Nodes::Node::Interfaces


class AtmVcm::Nodes::Node::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf ilmi_vpi; //type: uint32
        ydk::YLeaf ilmi_vci; //type: uint32
        ydk::YLeaf pvc_failures; //type: uint32
        ydk::YLeaf currently_failing_layer2pv_ps; //type: uint32
        ydk::YLeaf currently_failing_layer2pv_cs; //type: uint32
        ydk::YLeaf currently_failing_layer3vp_tunnels; //type: uint32
        ydk::YLeaf currently_failing_layer3pv_cs; //type: uint32
        ydk::YLeaf pvc_failures_trap_enable; //type: boolean
        ydk::YLeaf pvc_notification_interval; //type: uint32
        ydk::YLeaf configured_layer2pv_ps; //type: uint32
        ydk::YLeaf configured_layer2pv_cs; //type: uint32
        ydk::YLeaf configured_layer3vp_tunnels; //type: uint32
        ydk::YLeaf configured_layer3pv_cs; //type: uint32
        ydk::YLeaf port_type; //type: VcmPort
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf l2_cell_packing_count; //type: uint16
        class CellPackingData; //type: AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_atm_vcm_oper::AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData> cell_packing_data;
        
}; // AtmVcm::Nodes::Node::Interfaces::Interface


class AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData : public ydk::Entity
{
    public:
        CellPackingData();
        ~CellPackingData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf negotiated_max_cells_packed_per_packet; //type: uint16
        ydk::YLeaf max_cell_packed_timeout; //type: uint16

}; // AtmVcm::Nodes::Node::Interfaces::Interface::CellPackingData


class AtmVcm::Nodes::Node::VpTunnels : public ydk::Entity
{
    public:
        VpTunnels();
        ~VpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpTunnel; //type: AtmVcm::Nodes::Node::VpTunnels::VpTunnel

        ydk::YList vp_tunnel;
        
}; // AtmVcm::Nodes::Node::VpTunnels


class AtmVcm::Nodes::Node::VpTunnels::VpTunnel : public ydk::Entity
{
    public:
        VpTunnel();
        ~VpTunnel();

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
        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf main_interface; //type: string
        ydk::YLeaf vp_interface; //type: string
        ydk::YLeaf vpi_xr; //type: uint16
        ydk::YLeaf shape; //type: VpTrafShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_rate; //type: uint32
        ydk::YLeaf f4oam_enabled; //type: boolean
        ydk::YLeaf data_vc_count; //type: uint32
        ydk::YLeaf oper_status; //type: boolean
        ydk::YLeaf amin_status; //type: boolean
        ydk::YLeaf internal_state; //type: VpState
        ydk::YLeaf last_vp_state_change_time; //type: uint32

}; // AtmVcm::Nodes::Node::VpTunnels::VpTunnel

class Vc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf layer3_vc;
        static const ydk::Enum::YLeaf layer2_vc;
        static const ydk::Enum::YLeaf layer2_vp;
        static const ydk::Enum::YLeaf vc_type_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "layer3-vc") return 0;
            if (name == "layer2-vc") return 1;
            if (name == "layer2-vp") return 2;
            if (name == "vc-type-unknown") return 3;
            return -1;
        }
};

class VcEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ilmi;
        static const ydk::Enum::YLeaf qsaal;
        static const ydk::Enum::YLeaf snap;
        static const ydk::Enum::YLeaf mux;
        static const ydk::Enum::YLeaf nlpid;
        static const ydk::Enum::YLeaf f4oam;
        static const ydk::Enum::YLeaf aal0;
        static const ydk::Enum::YLeaf aal5;
        static const ydk::Enum::YLeaf encap_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "ilmi") return 1;
            if (name == "qsaal") return 2;
            if (name == "snap") return 3;
            if (name == "mux") return 4;
            if (name == "nlpid") return 5;
            if (name == "f4oam") return 6;
            if (name == "aal0") return 7;
            if (name == "aal5") return 8;
            if (name == "encap-unknown") return 9;
            return -1;
        }
};

class VcManageLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manage;
        static const ydk::Enum::YLeaf not_managed;

        static int get_enum_value(const std::string & name) {
            if (name == "manage") return 1;
            if (name == "not-managed") return 2;
            return -1;
        }
};

class VcTestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf test_mode_none;
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf reserved;

        static int get_enum_value(const std::string & name) {
            if (name == "test-mode-none") return 1;
            if (name == "loop") return 2;
            if (name == "reserved") return 3;
            return -1;
        }
};

class VpTrafShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vp_cbr;
        static const ydk::Enum::YLeaf vp_vbr_nrt;
        static const ydk::Enum::YLeaf vp_vbr_rt;
        static const ydk::Enum::YLeaf vp_abr;
        static const ydk::Enum::YLeaf vp_ubr_plus;
        static const ydk::Enum::YLeaf vp_ubr;
        static const ydk::Enum::YLeaf vp_traf_shaping_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "vp-cbr") return 1;
            if (name == "vp-vbr-nrt") return 2;
            if (name == "vp-vbr-rt") return 3;
            if (name == "vp-abr") return 4;
            if (name == "vp-ubr-plus") return 5;
            if (name == "vp-ubr") return 6;
            if (name == "vp-traf-shaping-unknown") return 7;
            return -1;
        }
};

class VcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf modifying;
        static const ydk::Enum::YLeaf modified;
        static const ydk::Enum::YLeaf activating;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf not_verified;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf deactivating;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf deleting;
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf state_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "initialized") return 0;
            if (name == "modifying") return 1;
            if (name == "modified") return 2;
            if (name == "activating") return 3;
            if (name == "activated") return 4;
            if (name == "not-verified") return 5;
            if (name == "ready") return 6;
            if (name == "deactivating") return 7;
            if (name == "inactive") return 8;
            if (name == "deleting") return 9;
            if (name == "deleted") return 10;
            if (name == "state-unknown") return 11;
            return -1;
        }
};

class ClassLinkOamInheritLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vc_configured_onvc;
        static const ydk::Enum::YLeaf vc_class_onvc;
        static const ydk::Enum::YLeaf vc_class_on_sub_interface;
        static const ydk::Enum::YLeaf vc_class_on_main_interface;
        static const ydk::Enum::YLeaf vc_global_default;
        static const ydk::Enum::YLeaf vc_inherit_level_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "vc-configured-onvc") return 0;
            if (name == "vc-class-onvc") return 1;
            if (name == "vc-class-on-sub-interface") return 2;
            if (name == "vc-class-on-main-interface") return 3;
            if (name == "vc-global-default") return 4;
            if (name == "vc-inherit-level-unknown") return 5;
            return -1;
        }
};

class VpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vp_initialized;
        static const ydk::Enum::YLeaf vp_modifying;
        static const ydk::Enum::YLeaf vp_ready;
        static const ydk::Enum::YLeaf vp_mgd_down;
        static const ydk::Enum::YLeaf vp_deleting;
        static const ydk::Enum::YLeaf vp_deleted;
        static const ydk::Enum::YLeaf vp_state_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "vp-initialized") return 0;
            if (name == "vp-modifying") return 1;
            if (name == "vp-ready") return 2;
            if (name == "vp-mgd-down") return 3;
            if (name == "vp-deleting") return 4;
            if (name == "vp-deleted") return 5;
            if (name == "vp-state-unknown") return 6;
            return -1;
        }
};

class VcTrafShaping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf vbr_nrt;
        static const ydk::Enum::YLeaf vbr_rt;
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf ubr_plus;
        static const ydk::Enum::YLeaf ubr;
        static const ydk::Enum::YLeaf traf_shaping_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "cbr") return 1;
            if (name == "vbr-nrt") return 2;
            if (name == "vbr-rt") return 3;
            if (name == "abr") return 4;
            if (name == "ubr-plus") return 5;
            if (name == "ubr") return 6;
            if (name == "traf-shaping-unknown") return 7;
            return -1;
        }
};

class VcCellPackingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vp;
        static const ydk::Enum::YLeaf vc;
        static const ydk::Enum::YLeaf port_mode;

        static int get_enum_value(const std::string & name) {
            if (name == "vp") return 1;
            if (name == "vc") return 2;
            if (name == "port-mode") return 3;
            return -1;
        }
};

class VcmPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_type_layer_2;
        static const ydk::Enum::YLeaf port_type_layer_3;
        static const ydk::Enum::YLeaf port_type_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "port-type-layer-2") return 0;
            if (name == "port-type-layer-3") return 1;
            if (name == "port-type-unknown") return 3;
            return -1;
        }
};

class VcInheritLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf directly_configured_onvc;
        static const ydk::Enum::YLeaf vc_class_configured_onvc;
        static const ydk::Enum::YLeaf vc_class_configured_on_sub_interface;
        static const ydk::Enum::YLeaf vc_class_configured_on_main_interface;
        static const ydk::Enum::YLeaf global_default;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_supported;

        static int get_enum_value(const std::string & name) {
            if (name == "directly-configured-onvc") return 0;
            if (name == "vc-class-configured-onvc") return 1;
            if (name == "vc-class-configured-on-sub-interface") return 2;
            if (name == "vc-class-configured-on-main-interface") return 3;
            if (name == "global-default") return 4;
            if (name == "unknown") return 5;
            if (name == "not-supported") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ATM_VCM_OPER_ */

