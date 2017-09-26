#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_35_
#define _CISCO_IOS_XR_MPLS_TE_OPER_35_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities : public ydk::Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxLspBandwidth; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
{
    public:
        MaxLspBandwidth();
        ~MaxLspBandwidth();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability : public ydk::Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: TeOduLevel
        ydk::YLeaf stage1; //type: TeOduLevel
        ydk::YLeaf stage2; //type: TeOduLevel
        ydk::YLeaf stage3; //type: TeOduLevel
        ydk::YLeaf stage4; //type: TeOduLevel
        ydk::YLeaf terminable; //type: boolean
        ydk::YLeaf switchable; //type: boolean
        ydk::YLeaf tsg1p25; //type: boolean
        ydk::YLeaf tsg2p5; //type: boolean
        ydk::YLeaf vcat_capable; //type: boolean
        ydk::YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth : public ydk::Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationMode
        class TopologyLinkBandwidthPrestandard; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32
        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyLinkPrestandardBandwidthAllocated; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated
        class TopologyLinkPrestandardBandwidthAvailableGlobal; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal
        class TopologyLinkPrestandardBandwidthAvailableSubpool; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated> > topology_link_prestandard_bandwidth_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal> > topology_link_prestandard_bandwidth_available_global;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool> > topology_link_prestandard_bandwidth_available_subpool;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAllocated();
        ~TopologyLinkPrestandardBandwidthAllocated();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableGlobal();
        ~TopologyLinkPrestandardBandwidthAvailableGlobal();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableSubpool();
        ~TopologyLinkPrestandardBandwidthAvailableSubpool();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topo_link_std_bw_physical; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_max; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool0; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool1; //type: uint32
        class TopoLinkStdBwDetail; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public ydk::Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopoLinkStdBwAllocated; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated
        class TopoLinkStdBwAvailable; //type: MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated> > topo_link_std_bw_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable> > topo_link_std_bw_available;
        
}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated : public ydk::Entity
{
    public:
        TopoLinkStdBwAllocated();
        ~TopoLinkStdBwAllocated();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable : public ydk::Entity
{
    public:
        TopoLinkStdBwAvailable();
        ~TopoLinkStdBwAvailable();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
{
    public:
        TopologyLinkExtendedAffinityBit();
        ~TopologyLinkExtendedAffinityBit();

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

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit


class MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg : public ydk::Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id; //type: uint32
        ydk::YLeaf segment_id_local_absolute_value; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_size; //type: uint32

}; // MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg


class MplsTe::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: MplsTe::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode> > topology_node;
        
}; // MplsTe::TopologyNodes


class MplsTe::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_id; //type: string
        ydk::YLeaf area; //type: int32
        ydk::YLeaf topology_node_type; //type: MplsTeNode
        ydk::YLeaf igp_node_id; //type: string
        ydk::YLeaf topology_node_te_router_id; //type: string
        ydk::YLeaf topology_node_overloaded; //type: boolean
        class TopologyNodeSidAndSrbg; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg
        class TopologyNodeLink; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink> > topology_node_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg> topology_node_sid_and_srbg;
        
}; // MplsTe::TopologyNodes::TopologyNode


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink : public ydk::Entity
{
    public:
        TopologyNodeLink();
        ~TopologyNodeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_type; //type: IgpSubnet
        ydk::YLeaf topology_link_interface_address; //type: string
        ydk::YLeaf topology_link_interface_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_address; //type: string
        ydk::YLeaf topology_link_neighbor_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_system_id; //type: string
        ydk::YLeaf topology_link_neighbor_node_id; //type: uint32
        ydk::YLeaf topology_link_neighbor_generation; //type: uint32
        ydk::YLeaf topology_link_fragment_id; //type: uint32
        ydk::YLeaf topology_link_te_metric; //type: uint32
        ydk::YLeaf topology_link_igp_metric; //type: uint32
        ydk::YLeaf topology_link_uni_delay; //type: uint32
        ydk::YLeaf topology_link_affinity_bits; //type: uint32
        ydk::YLeaf topology_link_switching_capability; //type: uint8
        ydk::YLeaf topology_link_encoding; //type: uint8
        ydk::YLeaf topology_link_bandwidth_model; //type: IgpteLibBwModel
        class TopologyLinkBandwidth; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth
        class OduLinkCapabilities; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities
        class TopologyLinkExtendedAffinityBit; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit
        class SharedRiskLinkGroup; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup
        class AdjacencySid; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth> topology_link_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit> > topology_link_extended_affinity_bit;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_sid; //type: uint32
        ydk::YLeaf link_type; //type: IgpSubnet
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf nbr_node_igpid; //type: string
        ydk::YLeaf nbr_node_te_router_id; //type: string
        ydk::YLeaf flag_f; //type: boolean
        ydk::YLeaf flag_b; //type: boolean
        ydk::YLeaf flag_v; //type: boolean
        ydk::YLeaf flag_l; //type: boolean
        ydk::YLeaf flag_s; //type: boolean

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities : public ydk::Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxLspBandwidth; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
{
    public:
        MaxLspBandwidth();
        ~MaxLspBandwidth();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability : public ydk::Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: TeOduLevel
        ydk::YLeaf stage1; //type: TeOduLevel
        ydk::YLeaf stage2; //type: TeOduLevel
        ydk::YLeaf stage3; //type: TeOduLevel
        ydk::YLeaf stage4; //type: TeOduLevel
        ydk::YLeaf terminable; //type: boolean
        ydk::YLeaf switchable; //type: boolean
        ydk::YLeaf tsg1p25; //type: boolean
        ydk::YLeaf tsg2p5; //type: boolean
        ydk::YLeaf vcat_capable; //type: boolean
        ydk::YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth : public ydk::Entity
{
    public:
        TopologyLinkBandwidth();
        ~TopologyLinkBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_migration_mode; //type: RrrDsteMigrationMode
        class TopologyLinkBandwidthPrestandard; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard
        class TopologyLinkBandwidthStandard; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard> topology_link_bandwidth_prestandard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard> topology_link_bandwidth_standard;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthPrestandard();
        ~TopologyLinkBandwidthPrestandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_link_prestandard_bandwidth_physical; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_global; //type: uint32
        ydk::YLeaf topology_link_prestandard_bandwidth_reservation_subpool; //type: uint32
        class TopologyLinkPrestandardBandwidthDetail; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail> topology_link_prestandard_bandwidth_detail;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthDetail();
        ~TopologyLinkPrestandardBandwidthDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopologyLinkPrestandardBandwidthAllocated; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated
        class TopologyLinkPrestandardBandwidthAvailableGlobal; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal
        class TopologyLinkPrestandardBandwidthAvailableSubpool; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated> > topology_link_prestandard_bandwidth_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal> > topology_link_prestandard_bandwidth_available_global;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool> > topology_link_prestandard_bandwidth_available_subpool;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAllocated();
        ~TopologyLinkPrestandardBandwidthAllocated();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableGlobal();
        ~TopologyLinkPrestandardBandwidthAvailableGlobal();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool : public ydk::Entity
{
    public:
        TopologyLinkPrestandardBandwidthAvailableSubpool();
        ~TopologyLinkPrestandardBandwidthAvailableSubpool();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard : public ydk::Entity
{
    public:
        TopologyLinkBandwidthStandard();
        ~TopologyLinkBandwidthStandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topo_link_std_bw_physical; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_max; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool0; //type: uint32
        ydk::YLeaf topo_link_std_bw_res_pool1; //type: uint32
        class TopoLinkStdBwDetail; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail> topo_link_std_bw_detail;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail : public ydk::Entity
{
    public:
        TopoLinkStdBwDetail();
        ~TopoLinkStdBwDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TopoLinkStdBwAllocated; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated
        class TopoLinkStdBwAvailable; //type: MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated> > topo_link_std_bw_allocated;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable> > topo_link_std_bw_available;
        
}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated : public ydk::Entity
{
    public:
        TopoLinkStdBwAllocated();
        ~TopoLinkStdBwAllocated();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable : public ydk::Entity
{
    public:
        TopoLinkStdBwAvailable();
        ~TopoLinkStdBwAvailable();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit : public ydk::Entity
{
    public:
        TopologyLinkExtendedAffinityBit();
        ~TopologyLinkExtendedAffinityBit();

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

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit


class MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg : public ydk::Entity
{
    public:
        TopologyNodeSidAndSrbg();
        ~TopologyNodeSidAndSrbg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id; //type: uint32
        ydk::YLeaf segment_id_local_absolute_value; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_size; //type: uint32

}; // MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg


class MplsTe::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class TunnelFlexLsps; //type: MplsTe::Tunnels::TunnelFlexLsps
        class TunnelAutoBandwidths; //type: MplsTe::Tunnels::TunnelAutoBandwidths
        class Summary; //type: MplsTe::Tunnels::Summary
        class TunnelPathProtections; //type: MplsTe::Tunnels::TunnelPathProtections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths> tunnel_auto_bandwidths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps> tunnel_flex_lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections> tunnel_path_protections;
        
}; // MplsTe::Tunnels


class MplsTe::Tunnels::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pcalc_tie_breaker_type; //type: TePathSelectionTiebreaker
        ydk::YLeaf pcalc_tiebreaker; //type: uint32
        ydk::YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifier
        ydk::YLeaf te_process_status; //type: MplsTeTunnelsProcessStatus
        ydk::YLeaf is_rsvp_process_enabled; //type: boolean
        ydk::YLeaf is_forwarding_enabled; //type: boolean
        ydk::YLeaf activated_heads; //type: uint32
        ydk::YLeaf deactivated_heads; //type: uint32
        ydk::YLeaf recovered_heads; //type: uint32
        ydk::YLeaf is_periodic_reoptimization_on; //type: boolean
        ydk::YLeaf reoptimization_period; //type: uint32
        ydk::YLeaf next_reoptimization_timer; //type: uint32
        ydk::YLeaf auto_bandwidth_tunnels; //type: uint32
        ydk::YLeaf auto_bandwidth_collection_period; //type: uint32
        ydk::YLeaf is_promotion_on; //type: boolean
        ydk::YLeaf promotion_period; //type: uint32
        ydk::YLeaf next_promotion_timer; //type: uint32
        ydk::YLeaf tunnel_check_period; //type: uint32
        ydk::YLeaf next_check_time; //type: uint32
        ydk::YLeaf tunnel_verify_period; //type: uint32
        ydk::YLeaf next_verify_timer; //type: uint32
        ydk::YLeaf frr_head_tunnels; //type: uint32
        ydk::YLeaf protected_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_head_tunnels; //type: uint32
        ydk::YLeaf frr_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_tunnels; //type: uint32
        ydk::YLeaf node_protected_tunnels; //type: uint32
        ydk::YLeaf bw_protected_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_head_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_head_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_tunnels; //type: uint32
        ydk::YLeaf link_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf node_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf bw_protected_p2p_tunnels; //type: uint32
        ydk::YLeaf backup_tunnels; //type: uint32
        ydk::YLeaf backups_assigned; //type: uint32
        ydk::YLeaf frr_protected_interfaces; //type: uint32
        ydk::YLeaf rerouted_interfaces; //type: uint32
        ydk::YLeaf p2p_head_tunnels; //type: uint32
        ydk::YLeaf up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf dynamic_up_p2p_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2p_head_tunnels; //type: uint32
        ydk::YLeaf p2p_head_destinations; //type: uint32
        ydk::YLeaf p2p_head_destinations_up; //type: uint32
        ydk::YLeaf bw_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2p_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf recovering_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_head_s2_ls; //type: uint32
        ydk::YLeaf p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2p_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2p_tail_s2_ls; //type: uint32
        ydk::YLeaf p2p_tail_tunnels; //type: uint32
        ydk::YLeaf path_protect_configured_tunnels; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_up; //type: uint16
        ydk::YLeaf path_protect_configured_tunnels_standby_up; //type: uint16
        ydk::YLeaf link_diverse_paths; //type: uint16
        ydk::YLeaf node_diverse_paths; //type: uint16
        ydk::YLeaf link_and_node_diverse_paths; //type: uint16
        ydk::YLeaf user_defined_paths; //type: uint16
        ydk::YLeaf p2mp_head_tunnels; //type: uint32
        ydk::YLeaf up_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf frr_config_p2mp_head_tunnels; //type: uint32
        ydk::YLeaf p2mp_head_destinations; //type: uint32
        ydk::YLeaf up_p2mp_head_destinations; //type: uint32
        ydk::YLeaf bw_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf link_protected_p2mp_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_head_s2_ls; //type: uint32
        ydk::YLeaf p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf proceeding_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf frr_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf protected_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf rerouted_p2mp_mid_point_s2_ls; //type: uint32
        ydk::YLeaf p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf up_p2mp_tail_s2_ls; //type: uint32
        ydk::YLeaf bidir_head_tunnels; //type: uint32
        ydk::YLeaf bidir_head_tunnels_up; //type: uint32
        ydk::YLeaf bidir_head_tunnels_associated; //type: uint32
        ydk::YLeaf bidir_head_tunnels_corouted; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_head_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_mid_tunnels; //type: uint32
        ydk::YLeaf bidir_mid_tunnels_up; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_mid_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_up; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_proceeding; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_associated; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_standby; //type: uint32
        ydk::YLeaf bidir_tail_ls_ps_corouted; //type: uint32
        class AutobackupSummary; //type: MplsTe::Tunnels::Summary::AutobackupSummary
        class AutoMeshSummary; //type: MplsTe::Tunnels::Summary::AutoMeshSummary
        class AutoMeshOneHopSummary; //type: MplsTe::Tunnels::Summary::AutoMeshOneHopSummary
        class GmplsUniSummary; //type: MplsTe::Tunnels::Summary::GmplsUniSummary
        class GmplsNniSummary; //type: MplsTe::Tunnels::Summary::GmplsNniSummary
        class CurrentTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary
        class LastTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary
        class AutoTunServerSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;
        
}; // MplsTe::Tunnels::Summary


class MplsTe::Tunnels::Summary::AutoMeshOneHopSummary : public ydk::Entity
{
    public:
        AutoMeshOneHopSummary();
        ~AutoMeshOneHopSummary();

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

        ydk::YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_groups; //type: uint32
        ydk::YLeaf auto_mesh_one_hop_destinations; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoMeshOneHopSummary


class MplsTe::Tunnels::Summary::AutoMeshSummary : public ydk::Entity
{
    public:
        AutoMeshSummary();
        ~AutoMeshSummary();

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

        ydk::YLeaf auto_mesh_tunnels; //type: uint32
        ydk::YLeaf up_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf down_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf frr_auto_mesh_tunnels; //type: uint32
        ydk::YLeaf auto_mesh_groups; //type: uint32
        ydk::YLeaf auto_mesh_destinations; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoMeshSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary : public ydk::Entity
{
    public:
        AutoTunServerSummary();
        ~AutoTunServerSummary();

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

        class TotalAutoP2MpTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels
        class TotalAutoP2PTunnels; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels
        class ClientsSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary> > clients_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels> total_auto_p2mp_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels> total_auto_p2p_tunnels;
        
}; // MplsTe::Tunnels::Summary::AutoTunServerSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary : public ydk::Entity
{
    public:
        ClientsSummary();
        ~ClientsSummary();

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

        ydk::YLeaf protocol_type; //type: TeServTunClient
        ydk::YLeaf client_instance_name; //type: string
        ydk::YLeaf client_id; //type: uint32
        class P2MpInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo
        class P2PInfo; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo> p2mp_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo> p2p_info;
        
}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo : public ydk::Entity
{
    public:
        P2MpInfo();
        ~P2MpInfo();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2MpInfo


class MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::ClientsSummary::P2PInfo


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels : public ydk::Entity
{
    public:
        TotalAutoP2MpTunnels();
        ~TotalAutoP2MpTunnels();

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

        ydk::YLeaf auto_p2mp_tunnel; //type: uint32
        ydk::YLeaf auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf down_auto_p2mp_destinations; //type: uint32
        ydk::YLeaf up_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2mp_tunnels; //type: uint32
        ydk::YLeaf frr_auto_p2mp_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2MpTunnels


class MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels : public ydk::Entity
{
    public:
        TotalAutoP2PTunnels();
        ~TotalAutoP2PTunnels();

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

        ydk::YLeaf auto_p2p_tunnel; //type: uint32
        ydk::YLeaf up_auto_p2p_tunnels; //type: uint32
        ydk::YLeaf down_auto_p2p_tunnels; //type: uint32

}; // MplsTe::Tunnels::Summary::AutoTunServerSummary::TotalAutoP2PTunnels


class MplsTe::Tunnels::Summary::AutobackupSummary : public ydk::Entity
{
    public:
        AutobackupSummary();
        ~AutobackupSummary();

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

        ydk::YLeaf autobackups; //type: uint32
        ydk::YLeaf up_autobackups; //type: uint32
        ydk::YLeaf down_autobackups; //type: uint32
        ydk::YLeaf unused_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackups; //type: uint32
        ydk::YLeaf next_next_hop_autobackups; //type: uint32
        ydk::YLeaf srlg_strict_autobackups; //type: uint32
        ydk::YLeaf srlg_preferred_autobackups; //type: uint32
        ydk::YLeaf srlg_weighted_autobackups; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        ydk::YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        ydk::YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32

}; // MplsTe::Tunnels::Summary::AutobackupSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary : public ydk::Entity
{
    public:
        CurrentTunnelConvergenceSummary();
        ~CurrentTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        
}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::Summary::GmplsNniSummary : public ydk::Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf mids_up; //type: uint32
        ydk::YLeaf mids_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTe::Tunnels::Summary::GmplsNniSummary


class MplsTe::Tunnels::Summary::GmplsUniSummary : public ydk::Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

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

        ydk::YLeaf heads_up; //type: uint32
        ydk::YLeaf heads_down; //type: uint32
        ydk::YLeaf tails_up; //type: uint32
        ydk::YLeaf tails_down; //type: uint32

}; // MplsTe::Tunnels::Summary::GmplsUniSummary


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary : public ydk::Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

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

        ydk::YLeaf tunnel_frr_active_count; //type: uint32
        ydk::YLeaf tunnel_frr_total_count; //type: uint32
        ydk::YLeaf tunnel_converged_count; //type: uint32
        ydk::YLeaf tunnel_total_convergence_complete_time; //type: uint64
        class TablePathOut; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;
        
}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public ydk::Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public ydk::Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public ydk::Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public ydk::Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public ydk::Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public ydk::Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

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


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::TunnelAutoBandwidths : public ydk::Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

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

        class TunnelAutoBandwidth; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth> > tunnel_auto_bandwidth;
        
}; // MplsTe::Tunnels::TunnelAutoBandwidths


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public ydk::Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_name_xr; //type: string
        ydk::YLeaf signaled_name; //type: string
        ydk::YLeaf tunnel_lsp_id; //type: uint32
        ydk::YLeaf bandwidth_applications; //type: uint32
        ydk::YLeaf last_bandwidth_applied; //type: uint32
        ydk::YLeaf tunnel_requested_bandwidth; //type: uint32
        ydk::YLeaf signalled_bandwidth; //type: uint32
        ydk::YLeaf highest_bandwidth; //type: uint32
        ydk::YLeaf last_sample_bandwidth; //type: uint32
        ydk::YLeaf samples_collected; //type: uint32
        ydk::YLeaf time_left_application; //type: uint32
        class AutoBandwidthStatus; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;
        
}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public ydk::Entity
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

}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTe::Tunnels::TunnelFlexLsps : public ydk::Entity
{
    public:
        TunnelFlexLsps();
        ~TunnelFlexLsps();

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

        class TunnelFlexLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp> > tunnel_flex_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp : public ydk::Entity
{
    public:
        TunnelFlexLsp();
        ~TunnelFlexLsp();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf tun_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class WorkingLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp
        class ProtectLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp> working_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop> > lsp_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

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

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

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

        ydk::YLeaf is_operational; //type: boolean
        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_mode; //type: MplsTeLspMode
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop> > lsp_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp> reverse_lsp;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf entry_exists; //type: boolean
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bfd_created; //type: boolean
        ydk::YLeaf bfd_up; //type: boolean
        ydk::YLeaf oam_created; //type: boolean
        ydk::YLeaf bfd_next_hop; //type: string
        ydk::YLeaf bfd_tun_ifh; //type: string
        ydk::YLeaf bfd_out_ifh; //type: string
        ydk::YLeaf bfd_int_label; //type: uint32
        ydk::YLeaf bfd_egress_label; //type: uint32
        ydk::YLeaf fault_ldi_lockout; //type: boolean
        ydk::YLeaf fault_ldi; //type: boolean
        ydk::YLeaf fault_lkr; //type: boolean
        ydk::YLeaf fault_ais; //type: boolean
        ydk::YLeaf fault_time; //type: uint32
        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public ydk::Entity
{
    public:
        FlexFec();
        ~FlexFec();

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

        ydk::YLeaf s2l_fec_subgroup_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf s2l_fec_extended_tunnel_id; //type: string
        ydk::YLeaf s2l_fec_source; //type: string
        ydk::YLeaf s2l_fec_dest; //type: string
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf s2l_fec_subgroup_originator; //type: string
        ydk::YLeaf s2l_fec_ctype; //type: MplsLibC
        ydk::YLeaf s2l_fec_vrf; //type: string

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

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

        ydk::YLeaf reverse_lsp_present; //type: boolean
        ydk::YLeaf reverse_lsp_connected; //type: boolean
        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

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

        ydk::YLeaf s2l_association_type; //type: uint16
        ydk::YLeaf s2l_association_tie_role; //type: TeAssociationTieRole
        ydk::YLeaf s2l_association_id; //type: uint16
        ydk::YLeaf s2l_association_source; //type: string
        ydk::YLeaf s2l_global_source; //type: uint32
        class S2LExtendedId; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId> > s2l_extended_id;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId : public ydk::Entity
{
    public:
        S2LExtendedId();
        ~S2LExtendedId();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association::S2LExtendedId


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

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

        ydk::YLeaf s2l_secondary; //type: boolean
        ydk::YLeaf s2l_protecting; //type: boolean
        ydk::YLeaf s2l_notification; //type: boolean
        ydk::YLeaf s2l_operational; //type: boolean
        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf link_unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf any; //type: boolean
        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean
        ydk::YLeaf lsp_unprotected; //type: boolean

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public ydk::Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

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

        ydk::YLeaf fec_lsp_id; //type: uint16
        ydk::YLeaf fec_tunnel_id; //type: uint16
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_vrf; //type: string
        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;
        
}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf fec_ctype; //type: MplsLibC
        ydk::YLeaf p2p_lsp_destination; //type: string
        ydk::YLeaf fec_destination_p2mp_id; //type: uint32

}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelPathProtections : public ydk::Entity
{
    public:
        TunnelPathProtections();
        ~TunnelPathProtections();

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

        class TunnelPathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection> > tunnel_path_protection;
        
}; // MplsTe::Tunnels::TunnelPathProtections


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection : public ydk::Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

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

        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        class PathProtection; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection
        class CurrentLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp
        class StandbyLsp; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp> current_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp> standby_lsp;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp : public ydk::Entity
{
    public:
        CurrentLsp();
        ~CurrentLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::CurrentLsp::SrlspOutgoingInfo


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class Switchover; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover> switchover;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf path_protection_switchover_event_index; //type: uint32
        ydk::YLeaf path_protection_tunnel_id; //type: uint16
        ydk::YLeaf from_lsp_id; //type: uint16
        ydk::YLeaf to_lsp_id; //type: uint16
        ydk::YLeaf date_of_error_detection; //type: uint32
        ydk::YLeaf date_of_error_detection_millisec; //type: uint32
        ydk::YLeaf switchover_duration_millisec; //type: uint32
        ydk::YLeaf path_protection_switchover_reason; //type: TeP2MpS2LDeletionSubcause

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::PathProtection::Switchover


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp : public ydk::Entity
{
    public:
        StandbyLsp();
        ~StandbyLsp();

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

        ydk::YLeaf lsp_uptime; //type: uint32
        ydk::YLeaf path_protection_lsp_id; //type: uint32
        ydk::YLeaf lsp_local_label; //type: uint32
        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32
        ydk::YLeaf lsp_state; //type: MplsTeTunnelState
        class SrlspOutgoingInfo; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo
        class LspHop; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop> > lsp_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo> > srlsp_outgoing_info;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop : public ydk::Entity
{
    public:
        LspHop();
        ~LspHop();

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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo : public ydk::Entity
{
    public:
        SrlspOutgoingInfo();
        ~SrlspOutgoingInfo();

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

        ydk::YLeaf lsp_output_interface; //type: string
        ydk::YLeaf lsp_output_label; //type: uint32

}; // MplsTe::Tunnels::TunnelPathProtections::TunnelPathProtection::StandbyLsp::SrlspOutgoingInfo


class MplsTe::WrapProtection : public ydk::Entity
{
    public:
        WrapProtection();
        ~WrapProtection();

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

        class ProtectedLsps; //type: MplsTe::WrapProtection::ProtectedLsps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection::ProtectedLsps> protected_lsps;
        
}; // MplsTe::WrapProtection


class MplsTe::WrapProtection::ProtectedLsps : public ydk::Entity
{
    public:
        ProtectedLsps();
        ~ProtectedLsps();

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

        class ProtectedLsp; //type: MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp> > protected_lsp;
        
}; // MplsTe::WrapProtection::ProtectedLsps


class MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp : public ydk::Entity
{
    public:
        ProtectedLsp();
        ~ProtectedLsp();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf lsp_id; //type: int32
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf sub_group_originator; //type: string
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf session_type; //type: Ctype
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf tunnel_id_xr; //type: uint16
        ydk::YLeaf extended_tunnel_id_xr; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_instance; //type: uint32
        ydk::YLeaf lsp_wrap_protection_enable; //type: boolean
        ydk::YLeaf lsp_wrap_protection_label; //type: uint32
        ydk::YLeaf reverse_egress_interface; //type: string
        ydk::YLeaf reverse_lsp_label; //type: uint32
        ydk::YLeaf lsp_wrap_protection_state; //type: MplsTeLspWrapState
        ydk::YLeaf sub_group_original_id; //type: string
        ydk::YLeaf sub_group_id_xr; //type: uint16
        ydk::YLeaf p2mp_id_xr; //type: uint32

}; // MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp

class MplsTeStandby : public ydk::Entity
{
    public:
        MplsTeStandby();
        ~MplsTeStandby();

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

        class HardwareOutOfResources; //type: MplsTeStandby::HardwareOutOfResources
        class P2PP2MpTunnel; //type: MplsTeStandby::P2PP2MpTunnel
        class TopologyNodes; //type: MplsTeStandby::TopologyNodes
        class AnnounceTunnelsInfo; //type: MplsTeStandby::AnnounceTunnelsInfo
        class CollaboratorTimers; //type: MplsTeStandby::CollaboratorTimers
        class AutoTunnel; //type: MplsTeStandby::AutoTunnel
        class SoftPreemption; //type: MplsTeStandby::SoftPreemption
        class ForwardingAdjacencyDestinations; //type: MplsTeStandby::ForwardingAdjacencyDestinations
        class IgpAreas; //type: MplsTeStandby::IgpAreas
        class WrapProtection; //type: MplsTeStandby::WrapProtection
        class Topology; //type: MplsTeStandby::Topology
        class SignallingCounters; //type: MplsTeStandby::SignallingCounters
        class DiffServTeClasses; //type: MplsTeStandby::DiffServTeClasses
        class Issu; //type: MplsTeStandby::Issu
        class AutoRouteDestinationEntries; //type: MplsTeStandby::AutoRouteDestinationEntries
        class FastReroute; //type: MplsTeStandby::FastReroute
        class AttributeSets; //type: MplsTeStandby::AttributeSets
        class IgpAreaBriefs; //type: MplsTeStandby::IgpAreaBriefs
        class Tunnels; //type: MplsTeStandby::Tunnels
        class MaximumTunnels; //type: MplsTeStandby::MaximumTunnels
        class PathProtection; //type: MplsTeStandby::PathProtection
        class FibNextHopLabelRoutes; //type: MplsTeStandby::FibNextHopLabelRoutes
        class P2Mp; //type: MplsTeStandby::P2Mp
        class OpenConfig; //type: MplsTeStandby::OpenConfig
        class LspOutOfResources; //type: MplsTeStandby::LspOutOfResources
        class Bfd; //type: MplsTeStandby::Bfd
        class Nsr; //type: MplsTeStandby::Nsr
        class AutoTunnelServices; //type: MplsTeStandby::AutoTunnelServices
        class AffinityMap; //type: MplsTeStandby::AffinityMap
        class TopologyBriefs; //type: MplsTeStandby::TopologyBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AffinityMap> affinity_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo> announce_tunnels_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets> attribute_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoRouteDestinationEntries> auto_route_destination_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnel> auto_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AutoTunnelServices> auto_tunnel_services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::CollaboratorTimers> collaborator_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::DiffServTeClasses> diff_serv_te_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::FibNextHopLabelRoutes> fib_next_hop_label_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::ForwardingAdjacencyDestinations> forwarding_adjacency_destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::HardwareOutOfResources> hardware_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreaBriefs> igp_area_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::IgpAreas> igp_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::LspOutOfResources> lsp_out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::MaximumTunnels> maximum_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::OpenConfig> open_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2Mp> p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::P2PP2MpTunnel> p2p_p2mp_tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::PathProtection> path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SignallingCounters> signalling_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::SoftPreemption> soft_preemption;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyBriefs> topology_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::TopologyNodes> topology_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::WrapProtection> wrap_protection;
        
}; // MplsTeStandby


class MplsTeStandby::AffinityMap : public ydk::Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

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

        class AffinityMapArray; //type: MplsTeStandby::AffinityMap::AffinityMapArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AffinityMap::AffinityMapArray> > affinity_map_array;
        
}; // MplsTeStandby::AffinityMap


class MplsTeStandby::AffinityMap::AffinityMapArray : public ydk::Entity
{
    public:
        AffinityMapArray();
        ~AffinityMapArray();

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

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf affinity_value; //type: uint32
        ydk::YLeaf affinity_bit_position; //type: uint8
        ydk::YLeaf affinity_table_id; //type: TeAffinityTable
        class AffinityExtendedValue; //type: MplsTeStandby::AffinityMap::AffinityMapArray::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AffinityMap::AffinityMapArray::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsTeStandby::AffinityMap::AffinityMapArray


class MplsTeStandby::AffinityMap::AffinityMapArray::AffinityExtendedValue : public ydk::Entity
{
    public:
        AffinityExtendedValue();
        ~AffinityExtendedValue();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsTeStandby::AffinityMap::AffinityMapArray::AffinityExtendedValue


class MplsTeStandby::AnnounceTunnelsInfo : public ydk::Entity
{
    public:
        AnnounceTunnelsInfo();
        ~AnnounceTunnelsInfo();

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

        class AutorouteAnnounceTable; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable
        class AllAutorouteTable; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable> all_autoroute_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable> autoroute_announce_table;
        
}; // MplsTeStandby::AnnounceTunnelsInfo


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable : public ydk::Entity
{
    public:
        AllAutorouteTable();
        ~AllAutorouteTable();

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

        class AnnounceDest; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest> > announce_dest;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest : public ydk::Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf area; //type: int32
        ydk::YLeaf igp_id; //type: string
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf announced_tunnels_count; //type: uint16
        ydk::YLeaf autorouted_tunnels_count; //type: uint16
        ydk::YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        class TotalTunnel; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel> > total_tunnel;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel : public ydk::Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_sig_name; //type: string
        ydk::YLeaf tunnel_loadshare; //type: uint32
        ydk::YLeaf announce_type; //type: MplsTeTunnelAnnounce
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf mode; //type: IgpteAaMetricMode
        ydk::YLeaf igp_metric; //type: int32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf is_auto_mesh_aa; //type: boolean
        ydk::YLeaf is_sr; //type: boolean
        ydk::YLeaf is_sr_strict; //type: boolean
        ydk::YLeaf mesh_group_idaa; //type: uint32
        ydk::YLeaf is_exclude_segment_routing; //type: boolean
        class IgPs; //type: MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel


class MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_area_id; //type: string
        ydk::YLeaf afi; //type: MplsTeAfi

}; // MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable : public ydk::Entity
{
    public:
        AutorouteAnnounceTable();
        ~AutorouteAnnounceTable();

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

        class AnnounceDest; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest> > announce_dest;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest : public ydk::Entity
{
    public:
        AnnounceDest();
        ~AnnounceDest();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: MplsTeIgpProtocol
        ydk::YLeaf area; //type: int32
        ydk::YLeaf igp_id; //type: string
        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf announced_tunnels_count; //type: uint16
        ydk::YLeaf autorouted_tunnels_count; //type: uint16
        ydk::YLeaf forwarding_adjacency_tunnels_count; //type: uint16
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        class TotalTunnel; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel> > total_tunnel;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel : public ydk::Entity
{
    public:
        TotalTunnel();
        ~TotalTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf tunnel_sig_name; //type: string
        ydk::YLeaf tunnel_loadshare; //type: uint32
        ydk::YLeaf announce_type; //type: MplsTeTunnelAnnounce
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf mode; //type: IgpteAaMetricMode
        ydk::YLeaf igp_metric; //type: int32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf is_auto_mesh_aa; //type: boolean
        ydk::YLeaf is_sr; //type: boolean
        ydk::YLeaf is_sr_strict; //type: boolean
        ydk::YLeaf mesh_group_idaa; //type: uint32
        ydk::YLeaf is_exclude_segment_routing; //type: boolean
        class IgPs; //type: MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs> > ig_ps;
        
}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel


class MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_area_id; //type: string
        ydk::YLeaf afi; //type: MplsTeAfi

}; // MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs


class MplsTeStandby::AttributeSets : public ydk::Entity
{
    public:
        AttributeSets();
        ~AttributeSets();

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

        class AttributeSet; //type: MplsTeStandby::AttributeSets::AttributeSet

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet> > attribute_set;
        
}; // MplsTeStandby::AttributeSets


class MplsTeStandby::AttributeSets::AttributeSet : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf attribute_set_type; //type: MplsTeAttrSet
        ydk::YLeaf attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name; //type: string
        ydk::YLeaf tunnel_attribute_set_name_crc32; //type: uint32
        class AttributeSetUnion; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion> attribute_set_union;
        
}; // MplsTeStandby::AttributeSets::AttributeSet


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion : public ydk::Entity
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
        class AttributeSetPathOption; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public ydk::Entity
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
        class RevertSchedule; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public ydk::Entity
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
        class SignalledName; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class PolicyClassEntry; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId
        class ProtectedInterface; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public ydk::Entity
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
        class NamedAffinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public ydk::Entity
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
        class ConstraintExtendedValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue
        class ExtendedForwardRefValue; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue> > constraint_extended_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue> > extended_forward_ref_value;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId : public ydk::Entity
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

}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId


class MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public ydk::Entity
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
        class Affinity; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging
        class PolicyClassEntry; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry
        class MeshGroupId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId
        class TunnelId; //type: MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId> > mesh_group_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry> > policy_class_entry;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId> > tunnel_id;
        
}; // MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_35_ */

