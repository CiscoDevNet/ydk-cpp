#ifndef _CISCO_NX_OS_DEVICE_42_
#define _CISCO_NX_OS_DEVICE_42_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_41.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamStatsInstList; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList

        ydk::YList tcamstatsinst_list;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList : public ydk::Entity
{
    public:
        TcamStatsInstList();
        ~TcamStatsInstList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint16
        class RegionItems; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems> region_items;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems : public ydk::Entity
{
    public:
        RegionItems();
        ~RegionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamStatsRegionList; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList

        ydk::YList tcamstatsregion_list;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList : public ydk::Entity
{
    public:
        TcamStatsRegionList();
        ~TcamStatsRegionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regionname; //type: string
        ydk::YLeaf regionsize; //type: uint16
        class UtilizationItems; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems> utilization_items;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems : public ydk::Entity
{
    public:
        UtilizationItems();
        ~UtilizationItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used; //type: uint16
        ydk::YLeaf free; //type: uint16
        ydk::YLeaf percent; //type: decimal64
        ydk::YLeaf ipv4used; //type: uint16
        ydk::YLeaf ipv4percent; //type: decimal64
        ydk::YLeaf ipv6used; //type: uint16
        ydk::YLeaf ipv6percent; //type: decimal64
        ydk::YLeaf macused; //type: uint16
        ydk::YLeaf macpercent; //type: decimal64
        ydk::YLeaf allused; //type: uint16
        ydk::YLeaf allpercent; //type: decimal64
        ydk::YLeaf otherused; //type: uint16
        ydk::YLeaf otherpercent; //type: decimal64

}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems


class System::PltfmItems::NveItems : public ydk::Entity
{
    public:
        NveItems();
        ~NveItems();

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

        class NVEList; //type: System::PltfmItems::NveItems::NVEList

        ydk::YList nve_list;
        
}; // System::PltfmItems::NveItems


class System::PltfmItems::NveItems::NVEList : public ydk::Entity
{
    public:
        NVEList();
        ~NVEList();

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

        ydk::YLeaf id; //type: uint16
        class InfravlanItems; //type: System::PltfmItems::NveItems::NVEList::InfravlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::NveItems::NVEList::InfravlanItems> infravlan_items;
        
}; // System::PltfmItems::NveItems::NVEList


class System::PltfmItems::NveItems::NVEList::InfravlanItems : public ydk::Entity
{
    public:
        InfravlanItems();
        ~InfravlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InfraVlanList; //type: System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList

        ydk::YList infravlan_list;
        
}; // System::PltfmItems::NveItems::NVEList::InfravlanItems


class System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList : public ydk::Entity
{
    public:
        InfraVlanList();
        ~InfraVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf force; //type: PlatformInfraVlanForce

}; // System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList


class System::PltfmItems::ForwardingmodeItems : public ydk::Entity
{
    public:
        ForwardingmodeItems();
        ~ForwardingmodeItems();

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

        ydk::YLeaf forwardingmodetype; //type: PlatformForwardingModeSelector
        ydk::YLeaf lpmentrywarp; //type: uint32
        ydk::YLeaf hostentrywarp; //type: uint32
        ydk::YLeaf l2entrywarp; //type: uint32
        ydk::YLeaf mcstentrywarp; //type: uint32
        ydk::YLeaf lpmentrynormal; //type: uint32
        ydk::YLeaf mcstentrynormal; //type: uint32
        ydk::YLeaf fwdmodecfgfailed; //type: uint32

}; // System::PltfmItems::ForwardingmodeItems


class System::PltfmItems::EcmpItems : public ydk::Entity
{
    public:
        EcmpItems();
        ~EcmpItems();

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

        ydk::YLeaf ecmpresilientmode; //type: NwAdminSt___
        ydk::YLeaf ecmpreuse; //type: NwAdminSt___
        ydk::YLeaf ecmpautorecoverythreshold; //type: uint16

}; // System::PltfmItems::EcmpItems


class System::PltfmItems::QosItems : public ydk::Entity
{
    public:
        QosItems();
        ~QosItems();

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

        ydk::YLeaf pghdrmreserve; //type: uint8
        ydk::YLeaf pgminvalue; //type: uint8
        ydk::YLeaf pgnomin; //type: boolean
        ydk::YLeaf classify; //type: PlatformConfigState
        ydk::YLeaf ipg; //type: PlatformConfigState
        ydk::YLeaf pgshare; //type: PlatformConfigState

}; // System::PltfmItems::QosItems


class System::PltfmItems::BdItems : public ydk::Entity
{
    public:
        BdItems();
        ~BdItems();

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

        ydk::YLeaf descr; //type: string
        class BdItems_; //type: System::PltfmItems::BdItems::BdItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems::BdItems_> bd_items;
        
}; // System::PltfmItems::BdItems


class System::PltfmItems::BdItems::BdItems_ : public ydk::Entity
{
    public:
        BdItems_();
        ~BdItems_();

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

        class BdList; //type: System::PltfmItems::BdItems::BdItems_::BdList

        ydk::YList bd_list;
        
}; // System::PltfmItems::BdItems::BdItems_


class System::PltfmItems::BdItems::BdItems_::BdList : public ydk::Entity
{
    public:
        BdList();
        ~BdList();

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

        ydk::YLeaf fabencap; //type: string

}; // System::PltfmItems::BdItems::BdItems_::BdList


class System::PltfmItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

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

        ydk::YLeaf descr; //type: string
        class IfItems; //type: System::PltfmItems::IntfItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems> if_items;
        
}; // System::PltfmItems::IntfItems


class System::PltfmItems::IntfItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class IfList; //type: System::PltfmItems::IntfItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::PltfmItems::IntfItems::IfItems


class System::PltfmItems::IntfItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf stormctrlcpuarp; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class McastItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::McastItems
        class EltmIfItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems
        class RtvrfMbrItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::McastItems> mcast_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems> eltmif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PltfmItems::IntfItems::IfItems::IfList


class System::PltfmItems::IntfItems::IfItems::IfList::McastItems : public ydk::Entity
{
    public:
        McastItems();
        ~McastItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastslowrcv; //type: NwAdminSt___

}; // System::PltfmItems::IntfItems::IfItems::IfList::McastItems


class System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems : public ydk::Entity
{
    public:
        EltmIfItems();
        ~EltmIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hwbdid; //type: uint32

}; // System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::PltfmItems::LoglevelItems : public ydk::Entity
{
    public:
        LoglevelItems();
        ~LoglevelItems();

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

        ydk::YLeaf logginglevel; //type: uint16
        ydk::YLeaf loggingtype; //type: PlatformLoggingType

}; // System::PltfmItems::LoglevelItems


class System::PltfmItems::PoweroffEntityItems : public ydk::Entity
{
    public:
        PoweroffEntityItems();
        ~PoweroffEntityItems();

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

        ydk::YLeaf descr; //type: string
        class PoweroffModuleItems; //type: System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems> poweroffmodule_items;
        
}; // System::PltfmItems::PoweroffEntityItems


class System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems : public ydk::Entity
{
    public:
        PoweroffModuleItems();
        ~PoweroffModuleItems();

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

        class PoweroffModuleList; //type: System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList

        ydk::YList poweroffmodule_list;
        
}; // System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems


class System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList : public ydk::Entity
{
    public:
        PoweroffModuleList();
        ~PoweroffModuleList();

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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf poweroffstatus; //type: PlatformPoweroffSt

}; // System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList


class System::PltfmItems::SysmemthItems : public ydk::Entity
{
    public:
        SysmemthItems();
        ~SysmemthItems();

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

        ydk::YLeaf memthminor; //type: uint32
        ydk::YLeaf memthsevere; //type: uint32
        ydk::YLeaf memthcritical; //type: uint32

}; // System::PltfmItems::SysmemthItems


class System::PltfmItems::TcamRegionItems : public ydk::Entity
{
    public:
        TcamRegionItems();
        ~TcamRegionItems();

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

        ydk::YLeaf eraclsize; //type: uint32
        ydk::YLeaf vpcconvergencesize; //type: uint32
        ydk::YLeaf racllitesize; //type: uint32
        ydk::YLeaf ipv6ifaclsize; //type: uint32
        ydk::YLeaf eipv6raclsize; //type: uint32
        ydk::YLeaf ifacllitesize; //type: uint32
        ydk::YLeaf vaclsize; //type: uint32
        ydk::YLeaf ifaclsize; //type: uint32
        ydk::YLeaf evaclsize; //type: uint32
        ydk::YLeaf qossize; //type: uint32
        ydk::YLeaf raclsize; //type: uint32
        ydk::YLeaf ingflowsize; //type: uint32
        ydk::YLeaf natsize; //type: uint32
        ydk::YLeaf tcpnatsize; //type: uint16
        ydk::YLeaf macifaclsize; //type: uint32
        ydk::YLeaf eqossize; //type: uint32
        ydk::YLeaf eipv6qossize; //type: uint32
        ydk::YLeaf emacqossize; //type: uint32
        ydk::YLeaf eqoslitesize; //type: uint32
        ydk::YLeaf ipsgsize; //type: uint32
        ydk::YLeaf ipv6qossize; //type: uint32
        ydk::YLeaf ipv6raclsize; //type: uint32
        ydk::YLeaf mcastbidirsize; //type: uint32
        ydk::YLeaf macvqossize; //type: uint32
        ydk::YLeaf fcoeingresssize; //type: uint32
        ydk::YLeaf fcoeegresssize; //type: uint32
        ydk::YLeaf ifacludfsize; //type: uint32
        ydk::YLeaf ipv6l3qossize; //type: uint32
        ydk::YLeaf ipv6vaclsize; //type: uint32
        ydk::YLeaf ipv6vqossize; //type: uint32
        ydk::YLeaf macl3qossize; //type: uint32
        ydk::YLeaf macqossize; //type: uint32
        ydk::YLeaf macvaclsize; //type: uint32
        ydk::YLeaf mplssize; //type: uint32
        ydk::YLeaf openflowsize; //type: uint32
        ydk::YLeaf openflowlitesize; //type: uint32
        ydk::YLeaf qosintralitesize; //type: uint32
        ydk::YLeaf racludfsize; //type: uint32
        ydk::YLeaf vacllitesize; //type: uint32
        ydk::YLeaf vqossize; //type: uint32
        ydk::YLeaf vqosintralitesize; //type: uint32
        ydk::YLeaf vxlanp2psize; //type: uint32
        ydk::YLeaf coppsize; //type: uint32
        ydk::YLeaf coppsystemsize; //type: uint32
        ydk::YLeaf l3qosintralitesize; //type: uint32
        ydk::YLeaf svisize; //type: uint32
        ydk::YLeaf arpaclsize; //type: uint32
        ydk::YLeaf pbrsize; //type: uint32
        ydk::YLeaf ipv6pbrsize; //type: uint32
        ydk::YLeaf supsize; //type: uint32
        ydk::YLeaf qoslblsize; //type: uint32
        ydk::YLeaf ipv6spansize; //type: uint32
        ydk::YLeaf ipv6spanl2size; //type: uint32
        ydk::YLeaf ipv6supsize; //type: uint32
        ydk::YLeaf fhssize; //type: uint32
        ydk::YLeaf n9karpaclsize; //type: uint32
        ydk::YLeaf mplsdoublewide; //type: boolean
        ydk::YLeaf openflowdoublewide; //type: boolean
        ydk::YLeaf cfgfault; //type: PlatformTcamRegionCfgFault
        ydk::YLeaf cfgfaultmsg; //type: string
        ydk::YLeaf cfgfaultbmp; //type: string
        ydk::YLeaf reinitdefaults; //type: boolean

}; // System::PltfmItems::TcamRegionItems


class System::PltfmItems::LatencymonitorItems : public ydk::Entity
{
    public:
        LatencymonitorItems();
        ~LatencymonitorItems();

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

        ydk::YLeaf sampling; //type: uint32
        ydk::YLeaf latencymonitorthreshholdavg; //type: uint32
        ydk::YLeaf latencymonitorthreshholdmax; //type: uint32
        ydk::YLeaf latencymonitorstate; //type: PlatformLatencyMonitorSt

}; // System::PltfmItems::LatencymonitorItems


class System::PltfmItems::BuffermonitorItems : public ydk::Entity
{
    public:
        BuffermonitorItems();
        ~BuffermonitorItems();

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

        ydk::YLeaf sampling; //type: uint32
        ydk::YLeaf buffermonitorthreshhold; //type: uint32
        ydk::YLeaf buffermonitorstate; //type: PlatformBufferMonitorSt
        ydk::YLeaf buffermonitormode; //type: PlatformBufferMonitorMd

}; // System::PltfmItems::BuffermonitorItems


class System::PltfmItems::PfcmmubufferItems : public ydk::Entity
{
    public:
        PfcmmubufferItems();
        ~PfcmmubufferItems();

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

        ydk::YLeaf mmubufferstate; //type: PlatformPfcMmuBufferSt
        ydk::YLeaf bufferreservation; //type: uint16
        ydk::YLeaf cfgfault; //type: PlatformPfcMmuCfgFault

}; // System::PltfmItems::PfcmmubufferItems


class System::PltfmItems::UdfItems : public ydk::Entity
{
    public:
        UdfItems();
        ~UdfItems();

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

        ydk::YLeaf descr; //type: string
        class UdfItems_; //type: System::PltfmItems::UdfItems::UdfItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::UdfItems::UdfItems_> udf_items;
        
}; // System::PltfmItems::UdfItems


class System::PltfmItems::UdfItems::UdfItems_ : public ydk::Entity
{
    public:
        UdfItems_();
        ~UdfItems_();

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

        class UdfList; //type: System::PltfmItems::UdfItems::UdfItems_::UdfList

        ydk::YList udf_list;
        
}; // System::PltfmItems::UdfItems::UdfItems_


class System::PltfmItems::UdfItems::UdfItems_::UdfList : public ydk::Entity
{
    public:
        UdfList();
        ~UdfList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf offsetbase; //type: PlatformUdfOffsetBase
        ydk::YLeaf offsetposition; //type: uint8
        ydk::YLeaf offsetlength; //type: uint8
        ydk::YLeaf qualifyspan; //type: boolean
        ydk::YLeaf qualifyspanv6; //type: boolean
        ydk::YLeaf qualifyspanv6l2; //type: boolean
        ydk::YLeaf cfgfault; //type: PlatformUdfCfgFault

}; // System::PltfmItems::UdfItems::UdfItems_::UdfList


class System::SatmItems : public ydk::Entity
{
    public:
        SatmItems();
        ~SatmItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class DextchItems; //type: System::SatmItems::DextchItems
        class FexItems; //type: System::SatmItems::FexItems
        class FabpItems; //type: System::SatmItems::FabpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::DextchItems> dextch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FexItems> fex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems> fabp_items;
        
}; // System::SatmItems


class System::SatmItems::DextchItems : public ydk::Entity
{
    public:
        DextchItems();
        ~DextchItems();

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

        class DExtChList; //type: System::SatmItems::DextchItems::DExtChList

        ydk::YList dextch_list;
        
}; // System::SatmItems::DextchItems


class System::SatmItems::DextchItems::DExtChList : public ydk::Entity
{
    public:
        DExtChList();
        ~DExtChList();

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

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf operst; //type: SatmExtChOperSt
        ydk::YLeaf ver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf intver; //type: string
        ydk::YLeaf swintver; //type: string
        ydk::YLeaf swgen; //type: uint16
        ydk::YLeaf controlfport; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::SatmItems::DextchItems::DExtChList


class System::SatmItems::FexItems : public ydk::Entity
{
    public:
        FexItems();
        ~FexItems();

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

        class FexList; //type: System::SatmItems::FexItems::FexList

        ydk::YList fex_list;
        
}; // System::SatmItems::FexItems


class System::SatmItems::FexItems::FexList : public ydk::Entity
{
    public:
        FexList();
        ~FexList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf serialnumber; //type: string

}; // System::SatmItems::FexItems::FexList


class System::SatmItems::FabpItems : public ydk::Entity
{
    public:
        FabpItems();
        ~FabpItems();

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

        class FabPList; //type: System::SatmItems::FabpItems::FabPList

        ydk::YList fabp_list;
        
}; // System::SatmItems::FabpItems


class System::SatmItems::FabpItems::FabPList : public ydk::Entity
{
    public:
        FabPList();
        ~FabPList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf operst; //type: SatmOperSt
        ydk::YLeaf extchid; //type: uint16
        ydk::YLeaf fsmst; //type: SatmFpFsmSt
        ydk::YLeaf remotelinkid; //type: uint16
        ydk::YLeaf flags; //type: string
        class HostpItems; //type: System::SatmItems::FabpItems::FabPList::HostpItems
        class RemotefcotItems; //type: System::SatmItems::FabpItems::FabPList::RemotefcotItems
        class Remotefcotx2Items; //type: System::SatmItems::FabpItems::FabPList::Remotefcotx2Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::HostpItems> hostp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::RemotefcotItems> remotefcot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::Remotefcotx2Items> remotefcotx2_items;
        
}; // System::SatmItems::FabpItems::FabPList


class System::SatmItems::FabpItems::FabPList::HostpItems : public ydk::Entity
{
    public:
        HostpItems();
        ~HostpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostPList; //type: System::SatmItems::FabpItems::FabPList::HostpItems::HostPList

        ydk::YList hostp_list;
        
}; // System::SatmItems::FabpItems::FabPList::HostpItems


class System::SatmItems::FabpItems::FabPList::HostpItems::HostPList : public ydk::Entity
{
    public:
        HostPList();
        ~HostPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf operst; //type: SatmHpOperSt
        ydk::YLeaf fabricport; //type: string

}; // System::SatmItems::FabpItems::FabPList::HostpItems::HostPList


class System::SatmItems::FabpItems::FabPList::RemotefcotItems : public ydk::Entity
{
    public:
        RemotefcotItems();
        ~RemotefcotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf xcvrid; //type: uint8
        ydk::YLeaf xcvrextid; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf xcvrcode; //type: string
        ydk::YLeaf encoding; //type: uint8
        ydk::YLeaf brin100mhz; //type: uint8
        ydk::YLeaf baseresvd1; //type: uint8
        ydk::YLeaf distinkmfor9u; //type: uint8
        ydk::YLeaf distin100mfor9u; //type: uint8
        ydk::YLeaf distin10mfor50u; //type: uint8
        ydk::YLeaf distin10mfor60u; //type: uint8
        ydk::YLeaf distin1mforcu; //type: uint8
        ydk::YLeaf baseresvd2; //type: uint8
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf baseresvd3; //type: uint8
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf baseresvd4; //type: string
        ydk::YLeaf ccid; //type: uint8
        ydk::YLeaf extoption; //type: string
        ydk::YLeaf brmaxmargin; //type: uint8
        ydk::YLeaf brminmargin; //type: uint8
        ydk::YLeaf vendorsn; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf diagmontype; //type: uint8
        ydk::YLeaf enhoption; //type: uint8
        ydk::YLeaf ccex; //type: uint8
        ydk::YLeaf vendordata; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::SatmItems::FabpItems::FabPList::RemotefcotItems


class System::SatmItems::FabpItems::FabPList::Remotefcotx2Items : public ydk::Entity
{
    public:
        Remotefcotx2Items();
        ~Remotefcotx2Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf bitencoding; //type: uint8
        ydk::YLeaf bitratembps; //type: string
        ydk::YLeaf protocoltype; //type: uint8
        ydk::YLeaf xgethcode; //type: string
        ydk::YLeaf sonetsdhcode; //type: string
        ydk::YLeaf xgfccode; //type: string
        ydk::YLeaf range; //type: string
        ydk::YLeaf fibretype; //type: string
        ydk::YLeaf wavelench0; //type: string
        ydk::YLeaf wavelench1; //type: string
        ydk::YLeaf wavelench2; //type: string
        ydk::YLeaf wavelench3; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf fivevstressenv; //type: uint8
        ydk::YLeaf ciscopid; //type: string
        ydk::YLeaf ciscovid; //type: string
        ydk::YLeaf ciscosn; //type: string
        ydk::YLeaf ciscopn; //type: string
        ydk::YLeaf ciscorev; //type: string
        ydk::YLeaf extvendorspecific; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8

}; // System::SatmItems::FabpItems::FabPList::Remotefcotx2Items


class System::AdjacencyItems : public ydk::Entity
{
    public:
        AdjacencyItems();
        ~AdjacencyItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::AdjacencyItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems> inst_items;
        
}; // System::AdjacencyItems


class System::AdjacencyItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::AdjacencyItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems> dom_items;
        
}; // System::AdjacencyItems::InstItems


class System::AdjacencyItems::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        class DomList; //type: System::AdjacencyItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::AdjacencyItems::InstItems::DomItems


class System::AdjacencyItems::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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

        ydk::YLeaf name; //type: string
        class DbItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems> db_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AdjacencyDbT
        ydk::YLeaf name; //type: string
        class IfItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems
        class SubnetprefixItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems
        class AggrprefixItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems> subnetprefix_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems> aggrprefix_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifid; //type: string
        class IpItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems> ip_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf operst; //type: AdjacencyAdjOperSt
        ydk::YLeaf physifid; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems : public ydk::Entity
{
    public:
        SubnetprefixItems();
        ~SubnetprefixItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems> if_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfSubnetPrfxList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList

        ydk::YList ifsubnetprfx_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList : public ydk::Entity
{
    public:
        IfSubnetPrfxList();
        ~IfSubnetPrfxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifid; //type: string
        class IpItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems> ip_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubPrfxEpList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList

        ydk::YList subprfxep_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList : public ydk::Entity
{
    public:
        SubPrfxEpList();
        ~SubPrfxEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf agglen; //type: uint32
        ydk::YLeaf nhcount; //type: uint32

}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::SubnetprefixItems::IfItems::IfSubnetPrfxList::IpItems::SubPrfxEpList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems : public ydk::Entity
{
    public:
        AggrprefixItems();
        ~AggrprefixItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems> if_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfAggrPrfxList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList

        ydk::YList ifaggrprfx_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList : public ydk::Entity
{
    public:
        IfAggrPrfxList();
        ~IfAggrPrfxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifid; //type: string
        class IpItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems> ip_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggrPrfxEpList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList

        ydk::YList aggrprfxep_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList : public ydk::Entity
{
    public:
        AggrPrfxEpList();
        ~AggrPrfxEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf refcount; //type: uint32

}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::AggrprefixItems::IfItems::IfAggrPrfxList::IpItems::AggrPrfxEpList


class System::ArpItems : public ydk::Entity
{
    public:
        ArpItems();
        ~ArpItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::ArpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems> inst_items;
        
}; // System::ArpItems


class System::ArpItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf evpn_timeout; //type: uint16
        ydk::YLeaf suppression_timeout; //type: uint16
        ydk::YLeaf offlisttimeout; //type: uint16
        ydk::YLeaf rarpfabricfwding; //type: NwAdminSt___
        ydk::YLeaf rarpfabricfwdingrate; //type: uint16
        ydk::YLeaf cachelimit; //type: uint32
        ydk::YLeaf cachesyslograte; //type: uint32
        ydk::YLeaf iparpcos; //type: uint32
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf adjlogginglevel; //type: ArpLoggingLevel
        ydk::YLeaf ipadjroutedistance; //type: uint32
        ydk::YLeaf allowstaticarpoutsidesubnet; //type: NwAdminSt___
        ydk::YLeaf arpunnumsviswreplication; //type: NwAdminSt___
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class GlobalstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems
        class L2statsItems; //type: System::ArpItems::InstItems::L2statsItems
        class DomItems; //type: System::ArpItems::InstItems::DomItems
        class IpgleanthrottleItems; //type: System::ArpItems::InstItems::IpgleanthrottleItems
        class EvtLogsItems; //type: System::ArpItems::InstItems::EvtLogsItems
        class VpcItems; //type: System::ArpItems::InstItems::VpcItems
        class DbItems; //type: System::ArpItems::InstItems::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems> globalstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::L2statsItems> l2stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::IpgleanthrottleItems> ipgleanthrottle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::EvtLogsItems> evtlogs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems> db_items;
        
}; // System::ArpItems::InstItems


class System::ArpItems::InstItems::GlobalstatsItems : public ydk::Entity
{
    public:
        GlobalstatsItems();
        ~GlobalstatsItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class ControllerstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems
        class VpcstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems
        class TunnelstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems
        class SupcachestatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems
        class OfastatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems> controllerstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems> vpcstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems> tunnelstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems> supcachestats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems> ofastats_items;
        
}; // System::ArpItems::InstItems::GlobalstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems : public ydk::Entity
{
    public:
        ControllerstatsItems();
        ~ControllerstatsItems();

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

        ydk::YLeaf adjaddcount; //type: uint64
        ydk::YLeaf adjdelcount; //type: uint64
        ydk::YLeaf adjadderrorcount; //type: uint64
        ydk::YLeaf adjdelerrorcount; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems : public ydk::Entity
{
    public:
        VpcstatsItems();
        ~VpcstatsItems();

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

        ydk::YLeaf cfspulldropsinceoff; //type: uint64
        ydk::YLeaf cfspushdropsinceoff; //type: uint64
        ydk::YLeaf sendignorepullreqcfsoe; //type: uint64
        ydk::YLeaf sendignorepushmsgcfsoe; //type: uint64
        ydk::YLeaf imfailcfspayload; //type: uint64
        ydk::YLeaf mcecmfailcfspayload; //type: uint64
        ydk::YLeaf invalidmctpccfspayload; //type: uint64
        ydk::YLeaf ptlookfailcfspayload; //type: uint64
        ydk::YLeaf cfsrspfailinvalidmct; //type: uint64
        ydk::YLeaf cfsrspfailcfspayload; //type: uint64
        ydk::YLeaf retrievevpcfailpushmsg; //type: uint64
        ydk::YLeaf retifindexfrmvpcfail; //type: uint64
        ydk::YLeaf retifindexfrmvpcfailsync; //type: uint64
        ydk::YLeaf rspsentcfsoe; //type: uint64
        ydk::YLeaf rsprecvcfsoe; //type: uint64
        ydk::YLeaf rsprecvcfsoeerr; //type: uint64
        ydk::YLeaf recvcfsoe; //type: uint64
        ydk::YLeaf sentfailcfsoe; //type: uint64
        ydk::YLeaf mcecmsendapifailcfsoe; //type: uint64
        ydk::YLeaf sendcfsoe; //type: uint64
        ydk::YLeaf vmctpktdropcount; //type: uint64
        class SyncstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems> syncstats_items;
        
}; // System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems : public ydk::Entity
{
    public:
        SyncstatsItems();
        ~SyncstatsItems();

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

        ydk::YLeaf ptaddfailofflist; //type: uint64
        ydk::YLeaf mallocfailofflistdb; //type: uint64
        ydk::YLeaf timercreatefailofflistdb; //type: uint64
        ydk::YLeaf adjaddfailofflistdb; //type: uint64
        ydk::YLeaf ptlookupfailofflistdb; //type: uint64
        ydk::YLeaf vlanmismatchofflistdb; //type: uint64
        ydk::YLeaf invalidsviofflistdb; //type: uint64
        ydk::YLeaf svidownofflistdb; //type: uint64
        ydk::YLeaf mctdownofflistdb; //type: uint64
        ydk::YLeaf ctxtypeinvalidofflistdb; //type: uint64
        ydk::YLeaf vrfinvalidofflistdb; //type: uint64
        ydk::YLeaf invalidipofflistdb; //type: uint64
        ydk::YLeaf ipsanityfailofflistdb; //type: uint64
        ydk::YLeaf macsanityfailofflistdb; //type: uint64
        ydk::YLeaf ownroutermacofflistdb; //type: uint64
        ydk::YLeaf ownipofflistdb; //type: uint64
        ydk::YLeaf ownvipofflistdb; //type: uint64
        ydk::YLeaf adjcreatefailofflistdb; //type: uint64
        ydk::YLeaf subnetmismatchofflistdb; //type: uint64
        ydk::YLeaf dupentryofflistdb; //type: uint64
        ydk::YLeaf ipnotenofflistdb; //type: uint64
        ydk::YLeaf totdropofflistdb; //type: uint64
        ydk::YLeaf totdontdropofflistdb; //type: uint64
        ydk::YLeaf totadjaddofflistdb; //type: uint64
        ydk::YLeaf totadjdelofflistdb; //type: uint64
        ydk::YLeaf totadjignoredofflistdb; //type: uint64
        ydk::YLeaf totadjfrmpeertoadd; //type: uint64
        ydk::YLeaf totadjfrmpeertodel; //type: uint64
        ydk::YLeaf totadjsentperiodically; //type: uint64
        ydk::YLeaf totadjpeertoadd; //type: uint64
        ydk::YLeaf totadjpeertodel; //type: uint64
        ydk::YLeaf totperiodicsyncadj; //type: uint64
        ydk::YLeaf totadjaddfailduringsyncsend; //type: uint64
        ydk::YLeaf totdropduringsyncinvalidsvi; //type: uint64
        ydk::YLeaf totdropsyncsvidown; //type: uint64
        ydk::YLeaf totdropsyncinvalidctxt; //type: uint64
        ydk::YLeaf totdropsyncnulladj; //type: uint64
        ydk::YLeaf totdropsyncnullip; //type: uint64
        ydk::YLeaf totsyncadjaddl2supcache; //type: uint64
        ydk::YLeaf totsyncstopbcastpkt; //type: uint64
        ydk::YLeaf totvmctorphansyncdropcount; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems : public ydk::Entity
{
    public:
        TunnelstatsItems();
        ~TunnelstatsItems();

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

        ydk::YLeaf tottunnelrcvd; //type: uint64
        ydk::YLeaf rxforingressvpc; //type: uint64
        ydk::YLeaf rxingressforgpc; //type: uint64
        ydk::YLeaf rxingressorphanvpc; //type: uint64
        ydk::YLeaf rxingressorphanvpcplus; //type: uint64
        ydk::YLeaf totpacksent; //type: uint64
        ydk::YLeaf pktsentarpsnoop; //type: uint64
        ydk::YLeaf pktsentnonlocalvip; //type: uint64
        ydk::YLeaf pktsentpeergway; //type: uint64
        ydk::YLeaf txingressvpc; //type: uint64
        ydk::YLeaf txingressgpc; //type: uint64
        ydk::YLeaf txingressorphanvpc; //type: uint64
        ydk::YLeaf txingressorphanvpcplus; //type: uint64
        ydk::YLeaf totrecvdropped; //type: uint64
        ydk::YLeaf totsenddropped; //type: uint64
        ydk::YLeaf sendfaildrop; //type: uint64
        ydk::YLeaf rcvdinvalidver; //type: uint64
        ydk::YLeaf rcvdinvalidpayloadtype; //type: uint64
        ydk::YLeaf rcvdmctif; //type: uint64
        ydk::YLeaf rcvdinvalidingressport; //type: uint64
        ydk::YLeaf dropsentinvalidport; //type: uint64
        ydk::YLeaf droprecvinvalidgpccore; //type: uint64
        ydk::YLeaf droprecvinvalidgpcpeer; //type: uint64
        ydk::YLeaf droprecvfailretrievegpc; //type: uint64
        ydk::YLeaf dropsendfailretrievegpc; //type: uint64
        ydk::YLeaf failretrievevpcid; //type: uint64
        ydk::YLeaf imapifail; //type: uint64
        ydk::YLeaf invalidcontext; //type: uint64
        ydk::YLeaf dropmctdown; //type: uint64
        ydk::YLeaf recvdropmbuffail; //type: uint64
        ydk::YLeaf senddropmbuffail; //type: uint64
        ydk::YLeaf tunnelfailed; //type: uint64
        ydk::YLeaf tunnelfailcenetwork; //type: uint64
        ydk::YLeaf mcecmkeynotfound; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems : public ydk::Entity
{
    public:
        SupcachestatsItems();
        ~SupcachestatsItems();

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

        ydk::YLeaf requests; //type: uint64
        ydk::YLeaf requestsl2; //type: uint64
        ydk::YLeaf gratuitous; //type: uint64
        ydk::YLeaf gratuitousl2; //type: uint64
        ydk::YLeaf fwdrequestsl3; //type: uint64
        ydk::YLeaf fwdrepliesl3; //type: uint64
        ydk::YLeaf fwdrequestoncoreport; //type: uint64
        ydk::YLeaf fwdreplyoncoreport; //type: uint64
        ydk::YLeaf sentdrop; //type: uint64
        ydk::YLeaf sentreql2; //type: uint64
        ydk::YLeaf sentreplyl2; //type: uint64
        ydk::YLeaf sentreqcorel2; //type: uint64
        ydk::YLeaf sentreplycorel2; //type: uint64
        ydk::YLeaf sentdropl2; //type: uint64
        ydk::YLeaf recvreql3; //type: uint64
        ydk::YLeaf recvreplyl3; //type: uint64
        ydk::YLeaf recvlocalreql3; //type: uint64
        ydk::YLeaf recvlocalreplyl3; //type: uint64
        ydk::YLeaf recvgratarp; //type: uint64
        ydk::YLeaf recvdrop; //type: uint64
        ydk::YLeaf recvrequestl2; //type: uint64
        ydk::YLeaf recvreplyl2; //type: uint64
        ydk::YLeaf recvgratarpl2; //type: uint64
        ydk::YLeaf recvdropl2; //type: uint64
        ydk::YLeaf localentryadds; //type: uint64
        ydk::YLeaf localentrydel; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems


class System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems : public ydk::Entity
{
    public:
        OfastatsItems();
        ~OfastatsItems();

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

        ydk::YLeaf dpadjerrdel; //type: uint64
        ydk::YLeaf cpmacmismatcherrdel; //type: uint64
        ydk::YLeaf cpnullmacerrdel; //type: uint64
        ydk::YLeaf cpnoadjerrdel; //type: uint64
        ydk::YLeaf cpcpnhmismatcherrdel; //type: uint64
        ydk::YLeaf cpadjdelfailureerr; //type: uint64
        ydk::YLeaf cpnullmacerradd; //type: uint64
        ydk::YLeaf cpdpmacmismatcherradd; //type: uint64
        ydk::YLeaf cpcpmacmismatcherradd; //type: uint64
        ydk::YLeaf cpaddfirsterr; //type: uint64
        ydk::YLeaf dpoverwritecperr; //type: uint64
        ydk::YLeaf dpcpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpcpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpdpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpadjaddfailureerr; //type: uint64
        ydk::YLeaf peeriplookuprecphyiod; //type: uint64
        ydk::YLeaf peeripipv6recphyiod; //type: uint64
        ydk::YLeaf peeriplookupadjphyiod; //type: uint64
        ydk::YLeaf peeripipv6adjphyiod; //type: uint64
        ydk::YLeaf barrierresponseerr; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems


class System::ArpItems::InstItems::L2statsItems : public ydk::Entity
{
    public:
        L2statsItems();
        ~L2statsItems();

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

        class IfItems; //type: System::ArpItems::InstItems::L2statsItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::L2statsItems::IfItems> if_items;
        
}; // System::ArpItems::InstItems::L2statsItems


class System::ArpItems::InstItems::L2statsItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class L2IfList; //type: System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList

        ydk::YList l2if_list;
        
}; // System::ArpItems::InstItems::L2statsItems::IfItems


class System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList : public ydk::Entity
{
    public:
        L2IfList();
        ~L2IfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf pktrecl2int; //type: uint32

}; // System::ArpItems::InstItems::L2statsItems::IfItems::L2IfList


class System::ArpItems::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        class DomList; //type: System::ArpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::ArpItems::InstItems::DomItems


class System::ArpItems::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf encap; //type: string
        class DbItems; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems
        class IfItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems> if_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList


class System::ArpItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: ArpDbT
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems> adj_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifid; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ArpAdjOperSt
        ydk::YLeaf physifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList


class System::ArpItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf gratuitousrequest; //type: NwAdminSt___
        ydk::YLeaf gratuitousupdate; //type: NwAdminSt___
        ydk::YLeaf gratuitoushsrpdup; //type: NwAdminSt___
        ydk::YLeaf proxyarp; //type: NwAdminSt___
        ydk::YLeaf localproxyarp; //type: NwAdminSt___
        ydk::YLeaf localproxyarpnohwflood; //type: NwAdminSt___
        ydk::YLeaf deleteadjonmacdelete; //type: NwAdminSt___
        ydk::YLeaf refreshtimerformacdelete; //type: uint16
        ydk::YLeaf duplicateipdetectionforunnumberedsvi; //type: NwAdminSt___
        ydk::YLeaf configerror; //type: string
        class SadjItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems
        class IfstatstxItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems
        class IfstatsrxItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems
        class IfstatsadjItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems
        class IfstatsmiscItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems
        class IfstatsmhItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems
        class RtvrfMbrItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems> sadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems> ifstatstx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems> ifstatsrx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems> ifstatsadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems> ifstatsmisc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems> ifstatsmh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems : public ydk::Entity
{
    public:
        SadjItems();
        ~SadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StAdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList

        ydk::YList stadjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList : public ydk::Entity
{
    public:
        StAdjEpList();
        ~StAdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf operst; //type: ArpStAdjOperSt
        ydk::YLeaf operstqual; //type: ArpStAdjOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf mac; //type: string
        class RtCtrlrAdjEpToStAdjEpItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems
        class RtfvEpDefRefToStAdjEpItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems> rtctrlradjeptostadjep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems> rtfvepdefreftostadjep_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems : public ydk::Entity
{
    public:
        RtCtrlrAdjEpToStAdjEpItems();
        ~RtCtrlrAdjEpToStAdjEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems : public ydk::Entity
{
    public:
        RtfvEpDefRefToStAdjEpItems();
        ~RtfvEpDefRefToStAdjEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefRefToStAdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList

        ydk::YList rtfvepdefreftostadjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList : public ydk::Entity
{
    public:
        RtFvEpDefRefToStAdjEpList();
        ~RtFvEpDefRefToStAdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems : public ydk::Entity
{
    public:
        IfstatstxItems();
        ~IfstatstxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pktsent; //type: uint32
        ydk::YLeaf pktsentreq; //type: uint32
        ydk::YLeaf pktsentrsp; //type: uint32
        ydk::YLeaf pktsentreql2; //type: uint32
        ydk::YLeaf pktsentrspl2; //type: uint32
        ydk::YLeaf pktsentgratreq; //type: uint32
        ydk::YLeaf pktsenttunnel; //type: uint32
        ydk::YLeaf pktsentdrop; //type: uint32
        ydk::YLeaf pktsendsrvport; //type: uint32
        ydk::YLeaf pktsendfbrcport; //type: uint32
        ydk::YLeaf pktsendfixupcore; //type: uint32
        ydk::YLeaf pktsendfixupserver; //type: uint32
        ydk::YLeaf pktsendfixuprarp; //type: uint32
        ydk::YLeaf pktsendanycastglean; //type: uint32
        ydk::YLeaf pktsentfailinvpkt; //type: uint32
        ydk::YLeaf pktsentfailmbufop; //type: uint32
        ydk::YLeaf pktsentfailnoifindex; //type: uint32
        ydk::YLeaf pktsentfailunsupportedint; //type: uint32
        ydk::YLeaf pktsentfailimdown; //type: uint32
        ydk::YLeaf pktsentfailinvsrcip; //type: uint32
        ydk::YLeaf pktsentfailinvdstip; //type: uint32
        ydk::YLeaf pktsentfailownip; //type: uint32
        ydk::YLeaf pktsentfailctxtnotcreated; //type: uint32
        ydk::YLeaf pktsentfailbadctxtid; //type: uint32
        ydk::YLeaf pktsentfailunattachedip; //type: uint32
        ydk::YLeaf pktsentfailadjaddfailure; //type: uint32
        ydk::YLeaf pktsentfailnosrcip; //type: uint32
        ydk::YLeaf pktsentfailnomac; //type: uint32
        ydk::YLeaf pktsentfailclientenqfailed; //type: uint32
        ydk::YLeaf pktsentfailproxydstnotrchbl; //type: uint32
        ydk::YLeaf pktskiprespenhancedproxydestnotreach; //type: uint32
        ydk::YLeaf pktskiprespenhancedproxyl2porttrack; //type: uint32
        ydk::YLeaf pktsentfailinvlocalproxy; //type: uint32
        ydk::YLeaf pktsentfailinvproxy; //type: uint32
        ydk::YLeaf pktsentfailvipgroupnotactive; //type: uint32
        ydk::YLeaf pktrefreshfloodtoserverskipcore; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems : public ydk::Entity
{
    public:
        IfstatsrxItems();
        ~IfstatsrxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pktrcvd; //type: uint32
        ydk::YLeaf pktrcvdreq; //type: uint32
        ydk::YLeaf pktrcvdrsp; //type: uint32
        ydk::YLeaf pktrcvdproxyarp; //type: uint32
        ydk::YLeaf pktrcvdlocalproxyarp; //type: uint32
        ydk::YLeaf pktrcvdenhancedproxyarp; //type: uint32
        ydk::YLeaf pktrcvdenhancedproxyanycastarp; //type: uint32
        ydk::YLeaf pktrcvdenhancedproxyl2porttrackarp; //type: uint32
        ydk::YLeaf pktrcvdserverport; //type: uint32
        ydk::YLeaf pktrcvdreql2; //type: uint32
        ydk::YLeaf pktrcvdrspl2; //type: uint32
        ydk::YLeaf pktrcvdtunnel; //type: uint32
        ydk::YLeaf pktrcvdfastpath; //type: uint32
        ydk::YLeaf pktrcvdsnoop; //type: uint32
        ydk::YLeaf pktrcvddrp; //type: uint32
        ydk::YLeaf pktrcvddrpbadif; //type: uint32
        ydk::YLeaf pktrcvddrpbadlen; //type: uint32
        ydk::YLeaf pktrcvddrpbadproto; //type: uint32
        ydk::YLeaf pktrcvddropbadhrd; //type: uint32
        ydk::YLeaf pktrcvddrpbadl2addrlen; //type: uint32
        ydk::YLeaf pktrcvddrpbadl3addrlen; //type: uint32
        ydk::YLeaf pktrcvddrpinvalsrcip; //type: uint32
        ydk::YLeaf pktrcvddrpdirbcast; //type: uint32
        ydk::YLeaf pktrcvddrpinvaldstip; //type: uint32
        ydk::YLeaf pktrcvddrpbadsrcmac; //type: uint32
        ydk::YLeaf pktrcvddrpownsrcmac; //type: uint32
        ydk::YLeaf pktrcvddrpownsrcip; //type: uint32
        ydk::YLeaf pktrcvddrparpifnomem; //type: uint32
        ydk::YLeaf pktrcvddrpnotforus; //type: uint32
        ydk::YLeaf pktrcvdlearnanddropnotforus; //type: uint32
        ydk::YLeaf pktrcvddrpsubnetmismatch; //type: uint32
        ydk::YLeaf pktrcvddrpnotinit; //type: uint32
        ydk::YLeaf pktrcvddrpbadctxt; //type: uint32
        ydk::YLeaf pktrcvddrpctxtnotcreated; //type: uint32
        ydk::YLeaf pktrcvddrpl2localproxyarp; //type: uint32
        ydk::YLeaf pktrcvddrpl2purel2pkt; //type: uint32
        ydk::YLeaf pktrcvddrpl2prtuntrusted; //type: uint32
        ydk::YLeaf pktrcvddrpstdbyfhrpvip; //type: uint32
        ydk::YLeaf pktrcvddrpgratonproxyarp; //type: uint32
        ydk::YLeaf pktrcvddrparprequestignore; //type: uint32
        ydk::YLeaf pktrcvddrpl2fmqueryfail; //type: uint32
        ydk::YLeaf pktrcvddrptunnelfail; //type: uint32
        ydk::YLeaf pktrcvddrprsponhsrpstbyactivevmac; //type: uint32
        ydk::YLeaf pktrcvdfailimdown; //type: uint32
        ydk::YLeaf pktrcvdgleanreqcount; //type: uint32
        ydk::YLeaf pktrfrshreqrecfrmclients; //type: uint32
        ydk::YLeaf pktrcvdsigfrml2rib; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems : public ydk::Entity
{
    public:
        IfstatsadjItems();
        ~IfstatsadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjadd; //type: uint32
        ydk::YLeaf adjdel; //type: uint32
        ydk::YLeaf adjtimeout; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems : public ydk::Entity
{
    public:
        IfstatsmiscItems();
        ~IfstatsmiscItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clientmsg; //type: uint32
        ydk::YLeaf clientmsgfail; //type: uint32
        ydk::YLeaf iftimeoutmsgfail; //type: uint32
        ydk::YLeaf ifstatusmsgfail; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems : public ydk::Entity
{
    public:
        IfstatsmhItems();
        ~IfstatsmhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf recvaddfrml2rib; //type: uint32
        ydk::YLeaf processaddfrml2rib; //type: uint32
        ydk::YLeaf recvdelfrml2rib; //type: uint32
        ydk::YLeaf processdelfrml2rib; //type: uint32
        ydk::YLeaf recvpcshutfrml2rib; //type: uint32
        ydk::YLeaf processpcshutfrml2rib; //type: uint32
        ydk::YLeaf recvremoteupdfrml2rib; //type: uint32
        ydk::YLeaf processremoteupdfrml2rib; //type: uint32
        ydk::YLeaf psadderrinvalidflags; //type: uint32
        ydk::YLeaf psdelerrinvalidflags; //type: uint32
        ydk::YLeaf psadderrinvalidcurrstate; //type: uint32
        ydk::YLeaf psdelerrinvalidcurrstate; //type: uint32
        ydk::YLeaf psdelerrmacmismatch; //type: uint32
        ydk::YLeaf psdelerrsecdelfrml2rib; //type: uint32
        ydk::YLeaf psdelerrfortlroute; //type: uint32
        ydk::YLeaf tldelerrforpsroroute; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ArpItems::InstItems::IpgleanthrottleItems : public ydk::Entity
{
    public:
        IpgleanthrottleItems();
        ~IpgleanthrottleItems();

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

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf syslog; //type: uint32
        ydk::YLeaf maxpacket; //type: uint32
        ydk::YLeaf timeout; //type: uint16

}; // System::ArpItems::InstItems::IpgleanthrottleItems


class System::ArpItems::InstItems::EvtLogsItems : public ydk::Entity
{
    public:
        EvtLogsItems();
        ~EvtLogsItems();

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

        class EventLogsList; //type: System::ArpItems::InstItems::EvtLogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::ArpItems::InstItems::EvtLogsItems


class System::ArpItems::InstItems::EvtLogsItems::EventLogsList : public ydk::Entity
{
    public:
        EventLogsList();
        ~EventLogsList();

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

        ydk::YLeaf eventtype; //type: ArpEventType
        ydk::YLeaf logsize; //type: ArpEventLogSize

}; // System::ArpItems::InstItems::EvtLogsItems::EventLogsList


class System::ArpItems::InstItems::VpcItems : public ydk::Entity
{
    public:
        VpcItems();
        ~VpcItems();

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

        class DomItems; //type: System::ArpItems::InstItems::VpcItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::VpcItems::DomItems> dom_items;
        
}; // System::ArpItems::InstItems::VpcItems


class System::ArpItems::InstItems::VpcItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        class VpcDomList; //type: System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList

        ydk::YList vpcdom_list;
        
}; // System::ArpItems::InstItems::VpcItems::DomItems


class System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList : public ydk::Entity
{
    public:
        VpcDomList();
        ~VpcDomList();

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

        ydk::YLeaf domainid; //type: uint16
        ydk::YLeaf arpsync; //type: NwAdminSt___

}; // System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList


class System::ArpItems::InstItems::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

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

        class DbSupCacheList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList

        ydk::YList dbsupcache_list;
        
}; // System::ArpItems::InstItems::DbItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList : public ydk::Entity
{
    public:
        DbSupCacheList();
        ~DbSupCacheList();

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

        ydk::YLeaf type; //type: ArpDbT
        ydk::YLeaf name; //type: string
        class VlanItems; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems> vlan_items;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SupCacheVlanList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList

        ydk::YList supcachevlan_list;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList : public ydk::Entity
{
    public:
        SupCacheVlanList();
        ~SupCacheVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf suppressarpmode; //type: ArpSuppressArpMode
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class IpItems; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems> ip_items;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SupCacheEntryList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList

        ydk::YList supcacheentry_list;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList : public ydk::Entity
{
    public:
        SupCacheEntryList();
        ~SupCacheEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf phyid; //type: string
        ydk::YLeaf remotevtepaddr; //type: string

}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList


class System::BfdItems : public ydk::Entity
{
    public:
        BfdItems();
        ~BfdItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::BfdItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems> inst_items;
        
}; // System::BfdItems


class System::BfdItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf echoif; //type: string
        ydk::YLeaf startupintvl; //type: uint16
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::BfdItems::InstItems::IfItems
        class AfItems; //type: System::BfdItems::InstItems::AfItems
        class MhopItems; //type: System::BfdItems::InstItems::MhopItems
        class KaItems; //type: System::BfdItems::InstItems::KaItems
        class SessionItems; //type: System::BfdItems::InstItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::MhopItems> mhop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::KaItems> ka_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems> session_items;
        
}; // System::BfdItems::InstItems


class System::BfdItems::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class IfList; //type: System::BfdItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::BfdItems::InstItems::IfItems


class System::BfdItems::InstItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf echoadminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf trkmbrlnk; //type: BfdTrkMbrLnk
        ydk::YLeaf sttm; //type: uint32
        ydk::YLeaf dst; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class AuthItems; //type: System::BfdItems::InstItems::IfItems::IfList::AuthItems
        class AfItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems
        class NbrItems; //type: System::BfdItems::InstItems::IfItems::IfList::NbrItems
        class IfkaItems; //type: System::BfdItems::InstItems::IfItems::IfList::IfkaItems
        class RtvrfMbrItems; //type: System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::NbrItems> nbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::IfkaItems> ifka_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::BfdItems::InstItems::IfItems::IfList


class System::BfdItems::InstItems::IfItems::IfList::AuthItems : public ydk::Entity
{
    public:
        AuthItems();
        ~AuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authinterop; //type: BfdAuthInterop
        ydk::YLeaf type; //type: BfdAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf hexkeysize; //type: uint8
        ydk::YLeaf hexkey; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::AuthItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems : public ydk::Entity
{
    public:
        AfItems();
        ~AfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfAfList; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList

        ydk::YList ifaf_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::AfItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList : public ydk::Entity
{
    public:
        IfAfList();
        ~IfAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BfdAfT
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf echoadminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        class AuthItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems
        class IfkaItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems> ifka_items;
        
}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems : public ydk::Entity
{
    public:
        AuthItems();
        ~AuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authinterop; //type: BfdAuthInterop
        ydk::YLeaf type; //type: BfdAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf hexkeysize; //type: uint8
        ydk::YLeaf hexkey; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems : public ydk::Entity
{
    public:
        IfkaItems();
        ~IfkaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems


class System::BfdItems::InstItems::IfItems::IfList::NbrItems : public ydk::Entity
{
    public:
        NbrItems();
        ~NbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NbrList; //type: System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList

        ydk::YList nbr_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::NbrItems


class System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList : public ydk::Entity
{
    public:
        NbrList();
        ~NbrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList


class System::BfdItems::InstItems::IfItems::IfList::IfkaItems : public ydk::Entity
{
    public:
        IfkaItems();
        ~IfkaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::IfItems::IfList::IfkaItems


class System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::BfdItems::InstItems::AfItems : public ydk::Entity
{
    public:
        AfItems();
        ~AfItems();

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

        class InstAfList; //type: System::BfdItems::InstItems::AfItems::InstAfList

        ydk::YList instaf_list;
        
}; // System::BfdItems::InstItems::AfItems


class System::BfdItems::InstItems::AfItems::InstAfList : public ydk::Entity
{
    public:
        InstAfList();
        ~InstAfList();

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

        ydk::YLeaf type; //type: BfdAfT
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf name; //type: string
        class KaItems; //type: System::BfdItems::InstItems::AfItems::InstAfList::KaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AfItems::InstAfList::KaItems> ka_items;
        
}; // System::BfdItems::InstItems::AfItems::InstAfList


class System::BfdItems::InstItems::AfItems::InstAfList::KaItems : public ydk::Entity
{
    public:
        KaItems();
        ~KaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::AfItems::InstAfList::KaItems


class System::BfdItems::InstItems::MhopItems : public ydk::Entity
{
    public:
        MhopItems();
        ~MhopItems();

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

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8

}; // System::BfdItems::InstItems::MhopItems


class System::BfdItems::InstItems::KaItems : public ydk::Entity
{
    public:
        KaItems();
        ~KaItems();

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

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::KaItems


class System::BfdItems::InstItems::SessionItems : public ydk::Entity
{
    public:
        SessionItems();
        ~SessionItems();

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

        class SessList; //type: System::BfdItems::InstItems::SessionItems::SessList

        ydk::YList sess_list;
        
}; // System::BfdItems::InstItems::SessionItems


class System::BfdItems::InstItems::SessionItems::SessList : public ydk::Entity
{
    public:
        SessList();
        ~SessList();

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

        ydk::YLeaf discr; //type: uint32
        ydk::YLeaf remotediscr; //type: uint32
        ydk::YLeaf asyncport; //type: uint16
        ydk::YLeaf echoport; //type: uint16
        ydk::YLeaf localmac; //type: string
        ydk::YLeaf remotemac; //type: string
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf destaddr; //type: string
        ydk::YLeaf localtxintvl; //type: uint16
        ydk::YLeaf localrxintvl; //type: uint16
        ydk::YLeaf localdetectmult; //type: uint8
        ydk::YLeaf txintvl; //type: uint16
        ydk::YLeaf echotxintvl; //type: uint16
        ydk::YLeaf rxintvl; //type: uint16
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf authtype; //type: BfdAuthT
        ydk::YLeaf authseqno; //type: uint32
        ydk::YLeaf operst; //type: BfdOperSt
        ydk::YLeaf remoteoperst; //type: BfdOperSt
        ydk::YLeaf diag; //type: BfdDiagCode
        ydk::YLeaf flags; //type: string
        ydk::YLeaf lasttranstime; //type: one of uint64, string
        ydk::YLeaf lastdiag; //type: BfdDiagCode
        ydk::YLeaf lastdowntime; //type: one of uint64, string
        class StatsItems; //type: System::BfdItems::InstItems::SessionItems::SessList::StatsItems
        class PeervItems; //type: System::BfdItems::InstItems::SessionItems::SessList::PeervItems
        class AppItems; //type: System::BfdItems::InstItems::SessionItems::SessList::AppItems
        class RsmbrSessItems; //type: System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::StatsItems> stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::PeervItems> peerv_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::AppItems> app_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems> rsmbrsess_items;
        
}; // System::BfdItems::InstItems::SessionItems::SessList


class System::BfdItems::InstItems::SessionItems::SessList::StatsItems : public ydk::Entity
{
    public:
        StatsItems();
        ~StatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rxcnt; //type: uint64
        ydk::YLeaf rxavg; //type: uint32
        ydk::YLeaf rxmin; //type: uint32
        ydk::YLeaf rxmax; //type: uint32
        ydk::YLeaf lastrxpkt; //type: one of uint64, string
        ydk::YLeaf txcnt; //type: uint64
        ydk::YLeaf txavg; //type: uint32
        ydk::YLeaf txmin; //type: uint32
        ydk::YLeaf txmax; //type: uint32
        ydk::YLeaf lasttxpkt; //type: one of uint64, string
        ydk::YLeaf upcnt; //type: uint32
        ydk::YLeaf downcnt; //type: uint32

}; // System::BfdItems::InstItems::SessionItems::SessList::StatsItems


class System::BfdItems::InstItems::SessionItems::SessList::PeervItems : public ydk::Entity
{
    public:
        PeervItems();
        ~PeervItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diag; //type: BfdDiagCode
        ydk::YLeaf operst; //type: BfdOperSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf mydisc; //type: uint32
        ydk::YLeaf yourdisc; //type: uint32
        ydk::YLeaf mintx; //type: uint16
        ydk::YLeaf minrx; //type: uint16
        ydk::YLeaf minecho; //type: uint16

}; // System::BfdItems::InstItems::SessionItems::SessList::PeervItems


class System::BfdItems::InstItems::SessionItems::SessList::AppItems : public ydk::Entity
{
    public:
        AppItems();
        ~AppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessAppList; //type: System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList

        ydk::YList sessapp_list;
        
}; // System::BfdItems::InstItems::SessionItems::SessList::AppItems


class System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList : public ydk::Entity
{
    public:
        SessAppList();
        ~SessAppList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf data; //type: string
        ydk::YLeaf autoexptime; //type: one of uint64, string

}; // System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList


class System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems : public ydk::Entity
{
    public:
        RsmbrSessItems();
        ~RsmbrSessItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMbrSessList; //type: System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList

        ydk::YList rsmbrsess_list;
        
}; // System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems


class System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList : public ydk::Entity
{
    public:
        RsMbrSessList();
        ~RsMbrSessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList


class System::CfsItems : public ydk::Entity
{
    public:
        CfsItems();
        ~CfsItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::CfsItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CfsItems::InstItems> inst_items;
        
}; // System::CfsItems


class System::CfsItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf distribute; //type: CfsAdminSt
        ydk::YLeaf ethdist; //type: CfsAdminSt
        ydk::YLeaf ipv4dist; //type: CfsAdminSt
        ydk::YLeaf ipv6dist; //type: CfsAdminSt
        ydk::YLeaf ipv4mcast; //type: string
        ydk::YLeaf ipv6mcast; //type: string

}; // System::CfsItems::InstItems


class System::HsrpItems : public ydk::Entity
{
    public:
        HsrpItems();
        ~HsrpItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::HsrpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems> inst_items;
        
}; // System::HsrpItems


class System::HsrpItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::HsrpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems::IfItems> if_items;
        
}; // System::HsrpItems::InstItems


class System::HsrpItems::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class IfList; //type: System::HsrpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::HsrpItems::InstItems::IfItems


class System::HsrpItems::InstItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf version; //type: HsrpHsrpVersion
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf biascope; //type: HsrpBiaScopeType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class GrpItems; //type: System::HsrpItems::InstItems::IfItems::IfList::GrpItems
        class RtvrfMbrItems; //type: System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems::IfItems::IfList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::HsrpItems::InstItems::IfItems::IfList


class System::HsrpItems::InstItems::IfItems::IfList::GrpItems : public ydk::Entity
{
    public:
        GrpItems();
        ~GrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList

        ydk::YList group_list;
        
}; // System::HsrpItems::InstItems::IfItems::IfList::GrpItems


class System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf af; //type: HsrpGroupAf
        ydk::YLeaf ip; //type: string
        ydk::YLeaf ipobtainmode; //type: HsrpGrpIpObtainMode
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf preemptdelaymin; //type: uint16
        ydk::YLeaf preemptdelayreload; //type: uint16
        ydk::YLeaf preemptdelaysync; //type: uint16
        ydk::YLeaf hellointvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf prio; //type: uint16
        ydk::YLeaf fwdlwrthrld; //type: uint16
        ydk::YLeaf fwduprthrld; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf follow; //type: string
        ydk::YLeaf type; //type: HsrpAuthT
        ydk::YLeaf key; //type: string
        ydk::YLeaf mac; //type: string
        class AddrItems; //type: System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems> addr_items;
        
}; // System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList


class System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems : public ydk::Entity
{
    public:
        AddrItems();
        ~AddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrList; //type: System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList

        ydk::YList addr_list;
        
}; // System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems


class System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList : public ydk::Entity
{
    public:
        AddrList();
        ~AddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string

}; // System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList


class System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_42_ */

