#ifndef _CISCO_IOS_XR_FIB_COMMON_OPER_2_
#define _CISCO_IOS_XR_FIB_COMMON_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_fib_common_oper_0.hpp"
#include "Cisco_IOS_XR_fib_common_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_oper {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief


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


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes : public ydk::Entity
{
    public:
        ExactRoutes();
        ~ExactRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExactRoute; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute> > exact_route;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute : public ydk::Entity
{
    public:
        ExactRoute();
        ~ExactRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: FibProtocol
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
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
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath
        class Srv6Information; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation> detail_fib_entry_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath> fib_entry_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information> srv6_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject> > extension_object;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation : public ydk::Entity
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
        class LoadshareInformation; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation> loadshare_information;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation : public ydk::Entity
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
        class LoadInformtionInternalData; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData> load_informtion_internal_data;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData : public ydk::Entity
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
        class SanityFlag; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag
        class InterfaceHandle; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle
        class WeightsOfPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath
        class AdjacencyAddress; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress
        class PbtsClassIsFallbackMapped; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped
        class PbtsFallbackToDrop; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop
        class TunnelIsForwardClass; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag> > sanity_flag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle> > interface_handle;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath> > weights_of_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress> > adjacency_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped> > pbts_class_is_fallback_mapped;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop> > pbts_fallback_to_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass> > tunnel_is_forward_class;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::SanityFlag


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::InterfaceHandle


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::WeightsOfPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath : public ydk::Entity
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

        class FibShTblPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath> > fib_sh_tbl_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath : public ydk::Entity
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
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath : public ydk::Entity
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
        class SpdIpencap; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap> > spd_ipencap;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap : public ydk::Entity
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
        class IpEncapHdr; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr> > ip_encap_hdr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath : public ydk::Entity
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
        class RecursiveLblStack; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack
        class IgpLabelStackArray; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack> > recursive_lbl_stack;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray> > igp_label_stack_array;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::RecursiveLblStack


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray : public ydk::Entity
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
        class Lstack; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack> > lstack;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::Lstack


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information : public ydk::Entity
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
        class Srv6Statistics; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics> srv6_statistics;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::Srv6Information::Srv6Statistics


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject : public ydk::Entity
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
        class SfecdLe; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe> sfecd_le;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject::SfecdLe


class Fib::Nodes::Node::Protocols::Protocol::NhIds : public ydk::Entity
{
    public:
        NhIds();
        ~NhIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhId; //type: Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId> > nh_id;
        
}; // Fib::Nodes::Node::Protocols::Protocol::NhIds


class Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId : public ydk::Entity
{
    public:
        NhId();
        ~NhId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_id_value; //type: int32
        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf nh_interf_handle; //type: string
        ydk::YLeaf nh_address_xr; //type: string
        ydk::YLeaf nh_protocol; //type: uint8
        ydk::YLeaf nh_link_type; //type: uint8
        ydk::YLeaf nh_table_id; //type: uint32
        ydk::YLeaf nh_id; //type: uint32
        ydk::YLeaf nh_id_application; //type: uint8
        ydk::YLeaf version; //type: uint64
        ydk::YLeaf time_of_last_update_in_msec; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries : public ydk::Entity
{
    public:
        ExternalClientSummaries();
        ~ExternalClientSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalClientSummary; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary> > external_client_summary;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary : public ydk::Entity
{
    public:
        ExternalClientSummary();
        ~ExternalClientSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ecd_ver; //type: int32
        ydk::YLeaf id; //type: int32
        ydk::YLeaf ses_client_name; //type: string
        ydk::YLeaf ses_feci_fib_proto; //type: uint32
        ydk::YLeaf ses_num_regs; //type: uint32
        ydk::YLeaf ses_num_pending; //type: uint32
        ydk::YLeaf ses_client_pulsed_time; //type: uint64
        ydk::YLeaf ses_comp_id; //type: uint32
        ydk::YLeaf ses_ecd_version; //type: uint32
        class SesPlSum; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum> ses_pl_sum;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum : public ydk::Entity
{
    public:
        SesPlSum();
        ~SesPlSum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sep_num_ecd_pathlist; //type: uint32
        ydk::YLeaf sep_num_ecd_pl_unresolved; //type: uint32
        class SepNumEcdPlPerInterest; //type: Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest> > sep_num_ecd_pl_per_interest;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum


class Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest : public ydk::Entity
{
    public:
        SepNumEcdPlPerInterest();
        ~SepNumEcdPlPerInterest();

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

}; // Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SepNumEcdPlPerInterest


class Fib::Nodes::Node::Protocols::Protocol::Misc : public ydk::Entity
{
    public:
        Misc();
        ~Misc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_pfi_ifh_upd; //type: uint64
        ydk::YLeaf mi_pfi_ifh_del; //type: uint64
        ydk::YLeaf mi_pfi_ifh_stale; //type: uint64
        ydk::YLeaf mi_tot_plat_upd_time; //type: uint64
        ydk::YLeaf mi_tot_gtrie_time; //type: uint64
        ydk::YLeaf mi_tot_dnld_time; //type: uint64
        ydk::YLeaf mi_clock_time; //type: uint64
        ydk::YLeaf mi_cpu_time; //type: uint64
        ydk::YLeaf mi_shm_reset_ts; //type: uint64
        ydk::YLeaf mi_idb_recycle_count; //type: uint32
        ydk::YLeaf mi_idb_recycle_cleanup_count; //type: uint32
        ydk::YLeaf mi_num_mgmt_list; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_added; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_deleted; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_dropped; //type: uint32
        ydk::YLeaf mi_num_virtual_ll_addresses_cached; //type: uint32
        ydk::YLeaf mi_cpuless_init; //type: boolean
        ydk::YLeaf mi_cpuless_count; //type: uint32
        ydk::YLeaf mi_prefer_aib_routes_over_rib_oper; //type: boolean
        ydk::YLeaf mi_prefer_aib_routes_over_rib_cfg; //type: boolean
        ydk::YLeaf mi_xpl_ldi_enabled; //type: boolean
        class MiIssuState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState
        class MiPlatCapabilities; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities
        class MiIdbExtCleanupFailedCount; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount
        class MiLrpfStatsFail; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail
        class MiLrpfStatsAct; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct
        class MiLrpfNum; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum
        class MiIdbLsecEnabledNum; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum
        class MiNumLispEid; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid
        class MiNumLispValidEid; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid
        class MiCpulessNode; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode
        class MiProtoDbgStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat
        class MiIdbPurgeCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr
        class MiDel; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel
        class MiFrrStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState> mi_issu_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities> mi_plat_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount> > mi_idb_ext_cleanup_failed_count;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail> > mi_lrpf_stats_fail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct> > mi_lrpf_stats_act;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum> > mi_lrpf_num;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum> > mi_idb_lsec_enabled_num;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid> > mi_num_lisp_eid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid> > mi_num_lisp_valid_eid;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode> > mi_cpuless_node;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat> > mi_proto_dbg_stat;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr> > mi_idb_purge_cntr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel> > mi_del;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat> > mi_frr_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState : public ydk::Entity
{
    public:
        MiIssuState();
        ~MiIssuState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf imdr_support; //type: boolean
        ydk::YLeaf slc_support; //type: boolean
        ydk::YLeaf fis_issu_restart; //type: boolean
        ydk::YLeaf imdr_eoc_implicit; //type: boolean
        ydk::YLeaf slc_eoc_implicit; //type: boolean
        ydk::YLeaf eoc_received_imdr_time_stamp; //type: string
        ydk::YLeaf eoc_received_slc_time_stamp; //type: string
        ydk::YLeaf eod_received_im_time_stamp; //type: string
        ydk::YLeaf eod_sent_imdr_time_stamp; //type: string
        ydk::YLeaf eod_sent_slc_time_stamp; //type: string
        ydk::YLeaf fis_issu_error_ts; //type: uint64
        class FisProtoState; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState> > fis_proto_state;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState : public ydk::Entity
{
    public:
        FisProtoState();
        ~FisProtoState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf aib_eod_time_stamp; //type: string
        ydk::YLeaf rsi_eod_valid; //type: boolean
        ydk::YLeaf rsi_eod_time_stamp; //type: string
        ydk::YLeaf lsd_eod_valid; //type: boolean
        ydk::YLeaf lsd_eod_time_stamp; //type: string
        ydk::YLeaf lmrib_eod_valid; //type: boolean
        ydk::YLeaf lmrib_eod_time_stamp; //type: string
        ydk::YLeaf rib_info_valid; //type: boolean
        ydk::YLeaf bcdl_tables; //type: uint32
        ydk::YLeaf converged_tables; //type: uint32
        ydk::YLeaf rib_tables_converged_time_stamp; //type: string
        ydk::YLeaf protocol_eod_valid; //type: boolean
        ydk::YLeaf protocol_eod_time_stamp; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities : public ydk::Entity
{
    public:
        MiPlatCapabilities();
        ~MiPlatCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpc_num_l3_lbl_levels; //type: uint8
        ydk::YLeaf fpc_num_l3_lbl_paths; //type: uint8
        ydk::YLeaf fpc_num_l3_lbl_rec_paths; //type: uint8
        ydk::YLeaf fpc_num_l3_ucmp_paths; //type: uint8
        ydk::YLeaf fpc_num_fwding_stages; //type: uint8
        ydk::YLeaf fpc_local_label_split; //type: uint32
        ydk::YLeaf fpc_stats_support; //type: boolean
        ydk::YLeaf fpc_platf_ready_cb_wait; //type: boolean
        ydk::YLeaf fpc_num_paths_per_pbts_class; //type: uint8
        ydk::YLeaf fpc_platf_v4_upd_disable; //type: boolean
        ydk::YLeaf fpc_platf_v6_upd_disable; //type: boolean
        ydk::YLeaf fpc_lba_tuples_default; //type: uint32
        ydk::YLeaf fpc_mraps_support; //type: boolean
        ydk::YLeaf fpc_pbts_defclass_support; //type: boolean
        ydk::YLeaf fpc_loadinfo_filter_support; //type: boolean
        ydk::YLeaf fpc_nhid; //type: boolean
        ydk::YLeaf fpc_platf_temp_back_walk_reqd; //type: boolean
        ydk::YLeaf fpc_link_mpls_nhinfo_in_ipv6_thread_support; //type: boolean
        ydk::YLeaf fpc_exclude_deag_bkup; //type: boolean
        ydk::YLeaf fpc_dlb_support; //type: boolean
        ydk::YLeaf fpc_prefix_filter_support; //type: uint8
        ydk::YLeaf fpc_slowpath_ingress_inject_reqd; //type: boolean
        class FpcLispDecapOverV4; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4
        class FpcLispDecapOverV6; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6
        class FpcLispUcmp; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp
        class FpcResolveViaTable; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4> > fpc_lisp_decap_over_v4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6> > fpc_lisp_decap_over_v6;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp> > fpc_lisp_ucmp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable> > fpc_resolve_via_table;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4 : public ydk::Entity
{
    public:
        FpcLispDecapOverV4();
        ~FpcLispDecapOverV4();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6 : public ydk::Entity
{
    public:
        FpcLispDecapOverV6();
        ~FpcLispDecapOverV6();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp : public ydk::Entity
{
    public:
        FpcLispUcmp();
        ~FpcLispUcmp();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable : public ydk::Entity
{
    public:
        FpcResolveViaTable();
        ~FpcResolveViaTable();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount : public ydk::Entity
{
    public:
        MiIdbExtCleanupFailedCount();
        ~MiIdbExtCleanupFailedCount();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbExtCleanupFailedCount


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail : public ydk::Entity
{
    public:
        MiLrpfStatsFail();
        ~MiLrpfStatsFail();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsFail


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct : public ydk::Entity
{
    public:
        MiLrpfStatsAct();
        ~MiLrpfStatsAct();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfStatsAct


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum : public ydk::Entity
{
    public:
        MiLrpfNum();
        ~MiLrpfNum();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiLrpfNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum : public ydk::Entity
{
    public:
        MiIdbLsecEnabledNum();
        ~MiIdbLsecEnabledNum();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbLsecEnabledNum


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid : public ydk::Entity
{
    public:
        MiNumLispEid();
        ~MiNumLispEid();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid : public ydk::Entity
{
    public:
        MiNumLispValidEid();
        ~MiNumLispValidEid();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiNumLispValidEid


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode : public ydk::Entity
{
    public:
        MiCpulessNode();
        ~MiCpulessNode();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiCpulessNode


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat : public ydk::Entity
{
    public:
        MiProtoDbgStat();
        ~MiProtoDbgStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpd_gbltbl_entries; //type: uint64
        ydk::YLeaf fpd_gbltbl_rej_entries; //type: uint64
        ydk::YLeaf fpd_vrftbl_entries; //type: uint64
        ydk::YLeaf fpd_vrftbl_rej_entries; //type: uint64
        ydk::YLeaf fpd_num_tbls; //type: uint32
        ydk::YLeaf fpd_bcdl_msgs; //type: uint64
        ydk::YLeaf fpd_route_upd; //type: uint64
        ydk::YLeaf fpd_route_del; //type: uint64
        ydk::YLeaf fpd_route_rcv; //type: uint64
        ydk::YLeaf fpd_route_drops; //type: uint64
        ydk::YLeaf fpd_lbl_recycled; //type: uint64
        ydk::YLeaf fpd_version_mismatch_drops; //type: uint64
        ydk::YLeaf fpd_adj_upd; //type: uint64
        ydk::YLeaf fpd_adj_del; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx_nh_found; //type: uint64
        ydk::YLeaf fpd_adj_upd_tx_retry_created; //type: uint64
        ydk::YLeaf fpd_adj_tx_retry_nh_found; //type: uint64
        ydk::YLeaf fpd_adj_tx_retry_obj_reinit; //type: uint64
        ydk::YLeaf fpd_adj_drops; //type: uint64
        ydk::YLeaf fpd_adj_msg; //type: uint64
        ydk::YLeaf fpd_te_rcv; //type: uint64
        ydk::YLeaf fpd_te_version_mismatch_drops; //type: uint64
        ydk::YLeaf fpd_num_retry_touts; //type: uint64
        ydk::YLeaf fpd_ldi_num_fixedup; //type: uint64
        ydk::YLeaf fpd_ldi_num_correct_fixup; //type: uint64
        ydk::YLeaf fpd_pl_num_queued_fixedup; //type: uint64
        ydk::YLeaf fpd_pl_num_correct_fixup; //type: uint64
        ydk::YLeaf fpd_pl_retry_add_exist; //type: uint64
        ydk::YLeaf fpd_pl_inline_res_q; //type: uint64
        ydk::YLeaf fpd_pl_with_backup_create_count; //type: uint64
        ydk::YLeaf fpd_pl_with_backup_del_count; //type: uint64
        ydk::YLeaf fpd_pl_backup_enable_count; //type: uint64
        ydk::YLeaf fpd_pl_backup_disable_count; //type: uint64
        ydk::YLeaf fpd_pl_fast_nfn_count; //type: uint64
        ydk::YLeaf fpd_ldi_backup_activate_count; //type: uint64
        ydk::YLeaf fpd_ldi_last_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_max_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_min_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_total_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_ldi_avg_backup_activate_time; //type: uint64
        ydk::YLeaf fpd_recursion_constraint_count; //type: uint64
        ydk::YLeaf fpd_ldi_num_del_refcnt; //type: uint64
        ydk::YLeaf fpd_retryq_size; //type: uint32
        ydk::YLeaf fpd_num_allocs; //type: uint64
        ydk::YLeaf fpd_num_frees; //type: uint64
        ydk::YLeaf fpd_retryq_timeout; //type: uint32
        ydk::YLeaf fpd_retryq_sched_time; //type: uint32
        class FpdPlatfUpdStats; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats
        class FpdGtrieTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming
        class FpdGbltblSrcEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry
        class FpdVrftblSrcEntry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry
        class FpdNumRetry; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats> fpd_platf_upd_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming> fpd_gtrie_timing;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry> > fpd_gbltbl_src_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry> > fpd_vrftbl_src_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry> > fpd_num_retry;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats : public ydk::Entity
{
    public:
        FpdPlatfUpdStats();
        ~FpdPlatfUpdStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpus_num_success; //type: uint64
        ydk::YLeaf fpus_num_failure; //type: uint64
        ydk::YLeaf fpus_upd_total_time; //type: uint64
        class FpusObjStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat> > fpus_obj_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat : public ydk::Entity
{
    public:
        FpusObjStat();
        ~FpusObjStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fos_tot_updates; //type: uint64
        ydk::YLeaf fos_tot_upd_time; //type: uint64
        class FosObjActStat; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat> > fos_obj_act_stat;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat : public ydk::Entity
{
    public:
        FosObjActStat();
        ~FosObjActStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf foas_tot_updates; //type: uint64
        ydk::YLeaf foas_tot_upd_time; //type: uint64
        ydk::YLeaf foas_tot_updates_zero; //type: uint64
        ydk::YLeaf foas_num_success; //type: uint64
        ydk::YLeaf foas_num_failure; //type: uint64
        ydk::YLeaf foas_max_time; //type: uint64
        ydk::YLeaf foas_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming : public ydk::Entity
{
    public:
        FpdGtrieTiming();
        ~FpdGtrieTiming();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgt_num_success; //type: uint64
        ydk::YLeaf fgt_num_failure; //type: uint64
        ydk::YLeaf fgt_upd_total_time; //type: uint64
        class FgtGtrieFnTiming; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming> > fgt_gtrie_fn_timing;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming : public ydk::Entity
{
    public:
        FgtGtrieFnTiming();
        ~FgtGtrieFnTiming();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgft_fn; //type: string
        ydk::YLeaf fgft_tot_updates; //type: uint64
        ydk::YLeaf fgft_tot_updates_zero; //type: uint64
        ydk::YLeaf fgft_tot_upd_time; //type: uint64
        ydk::YLeaf fgft_max_time; //type: uint64
        ydk::YLeaf fgft_max_tstamp; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry : public ydk::Entity
{
    public:
        FpdGbltblSrcEntry();
        ~FpdGbltblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGbltblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry : public ydk::Entity
{
    public:
        FpdVrftblSrcEntry();
        ~FpdVrftblSrcEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdVrftblSrcEntry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry : public ydk::Entity
{
    public:
        FpdNumRetry();
        ~FpdNumRetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdNumRetry


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr : public ydk::Entity
{
    public:
        MiIdbPurgeCntr();
        ~MiIdbPurgeCntr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FppCntr; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr> > fpp_cntr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr : public ydk::Entity
{
    public:
        FppCntr();
        ~FppCntr();

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

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::FppCntr


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel : public ydk::Entity
{
    public:
        MiDel();
        ~MiDel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tableid; //type: uint32
        ydk::YLeaf prfx; //type: string
        ydk::YLeaf prfx_len; //type: uint16
        ydk::YLeaf prfx_proto; //type: uint16
        ydk::YLeaf msec_time; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel


class Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat : public ydk::Entity
{
    public:
        MiFrrStat();
        ~MiFrrStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_num_intf_frr; //type: uint32
        ydk::YLeaf mi_num_parent_intf_frr; //type: uint32
        ydk::YLeaf mi_num_pfi_intf_down; //type: uint32
        ydk::YLeaf mi_num_bfd_down; //type: uint32
        ydk::YLeaf mi_num_prot_frr_objects; //type: uint32
        ydk::YLeaf mi_num_bkup_frr_objects; //type: uint32
        ydk::YLeaf mi_num_tunid_allocs; //type: uint32
        ydk::YLeaf mi_num_tunid_alloc_failures; //type: uint32
        ydk::YLeaf mi_num_tunid_frees; //type: uint32
        ydk::YLeaf mi_num_tunid_free_failures; //type: uint32
        ydk::YLeaf mi_num_frr_reset_queue_adds; //type: uint32
        ydk::YLeaf mi_num_frr_reset_queue_remove; //type: uint32
        ydk::YLeaf mi_num_frr_reset; //type: uint32
        ydk::YLeaf mi_num_frr_proto_events; //type: uint32
        ydk::YLeaf mi_num_frr_logs; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel : public ydk::Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflicts; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts> conflicts;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts : public ydk::Entity
{
    public:
        Conflicts();
        ~Conflicts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Conflict; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict> > conflict;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict : public ydk::Entity
{
    public:
        Conflict();
        ~Conflict();

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
        ydk::YLeaf source; //type: FibRouteSource
        ydk::YLeaf ll_ctype; //type: FibllcEntry
        ydk::YLeaf pfx_tbl_id; //type: int32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_len; //type: int32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf source_xr; //type: uint32
        ydk::YLeaf update_ts; //type: uint64
        ydk::YLeaf retry_ts; //type: uint64
        ydk::YLeaf num_retries; //type: uint32
        class Ext; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext> ext;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext : public ydk::Entity
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

        ydk::YLeaf type; //type: FibMplsLlcEntryBag
        class Pfx; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx
        class Lsm; //type: Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx> pfx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm> lsm;
        
}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx : public ydk::Entity
{
    public:
        Pfx();
        ~Pfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf tbl_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx


class Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm : public ydk::Entity
{
    public:
        Lsm();
        ~Lsm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh; //type: string
        ydk::YLeaf mcast_id; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm

class MplsForwarding : public ydk::Entity
{
    public:
        MplsForwarding();
        ~MplsForwarding();

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

        class Nodes; //type: MplsForwarding::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes> nodes;
        
}; // MplsForwarding


class MplsForwarding::Nodes : public ydk::Entity
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

        class Node; //type: MplsForwarding::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node> > node;
        
}; // MplsForwarding::Nodes


class MplsForwarding::Nodes::Node : public ydk::Entity
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
        class ForwardingSummary; //type: MplsForwarding::Nodes::Node::ForwardingSummary
        class FrrLogs; //type: MplsForwarding::Nodes::Node::FrrLogs
        class LabelFib; //type: MplsForwarding::Nodes::Node::LabelFib
        class Tunnel; //type: MplsForwarding::Nodes::Node::Tunnel
        class FrrDatabase; //type: MplsForwarding::Nodes::Node::FrrDatabase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::ForwardingSummary> forwarding_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs> frr_logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib> label_fib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase> frr_database;
        
}; // MplsForwarding::Nodes::Node


class MplsForwarding::Nodes::Node::ForwardingSummary : public ydk::Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_imposition_entries; //type: uint32
        ydk::YLeaf reserved_label_entries; //type: uint32
        ydk::YLeaf label_switched_entries; //type: uint32
        ydk::YLeaf deleted_stale_entries; //type: uint32
        ydk::YLeaf te_head_entries; //type: uint32
        ydk::YLeaf te_frr_head_entries; //type: uint32
        ydk::YLeaf te_frr_interface_entries; //type: uint32
        ydk::YLeaf te_frr_next_hop_entries; //type: uint32
        ydk::YLeaf te_mid_points_entries; //type: uint32
        ydk::YLeaf te_frr_mid_points_entries; //type: uint32
        ydk::YLeaf te_internal_entries; //type: uint32
        ydk::YLeaf te_frr_internal_entries; //type: uint32
        ydk::YLeaf total_forwarding_updates; //type: uint32
        ydk::YLeaf total_forwarding_update_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_updates; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_added_or_modify_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_delete_messages; //type: uint32
        ydk::YLeaf total_p2mp_forwarding_drop_messages; //type: uint32
        ydk::YLeaf total_p2mp_iir_forwarding_drop_messages; //type: uint32
        ydk::YLeaf lowest_label; //type: uint32
        ydk::YLeaf highest_label; //type: uint32
        ydk::YLeaf ignore_protect; //type: uint32
        ydk::YLeaf mte_head_entries; //type: uint32
        ydk::YLeaf mte_ll_entries; //type: uint32
        ydk::YLeaf mte_midpoint_entries; //type: uint32
        ydk::YLeaf global_dropped_packets; //type: uint64
        ydk::YLeaf global_fragmented_packets; //type: uint64
        ydk::YLeaf global_failed_lookups; //type: uint64
        ydk::YLeaf lrpf_entries; //type: uint32

}; // MplsForwarding::Nodes::Node::ForwardingSummary


class MplsForwarding::Nodes::Node::FrrLogs : public ydk::Entity
{
    public:
        FrrLogs();
        ~FrrLogs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLog; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog> > frr_log;
        
}; // MplsForwarding::Nodes::Node::FrrLogs


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog : public ydk::Entity
{
    public:
        FrrLog();
        ~FrrLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: int32
        ydk::YLeaf protected_frr_interface_name; //type: string
        ydk::YLeaf next_hop; //type: uint32
        ydk::YLeaf number_of_rewrites_affected; //type: uint32
        ydk::YLeaf switching_time_nsecs; //type: uint32
        ydk::YLeaf main_processing; //type: uint32
        ydk::YLeaf fast_bundle_member_down_interface; //type: uint32
        ydk::YLeaf frr_event_node_id; //type: string
        class StartTime; //type: MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime> start_time;
        
}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog


class MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime


class MplsForwarding::Nodes::Node::LabelFib : public ydk::Entity
{
    public:
        LabelFib();
        ~LabelFib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetails; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails
        class Informations; //type: MplsForwarding::Nodes::Node::LabelFib::Informations
        class LabelSecurity; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails> forwarding_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations> informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity> label_security;
        
}; // MplsForwarding::Nodes::Node::LabelFib


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails : public ydk::Entity
{
    public:
        ForwardingDetails();
        ~ForwardingDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail> > forwarding_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail : public ydk::Entity
{
    public:
        ForwardingDetail();
        ~ForwardingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_value; //type: uint32
        ydk::YLeaf eos; //type: Mplseos
        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf outgoing_parent_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

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

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::Informations : public ydk::Entity
{
    public:
        Informations();
        ~Informations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information> > information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_value; //type: uint32
        ydk::YLeaf eos; //type: Mplseos
        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation> multicast_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation> > label_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LdiInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::MulticastInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf outgoing_parent_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

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

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::LabelFib::Informations::Information::LabelInformation::ExactRouteHashInfo


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity : public ydk::Entity
{
    public:
        LabelSecurity();
        ~LabelSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces
        class Summary; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary> summary;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces : public ydk::Entity
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

        class Interface; //type: MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface> > interface;
        
}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf rpf_enabled; //type: boolean
        ydk::YLeaf rpf_supported; //type: boolean
        ydk::YLeaf mld_enabled; //type: boolean
        ydk::YLeaf mld_supported; //type: boolean
        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64
        ydk::YLeaf rpfifh; //type: string

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Interfaces::Interface


class MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64

}; // MplsForwarding::Nodes::Node::LabelFib::LabelSecurity::Summary


class MplsForwarding::Nodes::Node::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnels; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels> forwarding_tunnels;
        
}; // MplsForwarding::Nodes::Node::Tunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels : public ydk::Entity
{
    public:
        ForwardingTunnels();
        ~ForwardingTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingTunnel; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel> > forwarding_tunnel;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel : public ydk::Entity
{
    public:
        ForwardingTunnel();
        ~ForwardingTunnel();

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
        class TunnelInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo
        class Fwdg; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo> tunnel_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg> fwdg;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo : public ydk::Entity
{
    public:
        TunnelInfo();
        ~TunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_interface_name; //type: string
        ydk::YLeaf tunnel_local_label; //type: uint32
        ydk::YLeaf tunnel_fwd_class; //type: uint8
        ydk::YLeaf tunnel_load_metric; //type: uint8
        ydk::YLeaf tunnel_is_srte; //type: boolean
        ydk::YLeaf tunnel_resolution_incomplete; //type: boolean
        ydk::YLeaf tunnel_resolution_inconsistent; //type: boolean
        ydk::YLeaf tunnel_is_programmed_to_drop; //type: boolean

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::TunnelInfo


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg : public ydk::Entity
{
    public:
        Fwdg();
        ~Fwdg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leaf_local_label; //type: uint32
        ydk::YLeaf eos_bit; //type: uint32
        ydk::YLeaf hardware_information; //type: string
        ydk::YLeaf leaf_referance_count; //type: uint32
        ydk::YLeaf leaf_flags; //type: uint32
        ydk::YLeaf path_list_referance_count; //type: uint32
        ydk::YLeaf path_list_flags; //type: uint32
        ydk::YLeaf ldi_referance_count; //type: uint32
        ydk::YLeaf ldi_flags; //type: uint32
        ydk::YLeaf ldi_type; //type: uint32
        ydk::YLeaf ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_type; //type: uint32
        ydk::YLeaf lw_ldi_pointer; //type: uint32
        ydk::YLeaf lw_ldi_refernace_count; //type: uint32
        ydk::YLeaf lw_shared_ldi_pointer; //type: uint32
        ydk::YLeaf lspa_flags; //type: uint32
        ydk::YLeaf afi_table_id; //type: uint32
        ydk::YLeaf multicast_label; //type: boolean
        ydk::YLeaf leaf_time_in_milli_seconds; //type: uint64
        class LdiInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation
        class MulticastInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation
        class LabelInformation; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation> multicast_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation> > label_information;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation : public ydk::Entity
{
    public:
        LdiInformation();
        ~LdiInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldi_hardware_information; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LdiInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation : public ydk::Entity
{
    public:
        MulticastInformation();
        ~MulticastInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_mol_base_flags; //type: uint32
        ydk::YLeaf multicast_mol_flags; //type: uint16
        ydk::YLeaf multicast_mol_referance_count; //type: uint16
        ydk::YLeaf multicast_tunnel_interface_handler; //type: string
        ydk::YLeaf multicast_tunnel_id; //type: uint32
        ydk::YLeaf multicast_tunnel_next_hop_information; //type: uint32
        ydk::YLeaf multicast_tunnel_lspvif; //type: uint32
        ydk::YLeaf multicast_mpls_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_protocol_output_paths; //type: uint16
        ydk::YLeaf multicast_mpls_local_output_paths; //type: uint16
        ydk::YLeaf multicast_rpf_id; //type: uint32
        ydk::YLeaf multicast_encap_id; //type: uint32
        ydk::YLeaf multicast_platform_data_length; //type: uint8
        ydk::YLeaf multicast_platform_data; //type: string

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::MulticastInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation : public ydk::Entity
{
    public:
        LabelInformation();
        ~LabelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label_information_type; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf mpls_adjacency_flags; //type: uint32
        ydk::YLeaf tunnel_id_present; //type: boolean
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_physical_interface; //type: string
        ydk::YLeaf outgoing_parent_interface; //type: string
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf label_information_path_index; //type: uint32
        ydk::YLeaf label_information_next_hop_type; //type: NextHop
        ydk::YLeaf label_information_next_hop_protocol; //type: Proto
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf outgoing_interface_string; //type: string
        ydk::YLeaf outgoing_label_string; //type: string
        ydk::YLeaf prefix_or_id; //type: string
        ydk::YLeaf label_information_next_hop_string; //type: string
        ydk::YLeaf label_information_route_version; //type: uint64
        ydk::YLeaf label_information_time_in_milli_seconds; //type: uint64
        class LabelInformationDetail; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail
        class ExactRouteHashInfo; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail> label_information_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail : public ydk::Entity
{
    public:
        LabelInformationDetail();
        ~LabelInformationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3_mtu; //type: uint32
        ydk::YLeaf total_encapsulation_size; //type: uint32
        ydk::YLeaf mac_size; //type: uint32
        ydk::YLeaf transmit_number_of_packets_switched; //type: uint64
        ydk::YLeaf transmit_number_of_bytes_switched; //type: uint64
        ydk::YLeaf status; //type: int32
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf next_hop_protocol; //type: Proto
        ydk::YLeaf next_hop_string; //type: string
        class LabelStack; //type: MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack> > label_stack;
        
}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack : public ydk::Entity
{
    public:
        LabelStack();
        ~LabelStack();

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

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::LabelInformationDetail::LabelStack


class MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo : public ydk::Entity
{
    public:
        ExactRouteHashInfo();
        ~ExactRouteHashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash_index_is_valid; //type: boolean
        ydk::YLeaf hash_index; //type: uint8

}; // MplsForwarding::Nodes::Node::Tunnel::ForwardingTunnels::ForwardingTunnel::Fwdg::LabelInformation::ExactRouteHashInfo


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_2_ */

