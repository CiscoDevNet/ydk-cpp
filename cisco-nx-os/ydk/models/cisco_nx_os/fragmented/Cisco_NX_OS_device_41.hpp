#ifndef _CISCO_NX_OS_DEVICE_41_
#define _CISCO_NX_OS_DEVICE_41_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_40.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList : public ydk::Entity
{
    public:
        RPolicyList();
        ~RPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

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
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::BdItems : public ydk::Entity
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

        class BDList; //type: System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList

        ydk::YList bd_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::BdItems


class System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList : public ydk::Entity
{
    public:
        BDList();
        ~BDList();

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

        ydk::YLeaf bdid; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::BdItems::BDList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems : public ydk::Entity
{
    public:
        GlItems();
        ~GlItems();

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

        class EventHistItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems
        class IgmpsnbaseItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems
        class MctrafItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems
        class GTimersItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems
        class GvlanItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems
        class GdebugItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems
        class ProxyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems> igmpsnbase_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems> mctraf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems> gtimers_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems> gvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems> gdebug_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems> proxy_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems : public ydk::Entity
{
    public:
        EventHistItems();
        ~EventHistItems();

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

        class EventHistoryList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

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

        ydk::YLeaf type; //type: IgmpsnoopEhType
        ydk::YLeaf size; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::EventHistItems::EventHistoryList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems : public ydk::Entity
{
    public:
        IgmpsnbaseItems();
        ~IgmpsnbaseItems();

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

        ydk::YLeaf lookupmac; //type: boolean
        ydk::YLeaf llgrpsuppr; //type: boolean
        ydk::YLeaf reportsuppr; //type: boolean
        ydk::YLeaf v3reportsuppr; //type: boolean
        ydk::YLeaf exptracking; //type: boolean
        ydk::YLeaf igmpsnoop; //type: boolean
        ydk::YLeaf minver; //type: uint16
        ydk::YLeaf maxgrp; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::IgmpsnbaseItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems : public ydk::Entity
{
    public:
        MctrafItems();
        ~MctrafItems();

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

        ydk::YLeaf holddowntimer; //type: uint16
        ydk::YLeaf optmcflood; //type: string
        ydk::YLeaf manytooneenh; //type: string
        ydk::YLeaf vpcpeerlinkexc; //type: boolean
        ydk::YLeaf ccmode; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MctrafItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems : public ydk::Entity
{
    public:
        GTimersItems();
        ~GTimersItems();

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

        ydk::YLeaf fastleave; //type: boolean
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf maxgqmiss; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GTimersItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems : public ydk::Entity
{
    public:
        GvlanItems();
        ~GvlanItems();

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

        ydk::YLeaf disablenvestrtrport; //type: boolean
        ydk::YLeaf vxlan; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GvlanItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems : public ydk::Entity
{
    public:
        GdebugItems();
        ~GdebugItems();

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

        ydk::YLeaf syslogthreshold; //type: uint16
        ydk::YLeaf selfmaccheck; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::GdebugItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems : public ydk::Entity
{
    public:
        MrouterItems();
        ~MrouterItems();

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

        ydk::YLeaf vpcpeerlink; //type: boolean
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems
        class MifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems> mif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList : public ydk::Entity
{
    public:
        TgtIfList();
        ~TgtIfList();

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
        ydk::YLeaf vsi; //type: boolean
        ydk::YLeaf accgrp; //type: boolean
        ydk::YLeaf pfxlist; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems : public ydk::Entity
{
    public:
        MifItems();
        ~MifItems();

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

        class MIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList

        ydk::YList mif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList : public ydk::Entity
{
    public:
        MIfList();
        ~MIfList();

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

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems::MIfList


class System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems : public ydk::Entity
{
    public:
        ProxyItems();
        ~ProxyItems();

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

        ydk::YLeaf maxresptime; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::ProxyItems


class System::IgmpsnoopItems::InstItems::InststatsItems : public ydk::Entity
{
    public:
        InststatsItems();
        ~InststatsItems();

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

        ydk::YLeaf totnummcgrp; //type: uint32
        ydk::YLeaf invpktsrcvd; //type: uint32
        ydk::YLeaf lpbkpktsrcvd; //type: uint32
        ydk::YLeaf pktsflooded; //type: uint32
        ydk::YLeaf mrdlpbkpktsrcvd; //type: uint32
        ydk::YLeaf novlandbpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssent; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssentfail; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvdfail; //type: uint32

}; // System::IgmpsnoopItems::InstItems::InststatsItems


class System::M6ribItems : public ydk::Entity
{
    public:
        M6ribItems();
        ~M6ribItems();

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

        class InstItems; //type: System::M6ribItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems> inst_items;
        
}; // System::M6ribItems


class System::M6ribItems::InstItems : public ydk::Entity
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

        class DbItems; //type: System::M6ribItems::InstItems::DbItems
        class DomItems; //type: System::M6ribItems::InstItems::DomItems
        class RoutedbItems; //type: System::M6ribItems::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems> routedb_items;
        
}; // System::M6ribItems::InstItems


class System::M6ribItems::InstItems::DbItems : public ydk::Entity
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

        class DbList; //type: System::M6ribItems::InstItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::M6ribItems::InstItems::DbItems


class System::M6ribItems::InstItems::DbItems::DbList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: M6ribDbT
        class ClientItems; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems
        class MemestItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems
        class VrfItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems> memest_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems : public ydk::Entity
{
    public:
        ClientItems();
        ~ClientItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClntEntityList; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList

        ydk::YList clntentity_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList : public ydk::Entity
{
    public:
        ClntEntityList();
        ~ClntEntityList();

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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf mtssapid; //type: uint32
        ydk::YLeaf shmemname; //type: string
        ydk::YLeaf notify; //type: boolean
        ydk::YLeaf staletimerrunning; //type: boolean
        ydk::YLeaf ssmowner; //type: boolean
        ydk::YLeaf bidirowner; //type: boolean
        ydk::YLeaf staticowner; //type: boolean
        ydk::YLeaf sharedonlyowner; //type: boolean
        ydk::YLeaf localjoinowner; //type: boolean
        ydk::YLeaf externalowner; //type: boolean
        ydk::YLeaf attachedowner; //type: boolean
        ydk::YLeaf fabricowner; //type: boolean
        class CnotifyItems; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems> cnotify_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems : public ydk::Entity
{
    public:
        CnotifyItems();
        ~CnotifyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientNotifyList; //type: System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList

        ydk::YList clientnotify_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems


class System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList : public ydk::Entity
{
    public:
        ClientNotifyList();
        ~ClientNotifyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf notifyname; //type: string
        ydk::YLeaf sent; //type: uint64
        ydk::YLeaf fail; //type: uint64
        ydk::YLeaf rcvd; //type: uint64
        ydk::YLeaf ackrcvd; //type: uint64
        ydk::YLeaf acksent; //type: uint64
        ydk::YLeaf ackfail; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::ClientItems::ClntEntityList::CnotifyItems::ClientNotifyList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems : public ydk::Entity
{
    public:
        MemestItems();
        ~MemestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrmaxgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems
        class InusegrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems
        class ConfigmaxgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems
        class EstgrpItems; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems> currmaxgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems> inusegrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems> configmaxgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems> estgrp_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems : public ydk::Entity
{
    public:
        CurrmaxgrpItems();
        ~CurrmaxgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CurrMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList

        ydk::YList currmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList : public ydk::Entity
{
    public:
        CurrMaxMBList();
        ~CurrMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::CurrmaxgrpItems::CurrMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems : public ydk::Entity
{
    public:
        InusegrpItems();
        ~InusegrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InUseKBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList

        ydk::YList inusekb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList : public ydk::Entity
{
    public:
        InUseKBList();
        ~InUseKBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::InusegrpItems::InUseKBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems : public ydk::Entity
{
    public:
        ConfigmaxgrpItems();
        ~ConfigmaxgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfiguredMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList

        ydk::YList configuredmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList : public ydk::Entity
{
    public:
        ConfiguredMaxMBList();
        ~ConfiguredMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::ConfigmaxgrpItems::ConfiguredMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems : public ydk::Entity
{
    public:
        EstgrpItems();
        ~EstgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EstMaxMBList; //type: System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList

        ydk::YList estmaxmb_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems


class System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList : public ydk::Entity
{
    public:
        EstMaxMBList();
        ~EstMaxMBList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpcount; //type: uint32
        ydk::YLeaf srcpergrp; //type: uint32
        ydk::YLeaf oifperentry; //type: uint32
        ydk::YLeaf max; //type: uint64

}; // System::M6ribItems::InstItems::DbItems::DbList::MemestItems::EstgrpItems::EstMaxMBList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf totalnumroutes; //type: uint32
        ydk::YLeaf totalnumgroups; //type: uint32
        ydk::YLeaf stargroute; //type: uint32
        ydk::YLeaf sgroute; //type: uint32
        ydk::YLeaf stargprfx; //type: uint32
        class GroupItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf pending; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf statspkts; //type: uint32
        ydk::YLeaf statsbytes; //type: uint32
        ydk::YLeaf statsratebuf; //type: string
        ydk::YLeaf lispsrcrloc; //type: string
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf rpfnbruptime; //type: string
        ydk::YLeaf fabricoif; //type: boolean
        ydk::YLeaf fabricloser; //type: boolean
        ydk::YLeaf numvpcsvioifs; //type: uint32
        ydk::YLeaf routemdtiod; //type: boolean
        ydk::YLeaf mdtencapindex; //type: uint32
        class MpibItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems
        class OifItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems> mpib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems : public ydk::Entity
{
    public:
        MpibItems();
        ~MpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MpibList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList

        ydk::YList mpib_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList : public ydk::Entity
{
    public:
        MpibList();
        ~MpibList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpibname; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf staleroute; //type: boolean

}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
{
    public:
        OifList();
        ~OifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifname; //type: string
        ydk::YLeaf oifuptime; //type: string
        ydk::YLeaf oifrpf; //type: boolean
        ydk::YLeaf oiflispencapentries; //type: uint32
        class LispencapItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems
        class OifmpibItems; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems> lispencap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems> oifmpib_items;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems : public ydk::Entity
{
    public:
        LispencapItems();
        ~LispencapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispEncapList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList

        ydk::YList lispencap_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList : public ydk::Entity
{
    public:
        LispEncapList();
        ~LispEncapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf srcrloc; //type: string
        ydk::YLeaf dstrloc; //type: string

}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems : public ydk::Entity
{
    public:
        OifmpibItems();
        ~OifmpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifMpibList; //type: System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList

        ydk::YList oifmpib_list;
        
}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems


class System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList : public ydk::Entity
{
    public:
        OifMpibList();
        ~OifMpibList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifmpibname; //type: string
        ydk::YLeaf staleoif; //type: boolean
        ydk::YLeaf vpcsvi; //type: boolean

}; // System::M6ribItems::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList


class System::M6ribItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::M6ribItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::M6ribItems::InstItems::DomItems


class System::M6ribItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf autoenable; //type: boolean
        ydk::YLeaf lognbhchng; //type: boolean
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf regratelmt; //type: uint32
        class ConfigItems; //type: System::M6ribItems::InstItems::DomItems::DomList::ConfigItems
        class RpfmeterItems; //type: System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems
        class LasthopmeterItems; //type: System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems
        class EventhistItems; //type: System::M6ribItems::InstItems::DomItems::DomList::EventhistItems
        class LoglevelItems; //type: System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems
        class NotifyItems; //type: System::M6ribItems::InstItems::DomItems::DomList::NotifyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::ConfigItems> config_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems> rpfmeter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems> lasthopmeter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::EventhistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems> loglevel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::DomItems::DomList::NotifyItems> notify_items;
        
}; // System::M6ribItems::InstItems::DomItems::DomList


class System::M6ribItems::InstItems::DomItems::DomList::ConfigItems : public ydk::Entity
{
    public:
        ConfigItems();
        ~ConfigItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdenable; //type: M6ribHoldAdminSt
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf compressbit; //type: boolean

}; // System::M6ribItems::InstItems::DomItems::DomList::ConfigItems


class System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems : public ydk::Entity
{
    public:
        RpfmeterItems();
        ~RpfmeterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hwdropall; //type: boolean
        ydk::YLeaf kbps; //type: uint32
        ydk::YLeaf burstsize; //type: uint32

}; // System::M6ribItems::InstItems::DomItems::DomList::RpfmeterItems


class System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems : public ydk::Entity
{
    public:
        LasthopmeterItems();
        ~LasthopmeterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbps; //type: uint32
        ydk::YLeaf burstsize; //type: uint32

}; // System::M6ribItems::InstItems::DomItems::DomList::LasthopmeterItems


class System::M6ribItems::InstItems::DomItems::DomList::EventhistItems : public ydk::Entity
{
    public:
        EventhistItems();
        ~EventhistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventHistoryList; //type: System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::M6ribItems::InstItems::DomItems::DomList::EventhistItems


class System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: M6ribEhType
        ydk::YLeaf size; //type: uint32

}; // System::M6ribItems::InstItems::DomItems::DomList::EventhistItems::EventHistoryList


class System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems : public ydk::Entity
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

        ydk::YLeaf level; //type: uint16
        ydk::YLeaf type; //type: string

}; // System::M6ribItems::InstItems::DomItems::DomList::LoglevelItems


class System::M6ribItems::InstItems::DomItems::DomList::NotifyItems : public ydk::Entity
{
    public:
        NotifyItems();
        ~NotifyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // System::M6ribItems::InstItems::DomItems::DomList::NotifyItems


class System::M6ribItems::InstItems::RoutedbItems : public ydk::Entity
{
    public:
        RoutedbItems();
        ~RoutedbItems();

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

        class VrfItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems> vrf_items;
        
}; // System::M6ribItems::InstItems::RoutedbItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

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

        class VrfList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf totalnumroutes; //type: uint32
        ydk::YLeaf totalnumgroups; //type: uint32
        ydk::YLeaf stargroute; //type: uint32
        ydk::YLeaf sgroute; //type: uint32
        ydk::YLeaf stargprfx; //type: uint32
        class GroupItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf pending; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf statspkts; //type: uint32
        ydk::YLeaf statsbytes; //type: uint32
        ydk::YLeaf statsratebuf; //type: string
        ydk::YLeaf lispsrcrloc; //type: string
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf internal; //type: boolean
        ydk::YLeaf rpfnbruptime; //type: string
        ydk::YLeaf fabricoif; //type: boolean
        ydk::YLeaf fabricloser; //type: boolean
        ydk::YLeaf numvpcsvioifs; //type: uint32
        ydk::YLeaf routemdtiod; //type: boolean
        ydk::YLeaf mdtencapindex; //type: uint32
        class MpibItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems
        class OifItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems> mpib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems : public ydk::Entity
{
    public:
        MpibItems();
        ~MpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MpibList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList

        ydk::YList mpib_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList : public ydk::Entity
{
    public:
        MpibList();
        ~MpibList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpibname; //type: string
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf staleroute; //type: boolean

}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
{
    public:
        OifList();
        ~OifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifname; //type: string
        ydk::YLeaf oifuptime; //type: string
        ydk::YLeaf oifrpf; //type: boolean
        ydk::YLeaf oiflispencapentries; //type: uint32
        class LispencapItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems
        class OifmpibItems; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems> lispencap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems> oifmpib_items;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems : public ydk::Entity
{
    public:
        LispencapItems();
        ~LispencapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispEncapList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList

        ydk::YList lispencap_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList : public ydk::Entity
{
    public:
        LispEncapList();
        ~LispEncapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf srcrloc; //type: string
        ydk::YLeaf dstrloc; //type: string

}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispencapItems::LispEncapList


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems : public ydk::Entity
{
    public:
        OifmpibItems();
        ~OifmpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifMpibList; //type: System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList

        ydk::YList oifmpib_list;
        
}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems


class System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList : public ydk::Entity
{
    public:
        OifMpibList();
        ~OifMpibList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifmpibname; //type: string
        ydk::YLeaf staleoif; //type: boolean
        ydk::YLeaf vpcsvi; //type: boolean

}; // System::M6ribItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifmpibItems::OifMpibList


class System::MacsecItems : public ydk::Entity
{
    public:
        MacsecItems();
        ~MacsecItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::MacsecItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems> inst_items;
        
}; // System::MacsecItems


class System::MacsecItems::InstItems : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

}; // System::MacsecItems::InstItems


class System::McastfwdItems : public ydk::Entity
{
    public:
        McastfwdItems();
        ~McastfwdItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::McastfwdItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McastfwdItems::InstItems> inst_items;
        
}; // System::McastfwdItems


class System::McastfwdItems::InstItems : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf nrdelay; //type: uint16
        ydk::YLeaf nrnumrt; //type: uint16
        ydk::YLeaf regstop; //type: boolean
        class DomItems; //type: System::McastfwdItems::InstItems::DomItems
        class EventhistItems; //type: System::McastfwdItems::InstItems::EventhistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McastfwdItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McastfwdItems::InstItems::EventhistItems> eventhist_items;
        
}; // System::McastfwdItems::InstItems


class System::McastfwdItems::InstItems::DomItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf autoenable; //type: boolean
        ydk::YLeaf lognbhchng; //type: boolean
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf regratelmt; //type: uint32

}; // System::McastfwdItems::InstItems::DomItems


class System::McastfwdItems::InstItems::EventhistItems : public ydk::Entity
{
    public:
        EventhistItems();
        ~EventhistItems();

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

        class EventHistoryList; //type: System::McastfwdItems::InstItems::EventhistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::McastfwdItems::InstItems::EventhistItems


class System::McastfwdItems::InstItems::EventhistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

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

        ydk::YLeaf type; //type: McastfwdEhType
        ydk::YLeaf size; //type: uint32

}; // System::McastfwdItems::InstItems::EventhistItems::EventHistoryList


class System::MldsnoopItems : public ydk::Entity
{
    public:
        MldsnoopItems();
        ~MldsnoopItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::MldsnoopItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems> inst_items;
        
}; // System::MldsnoopItems


class System::MldsnoopItems::InstItems : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf allrtrmcastencap; //type: string
        ydk::YLeaf flags; //type: string
        class DomItems; //type: System::MldsnoopItems::InstItems::DomItems
        class InststatsItems; //type: System::MldsnoopItems::InstItems::InststatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::InststatsItems> inststats_items;
        
}; // System::MldsnoopItems::InstItems


class System::MldsnoopItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::MldsnoopItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::MldsnoopItems::InstItems::DomItems


class System::MldsnoopItems::InstItems::DomItems::DomList : public ydk::Entity
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

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf flags; //type: string
        class DbItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems
        class DomstatsItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems
        class StrtrifItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems
        class RtrifItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems
        class QuerierpItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems
        class QuerierstItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems> strtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems> rtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems> querierp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems> querierst_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IpmcsnoopDbT
        ydk::YLeaf name; //type: string
        ydk::YLeaf totalmaccount; //type: uint32
        class McgrpItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems> mcgrp_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems : public ydk::Entity
{
    public:
        McgrpItems();
        ~McgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McGrpRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList

        ydk::YList mcgrprec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList : public ydk::Entity
{
    public:
        McGrpRecList();
        ~McGrpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: McastVer
        class EpgItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems
        class RepItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems> epg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems> rep_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems : public ydk::Entity
{
    public:
        EpgItems();
        ~EpgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpgRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList

        ydk::YList epgrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList : public ydk::Entity
{
    public:
        EpgRecList();
        ~EpgRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        class RepItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems> rep_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems : public ydk::Entity
{
    public:
        RepItems();
        ~RepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList : public ydk::Entity
{
    public:
        ReportRecList();
        ~ReportRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastsrc; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        ydk::YLeaf filtmode; //type: McastFiltMode
        ydk::YLeaf flags; //type: string
        class OifItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OIFRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
{
    public:
        OIFRecList();
        ~OIFRecList();

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
        ydk::YLeaf name; //type: string
        class HostItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
{
    public:
        HostRecList();
        ~HostRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string

}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems : public ydk::Entity
{
    public:
        RepItems();
        ~RepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList : public ydk::Entity
{
    public:
        ReportRecList();
        ~ReportRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mcastsrc; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        ydk::YLeaf filtmode; //type: McastFiltMode
        ydk::YLeaf flags; //type: string
        class OifItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OIFRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
{
    public:
        OIFRecList();
        ~OIFRecList();

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
        ydk::YLeaf name; //type: string
        class HostItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostRecList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


class System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
{
    public:
        HostRecList();
        ~HostRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string

}; // System::MldsnoopItems::InstItems::DomItems::DomList::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems : public ydk::Entity
{
    public:
        DomstatsItems();
        ~DomstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::MldsnoopItems::InstItems::DomItems::DomList::DomstatsItems


class System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems : public ydk::Entity
{
    public:
        StrtrifItems();
        ~StrtrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StRtrIfList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList

        ydk::YList strtrif_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems


class System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList : public ydk::Entity
{
    public:
        StRtrIfList();
        ~StRtrIfList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf encap; //type: string
        class RtvrfMbrItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList


class System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtvrfMbrItems


class System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems


class System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::MldsnoopItems::InstItems::DomItems::DomList::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems : public ydk::Entity
{
    public:
        RtrifItems();
        ~RtrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtrIfList; //type: System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList

        ydk::YList rtrif_list;
        
}; // System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems


class System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList : public ydk::Entity
{
    public:
        RtrIfList();
        ~RtrIfList();

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

}; // System::MldsnoopItems::InstItems::DomItems::DomList::RtrifItems::RtrIfList


class System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems : public ydk::Entity
{
    public:
        QuerierpItems();
        ~QuerierpItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf timeout; //type: uint16

}; // System::MldsnoopItems::InstItems::DomItems::DomList::QuerierpItems


class System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems : public ydk::Entity
{
    public:
        QuerierstItems();
        ~QuerierstItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf flags; //type: string

}; // System::MldsnoopItems::InstItems::DomItems::DomList::QuerierstItems


class System::MldsnoopItems::InstItems::InststatsItems : public ydk::Entity
{
    public:
        InststatsItems();
        ~InststatsItems();

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


}; // System::MldsnoopItems::InstItems::InststatsItems


class System::MplsItems : public ydk::Entity
{
    public:
        MplsItems();
        ~MplsItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class IfItems; //type: System::MplsItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsItems::IfItems> if_items;
        
}; // System::MplsItems


class System::MplsItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::MplsItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::MplsItems::IfItems


class System::MplsItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf operst; //type: MplsOperSt
        ydk::YLeaf deleted; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class RtvrfMbrItems; //type: System::MplsItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::MplsItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::MplsItems::IfItems::IfList


class System::MplsItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::MplsItems::IfItems::IfList::RtvrfMbrItems


class System::MplsItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::MplsItems::IfItems::IfList::RtnwPathToIfItems


class System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::MplsItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MplsstaticItems : public ydk::Entity
{
    public:
        MplsstaticItems();
        ~MplsstaticItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class AfItems; //type: System::MplsstaticItems::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems> af_items;
        
}; // System::MplsstaticItems


class System::MplsstaticItems::AfItems : public ydk::Entity
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

        class AfList; //type: System::MplsstaticItems::AfItems::AfList

        ydk::YList af_list;
        
}; // System::MplsstaticItems::AfItems


class System::MplsstaticItems::AfItems::AfList : public ydk::Entity
{
    public:
        AfList();
        ~AfList();

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

        ydk::YLeaf type; //type: MplsstaticAfT
        ydk::YLeaf name; //type: string
        class PfxlabelItems; //type: System::MplsstaticItems::AfItems::AfList::PfxlabelItems
        class LspItems; //type: System::MplsstaticItems::AfItems::AfList::LspItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::PfxlabelItems> pfxlabel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::LspItems> lsp_items;
        
}; // System::MplsstaticItems::AfItems::AfList


class System::MplsstaticItems::AfItems::AfList::PfxlabelItems : public ydk::Entity
{
    public:
        PfxlabelItems();
        ~PfxlabelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxLclLblList; //type: System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList

        ydk::YList pfxlcllbl_list;
        
}; // System::MplsstaticItems::AfItems::AfList::PfxlabelItems


class System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList : public ydk::Entity
{
    public:
        PfxLclLblList();
        ~PfxLclLblList();

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
        ydk::YLeaf pfx; //type: string
        class NhItems; //type: System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems
        class AutoresolvenhItems; //type: System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems
        class BackupnhItems; //type: System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems> autoresolvenh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems> backupnh_items;
        
}; // System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList


class System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems : public ydk::Entity
{
    public:
        NhItems();
        ~NhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outlbl; //type: uint32
        ydk::YLeaf nhaddr; //type: string

}; // System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::NhItems


class System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems : public ydk::Entity
{
    public:
        AutoresolvenhItems();
        ~AutoresolvenhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outlbl; //type: uint32

}; // System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::AutoresolvenhItems


class System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems : public ydk::Entity
{
    public:
        BackupnhItems();
        ~BackupnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outlbl; //type: uint32
        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf if_; //type: string

}; // System::MplsstaticItems::AfItems::AfList::PfxlabelItems::PfxLclLblList::BackupnhItems


class System::MplsstaticItems::AfItems::AfList::LspItems : public ydk::Entity
{
    public:
        LspItems();
        ~LspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NamedLSPList; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList

        ydk::YList namedlsp_list;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList : public ydk::Entity
{
    public:
        NamedLSPList();
        ~NamedLSPList();

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
        class XclabelItems; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems
        class PollabelItems; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems> xclabel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems> pollabel_items;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems : public ydk::Entity
{
    public:
        XclabelItems();
        ~XclabelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XcLclLblList; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList

        ydk::YList xclcllbl_list;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList : public ydk::Entity
{
    public:
        XcLclLblList();
        ~XcLclLblList();

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
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems> nh_items;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems : public ydk::Entity
{
    public:
        NhItems();
        ~NhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XcNhList; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList

        ydk::YList xcnh_list;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList : public ydk::Entity
{
    public:
        XcNhList();
        ~XcNhList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pathid; //type: uint16
        ydk::YLeaf outlblstack; //type: string
        ydk::YLeaf nhaddr; //type: string

}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::XclabelItems::XcLclLblList::NhItems::XcNhList


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems : public ydk::Entity
{
    public:
        PollabelItems();
        ~PollabelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyLclLblList; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList

        ydk::YList policylcllbl_list;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList : public ydk::Entity
{
    public:
        PolicyLclLblList();
        ~PolicyLclLblList();

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
        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems> nh_items;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems : public ydk::Entity
{
    public:
        NhItems();
        ~NhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolNhList; //type: System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList

        ydk::YList polnh_list;
        
}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems


class System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList : public ydk::Entity
{
    public:
        PolNhList();
        ~PolNhList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pathid; //type: uint16
        ydk::YLeaf outlblstack; //type: string
        ydk::YLeaf nhaddr; //type: string

}; // System::MplsstaticItems::AfItems::AfList::LspItems::NamedLSPList::PollabelItems::PolicyLclLblList::NhItems::PolNhList


class System::LabeltableItems : public ydk::Entity
{
    public:
        LabeltableItems();
        ~LabeltableItems();

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

        ydk::YLeaf operlabels; //type: uint32
        ydk::YLeaf operipv4prefixes; //type: uint32
        ydk::YLeaf operipv6prefixes; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class ClientItems; //type: System::LabeltableItems::ClientItems
        class LblrangeItems; //type: System::LabeltableItems::LblrangeItems
        class LblItems; //type: System::LabeltableItems::LblItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblrangeItems> lblrange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems> lbl_items;
        
}; // System::LabeltableItems


class System::LabeltableItems::ClientItems : public ydk::Entity
{
    public:
        ClientItems();
        ~ClientItems();

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

        class ClientsList; //type: System::LabeltableItems::ClientItems::ClientsList

        ydk::YList clients_list;
        
}; // System::LabeltableItems::ClientItems


class System::LabeltableItems::ClientItems::ClientsList : public ydk::Entity
{
    public:
        ClientsList();
        ~ClientsList();

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
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf uuid; //type: uint32
        ydk::YLeaf mtssap; //type: uint32
        ydk::YLeaf staletime; //type: string
        ydk::YLeaf flag; //type: string
        ydk::YLeaf regmsg; //type: uint32
        ydk::YLeaf convmsg; //type: uint32
        ydk::YLeaf fecmsg; //type: uint32
        ydk::YLeaf fecadd; //type: uint32
        ydk::YLeaf ileadd; //type: uint32
        ydk::YLeaf fecdel; //type: uint32
        ydk::YLeaf iledel; //type: uint32
        ydk::YLeaf lastxid; //type: uint32
        ydk::YLeaf fecack; //type: uint32

}; // System::LabeltableItems::ClientItems::ClientsList


class System::LabeltableItems::LblrangeItems : public ydk::Entity
{
    public:
        LblrangeItems();
        ~LblrangeItems();

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

        ydk::YLeaf dynlblmin; //type: uint32
        ydk::YLeaf dynlblmax; //type: uint32
        ydk::YLeaf staticlblmin; //type: uint32
        ydk::YLeaf staticlblmax; //type: uint32
        ydk::YLeaf operdynlblmin; //type: uint32
        ydk::YLeaf operdynlblmax; //type: uint32
        ydk::YLeaf operstaticlblmin; //type: uint32
        ydk::YLeaf operstaticlblmax; //type: uint32
        ydk::YLeaf operstaticlblsoutofrange; //type: uint32

}; // System::LabeltableItems::LblrangeItems


class System::LabeltableItems::LblItems : public ydk::Entity
{
    public:
        LblItems();
        ~LblItems();

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

        class LabelsList; //type: System::LabeltableItems::LblItems::LabelsList

        ydk::YList labels_list;
        
}; // System::LabeltableItems::LblItems


class System::LabeltableItems::LblItems::LabelsList : public ydk::Entity
{
    public:
        LabelsList();
        ~LabelsList();

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

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf fectype; //type: string
        ydk::YLeaf labelbytestats; //type: uint64
        ydk::YLeaf labelpacketstats; //type: uint64
        class FecIPv4Items; //type: System::LabeltableItems::LblItems::LabelsList::FecIPv4Items
        class FecIPv6Items; //type: System::LabeltableItems::LblItems::LabelsList::FecIPv6Items
        class FecPolicyIPv4Items; //type: System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items
        class FecPolicyIPv6Items; //type: System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items
        class FecNoneItems; //type: System::LabeltableItems::LblItems::LabelsList::FecNoneItems
        class FecSRTEItems; //type: System::LabeltableItems::LblItems::LabelsList::FecSRTEItems
        class FecPerCEItems; //type: System::LabeltableItems::LblItems::LabelsList::FecPerCEItems
        class FecReservedItems; //type: System::LabeltableItems::LblItems::LabelsList::FecReservedItems
        class FecDeaggItems; //type: System::LabeltableItems::LblItems::LabelsList::FecDeaggItems
        class FecAdjSIDItems; //type: System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems
        class NhlfeItems; //type: System::LabeltableItems::LblItems::LabelsList::NhlfeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecIPv4Items> fecipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecIPv6Items> fecipv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items> fecpolicyipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items> fecpolicyipv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecNoneItems> fecnone_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecSRTEItems> fecsrte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecPerCEItems> fecperce_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecReservedItems> fecreserved_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecDeaggItems> fecdeagg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems> fecadjsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems::LblItems::LabelsList::NhlfeItems> nhlfe_items;
        
}; // System::LabeltableItems::LblItems::LabelsList


class System::LabeltableItems::LblItems::LabelsList::FecIPv4Items : public ydk::Entity
{
    public:
        FecIPv4Items();
        ~FecIPv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf masklength; //type: uint8

}; // System::LabeltableItems::LblItems::LabelsList::FecIPv4Items


class System::LabeltableItems::LblItems::LabelsList::FecIPv6Items : public ydk::Entity
{
    public:
        FecIPv6Items();
        ~FecIPv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf masklength; //type: uint8

}; // System::LabeltableItems::LblItems::LabelsList::FecIPv6Items


class System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items : public ydk::Entity
{
    public:
        FecPolicyIPv4Items();
        ~FecPolicyIPv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf masklength; //type: uint8

}; // System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv4Items


class System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items : public ydk::Entity
{
    public:
        FecPolicyIPv6Items();
        ~FecPolicyIPv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf masklength; //type: uint8

}; // System::LabeltableItems::LblItems::LabelsList::FecPolicyIPv6Items


class System::LabeltableItems::LblItems::LabelsList::FecNoneItems : public ydk::Entity
{
    public:
        FecNoneItems();
        ~FecNoneItems();

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
        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string

}; // System::LabeltableItems::LblItems::LabelsList::FecNoneItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_41_ */

