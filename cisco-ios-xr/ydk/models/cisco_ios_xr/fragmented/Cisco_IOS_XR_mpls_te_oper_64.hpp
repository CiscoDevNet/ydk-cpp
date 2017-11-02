#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_64_
#define _CISCO_IOS_XR_MPLS_TE_OPER_64_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_62.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro : public ydk::Entity
{
    public:
        ResvRro();
        ~ResvRro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject
        class LabelRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject> srlg_rro_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::Ipv4RroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

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
        ydk::YLeaf is_label_variable_length; //type: boolean
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags
        class VariableLengthLabel; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel> > variable_length_label;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel : public ydk::Entity
{
    public:
        VariableLengthLabel();
        ~VariableLengthLabel();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags> flags;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlGs; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs> > srl_gs;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs : public ydk::Entity
{
    public:
        SrlGs();
        ~SrlGs();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray : public ydk::Entity
{
    public:
        PathAffinityArray();
        ~PathAffinityArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_address; //type: string
        ydk::YLeaf hop_affinity; //type: uint32
        class HopExtendedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity> > hop_extended_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity : public ydk::Entity
{
    public:
        HopExtendedAffinity();
        ~HopExtendedAffinity();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::PathAffinityArray::HopExtendedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn : public ydk::Entity
{
    public:
        ReverseEroIn();
        ~ReverseEroIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::ReverseEroIn::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath : public ydk::Entity
{
    public:
        S2LSegmentRoutingPath();
        ~S2LSegmentRoutingPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: TeSrSid
        ydk::YLeaf has_ip_addresses; //type: boolean
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf has_mpls_label; //type: boolean
        ydk::YLeaf mpls_label_value; //type: uint32
        ydk::YLeaf has_entropy_label; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::CleanedLsp::S2L::S2LSegmentRoutingPath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo : public ydk::Entity
{
    public:
        P2PInfo();
        ~P2PInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bidirectional; //type: boolean
        class AutoBandwidthStatus; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus
        class AutoBandwidthConfig; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig
        class AutoBandwidthOper; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus> auto_bandwidth_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig> auto_bandwidth_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper> auto_bandwidth_oper;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus : public ydk::Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_enabled; //type: boolean
        ydk::YLeaf reactivation_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthStatus


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig : public ydk::Entity
{
    public:
        AutoBandwidthConfig();
        ~AutoBandwidthConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto_bandwidth_collect_only; //type: boolean
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf maximum_bandwidth; //type: uint32
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf collection_frequency; //type: uint32
        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32
        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthConfig


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper : public ydk::Entity
{
    public:
        AutoBandwidthOper();
        ~AutoBandwidthOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf bandwidth_pool_type; //type: MplsTeBwPool
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_application_trigger; //type: TeAutobwAppTrigger
        ydk::YLeaf application_jitter; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_collection; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf underflow_highest_bandwidth; //type: uint32
        ydk::YLeaf threshold_overflows; //type: uint32
        ydk::YLeaf overflow_early_bw_applications; //type: uint32
        ydk::YLeaf threshold_underflows; //type: uint32
        ydk::YLeaf underflow_early_bw_applications; //type: uint32
        ydk::YLeaf collect_only_requested_bandwidth; //type: uint32
        ydk::YLeaf application_reject_reason; //type: TeAutobwAppRej

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::P2PInfo::AutoBandwidthOper


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrentSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup
        class ReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup
        class GmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup
        class PreviousSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup
        class PreviousGmplsPathProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup
        class GmplsOtherSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup
        class GmplsOtherProtectSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup
        class StandbySetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup
        class StandbyReoptSetup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup
        class LastReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail
        class LastStdbyReOptFail; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup> current_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup> reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup> gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup> previous_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup> previous_gmpls_path_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup> gmpls_other_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup> gmpls_other_protect_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup> standby_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup> standby_reopt_setup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail> last_re_opt_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail> last_stdby_re_opt_fail;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup : public ydk::Entity
{
    public:
        CurrentSetup();
        ~CurrentSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_setup_timer; //type: uint32
        ydk::YLeaf selection_reason; //type: string
        ydk::YLeaf current_setup_last_error; //type: string
        class ConnectedUptimes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes> connected_uptimes;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes : public ydk::Entity
{
    public:
        ConnectedUptimes();
        ~ConnectedUptimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_lsp_uptime; //type: uint32
        ydk::YLeaf current_uptime; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::CurrentSetup::ConnectedUptimes


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup : public ydk::Entity
{
    public:
        ReoptSetup();
        ~ReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::ReoptSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup : public ydk::Entity
{
    public:
        GmplsPathProtectSetup();
        ~GmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protecting_setup_uptime; //type: uint32
        ydk::YLeaf protecting_setup_timer; //type: uint32
        ydk::YLeaf protecting_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup : public ydk::Entity
{
    public:
        PreviousSetup();
        ~PreviousSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_path_option; //type: string
        ydk::YLeaf previous_tunnel_instance; //type: uint32
        ydk::YLeaf previous_fail_reason; //type: string
        ydk::YLeaf previous_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup : public ydk::Entity
{
    public:
        PreviousGmplsPathProtectSetup();
        ~PreviousGmplsPathProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous_protect_path_option; //type: string
        ydk::YLeaf previous_protect_tunnel_instance; //type: uint32
        ydk::YLeaf previous_protect_fail_reason; //type: string
        ydk::YLeaf previous_protect_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::PreviousGmplsPathProtectSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup : public ydk::Entity
{
    public:
        GmplsOtherSetup();
        ~GmplsOtherSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup : public ydk::Entity
{
    public:
        GmplsOtherProtectSetup();
        ~GmplsOtherProtectSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_index; //type: uint32
        ydk::YLeaf other_setup_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::GmplsOtherProtectSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup : public ydk::Entity
{
    public:
        StandbySetup();
        ~StandbySetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standby_lsp_uptime; //type: uint32
        ydk::YLeaf standby_setup_timer; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbySetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup : public ydk::Entity
{
    public:
        StandbyReoptSetup();
        ~StandbyReoptSetup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reoptimized_setup_uptime; //type: uint32
        ydk::YLeaf reoptimized_setup_timer; //type: uint32
        ydk::YLeaf reoptimized_setup_last_error; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::StandbyReoptSetup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail : public ydk::Entity
{
    public:
        LastReOptFail();
        ~LastReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastReOptFail


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail : public ydk::Entity
{
    public:
        LastStdbyReOptFail();
        ~LastStdbyReOptFail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf re_opt_last_fail_reason; //type: MplsTeReoptDecisionReason
        ydk::YLeaf re_opt_failed_destination; //type: string
        ydk::YLeaf re_opt_failed_timestamp; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::History::LastStdbyReOptFail


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection : public ydk::Entity
{
    public:
        PathProtection();
        ~PathProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_of_switchover_sec; //type: uint32
        ydk::YLeaf switchover_total; //type: uint16
        ydk::YLeaf switchover_ready; //type: uint16
        ydk::YLeaf standby_reoptimized_number; //type: uint16
        ydk::YLeaf switchover_reason; //type: uint16
        ydk::YLeaf diversity_type; //type: TePpDiversity
        ydk::YLeaf is_path_protect_configured; //type: boolean
        ydk::YLeaf path_protection_protected_by_id; //type: uint32
        ydk::YLeaf valid_path_protection_path_option_exists; //type: boolean
        ydk::YLeaf is_path_protect_switch_over_underway; //type: boolean
        ydk::YLeaf reoptimization_time_remaining; //type: uint32
        class Switchover; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover> switchover;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover : public ydk::Entity
{
    public:
        Switchover();
        ~Switchover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PathProtection::Switchover


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup : public ydk::Entity
{
    public:
        AutoBackup();
        ~AutoBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_ls_ps; //type: uint32
        ydk::YLeaf protected_s2_ls; //type: uint32
        ydk::YLeaf sharing_families; //type: uint32
        ydk::YLeaf ab_protection_type; //type: AutoBackupProtection
        ydk::YLeaf is_using_srlg; //type: boolean
        ydk::YLeaf srlg_prot_type; //type: AutoBackupSrlgMode
        ydk::YLeaf ab_protected_interface; //type: string
        ydk::YLeaf protected_address; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf is_unused_removal_timer_running; //type: boolean
        ydk::YLeaf unused_removal_remaining_time; //type: uint32
        class WeightedSrlgInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo
        class Iep; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo> weighted_srlg_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep> > iep;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo : public ydk::Entity
{
    public:
        WeightedSrlgInfo();
        ~WeightedSrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtectedInterfaceSrlg; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg
        class WeightedSrlgHop; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg> > protected_interface_srlg;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop> > weighted_srlg_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg : public ydk::Entity
{
    public:
        ProtectedInterfaceSrlg();
        ~ProtectedInterfaceSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg; //type: uint32
        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::ProtectedInterfaceSrlg


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop : public ydk::Entity
{
    public:
        WeightedSrlgHop();
        ~WeightedSrlgHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string
        ydk::YLeaf aggregate_admin_weight; //type: uint64
        class CommonSrlg; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg> > common_srlg;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg : public ydk::Entity
{
    public:
        CommonSrlg();
        ~CommonSrlg();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::WeightedSrlgInfo::WeightedSrlgHop::CommonSrlg


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep : public ydk::Entity
{
    public:
        Iep();
        ~Iep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_option_id; //type: uint32
        class IepHop; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop> > iep_hop;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop : public ydk::Entity
{
    public:
        IepHop();
        ~IepHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_index; //type: uint32
        ydk::YLeaf iep_hop_type; //type: MplsTeIepHop
        ydk::YLeaf iep_hop_address; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoBackup::Iep::IepHop


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh : public ydk::Entity
{
    public:
        AutoMesh();
        ~AutoMesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mesh_group_id; //type: uint32
        ydk::YLeaf tunnel_destination_list_name; //type: string
        ydk::YLeaf is_tunnel_unused_timer_running; //type: boolean
        ydk::YLeaf remaining_unused_time; //type: uint32
        ydk::YLeaf mesh_group_type; //type: TeMeshgroup

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoMesh


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc : public ydk::Entity
{
    public:
        AutoPcc();
        ~AutoPcc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf creator_address; //type: string
        ydk::YLeaf has_creator_id; //type: boolean
        ydk::YLeaf creator_id; //type: string
        ydk::YLeaf plspid; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::AutoPcc


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation : public ydk::Entity
{
    public:
        PceDelegation();
        ~PceDelegation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plsp_id; //type: uint32
        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf owner_address; //type: string
        ydk::YLeaf operationally_up; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::PceDelegation


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: MplsTeSoftPreemptionState
        ydk::YLeaf time_in_preemption_pending; //type: uint16
        ydk::YLeaf preemption_pending_resolution; //type: MplsTeSoftPreemptionResolution
        class SoftPreemptionCounters; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters
        class SoftPreemptionPathError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters> soft_preemption_counters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError> > soft_preemption_path_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters : public ydk::Entity
{
    public:
        SoftPreemptionCounters();
        ~SoftPreemptionCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf soft_preemption_events; //type: uint32
        ydk::YLeaf reopt_completed_ls_ps; //type: uint32
        ydk::YLeaf torn_down_ls_ps; //type: uint32
        ydk::YLeaf path_protection_switchover_ls_ps; //type: uint32
        ydk::YLeaf frr_triggered_ls_ps; //type: uint32
        ydk::YLeaf time_in_preemption_pending_min; //type: uint16
        ydk::YLeaf time_in_preemption_pending_max; //type: uint16
        ydk::YLeaf time_in_preemption_pending_avg; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionCounters


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError : public ydk::Entity
{
    public:
        SoftPreemptionPathError();
        ~SoftPreemptionPathError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf preempting_link_address; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::SoftPreemption::SoftPreemptionPathError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel : public ydk::Entity
{
    public:
        WdmUnitunnel();
        ~WdmUnitunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_state; //type: MplsTeTunnelState
        ydk::YLeaf tunnel_role; //type: MplsTeTunnelRole
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf local_optical_router_id; //type: string
        ydk::YLeaf remote_optical_router_id; //type: string
        ydk::YLeaf controlled_interface; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf label_origin; //type: MplsTeMgmtGmplsLabelOrigin
        ydk::YLeaf srlg_discovery; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::WdmUnitunnel


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo : public ydk::Entity
{
    public:
        TransportTunnelInfo();
        ~TransportTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status_homepath_working; //type: boolean
        class Otn; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn
        class StaticUni; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni
        class EgressStaticUni; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni
        class HomepathEro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro
        class DiversityInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn> otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni> static_uni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni> egress_static_uni;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro> > homepath_ero;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo> > diversity_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn : public ydk::Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_bit_rate; //type: uint32
        class BandwidthCfg; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg> bandwidth_cfg;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg : public ydk::Entity
{
    public:
        BandwidthCfg();
        ~BandwidthCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_level; //type: TeOduLevel
        class OduFlexCbr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr
        class OduFlexGfpFRes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes
        class OduFlexGfpFNonRes; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr> odu_flex_cbr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes> odu_flex_gfp_f_res;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes> odu_flex_gfp_f_non_res;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr : public ydk::Entity
{
    public:
        OduFlexCbr();
        ~OduFlexCbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf tolerance; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexCbr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes : public ydk::Entity
{
    public:
        OduFlexGfpFRes();
        ~OduFlexGfpFRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFRes


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes : public ydk::Entity
{
    public:
        OduFlexGfpFNonRes();
        ~OduFlexGfpFNonRes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::Otn::BandwidthCfg::OduFlexGfpFNonRes


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni : public ydk::Entity
{
    public:
        StaticUni();
        ~StaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_port; //type: string
        ydk::YLeaf client_if_handle; //type: string
        ydk::YLeaf client_odu_name; //type: string
        ydk::YLeaf client_odu_if_handle; //type: string
        ydk::YLeaf cross_connect_id; //type: uint32
        ydk::YLeaf is_connected; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf static_uni_type; //type: MplsTeUni
        ydk::YLeaf term_client_port; //type: string
        ydk::YLeaf term_client_if_handle; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::StaticUni


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni : public ydk::Entity
{
    public:
        EgressStaticUni();
        ~EgressStaticUni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_termination; //type: MplsTeTermination
        ydk::YLeaf remote_uni_type; //type: MplsTeUni
        class EgressPort; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort
        class TermEgressPort; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort> egress_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort> term_egress_port;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort : public ydk::Entity
{
    public:
        EgressPort();
        ~EgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr> te_addr;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

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
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::EgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort : public ydk::Entity
{
    public:
        TermEgressPort();
        ~TermEgressPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TeAddr; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr> te_addr;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr : public ydk::Entity
{
    public:
        TeAddr();
        ~TeAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAddr
        ydk::YLeaf ipv4_address; //type: string
        class Ipv4UnnumberedAddress; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress> ipv4_unnumbered_address;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress : public ydk::Entity
{
    public:
        Ipv4UnnumberedAddress();
        ~Ipv4UnnumberedAddress();

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
        ydk::YLeaf interface_index; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::EgressStaticUni::TermEgressPort::TeAddr::Ipv4UnnumberedAddress


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro : public ydk::Entity
{
    public:
        HomepathEro();
        ~HomepathEro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::Ipv4EroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::HomepathEro::UnnumberedEroSubObject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo : public ydk::Entity
{
    public:
        DiversityInfo();
        ~DiversityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TransportTunnelInfo::DiversityInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo : public ydk::Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_session_up; //type: boolean
        ydk::YLeaf session_up_time; //type: uint32
        ydk::YLeaf failure_diagnostic_code; //type: uint32
        ydk::YLeaf failure_reason; //type: string
        ydk::YLeaf minimum_session_up_interval; //type: uint32
        ydk::YLeaf maximum_session_up_interval; //type: uint32
        class EventCounters; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters
        class DampeningInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters> event_counters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo> > dampening_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters : public ydk::Entity
{
    public:
        EventCounters();
        ~EventCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_create_events; //type: uint32
        ydk::YLeaf session_up_events; //type: uint32
        ydk::YLeaf session_creation_failed_events; //type: uint32
        ydk::YLeaf session_down_events; //type: uint32
        ydk::YLeaf session_admin_down_events; //type: uint32
        ydk::YLeaf session_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_non_gracefully_delete_events; //type: uint32
        ydk::YLeaf session_create_timeout_events; //type: uint32
        ydk::YLeaf session_replay_events; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::EventCounters


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo : public ydk::Entity
{
    public:
        DampeningInfo();
        ~DampeningInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf hold_down_time; //type: uint32
        ydk::YLeaf remained_time; //type: uint32
        ydk::YLeaf backoff_count; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::BfdInfo::DampeningInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir : public ydk::Entity
{
    public:
        OtnBidir();
        ~OtnBidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aps; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps
        class Restoration; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps> aps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration> restoration;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf active_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity
        class ProtectionProfile; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile> protection_profile;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile : public ydk::Entity
{
    public:
        ProtectionProfile();
        ~ProtectionProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Aps::ProtectionProfile::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration : public ydk::Entity
{
    public:
        Restoration();
        ~Restoration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf revert_option; //type: TePnrRevertOptions
        ydk::YLeaf diverse_lsp; //type: MplsTeLspMode
        ydk::YLeaf diversity_type; //type: TePpDiversity

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::OtnBidir::Restoration


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir : public ydk::Entity
{
    public:
        Bidir();
        ~Bidir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_bandwidth; //type: uint32
        ydk::YLeaf reverse_bandwidth_standby; //type: uint32
        class ReverseEroErrorCurrent; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent
        class ReverseEroErrorReopt; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt
        class ReverseEroErrorStandby; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby
        class ReverseEroErrorStandbyReopt; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent> reverse_ero_error_current;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt> reverse_ero_error_reopt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby> reverse_ero_error_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt> reverse_ero_error_standby_reopt;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent : public ydk::Entity
{
    public:
        ReverseEroErrorCurrent();
        ~ReverseEroErrorCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorCurrent::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt : public ydk::Entity
{
    public:
        ReverseEroErrorReopt();
        ~ReverseEroErrorReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorReopt::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby : public ydk::Entity
{
    public:
        ReverseEroErrorStandby();
        ~ReverseEroErrorStandby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandby::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt : public ydk::Entity
{
    public:
        ReverseEroErrorStandbyReopt();
        ~ReverseEroErrorStandbyReopt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reverse_lsp_id; //type: uint16
        ydk::YLeaf path_reject_reason_bw; //type: boolean
        ydk::YLeaf path_reject_reason_affinity; //type: boolean
        ydk::YLeaf path_reject_reason_ip_addr; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_link; //type: boolean
        ydk::YLeaf path_reject_reason_ixcd; //type: boolean
        ydk::YLeaf path_reject_reason_holddown; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_node; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_link; //type: boolean
        ydk::YLeaf path_reject_reason_exclude_srlg; //type: boolean
        ydk::YLeaf path_reject_reason_hop_limit; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_unknown; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_head; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_mid; //type: boolean
        ydk::YLeaf path_reject_reason_node_ol_tail; //type: boolean
        ydk::YLeaf path_reject_reason_reverse_bw; //type: boolean
        ydk::YLeaf path_reject_reason_node_unreachable; //type: boolean
        ydk::YLeaf path_option_index; //type: uint16
        ydk::YLeaf path_option_type; //type: MtePathOption
        ydk::YLeaf ero_reject_reason; //type: TeRevEroRejectReasons
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError> > path_calculation_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError : public ydk::Entity
{
    public:
        PathCalculationError();
        ~PathCalculationError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_message; //type: string
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf log_time; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Bidir::ReverseEroErrorStandbyReopt::PathCalculationError


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet : public ydk::Entity
{
    public:
        XroAttributeSet();
        ~XroAttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public ydk::Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_type; //type: TeBfdReversePath
        ydk::YLeaf binding_label; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public ydk::Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: string
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf is_default; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_signalled_name_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        class SignalledName; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
{
    public:
        SignalledName();
        ~SignalledName();

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
        ydk::YLeaf source_type; //type: TeSigNameAppend
        ydk::YLeaf protected_interface_type; //type: TeSigNameAppend
        ydk::YLeaf is_mp_addresses; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_interface; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf policy_class; //type: uint8
        ydk::YLeaf is_policyclass_configured; //type: boolean
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_node_protection; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf record_route; //type: boolean
        ydk::YLeaf auto_bandwidth_collect; //type: boolean
        ydk::YLeaf auto_route_announce; //type: boolean
        ydk::YLeaf soft_preemption_configured; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf is_interface_bw_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry : public ydk::Entity
{
    public:
        PolicyClassEntry();
        ~PolicyClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId : public ydk::Entity
{
    public:
        MeshGroupId();
        ~MeshGroupId();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro : public ydk::Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public ydk::Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mutual_diversity_flag; //type: boolean
        class XroSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public ydk::Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeXroSubobj
        class Ipv4Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public ydk::Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public ydk::Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public ydk::Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_router_id; //type: string
        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf attribute; //type: TeXroAttribute
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public ydk::Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public ydk::Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_id; //type: uint32
        ydk::YLeaf exclusion_type; //type: TeXroExclusion

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public ydk::Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_lsp_id; //type: boolean
        ydk::YLeaf processing_node_exception; //type: boolean
        ydk::YLeaf penultimate_node_exception; //type: boolean
        ydk::YLeaf destination_node_exception; //type: boolean
        ydk::YLeaf exclusion_type; //type: TeXroExclusion
        class Fec; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public ydk::Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public ydk::Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fast_reroute; //type: boolean
        ydk::YLeaf frr_bandwidth_protection; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf is_priority_configured; //type: boolean
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snc_mode; //type: TeApsSncMode
        ydk::YLeaf tcm_id; //type: uint32
        ydk::YLeaf protection_type; //type: TeProtect
        ydk::YLeaf protection_mode; //type: TePnrRevertOptions
        ydk::YLeaf wait_to_restore_time; //type: uint32
        ydk::YLeaf hold_off_time; //type: uint32
        ydk::YLeaf path_prot_profile_type; //type: TePathProtProfile
        ydk::YLeaf restoration_style; //type: TeRestorationStyle
        class RevertSchedule; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf schedulename; //type: string
        ydk::YLeaf schedule_date; //type: uint32
        ydk::YLeaf schedule_frequency; //type: TeSchFreq
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf max_tries; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe : public ydk::Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelection
        ydk::YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_selection_invalidation_action; //type: TePathInvalAction
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf path_selection_metric; //type: MplsTeMetric
        ydk::YLeaf is_path_selection_metric_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_margin; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        ydk::YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        ydk::YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        ydk::YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        ydk::YLeaf is_path_select_configured; //type: boolean
        ydk::YLeaf is_prepend_list_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public ydk::Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_bits; //type: uint32
        ydk::YLeaf affinity_mask; //type: uint32
        class NamedAffinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public ydk::Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf constraint_type; //type: uint8
        ydk::YLeaf constraint_value; //type: uint32
        ydk::YLeaf forward_ref_value; //type: uint32
        class ConstraintExtendedValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
{
    public:
        ConstraintExtendedValue();
        ~ConstraintExtendedValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
{
    public:
        ExtendedForwardRefValue();
        ~ExtendedForwardRefValue();

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

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_state; //type: boolean
        ydk::YLeaf s2l_state; //type: boolean
        ydk::YLeaf lsp_re_route; //type: boolean
        ydk::YLeaf lsp_re_opt; //type: boolean
        ydk::YLeaf lsp_insufficient_bw; //type: boolean
        ydk::YLeaf lsp_bandwidth_change; //type: boolean
        ydk::YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        ydk::YLeaf all_logging_enabled; //type: boolean

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public ydk::Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrependEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public ydk::Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeAttributeSetSrPrepend
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf next_label; //type: uint32

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId : public ydk::Entity
{
    public:
        TunnelId();
        ~TunnelId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence : public ydk::Entity
{
    public:
        TeTunnelConvergence();
        ~TeTunnelConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_convergence_in_progress; //type: boolean
        ydk::YLeaf frr_trigger_time; //type: uint64
        ydk::YLeaf pcalc_complete_time; //type: uint64
        ydk::YLeaf convergence_complete_time; //type: uint64
        ydk::YLeaf binding_label_rewrite_time; //type: uint64
        ydk::YLeaf vif_creation_time; //type: uint64
        class ConvergenceLsp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp> convergence_lsp;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp : public ydk::Entity
{
    public:
        ConvergenceLsp();
        ~ConvergenceLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_in; //type: uint64
        ydk::YLeaf path_out; //type: uint64
        ydk::YLeaf resv_in; //type: uint64
        ydk::YLeaf resv_out; //type: uint64
        ydk::YLeaf label_rewrite; //type: uint64
        ydk::YLeaf tunnel_rewrite; //type: uint64
        ydk::YLeaf creation_time; //type: uint64

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::TeTunnelConvergence::ConvergenceLsp


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo : public ydk::Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        ydk::YLeaf fault_in_label; //type: uint32
        ydk::YLeaf is_lockout; //type: boolean
        ydk::YLeaf lockout_timestamp; //type: uint32
        ydk::YLeaf lockout_lsp_id; //type: uint16
        ydk::YLeaf origination; //type: FlexLspLockoutOrigination

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::FlexInfo


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_state; //type: TeDestinationState
        ydk::YLeaf active_path_option_index; //type: uint32
        ydk::YLeaf path_option_exhausted; //type: boolean
        ydk::YLeaf uptime; //type: uint32
        ydk::YLeaf path_change_time; //type: uint32
        ydk::YLeaf total_uptime; //type: uint32
        ydk::YLeaf s2l_exist; //type: boolean
        ydk::YLeaf destination_deletion_cause; //type: TeP2MpS2LDeletionCause
        ydk::YLeaf destination_deletion_sub_cause; //type: TeP2MpS2LDeletionSubcause
        ydk::YLeaf destination_deletion_timestamp; //type: uint32
        ydk::YLeaf is_inter_area; //type: boolean
        class InterAreaReoptimization; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization
        class PathOptionEntry; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry
        class PathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization> inter_area_reoptimization;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry> > path_option_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption> > path_option;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization : public ydk::Entity
{
    public:
        InterAreaReoptimization();
        ~InterAreaReoptimization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_path_queries; //type: uint16
        ydk::YLeaf time_since_last_query_sent; //type: uint32
        ydk::YLeaf received_preferred_path_errors; //type: uint16
        ydk::YLeaf time_since_last_preferred_path_error; //type: uint32
        ydk::YLeaf received_preferred_tree_errors; //type: uint16
        ydk::YLeaf time_since_last_preferred_tree_error; //type: uint32
        ydk::YLeaf preferred_path_error_node; //type: string
        ydk::YLeaf preferred_tree_error_node; //type: string

}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::InterAreaReoptimization


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry : public ydk::Entity
{
    public:
        PathOptionEntry();
        ~PathOptionEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_index_is_valid; //type: boolean
        ydk::YLeaf option_index; //type: uint32
        ydk::YLeaf path_option_name; //type: string
        ydk::YLeaf path_option_type; //type: MplsTePathoption
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf explicit_path_id; //type: uint16
        ydk::YLeaf holddown_duration; //type: uint16
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf path_option_area_id; //type: string
        ydk::YLeaf is_strict_explicit_path; //type: boolean
        ydk::YLeaf is_helddown; //type: boolean
        ydk::YLeaf is_lockdown; //type: boolean
        ydk::YLeaf is_verbatim; //type: boolean
        ydk::YLeaf is_disabled; //type: boolean
        ydk::YLeaf has_attribute_set; //type: boolean
        ydk::YLeaf attribute_set_found; //type: boolean
        ydk::YLeaf has_xro_attribute_set; //type: boolean
        ydk::YLeaf xro_attribute_set_found; //type: boolean
        ydk::YLeaf is_segment_routing; //type: boolean
        ydk::YLeaf protected_by_path_option_index; //type: uint32
        ydk::YLeaf restored_from_path_option_index; //type: uint32
        class AttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet
        class XroAttributeSet; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::XroAttributeSet
        class PathCalculationError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::PathCalculationError
        class RemergeError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::RemergeError
        class SignallingError; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::SignallingError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet> attribute_set;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::XroAttributeSet> xro_attribute_set;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::PathCalculationError> > path_calculation_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::RemergeError> > remerge_error;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::SignallingError> > signalling_error;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet : public ydk::Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion : public ydk::Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSet
        class AttributeSetPathOption; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion


class MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public ydk::Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf dste_class_type; //type: uint8
        ydk::YLeaf bandwidth_type; //type: MplsTeBwPool
        ydk::YLeaf is_bandwidth_configured; //type: boolean
        ydk::YLeaf is_cost_limit_configured; //type: boolean
        ydk::YLeaf is_affinity_configured; //type: boolean
        ydk::YLeaf generation; //type: uint32
        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: uint32
        ydk::YLeaf is_path_invalidation_timeout_configured; //type: boolean
        ydk::YLeaf is_path_invalidation_action_configured; //type: boolean
        ydk::YLeaf exclude_list_name; //type: string
        ydk::YLeaf is_exclude_list_name_configured; //type: boolean
        ydk::YLeaf is_pce_configured; //type: boolean
        ydk::YLeaf is_pce_disj_source_configured; //type: boolean
        ydk::YLeaf is_pce_disj_type_configured; //type: boolean
        ydk::YLeaf is_pce_disj_group_id_configured; //type: boolean
        ydk::YLeaf pcedp_source_address; //type: uint32
        ydk::YLeaf pcedp_type; //type: TePceDisjoint
        ydk::YLeaf pcedp_group_id; //type: uint32
        ydk::YLeaf is_pceb_dj_source_configured; //type: boolean
        ydk::YLeaf is_pcebd_group_id_configured; //type: boolean
        ydk::YLeaf pcebd_source_address; //type: uint32
        ydk::YLeaf pcebd_group_id; //type: uint32
        ydk::YLeaf is_bfd_reverse_pat_configured; //type: boolean
        class Affinity; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class TunnelId; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId
        class VersionInfo; //type: MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId> > tunnel_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;
        
}; // MplsTeStandby::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOptionEntry::AttributeSet::AttributeSetUnion::AttributeSetPathOption


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_64_ */

