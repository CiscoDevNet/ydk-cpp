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


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoLocalDetailHardwareEgresses::NhInfoLocalDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareEgresses();
        ~NhInfoRemoteDetailHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress> > nh_info_remote_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareEgress();
        ~NhInfoRemoteDetailHardwareEgress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoRemoteDetailHardwareEgresses::NhInfoRemoteDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDetailHardwareEgress();
        ~NhInfoSpecialDetailHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialNullDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress
        class NhInfoSpecialPuntDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress
        class NhInfoSpecialDiscardDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress
        class NhInfoSpecialDropDetailHardwareEgress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress> nh_info_special_discard_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress> nh_info_special_drop_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress> nh_info_special_null_detail_hardware_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress> nh_info_special_punt_detail_hardware_egress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDiscardDetailHardwareEgress();
        ~NhInfoSpecialDiscardDetailHardwareEgress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDiscardDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialDropDetailHardwareEgress();
        ~NhInfoSpecialDropDetailHardwareEgress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialDropDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialNullDetailHardwareEgress();
        ~NhInfoSpecialNullDetailHardwareEgress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialNullDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress : public ydk::Entity
{
    public:
        NhInfoSpecialPuntDetailHardwareEgress();
        ~NhInfoSpecialPuntDetailHardwareEgress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareEgress::NhInfoSpecialDetailHardwareEgress::NhInfoSpecialPuntDetailHardwareEgress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoDetailHardwareIngress();
        ~NhInfoDetailHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteDetailHardwareIngresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses
        class NhInfoLocalDetailHardwareIngresses; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses
        class NhInfoSpecialDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses> nh_info_local_detail_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses> nh_info_remote_detail_hardware_ingresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress> nh_info_special_detail_hardware_ingress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareIngresses();
        ~NhInfoLocalDetailHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoLocalDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress> > nh_info_local_detail_hardware_ingress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoLocalDetailHardwareIngress();
        ~NhInfoLocalDetailHardwareIngress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoLocalDetailHardwareIngresses::NhInfoLocalDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareIngresses();
        ~NhInfoRemoteDetailHardwareIngresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoRemoteDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress> > nh_info_remote_detail_hardware_ingress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoRemoteDetailHardwareIngress();
        ~NhInfoRemoteDetailHardwareIngress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoRemoteDetailHardwareIngresses::NhInfoRemoteDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoSpecialDetailHardwareIngress();
        ~NhInfoSpecialDetailHardwareIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhInfoSpecialPuntDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress
        class NhInfoSpecialNullDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress
        class NhInfoSpecialDropDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress
        class NhInfoSpecialDiscardDetailHardwareIngress; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress> nh_info_special_discard_detail_hardware_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress> nh_info_special_drop_detail_hardware_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress> nh_info_special_null_detail_hardware_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress> nh_info_special_punt_detail_hardware_ingress;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress


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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
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
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDiscardDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
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
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialDropDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


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


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoSpecialNullDetailHardwareIngress();
        ~NhInfoSpecialNullDetailHardwareIngress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
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
        ydk::YLeaf nh_info_replicated_interface; //type: string

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialNullDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress : public ydk::Entity
{
    public:
        NhInfoSpecialPuntDetailHardwareIngress();
        ~NhInfoSpecialPuntDetailHardwareIngress();

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
        class SiPwhe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::SiPwhe
        class NhInfoExtension; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension> nh_info_extension;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::SiPwhe> si_pwhe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension : public ydk::Entity
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

        class NhInfoExtensionDetail; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail> > nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail : public ydk::Entity
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

        class NhInfoExtensionBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase
        class NhInfoExtensionDetail_; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase> nh_info_extension_base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_> nh_info_extension_detail;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase : public ydk::Entity
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
        class ObjectBase; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase> object_base;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionBase::ObjectBase


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_ : public ydk::Entity
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
        class SnecdNhr; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr> snecd_nhr;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::NhInfoExtension::NhInfoExtensionDetail::NhInfoExtensionDetail_::SnecdNhr


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::SiPwhe : public ydk::Entity
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

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::NhInfoDetailHardwareIngress::NhInfoSpecialDetailHardwareIngress::NhInfoSpecialPuntDetailHardwareIngress::SiPwhe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf ss_tbl_id; //type: uint32
        ydk::YLeaf ss_tbl_id_ptr; //type: uint32
        ydk::YLeaf ss_vrf_id; //type: uint32
        ydk::YLeaf ss_vr_id; //type: uint32
        ydk::YLeaf load_balancing; //type: SsLbaState
        ydk::YLeaf forwarding_elements; //type: uint32
        ydk::YLeaf routes; //type: uint32
        ydk::YLeaf prefix_in_place_modifications; //type: uint32
        ydk::YLeaf stale_prefix_deletes; //type: uint32
        ydk::YLeaf load_sharing_elements; //type: uint32
        ydk::YLeaf load_sharing_references; //type: uint64
        ydk::YLeaf total_load_share_element_bytes; //type: uint32
        ydk::YLeaf leaves_used_bytes; //type: uint32
        ydk::YLeaf reresolve_entries; //type: uint32
        ydk::YLeaf old_unresolve_entries; //type: uint32
        ydk::YLeaf new_unresolve_entries; //type: uint32
        ydk::YLeaf unresolve_entries; //type: uint32
        ydk::YLeaf cef_route_drops; //type: uint32
        ydk::YLeaf cef_version_mismatch_route_drops; //type: uint64
        ydk::YLeaf delete_cache_num_entries; //type: uint32
        ydk::YLeaf existing_leaves_revisions; //type: uint32
        ydk::YLeaf fib_default_prefix; //type: uint32
        ydk::YLeaf fib_default_prefix_mask_length; //type: uint32
        ydk::YLeaf next_hops; //type: uint32
        ydk::YLeaf incomplete_next_hops; //type: uint32
        ydk::YLeaf resolution_timer; //type: uint32
        ydk::YLeaf slow_process_timer; //type: uint32
        ydk::YLeaf max_resolution_timer; //type: uint32
        ydk::YLeaf imposition_prefixes; //type: uint32
        ydk::YLeaf extended_prefixes; //type: uint32
        ydk::YLeaf cefl_bl_recycled_routes; //type: uint32
        ydk::YLeaf ldi_backwalks; //type: uint32
        ydk::YLeaf ss_prot_route_count; //type: uint32
        ydk::YLeaf lisp_eid_prefixes; //type: uint32
        ydk::YLeaf lisp_eid_valid_prefixes; //type: uint32
        ydk::YLeaf lisp_rloc_objects; //type: uint32
        ydk::YLeaf ss_vxlan_ltep_ifh; //type: string
        ydk::YLeaf ss_drop_pl_count; //type: uint32
        class ExclusiveLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement
        class SharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement
        class CrossSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement
        class LabelSharedLoadSharingElement; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement
        class PrefixMasklenDistribution; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement> cross_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement> exclusive_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement> label_shared_load_sharing_element;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution> prefix_masklen_distribution;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement> shared_load_sharing_element;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement : public ydk::Entity
{
    public:
        CrossSharedLoadSharingElement();
        ~CrossSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement : public ydk::Entity
{
    public:
        ExclusiveLoadSharingElement();
        ~ExclusiveLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement : public ydk::Entity
{
    public:
        LabelSharedLoadSharingElement();
        ~LabelSharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution : public ydk::Entity
{
    public:
        PrefixMasklenDistribution();
        ~PrefixMasklenDistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnicastPrefixe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::UnicastPrefixe
        class BroadcastPrefixe; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::BroadcastPrefixe
        class MulticastPrefix; //type: Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::MulticastPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::BroadcastPrefixe> > broadcast_prefixe;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::MulticastPrefix> > multicast_prefix;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::UnicastPrefixe> > unicast_prefixe;
        
}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::BroadcastPrefixe : public ydk::Entity
{
    public:
        BroadcastPrefixe();
        ~BroadcastPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::BroadcastPrefixe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::MulticastPrefix : public ydk::Entity
{
    public:
        MulticastPrefix();
        ~MulticastPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::MulticastPrefix


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::UnicastPrefixe : public ydk::Entity
{
    public:
        UnicastPrefixe();
        ~UnicastPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask_length; //type: uint8
        ydk::YLeaf number_of_prefixes; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::PrefixMasklenDistribution::UnicastPrefixe


class Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement : public ydk::Entity
{
    public:
        SharedLoadSharingElement();
        ~SharedLoadSharingElement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_load_sharing_element_bytes; //type: uint32
        ydk::YLeaf total_load_sharing_element_references; //type: uint64
        ydk::YLeaf total_path_list_elements; //type: uint32
        ydk::YLeaf recursive_path_list_elements; //type: uint32
        ydk::YLeaf platform_shared_path_list_elements; //type: uint32
        ydk::YLeaf retry_path_list_elements; //type: uint32
        ydk::YLeaf total_load_info_elements; //type: uint32
        ydk::YLeaf recursive_load_info_elements; //type: uint32
        ydk::YLeaf platform_shared_load_info_elements; //type: uint32
        ydk::YLeaf xpl_load_info_elements; //type: uint32

}; // Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement

class FibStatistics : public ydk::Entity
{
    public:
        FibStatistics();
        ~FibStatistics();

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

        class Nodes; //type: FibStatistics::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes> nodes;
        
}; // FibStatistics


class FibStatistics::Nodes : public ydk::Entity
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

        class Node; //type: FibStatistics::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node> > node;
        
}; // FibStatistics::Nodes


class FibStatistics::Nodes::Node : public ydk::Entity
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
        class Drops; //type: FibStatistics::Nodes::Node::Drops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::FibStatistics::Nodes::Node::Drops> drops;
        
}; // FibStatistics::Nodes::Node


class FibStatistics::Nodes::Node::Drops : public ydk::Entity
{
    public:
        Drops();
        ~Drops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_route_packets; //type: uint64
        ydk::YLeaf punt_unreachable_packets; //type: uint64
        ydk::YLeaf df_unreachable_packets; //type: uint64
        ydk::YLeaf encapsulation_failure_packets; //type: uint64
        ydk::YLeaf incomplete_adjacency_packets; //type: uint64
        ydk::YLeaf unresolved_prefix_packets; //type: uint64
        ydk::YLeaf unsupported_feature_packets; //type: uint64
        ydk::YLeaf discard_packets; //type: uint64
        ydk::YLeaf checksum_error_packets; //type: uint64
        ydk::YLeaf fragmenation_consumed_packets; //type: uint64
        ydk::YLeaf fragmenation_failure_packets; //type: uint64
        ydk::YLeaf null_packets; //type: uint64
        ydk::YLeaf rpf_check_failure_packets; //type: uint64
        ydk::YLeaf acl_in_rpf_packets; //type: uint64
        ydk::YLeaf rp_destination_drop_packets; //type: uint64
        ydk::YLeaf total_number_of_drop_packets; //type: uint64
        ydk::YLeaf mpls_disabled_interface; //type: uint64
        ydk::YLeaf gre_lookup_failed_drop; //type: uint64
        ydk::YLeaf gre_error_drop; //type: uint64
        ydk::YLeaf lisp_punt_drops; //type: uint64
        ydk::YLeaf lisp_encap_error_drops; //type: uint64
        ydk::YLeaf lisp_decap_error_drops; //type: uint64
        ydk::YLeaf multi_label_drops; //type: uint64

}; // FibStatistics::Nodes::Node::Drops

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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase> frr_database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrLogs> frr_logs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib> label_fib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::Tunnel> tunnel;
        
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


class MplsForwarding::Nodes::Node::FrrDatabase : public ydk::Entity
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

        class FrrdbSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary
        class FrrdbProtectedInterfaceTableSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries
        class FrrdbTunnelMidpointSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary
        class FrrdbTunnelMidpoints; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints
        class FrrdbTunnelHeads; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads
        class FrrdbTunnelHeadSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary
        class FrrdbBackupInterfaceSummaries; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries> frrdb_backup_interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries> frrdb_protected_interface_table_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary> frrdb_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary> frrdb_tunnel_head_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads> frrdb_tunnel_heads;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary> frrdb_tunnel_midpoint_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints> frrdb_tunnel_midpoints;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummaries();
        ~FrrdbBackupInterfaceSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbBackupInterfaceSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary> > frrdb_backup_interface_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary : public ydk::Entity
{
    public:
        FrrdbBackupInterfaceSummary();
        ~FrrdbBackupInterfaceSummary();

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
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbBackupInterfaceSummaries::FrrdbBackupInterfaceSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummaries();
        ~FrrdbProtectedInterfaceTableSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbProtectedInterfaceTableSummary; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary> > frrdb_protected_interface_table_summary;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary : public ydk::Entity
{
    public:
        FrrdbProtectedInterfaceTableSummary();
        ~FrrdbProtectedInterfaceTableSummary();

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
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbProtectedInterfaceTableSummaries::FrrdbProtectedInterfaceTableSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary : public ydk::Entity
{
    public:
        FrrdbSummary();
        ~FrrdbSummary();

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
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary : public ydk::Entity
{
    public:
        FrrdbTunnelHeadSummary();
        ~FrrdbTunnelHeadSummary();

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
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeadSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads : public ydk::Entity
{
    public:
        FrrdbTunnelHeads();
        ~FrrdbTunnelHeads();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelHead; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead> > frrdb_tunnel_head;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead : public ydk::Entity
{
    public:
        FrrdbTunnelHead();
        ~FrrdbTunnelHead();

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
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId : public ydk::Entity
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

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head : public ydk::Entity
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
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
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

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
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

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
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
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
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

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelHeads::FrrdbTunnelHead::FrrDb::MulticastLeg::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary : public ydk::Entity
{
    public:
        FrrdbTunnelMidpointSummary();
        ~FrrdbTunnelMidpointSummary();

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
        ydk::YLeaf other; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpointSummary


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoints();
        ~FrrdbTunnelMidpoints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrdbTunnelMidpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint> > frrdb_tunnel_midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint : public ydk::Entity
{
    public:
        FrrdbTunnelMidpoint();
        ~FrrdbTunnelMidpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_lable_string; //type: string
        ydk::YLeaf frr_lable_string; //type: string
        class FrrDb; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb> frr_db;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb : public ydk::Entity
{
    public:
        FrrDb();
        ~FrrDb();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        ydk::YLeaf is_multicast_tunnel; //type: boolean
        ydk::YLeaf multicast_tunnel_legs; //type: uint32
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId
        class MulticastLeg; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId> frr_entry_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg> > multicast_leg;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId : public ydk::Entity
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

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head : public ydk::Entity
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
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint : public ydk::Entity
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

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::FrrEntryId::Midpoint


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg : public ydk::Entity
{
    public:
        MulticastLeg();
        ~MulticastLeg();

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
        ydk::YLeaf input_label; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf frr_interface_name; //type: string
        ydk::YLeaf frr_label; //type: uint32
        ydk::YLeaf entry_frr_state; //type: MgmtFibMplsFrrState
        ydk::YLeaf frr_next_hop_ipv4_address; //type: string
        ydk::YLeaf is_mldp_lsp; //type: boolean
        class FrrEntryId; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId> frr_entry_id;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId : public ydk::Entity
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

        ydk::YLeaf role; //type: MgmtFibMplsLspRole
        class Head; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head
        class Midpoint; //type: MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head> head;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint> midpoint;
        
}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head : public ydk::Entity
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
        ydk::YLeaf destination_prefix_length; //type: uint32

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Head


class MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint : public ydk::Entity
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

}; // MplsForwarding::Nodes::Node::FrrDatabase::FrrdbTunnelMidpoints::FrrdbTunnelMidpoint::FrrDb::MulticastLeg::FrrEntryId::Midpoint


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation> > label_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation> ldi_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation> multicast_information;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::ExactRouteHashInfo> exact_route_hash_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fib_common_oper::MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation::LabelInformationDetail> label_information_detail;
        
}; // MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation


}
}

#endif /* _CISCO_IOS_XR_FIB_COMMON_OPER_2_ */

