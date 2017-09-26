#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_2_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_ : public ydk::Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData> > ext_admin_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority> > maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth> > mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw> > max_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio> > unres_oduj_prio;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw> > max_lspbw;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw> > unres_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData> > mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

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

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::OspfSummary : public ydk::Entity
{
    public:
        OspfSummary();
        ~OspfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num_nbrs; //type: uint32
        ydk::YLeaf sa_num_nbrs_up; //type: uint32
        ydk::YLeaf sa_num_intf; //type: uint32
        ydk::YLeaf sa_num_intf_up; //type: uint32
        ydk::YLeaf sa_num_vintf_up; //type: uint32
        ydk::YLeaf sa_num_slintf_up; //type: uint32
        ydk::YLeaf sa_num_areas; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_rtr; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_asb; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_mospf; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_7ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_8_ignore; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_link; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_area; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_as; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::OspfSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation : public ydk::Entity
{
    public:
        ProcessInformation();
        ~ProcessInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas
        class ProtocolSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary
        class Redistributions; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions
        class ProcessAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas
        class ProcessSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas> process_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary> process_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas> protocol_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary> protocol_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions> redistributions;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas : public ydk::Entity
{
    public:
        ProcessAreas();
        ~ProcessAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea> > process_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea : public ydk::Entity
{
    public:
        ProcessArea();
        ~ProcessArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf address; //type: string
        ydk::YLeaf area_id_string; //type: string
        ydk::YLeaf backbone_area_active; //type: boolean
        ydk::YLeaf area_interface_count; //type: uint16
        ydk::YLeaf area_stub; //type: boolean
        ydk::YLeaf area_total_stub; //type: boolean
        ydk::YLeaf stub_default_cost; //type: uint16
        ydk::YLeaf area_nssa; //type: boolean
        ydk::YLeaf nssa_no_redistribution; //type: boolean
        ydk::YLeaf nssa_translate; //type: boolean
        ydk::YLeaf nssa_default; //type: boolean
        ydk::YLeaf te_enabled; //type: boolean
        ydk::YLeaf te_topology_version; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: uint32
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        ydk::YLeaf sr_strict_spfsids_available; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_active; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_event_type; //type: SrUloopEvent
        ydk::YLeaf sr_microloop_avoidance_near_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_far_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_pseudonode_id; //type: string
        ydk::YLeaf authentication_type; //type: Authentication
        ydk::YLeaf spf_count; //type: uint32
        ydk::YLeaf area_policy_in; //type: boolean
        ydk::YLeaf area_policy_in_name; //type: string
        ydk::YLeaf area_policy_out; //type: boolean
        ydk::YLeaf area_policy_out_name; //type: string
        ydk::YLeaf area_lsa_count; //type: uint32
        ydk::YLeaf area_lsa_checksum; //type: uint32
        ydk::YLeaf area_opaque_lsa_count; //type: uint32
        ydk::YLeaf area_opaque_lsa_checksum; //type: uint32
        ydk::YLeaf area_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf indication_lsa_count; //type: uint32
        ydk::YLeaf dna_lsa_count; //type: uint32
        ydk::YLeaf flood_list_length; //type: uint32
        ydk::YLeaf area_lfa_interface_count; //type: uint32
        ydk::YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        ydk::YLeaf area_lfa_revision; //type: uint32
        ydk::YLeaf area_adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf area_num_nbr_full; //type: uint16
        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange> > area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_prefix; //type: string
        ydk::YLeaf range_mask; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf advertise_flag; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary : public ydk::Entity
{
    public:
        ProcessSummary();
        ~ProcessSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_standby; //type: boolean
        ydk::YLeaf role; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_switchover_on_restart; //type: boolean
        ydk::YLeaf igp_intact_on; //type: boolean
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf tos_options; //type: uint8
        ydk::YLeaf opaque_capable; //type: boolean
        ydk::YLeaf area_border_router; //type: boolean
        ydk::YLeaf as_border_router; //type: boolean
        ydk::YLeaf vrf_lite_enabled; //type: boolean
        ydk::YLeaf maximum_metric_start; //type: boolean
        ydk::YLeaf maximum_metric_start_timer; //type: uint32
        ydk::YLeaf maximum_metric_set_reason; //type: MaxMetricSetReason
        ydk::YLeaf maximum_metric_abr_off_mode; //type: boolean
        ydk::YLeaf maximum_metric_abr_off_reasons; //type: OspfMaxMetricAbrOffReasons
        ydk::YLeaf maximum_metric_abr_off_buffer_time; //type: uint32
        ydk::YLeaf spf_start_time; //type: uint16
        ydk::YLeaf spf_hold_time; //type: uint16
        ydk::YLeaf spf_maximum_time; //type: uint16
        ydk::YLeaf spf_start_time_u32; //type: uint32
        ydk::YLeaf spf_hold_time_u32; //type: uint32
        ydk::YLeaf spf_maximum_time_u32; //type: uint32
        ydk::YLeaf spf_prefix_priority; //type: boolean
        ydk::YLeaf spf_prefix_priority_route_policy; //type: string
        ydk::YLeaf lsa_start_time; //type: int32
        ydk::YLeaf lsa_hold_time; //type: uint32
        ydk::YLeaf lsa_maximum_time; //type: uint32
        ydk::YLeaf minimum_lsa_interval; //type: uint16
        ydk::YLeaf minimum_lsa_interval_u32; //type: uint32
        ydk::YLeaf lsa_refresh_interval; //type: uint32
        ydk::YLeaf minimum_lsa_arrival_interval; //type: uint16
        ydk::YLeaf minimum_lsa_arrival_interval_u32; //type: uint32
        ydk::YLeaf if_flood_pacing_interval; //type: uint16
        ydk::YLeaf if_retrans_pacing_interval; //type: uint16
        ydk::YLeaf adj_stag_init_num_nbr; //type: uint16
        ydk::YLeaf adj_stag_max_num_nbr; //type: uint16
        ydk::YLeaf adj_stagger_enabled; //type: boolean
        ydk::YLeaf adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf number_nbrs_full; //type: uint16
        ydk::YLeaf as_lsa_count; //type: uint32
        ydk::YLeaf as_lsa_checksum; //type: uint32
        ydk::YLeaf opaque_lsa_count; //type: uint32
        ydk::YLeaf opaque_lsa_checksum; //type: uint32
        ydk::YLeaf as_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf as_dna_lsa_count; //type: uint32
        ydk::YLeaf area_count; //type: uint16
        ydk::YLeaf normal_area_count; //type: uint16
        ydk::YLeaf stub_area_count; //type: uint16
        ydk::YLeaf nssa_area_count; //type: uint16
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf as_lsa_flood_list_length; //type: uint32
        ydk::YLeaf nsf_enabled; //type: boolean
        ydk::YLeaf last_nsf_time; //type: uint32
        ydk::YLeaf nsf_time; //type: uint32
        ydk::YLeaf redistribution_limit; //type: uint32
        ydk::YLeaf redistribution_threshold; //type: uint32
        ydk::YLeaf redistribution_limit_warn; //type: boolean
        ydk::YLeaf graceful_shutdown_retention_time; //type: uint32
        ydk::YLeaf graceful_shutdown_state; //type: GsState
        ydk::YLeaf table_prefix_limit_reached; //type: boolean
        ydk::YLeaf non_self_lsa_count; //type: uint32
        ydk::YLeaf max_lsa_enabled; //type: boolean
        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_treshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_limit; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_ignore_timer; //type: uint32
        ydk::YLeaf max_lsa_reset_timer; //type: uint32
        ydk::YLeaf context_name; //type: string
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf ucmp; //type: boolean
        ydk::YLeaf ucmp_prefix_list; //type: string
        ydk::YLeaf ucmp_variance; //type: int32
        ydk::YLeaf ucmp_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_type; //type: UloopAvoidance
        ydk::YLeaf microloop_avoidance_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_active; //type: boolean
        ydk::YLeaf microloop_avoidance_delay_expiry; //type: uint32
        ydk::YLeaf lsd_connected; //type: boolean
        ydk::YLeaf lsd_registered; //type: boolean
        ydk::YLeaf lsd_bound; //type: boolean
        ydk::YLeaf lsd_connection_revision; //type: uint32
        ydk::YLeaf srgb_configured; //type: boolean
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf srgb_status; //type: OspfSrgbStatus
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        class DomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId
        class MaximumMetric; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId> domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric> > maximum_metric;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric : public ydk::Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_metric_reason; //type: uint8
        ydk::YLeaf max_metric_enabled; //type: boolean
        ydk::YLeaf unset_maximum_metric; //type: boolean
        ydk::YLeaf saved_unset_maximum_metric; //type: boolean
        ydk::YLeaf maximum_metric_start_time; //type: uint32
        ydk::YLeaf saved_startup_time; //type: uint32
        ydk::YLeaf maximum_metric_include_stubs; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_external_lsa; //type: boolean
        ydk::YLeaf maximum_metric_external_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_originated_for; //type: uint32
        ydk::YLeaf maximum_metric_unset_reason; //type: MaxMetricUnsetReason
        class MaximumMetricTimeUnset; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset> maximum_metric_time_unset;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset : public ydk::Entity
{
    public:
        MaximumMetricTimeUnset();
        ~MaximumMetricTimeUnset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas : public ydk::Entity
{
    public:
        ProtocolAreas();
        ~ProtocolAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea> > protocol_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea : public ydk::Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf address; //type: string
        ydk::YLeaf protcol_area; //type: string
        ydk::YLeaf protocol_mpls; //type: boolean
        ydk::YLeaf protocol_area_dist_list_in; //type: string
        class ProtocolInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface : public ydk::Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_interface_name; //type: string
        ydk::YLeaf protocol_authentication_type; //type: Authentication
        ydk::YLeaf protocol_interface_dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary : public ydk::Entity
{
    public:
        ProtocolSummary();
        ~ProtocolSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_router_id; //type: string
        ydk::YLeaf protocol_distance; //type: uint32
        ydk::YLeaf administrative_distance_inter_area; //type: uint32
        ydk::YLeaf administrative_distance_external; //type: uint32
        ydk::YLeaf protocol_nsf; //type: boolean
        ydk::YLeaf dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

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
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::RouteInformation : public ydk::Entity
{
    public:
        RouteInformation();
        ~RouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes
        class MulticastIntactRouteTable; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable
        class MulticastIntactBackupRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes
        class SummaryInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation
        class ConnectedRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes
        class LocalRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes
        class RouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas
        class RouteTable; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable
        class ExternalRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes> backup_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes> connected_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes> external_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes> local_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes> multicast_intact_backup_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable> multicast_intact_route_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas> route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable> route_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation> summary_information;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes : public ydk::Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute> > backup_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes : public ydk::Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectedRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute> > connected_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute : public ydk::Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes : public ydk::Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute> > external_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute : public ydk::Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        class RouteInformation_; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_
        class ProtocolName; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName
        class RouteExtendedCommunity; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName> protocol_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_> route_information;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName : public ydk::Entity
{
    public:
        ProtocolName();
        ~ProtocolName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public ydk::Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_community_domain_id_value; //type: string
        ydk::YLeaf extended_communityl_domain_id_type; //type: uint16
        ydk::YLeaf extended_community_area_id; //type: uint32
        ydk::YLeaf extended_community_router_id; //type: string
        ydk::YLeaf extended_community_route_type; //type: uint8
        ydk::YLeaf extended_community_options; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_ : public ydk::Entity
{
    public:
        RouteInformation_();
        ~RouteInformation_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes : public ydk::Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute> > local_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute : public ydk::Entity
{
    public:
        LocalRoute();
        ~LocalRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes : public ydk::Entity
{
    public:
        MulticastIntactBackupRoutes();
        ~MulticastIntactBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactBackupRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute> > multicast_intact_backup_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute : public ydk::Entity
{
    public:
        MulticastIntactBackupRoute();
        ~MulticastIntactBackupRoute();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable : public ydk::Entity
{
    public:
        MulticastIntactRouteTable();
        ~MulticastIntactRouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route> > route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas : public ydk::Entity
{
    public:
        RouteAreas();
        ~RouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea> > route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea : public ydk::Entity
{
    public:
        RouteArea();
        ~RouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        class MulticastIntactBackupRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas
        class ConnectedRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas
        class BackupRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas
        class RouteAreaInformations; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations
        class MulticastIntactRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas
        class SummaryAreaInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation
        class LocalRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas> backup_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas> connected_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas> local_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas> multicast_intact_backup_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas> multicast_intact_route_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations> route_area_informations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation> summary_area_information;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas : public ydk::Entity
{
    public:
        BackupRouteAreas();
        ~BackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea> > backup_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea : public ydk::Entity
{
    public:
        BackupRouteArea();
        ~BackupRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas : public ydk::Entity
{
    public:
        ConnectedRouteAreas();
        ~ConnectedRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConnectedRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea> > connected_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea : public ydk::Entity
{
    public:
        ConnectedRouteArea();
        ~ConnectedRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas : public ydk::Entity
{
    public:
        LocalRouteAreas();
        ~LocalRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea> > local_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea : public ydk::Entity
{
    public:
        LocalRouteArea();
        ~LocalRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas : public ydk::Entity
{
    public:
        MulticastIntactBackupRouteAreas();
        ~MulticastIntactBackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactBackupRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea> > multicast_intact_backup_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea : public ydk::Entity
{
    public:
        MulticastIntactBackupRouteArea();
        ~MulticastIntactBackupRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint16
        ydk::YLeaf lsa_type; //type: uint8
        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas : public ydk::Entity
{
    public:
        MulticastIntactRouteAreas();
        ~MulticastIntactRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea> > multicast_intact_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea : public ydk::Entity
{
    public:
        MulticastIntactRouteArea();
        ~MulticastIntactRouteArea();

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
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_2_ */

