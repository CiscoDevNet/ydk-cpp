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


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoSpecialDropDetailHardwareIngress();
        ~NhInfoSpecialDropDetailHardwareIngress();

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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoSpecialDiscardDetailHardwareIngress();
        ~NhInfoSpecialDiscardDetailHardwareIngress();

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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        ydk::YList nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief> nh_info_special_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs> nh_info_remote_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs> nh_info_local_briefs;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief> nh_info_special_null_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief> nh_info_special_punt_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief> nh_info_special_drop_brief;
        
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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
        ydk::YLeaf si_gre_dest_addr; //type: string
        ydk::YLeaf si_nhid; //type: uint32
        ydk::YLeaf si_upd_ts; //type: uint64
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::SiPwhe> si_pwhe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension> nh_info_extension;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief


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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDiscardBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialNullBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialPuntBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoSpecialBrief::NhInfoSpecialDropBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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

        ydk::YList nh_info_remote_brief;
        
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
        ydk::YLeaf nh_proto; //type: FibProtocol
        ydk::YLeaf nh_pfx_length; //type: uint32
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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoRemoteBriefs::NhInfoRemoteBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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

        ydk::YList nh_info_local_brief;
        
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
        ydk::YLeaf nh_proto; //type: FibProtocol
        ydk::YLeaf nh_pfx_length; //type: uint32
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
        ydk::YLeaf si_gre_ti; //type: uint64
        ydk::YLeaf si_gre_ti_flags; //type: uint32
        ydk::YLeaf si_gre_ti_refcnt; //type: uint32
        ydk::YLeaf si_gre_tos_propagate; //type: boolean
        ydk::YLeaf si_hardware; //type: string
        ydk::YLeaf si_nhinfo_ptr; //type: uint32
        ydk::YLeaf si_fnb_idb_ptr; //type: uint32
        ydk::YLeaf si_anc_ifh; //type: uint32
        ydk::YLeaf si_gre_ti_resolving_leafp; //type: uint64
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

        ydk::YList nh_info_extension_detail;
        
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
        class SnecdTep; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep> snecd_tep;
        
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
        ydk::YLeaf nh_info_replicated_encap_id; //type: uint64
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep : public ydk::Entity
{
    public:
        SnecdTep();
        ~SnecdTep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_info_tep_type; //type: uint8
        ydk::YLeaf is_tep_single_pass; //type: boolean

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoBrief::NhInfoLocalBriefs::NhInfoLocalBrief::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdTep


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

        ydk::YList exact_route;
        
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
        ydk::YLeaf ipv6_flow_label; //type: uint32
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
        ydk::YLeaf l2_subscriber_flags; //type: uint32
        ydk::YLeaf l2_subscriber_ip_protocol; //type: uint32
        ydk::YLeaf l2tpv3_cookie_length_bits; //type: uint32
        ydk::YLeaf route_for_external_reach_linecard_flag; //type: boolean
        ydk::YLeaf route_source_not_preferred; //type: boolean
        ydk::YLeaf route_is_sr_flag; //type: boolean
        ydk::YLeaf route_is_srv6_transit; //type: boolean
        ydk::YLeaf route_is_srv6_end; //type: boolean
        ydk::YLeaf srv6_operation_type; //type: string
        class DetailFibEntryInformation; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation
        class FibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath
        class ExtensionObject; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::ExtensionObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::DetailFibEntryInformation> detail_fib_entry_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath> fib_entry_path;
        ydk::YList extension_object;
        
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

        ydk::YList sanity_flag;
        ydk::YList interface_handle;
        ydk::YList weights_of_path;
        ydk::YList adjacency_address;
        ydk::YList pbts_class_is_fallback_mapped;
        ydk::YList pbts_fallback_to_drop;
        ydk::YList tunnel_is_forward_class;
        
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

        ydk::YList fib_sh_tbl_path;
        
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
        class NextFibEntryPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::NextFibEntryPath
        class MoreDetailAboutPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath
        class MplsInformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath
        class Srv6InformationForPath; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::Srv6InformationForPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::NextFibEntryPath> next_fib_entry_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath> more_detail_about_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MplsInformationForPath> mpls_information_for_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::Srv6InformationForPath> srv6_information_for_path;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::NextFibEntryPath : public ydk::Entity
{
    public:
        NextFibEntryPath();
        ~NextFibEntryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::NextFibEntryPath


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
        class NextNextHop; //type: Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::NextNextHop

        ydk::YList spd_ipencap;
        ydk::YList next_next_hop;
        
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

        ydk::YList ip_encap_hdr;
        
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


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::NextNextHop : public ydk::Entity
{
    public:
        NextNextHop();
        ~NextNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_next_hop_index; //type: uint8
        ydk::YLeaf next_next_hop_prefix; //type: string
        ydk::YLeaf next_next_hop_interface; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::MoreDetailAboutPath::NextNextHop


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

        ydk::YList recursive_lbl_stack;
        ydk::YList igp_label_stack_array;
        
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

        ydk::YList lstack;
        
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


class Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::Srv6InformationForPath : public ydk::Entity
{
    public:
        Srv6InformationForPath();
        ~Srv6InformationForPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_encapsulation_behavior; //type: string
        ydk::YLeaf srv6_sid_list; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::ExactRoutes::ExactRoute::FibEntryPath::FibShTblPath::Srv6InformationForPath


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


class Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal : public ydk::Entity
{
    public:
        ProtocolGlobal();
        ~ProtocolGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRouting; //type: Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting> segment_routing;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal


class Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srv6; //type: Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6> srv6;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting


class Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6 : public ydk::Entity
{
    public:
        Srv6();
        ~Srv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srv6_enabled; //type: boolean
        ydk::YLeaf encap_source_address; //type: string
        ydk::YLeaf locator_count; //type: uint32
        class EncapHopLimit; //type: Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::EncapHopLimit
        class Locator; //type: Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::Locator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::EncapHopLimit> encap_hop_limit;
        ydk::YList locator;
        
}; // Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6


class Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::EncapHopLimit : public ydk::Entity
{
    public:
        EncapHopLimit();
        ~EncapHopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_default; //type: boolean
        ydk::YLeaf do_propagate; //type: boolean
        ydk::YLeaf value_; //type: uint8

}; // Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::EncapHopLimit


class Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

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
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf locator; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::ProtocolGlobal::SegmentRouting::Srv6::Locator


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

        ydk::YList nh_id;
        
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

        ydk::YLeaf nh_id; //type: uint32
        ydk::YLeaf nh_interface_name; //type: string
        ydk::YLeaf nh_address; //type: string
        ydk::YLeaf nh_interface_name_xr; //type: string
        ydk::YLeaf nh_address_xr; //type: string
        ydk::YLeaf nh_protocol; //type: uint8
        ydk::YLeaf nh_link_type; //type: uint8
        ydk::YLeaf nh_table_id; //type: uint32
        ydk::YLeaf nh_id_xr; //type: uint32
        ydk::YLeaf nh_id_application; //type: uint8
        ydk::YLeaf version; //type: uint64
        ydk::YLeaf time_of_last_update_in_msec; //type: uint64
        ydk::YLeaf encap_id; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId


class Fib::Nodes::Node::Protocols::Protocol::FrrNhinfoPendings : public ydk::Entity
{
    public:
        FrrNhinfoPendings();
        ~FrrNhinfoPendings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrNhinfoPending; //type: Fib::Nodes::Node::Protocols::Protocol::FrrNhinfoPendings::FrrNhinfoPending

        ydk::YList frr_nhinfo_pending;
        
}; // Fib::Nodes::Node::Protocols::Protocol::FrrNhinfoPendings


class Fib::Nodes::Node::Protocols::Protocol::FrrNhinfoPendings::FrrNhinfoPending : public ydk::Entity
{
    public:
        FrrNhinfoPending();
        ~FrrNhinfoPending();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_index; //type: uint32
        ydk::YLeaf frr_type; //type: Fibfrr
        ydk::YLeaf link_type; //type: FibLink
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf main_interface_name; //type: string
        ydk::YLeaf next_hop_prefix; //type: string
        ydk::YLeaf replicated_nh_type; //type: FibnhInfoRepl
        ydk::YLeaf si_frrtype; //type: uint32
        ydk::YLeaf si_refcount; //type: uint32
        ydk::YLeaf si_flags; //type: uint32
        ydk::YLeaf si_ifh; //type: uint32
        ydk::YLeaf si_main_ifh; //type: uint32
        ydk::YLeaf si_linktype; //type: uint32
        ydk::YLeaf si_nh_pfx_proto; //type: uint32
        ydk::YLeaf si_nh_pfx; //type: string
        ydk::YLeaf si_nh_pfx_len; //type: uint32
        ydk::YLeaf si_tunid; //type: uint32
        ydk::YLeaf si_frr_ptr; //type: uint32
        ydk::YLeaf si_prot_frr_ptr; //type: uint32
        ydk::YLeaf si_parent_nh_ptr; //type: uint32
        ydk::YLeaf si_repl_parent_type; //type: uint8
        ydk::YLeaf si_upd_ts; //type: uint64

}; // Fib::Nodes::Node::Protocols::Protocol::FrrNhinfoPendings::FrrNhinfoPending


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

        ydk::YList external_client_summary;
        
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

        ydk::YLeaf ecd_ver; //type: uint32
        ydk::YLeaf id; //type: uint32
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

        ydk::YList sep_num_ecd_pl_per_interest;
        
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
        ydk::YLeaf mi_proactive_arp_nd_enabled; //type: boolean
        ydk::YLeaf mi_xpl_ldi_enabled; //type: boolean
        ydk::YLeaf mi_frr_follow_bgp_pic; //type: boolean
        ydk::YLeaf mi_encap_sharing_disable; //type: boolean
        ydk::YLeaf mi_lba_hash_recover; //type: boolean
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
        ydk::YList mi_idb_ext_cleanup_failed_count;
        ydk::YList mi_lrpf_stats_fail;
        ydk::YList mi_lrpf_stats_act;
        ydk::YList mi_lrpf_num;
        ydk::YList mi_idb_lsec_enabled_num;
        ydk::YList mi_num_lisp_eid;
        ydk::YList mi_num_lisp_valid_eid;
        ydk::YList mi_cpuless_node;
        ydk::YList mi_proto_dbg_stat;
        ydk::YList mi_idb_purge_cntr;
        ydk::YList mi_del;
        ydk::YList mi_frr_stat;
        
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

        ydk::YList fis_proto_state;
        
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
        ydk::YLeaf fpc_cofo_support; //type: boolean
        ydk::YLeaf fpc_srv6_support; //type: boolean
        ydk::YLeaf fpc_v4v6_ldi_collapse_support; //type: boolean
        class FpcLispDecapOverV4; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4
        class FpcLispDecapOverV6; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6
        class FpcLispUcmp; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp
        class FpcResolveViaTable; //type: Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable

        ydk::YList fpc_lisp_decap_over_v4;
        ydk::YList fpc_lisp_decap_over_v6;
        ydk::YList fpc_lisp_ucmp;
        ydk::YList fpc_resolve_via_table;
        
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
        ydk::YList fpd_gbltbl_src_entry;
        ydk::YList fpd_vrftbl_src_entry;
        ydk::YList fpd_num_retry;
        
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

        ydk::YList fpus_obj_stat;
        
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

        ydk::YList fos_obj_act_stat;
        
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

        ydk::YList fgt_gtrie_fn_timing;
        
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

        ydk::YList fpp_cntr;
        
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


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_2_ */

