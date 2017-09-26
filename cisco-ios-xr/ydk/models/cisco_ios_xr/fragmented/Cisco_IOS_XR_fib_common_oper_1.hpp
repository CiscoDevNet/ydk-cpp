#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_1_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_fib_common_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
{
    public:
        WeightsOfPath();
        ~WeightsOfPath();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject : public ydk::Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibShTblFibExtBag
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe : public ydk::Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_label_flag; //type: boolean
        ydk::YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath : public ydk::Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath : public ydk::Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf brief_interface_handle; //type: string
        ydk::YLeaf brief_next_hop_prefix; //type: string
        ydk::YLeaf via_label_to_recurse; //type: uint32
        ydk::YLeaf brief_pnode_address; //type: string
        ydk::YLeaf brief_qnode_address; //type: string
        ydk::YLeaf brief_lfa_protection_type; //type: FibUpdatePathLfaProtection
        ydk::YLeaf resolved_path; //type: boolean
        ydk::YLeaf recursive_path; //type: boolean
        ydk::YLeaf packets_received_path; //type: boolean
        ydk::YLeaf attached_path; //type: boolean
        ydk::YLeaf backup_path; //type: boolean
        ydk::YLeaf best_external_path; //type: boolean
        ydk::YLeaf protect_ignore; //type: boolean
        ydk::YLeaf path_dlb; //type: boolean
        ydk::YLeaf path_flags; //type: uint32
        ydk::YLeaf path_info_flags; //type: uint16
        ydk::YLeaf path_index; //type: uint8
        ydk::YLeaf backup_index; //type: uint8
        ydk::YLeaf next_hop_index; //type: uint32
        ydk::YLeaf parent_interface_handle; //type: string
        ydk::YLeaf recursionvia_len; //type: uint8
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address_to_recurse; //type: string
        ydk::YLeaf label_to_recurse; //type: uint32
        ydk::YLeaf detail_next_hop_prefix; //type: string
        ydk::YLeaf next_hop_mask_length; //type: uint8
        ydk::YLeaf interface_associated_path; //type: string
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_vrf; //type: string
        ydk::YLeaf tunnle_endpoint_id; //type: uint32
        ydk::YLeaf lisprlocid; //type: uint32
        ydk::YLeaf number_of_dependencies_this_path; //type: uint32
        ydk::YLeaf robin_reset_value; //type: uint8
        ydk::YLeaf recurse_prefix_object; //type: boolean
        ydk::YLeaf next_prefix_recursion; //type: string
        ydk::YLeaf next_prefix_length; //type: uint8
        ydk::YLeaf recurse_prefix_object2; //type: boolean
        ydk::YLeaf next_prefix_recursion2; //type: string
        ydk::YLeaf next_prefix_length2; //type: uint8
        ydk::YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShow
        ydk::YLeaf current_path_flag; //type: boolean
        ydk::YLeaf recursive_path_information; //type: boolean
        ydk::YLeaf external_adjacency; //type: boolean
        ydk::YLeaf fib_path_nh_information_type; //type: FibNeh
        ydk::YLeaf fib_path_nh_information_type_special; //type: FibNehSpecial
        ydk::YLeaf weight_of_path; //type: uint32
        ydk::YLeaf tunnel_class; //type: uint8
        ydk::YLeaf tunnel_is_forward_class; //type: boolean
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_count; //type: uint8
        ydk::YLeaf ip_encap_locks; //type: uint32
        ydk::YLeaf ip_encap_transport_tbl; //type: uint32
        ydk::YLeaf ipe_transport_vrf_name; //type: string
        ydk::YLeaf ip_encap_transport_af; //type: uint32
        ydk::YLeaf ip_encap_payload_af; //type: uint32
        ydk::YLeaf ip_encap_payload_mtu; //type: uint16
        ydk::YLeaf ip_encap_parent; //type: uint32
        ydk::YLeaf ip_encap_parent_type; //type: uint32
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_type; //type: FibShIpencapHdr
        ydk::YLeaf ip_encap_hdrp; //type: string
        ydk::YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_lable; //type: uint32
        ydk::YLeaf recursive_fwd_chain; //type: boolean
        ydk::YLeaf number_of_igp_paths; //type: uint32
        ydk::YLeaf remote_backup; //type: boolean
        class RecursiveLblStack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack> > recursive_lbl_stack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_labels; //type: uint32
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf nh_address; //type: string
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
{
    public:
        Lstack();
        ~Lstack();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack : public ydk::Entity
{
    public:
        RecursiveLblStack();
        ~RecursiveLblStack();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information : public ydk::Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_is_sripv6_flag; //type: boolean
        ydk::YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        ydk::YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics : public ydk::Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_packets_forwarded; //type: uint64
        ydk::YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails : public ydk::Entity
{
    public:
        IpPrefixDetails();
        ~IpPrefixDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpPrefixDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail> > ip_prefix_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail : public ydk::Entity
{
    public:
        IpPrefixDetail();
        ~IpPrefixDetail();

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
        ydk::YLeaf protocol_type_fib_entry; //type: uint32
        ydk::YLeaf platform_hardware; //type: string
        ydk::YLeaf number_of_referances_to_path_list; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf path_list_source; //type: uint32
        ydk::YLeaf number_of_referances_to_ldi; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf flags_external_ldi; //type: uint32
        ydk::YLeaf pointer_external_ldi; //type: uint32
        ydk::YLeaf exact_path_interface_handle; //type: uint32
        ydk::YLeaf exact_path_gre_interface_handle; //type: uint32
        ydk::YLeaf exact_route_gre_phys_ifh_avail; //type: boolean
        ydk::YLeaf exact_route_result; //type: boolean
        ydk::YLeaf prefix_is_static_or_connected; //type: boolean
        ydk::YLeaf packet_should_recieve; //type: boolean
        ydk::YLeaf prefix_connected; //type: boolean
        ydk::YLeaf prefix_for_adjancency; //type: boolean
        ydk::YLeaf prefix_for_pic_next_hop; //type: boolean
        ydk::YLeaf purgable_after_purge_interval; //type: boolean
        ydk::YLeaf broadcast_recive_flag; //type: boolean
        ydk::YLeaf broadcast_forward_flag; //type: boolean
        ydk::YLeaf zero_by_zero_route_as_default; //type: boolean
        ydk::YLeaf external_switch_triggered; //type: boolean
        ydk::YLeaf route_attribute_flag; //type: boolean
        ydk::YLeaf dummy_real_zero_route; //type: boolean
        ydk::YLeaf ldi_lw_flag; //type: uint32
        ydk::YLeaf ref_counter_of_ldi_lw_ldi; //type: uint32
        ydk::YLeaf type_of_ldi_lw_ldi; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf version_of_route; //type: uint64
        ydk::YLeaf fib_route_download_priority; //type: uint32
        ydk::YLeaf time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf l2_subscriber_route; //type: boolean
        ydk::YLeaf l2_subscriber_xconnect_id; //type: uint32
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation> detail_fib_entry_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject> > extension_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath> fib_entry_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information> srv6_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation : public ydk::Entity
{
    public:
        DetailFibEntryInformation();
        ~DetailFibEntryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fib_entry_version; //type: uint32
        ydk::YLeaf per_prefix_accounting; //type: uint8
        ydk::YLeaf load_sharing_type; //type: FibLoadshareShow
        ydk::YLeaf fib_entry_adjacency_type; //type: FibAdjacencyShow
        ydk::YLeaf fib_protocol_type; //type: uint32
        ydk::YLeaf afi_fib_protocol_type; //type: uint32
        ydk::YLeaf aib_l3_address; //type: string
        ydk::YLeaf adjacency_address_length; //type: uint32
        ydk::YLeaf adjacency_interface; //type: uint32
        ydk::YLeaf fib_special_nh_information_type; //type: uint32
        ydk::YLeaf fib_entry_adjacency_address; //type: string
        ydk::YLeaf fib_entry_adjacency_interface; //type: uint32
        ydk::YLeaf packets_through_fib_entry; //type: uint64
        ydk::YLeaf bytes_through_fib_entry; //type: uint64
        ydk::YLeaf detailed_prefix_length; //type: uint32
        ydk::YLeaf prefix_protocol; //type: uint32
        ydk::YLeaf precedence_forpackets; //type: uint8
        ydk::YLeaf traffic_index_for_packets; //type: uint8
        ydk::YLeaf switch_compontent_id; //type: uint32
        ydk::YLeaf fast_adjacency_flag; //type: boolean
        ydk::YLeaf illegal_fast_adjacency_flag; //type: boolean
        ydk::YLeaf remote_adjacency_flag; //type: boolean
        ydk::YLeaf bgp_attribute_id; //type: uint32
        ydk::YLeaf bgp_local_attribute_id; //type: uint32
        ydk::YLeaf bgp_attribute_origin_as; //type: uint32
        ydk::YLeaf bgp_attribute_next_hop_as; //type: uint32
        ydk::YLeaf path_string; //type: string
        ydk::YLeaf extcom_string; //type: string
        ydk::YLeaf com_string; //type: string
        ydk::YLeaf extended_community; //type: uint32
        ydk::YLeaf qos_group; //type: uint32
        ydk::YLeaf mpls_fec; //type: uint32
        ydk::YLeaf qppb_qos_group_and_ip_precedence; //type: uint32
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf pl_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf ldi_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf lwldi_time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf pl_time_stamp_type; //type: uint32
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
{
    public:
        LoadshareInformation();
        ~LoadshareInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_through_load_information; //type: uint64
        ydk::YLeaf bytes_through_load_information; //type: uint64
        ydk::YLeaf total_packets_through_load_information; //type: uint64
        ydk::YLeaf total_bytes_through_load_information; //type: uint64
        ydk::YLeaf prefix_of_owner; //type: uint32
        ydk::YLeaf mask_length_of_owner; //type: uint32
        ydk::YLeaf load_information_reference_count; //type: uint16
        ydk::YLeaf per_dest_load_sharing_flag; //type: boolean
        ydk::YLeaf load_information_owner_deleted_flag; //type: boolean
        ydk::YLeaf loadinfo_sanity_flag; //type: boolean
        ydk::YLeaf is_owner; //type: boolean
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
{
    public:
        LoadInformtionInternalData();
        ~LoadInformtionInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_ofldis; //type: uint8
        ydk::YLeaf number_of_ldis; //type: uint8
        ydk::YLeaf maximum_index_arrays; //type: uint32
        ydk::YLeaf path_indices; //type: string
        ydk::YLeaf path_ldi_numbers; //type: string
        ydk::YLeaf maximum_slots; //type: uint32
        ydk::YLeaf normalized_weights; //type: string
        ydk::YLeaf tunnel_class_value; //type: string
        ydk::YLeaf is_pbts_info_valid; //type: boolean
        ydk::YLeaf pbts_class_offset; //type: string
        ydk::YLeaf pbts_class_num_paths; //type: string
        ydk::YLeaf pbts_fallback_mapped_class; //type: string
        ydk::YLeaf round_robin_disable; //type: boolean
        ydk::YLeaf ldi_next_hop_buckets; //type: uint8
        ydk::YLeaf platform_hardware_information; //type: string
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
{
    public:
        AdjacencyAddress();
        ~AdjacencyAddress();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
{
    public:
        InterfaceHandle();
        ~InterfaceHandle();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
{
    public:
        PbtsClassIsFallbackMapped();
        ~PbtsClassIsFallbackMapped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
{
    public:
        PbtsFallbackToDrop();
        ~PbtsFallbackToDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
{
    public:
        SanityFlag();
        ~SanityFlag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
{
    public:
        TunnelIsForwardClass();
        ~TunnelIsForwardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
{
    public:
        WeightsOfPath();
        ~WeightsOfPath();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject : public ydk::Entity
{
    public:
        ExtensionObject();
        ~ExtensionObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibShTblFibExtBag
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe : public ydk::Entity
{
    public:
        SfecdLe();
        ~SfecdLe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_label_flag; //type: boolean
        ydk::YLeaf context_label; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath : public ydk::Entity
{
    public:
        FibEntryPath();
        ~FibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath : public ydk::Entity
{
    public:
        FibShTblPath();
        ~FibShTblPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf brief_interface_handle; //type: string
        ydk::YLeaf brief_next_hop_prefix; //type: string
        ydk::YLeaf via_label_to_recurse; //type: uint32
        ydk::YLeaf brief_pnode_address; //type: string
        ydk::YLeaf brief_qnode_address; //type: string
        ydk::YLeaf brief_lfa_protection_type; //type: FibUpdatePathLfaProtection
        ydk::YLeaf resolved_path; //type: boolean
        ydk::YLeaf recursive_path; //type: boolean
        ydk::YLeaf packets_received_path; //type: boolean
        ydk::YLeaf attached_path; //type: boolean
        ydk::YLeaf backup_path; //type: boolean
        ydk::YLeaf best_external_path; //type: boolean
        ydk::YLeaf protect_ignore; //type: boolean
        ydk::YLeaf path_dlb; //type: boolean
        ydk::YLeaf path_flags; //type: uint32
        ydk::YLeaf path_info_flags; //type: uint16
        ydk::YLeaf path_index; //type: uint8
        ydk::YLeaf backup_index; //type: uint8
        ydk::YLeaf next_hop_index; //type: uint32
        ydk::YLeaf parent_interface_handle; //type: string
        ydk::YLeaf recursionvia_len; //type: uint8
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
{
    public:
        MoreDetailAboutPath();
        ~MoreDetailAboutPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address_to_recurse; //type: string
        ydk::YLeaf label_to_recurse; //type: uint32
        ydk::YLeaf detail_next_hop_prefix; //type: string
        ydk::YLeaf next_hop_mask_length; //type: uint8
        ydk::YLeaf interface_associated_path; //type: string
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_vrf; //type: string
        ydk::YLeaf tunnle_endpoint_id; //type: uint32
        ydk::YLeaf lisprlocid; //type: uint32
        ydk::YLeaf number_of_dependencies_this_path; //type: uint32
        ydk::YLeaf robin_reset_value; //type: uint8
        ydk::YLeaf recurse_prefix_object; //type: boolean
        ydk::YLeaf next_prefix_recursion; //type: string
        ydk::YLeaf next_prefix_length; //type: uint8
        ydk::YLeaf recurse_prefix_object2; //type: boolean
        ydk::YLeaf next_prefix_recursion2; //type: string
        ydk::YLeaf next_prefix_length2; //type: uint8
        ydk::YLeaf detail_fib_adjacency_type; //type: FibAdjacencyShow
        ydk::YLeaf current_path_flag; //type: boolean
        ydk::YLeaf recursive_path_information; //type: boolean
        ydk::YLeaf external_adjacency; //type: boolean
        ydk::YLeaf fib_path_nh_information_type; //type: FibNeh
        ydk::YLeaf fib_path_nh_information_type_special; //type: FibNehSpecial
        ydk::YLeaf weight_of_path; //type: uint32
        ydk::YLeaf tunnel_class; //type: uint8
        ydk::YLeaf tunnel_is_forward_class; //type: boolean
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
{
    public:
        SpdIpencap();
        ~SpdIpencap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_count; //type: uint8
        ydk::YLeaf ip_encap_locks; //type: uint32
        ydk::YLeaf ip_encap_transport_tbl; //type: uint32
        ydk::YLeaf ipe_transport_vrf_name; //type: string
        ydk::YLeaf ip_encap_transport_af; //type: uint32
        ydk::YLeaf ip_encap_payload_af; //type: uint32
        ydk::YLeaf ip_encap_payload_mtu; //type: uint16
        ydk::YLeaf ip_encap_parent; //type: uint32
        ydk::YLeaf ip_encap_parent_type; //type: uint32
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
{
    public:
        IpEncapHdr();
        ~IpEncapHdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_encap_hdr_type; //type: FibShIpencapHdr
        ydk::YLeaf ip_encap_hdrp; //type: string
        ydk::YLeaf ip_encap_hdr_dyn; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
{
    public:
        MplsInformationForPath();
        ~MplsInformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_lable; //type: uint32
        ydk::YLeaf recursive_fwd_chain; //type: boolean
        ydk::YLeaf number_of_igp_paths; //type: uint32
        ydk::YLeaf remote_backup; //type: boolean
        class RecursiveLblStack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack> > recursive_lbl_stack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
{
    public:
        IgpLabelStackArray();
        ~IgpLabelStackArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number_of_labels; //type: uint32
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf nh_address; //type: string
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
{
    public:
        Lstack();
        ~Lstack();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack : public ydk::Entity
{
    public:
        RecursiveLblStack();
        ~RecursiveLblStack();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information : public ydk::Entity
{
    public:
        Srv6Information();
        ~Srv6Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_is_sripv6_flag; //type: boolean
        ydk::YLeaf srv6_pfx_resolved_via_policy_label; //type: boolean
        ydk::YLeaf sripv6_stats_valid_flag; //type: boolean
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics : public ydk::Entity
{
    public:
        Srv6Statistics();
        ~Srv6Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_packets_forwarded; //type: uint64
        ydk::YLeaf srv6_packets_dropped; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief : public ydk::Entity
{
    public:
        NhInfoBrief();
        ~NhInfoBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief
        class NhInfoRemoteBriefs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs
        class NhInfoLocalBriefs; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs> nh_info_local_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs> nh_info_remote_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief> nh_info_special_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs : public ydk::Entity
{
    public:
        NhInfoLocalBriefs();
        ~NhInfoLocalBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief> > nh_info_local_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief : public ydk::Entity
{
    public:
        NhInfoLocalBrief();
        ~NhInfoLocalBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs : public ydk::Entity
{
    public:
        NhInfoRemoteBriefs();
        ~NhInfoRemoteBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief> > nh_info_remote_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief : public ydk::Entity
{
    public:
        NhInfoRemoteBrief();
        ~NhInfoRemoteBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief : public ydk::Entity
{
    public:
        NhInfoSpecialBrief();
        ~NhInfoSpecialBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialDiscardBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief
        class NhInfoSpecialNullBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief
        class NhInfoSpecialPuntBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief
        class NhInfoSpecialDropBrief; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief> nh_info_special_discard_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief> nh_info_special_drop_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief> nh_info_special_null_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief> nh_info_special_punt_brief;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief : public ydk::Entity
{
    public:
        NhInfoSpecialDiscardBrief();
        ~NhInfoSpecialDiscardBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief : public ydk::Entity
{
    public:
        NhInfoSpecialDropBrief();
        ~NhInfoSpecialDropBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief : public ydk::Entity
{
    public:
        NhInfoSpecialNullBrief();
        ~NhInfoSpecialNullBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief : public ydk::Entity
{
    public:
        NhInfoSpecialPuntBrief();
        ~NhInfoSpecialPuntBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail : public ydk::Entity
{
    public:
        NhInfoDetail();
        ~NhInfoDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalDetails; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails
        class NhInfoSpecialDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail
        class NhInfoRemoteDetails; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails> nh_info_local_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails> nh_info_remote_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail> nh_info_special_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails : public ydk::Entity
{
    public:
        NhInfoLocalDetails();
        ~NhInfoLocalDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail> > nh_info_local_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail : public ydk::Entity
{
    public:
        NhInfoLocalDetail();
        ~NhInfoLocalDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoLocalDetails::NhInfoLocalDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails : public ydk::Entity
{
    public:
        NhInfoRemoteDetails();
        ~NhInfoRemoteDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail> > nh_info_remote_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail : public ydk::Entity
{
    public:
        NhInfoRemoteDetail();
        ~NhInfoRemoteDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoRemoteDetails::NhInfoRemoteDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail : public ydk::Entity
{
    public:
        NhInfoSpecialDetail();
        ~NhInfoSpecialDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialPuntDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail
        class NhInfoSpecialDropDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail
        class NhInfoSpecialNullDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail
        class NhInfoSpecialDiscardDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail> nh_info_special_discard_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail> nh_info_special_drop_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail> nh_info_special_null_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail> nh_info_special_punt_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail : public ydk::Entity
{
    public:
        NhInfoSpecialDiscardDetail();
        ~NhInfoSpecialDiscardDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDiscardDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail : public ydk::Entity
{
    public:
        NhInfoSpecialDropDetail();
        ~NhInfoSpecialDropDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialDropDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail : public ydk::Entity
{
    public:
        NhInfoSpecialNullDetail();
        ~NhInfoSpecialNullDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialNullDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail : public ydk::Entity
{
    public:
        NhInfoSpecialPuntDetail();
        ~NhInfoSpecialPuntDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
{
    public:
        ObjectBase();
        ~ObjectBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_reference_count; //type: uint32
        ydk::YLeaf object_flags; //type: uint32
        ydk::YLeaf object_type; //type: uint8
        ydk::YLeaf object_time_stamp; //type: uint64
        ydk::YLeaf object_pointer; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
{
    public:
        NhInfoExtensionDetail_();
        ~NhInfoExtensionDetail_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: FibNhinfoExtBag
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
{
    public:
        SnecdNhr();
        ~SnecdNhr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_replicated_type; //type: uint8
        ydk::YLeaf nh_info_replicated_nh_id; //type: uint32
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::SiPwhe : public ydk::Entity
{
    public:
        SiPwhe();
        ~SiPwhe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwhe_adjacency_client_data; //type: uint32
        ydk::YLeaf vctype; //type: uint32
        ydk::YLeaf vc_internal_label; //type: uint32
        ydk::YLeaf cw_enabled; //type: boolean
        ydk::YLeaf l2_overhead_bytes; //type: uint16
        ydk::YLeaf dot1q_vlan_tag; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetail::NhInfoSpecialDetail::NhInfoSpecialPuntDetail::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoDetailHardwareEgress();
        ~NhInfoDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress
        class NhInfoLocalDetailHardwareEgresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses
        class NhInfoRemoteDetailHardwareEgresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses> nh_info_local_detail_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses> nh_info_remote_detail_hardware_egresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress> nh_info_special_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareEgresses();
        ~NhInfoLocalDetailHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress> > nh_info_local_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareEgress();
        ~NhInfoLocalDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf si_link_proto; //type: uint32
        ydk::YLeaf si_nhinfo; //type: uint32
        ydk::YLeaf si_nhtype; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_pfi_interface_type; //type: uint32
        ydk::YLeaf si_adj_ptr; //type: uint32
        ydk::YLeaf si_adj_present; //type: boolean
        ydk::YLeaf si_special_type; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_adj_if; //type: uint32
        ydk::YLeaf si_ext_pfx; //type: string
        ydk::YLeaf si_ext_pfx_len; //type: uint32
        ydk::YLeaf si_ext_pfx_proto; //type: uint32
        ydk::YLeaf si_adj_address; //type: string
        ydk::YLeaf si_adj_addrlen; //type: uint32
        ydk::YLeaf si_adj_addr_proto; //type: uint32
        ydk::YLeaf si_adj_rw_len; //type: uint32
        ydk::YLeaf si_adj_rw; //type: string
        ydk::YLeaf si_dep_nhinfo_type; //type: uint32
        ydk::YLeaf si_dep_nhinfo; //type: uint32
        ydk::YLeaf si_dep_nhinfo_ifh; //type: uint32
        ydk::YLeaf si_bkup_frr; //type: uint32
        ydk::YLeaf si_protect_frr; //type: uint32
        ydk::YLeaf si_bkup_nhinfo; //type: uint32
        ydk::YLeaf si_bkup_ifh; //type: uint32
        ydk::YLeaf si_bkup_addr; //type: string
        ydk::YLeaf si_bkup_addrlen; //type: uint32
        ydk::YLeaf si_bkup_addr_proto; //type: uint32
        ydk::YLeaf si_frr_active; //type: boolean
        ydk::YLeaf si_attr_is_ext_mgd; //type: boolean
        ydk::YLeaf si_attr_is_incomp; //type: boolean
        ydk::YLeaf si_attr_is_tunnel; //type: boolean
        ydk::YLeaf si_attr_is_tunnel_srte; //type: boolean
        ydk::YLeaf si_attr_is_gre_tunnel; //type: boolean
        ydk::YLeaf si_gre_ti; //type: uint32
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint32
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension : public ydk::Entity
{
    public:
        NhInfoExtension();
        ~NhInfoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
{
    public:
        NhInfoExtensionDetail();
        ~NhInfoExtensionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
{
    public:
        NhInfoExtensionBase();
        ~NhInfoExtensionBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_object_pointer; //type: uint64
        ydk::YLeaf back_object_pointer; //type: uint64
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_1_ */

