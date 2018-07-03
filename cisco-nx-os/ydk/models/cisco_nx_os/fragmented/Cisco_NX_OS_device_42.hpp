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


class System::MribItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::MribItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::MribItems::InstItems::DomItems


class System::MribItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class ConfigItems; //type: System::MribItems::InstItems::DomItems::DomList::ConfigItems
        class EventHistItems; //type: System::MribItems::InstItems::DomItems::DomList::EventHistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::DomItems::DomList::ConfigItems> config_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::DomItems::DomList::EventHistItems> eventhist_items;
        
}; // System::MribItems::InstItems::DomItems::DomList


class System::MribItems::InstItems::DomItems::DomList::ConfigItems : public ydk::Entity
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

        ydk::YLeaf holdenable; //type: MribHoldAdminSt
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf modeenable; //type: MribModeAdminSt
        ydk::YLeaf mode; //type: MribMultipathMode
        ydk::YLeaf moderesilient; //type: boolean

}; // System::MribItems::InstItems::DomItems::DomList::ConfigItems


class System::MribItems::InstItems::DomItems::DomList::EventHistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::MribItems::InstItems::DomItems::DomList::EventHistItems


class System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: MribEhType
        ydk::YLeaf size; //type: uint32

}; // System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList


class System::MribItems::InstItems::RouteDbItems : public ydk::Entity
{
    public:
        RouteDbItems();
        ~RouteDbItems();

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

        class VrfItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems> vrf_items;
        
}; // System::MribItems::InstItems::RouteDbItems


class System::MribItems::InstItems::RouteDbItems::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList : public ydk::Entity
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
        ydk::YLeaf totalnumroutes; //type: uint32
        ydk::YLeaf stargroute; //type: uint32
        ydk::YLeaf sgroute; //type: uint32
        ydk::YLeaf stargprfx; //type: uint32
        class GroupItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        class SourceItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        class MpibItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems
        class OifItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems> mpib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems : public ydk::Entity
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

        class MpibList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList

        ydk::YList mpib_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList : public ydk::Entity
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

}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
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
        class LispEncapItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems
        class OifMpibItems; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems> lispencap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems> oifmpib_items;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems : public ydk::Entity
{
    public:
        LispEncapItems();
        ~LispEncapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispEncapList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList

        ydk::YList lispencap_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList : public ydk::Entity
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

}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems : public ydk::Entity
{
    public:
        OifMpibItems();
        ~OifMpibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifMpibList; //type: System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList

        ydk::YList oifmpib_list;
        
}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems


class System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList : public ydk::Entity
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

}; // System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList


class System::MsdpItems : public ydk::Entity
{
    public:
        MsdpItems();
        ~MsdpItems();

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
        class InstItems; //type: System::MsdpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems> inst_items;
        
}; // System::MsdpItems


class System::MsdpItems::InstItems : public ydk::Entity
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
        class DomItems; //type: System::MsdpItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems> dom_items;
        
}; // System::MsdpItems::InstItems


class System::MsdpItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::MsdpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::MsdpItems::InstItems::DomItems


class System::MsdpItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf origif; //type: string
        ydk::YLeaf srcactivemsgintvl; //type: uint16
        ydk::YLeaf reconnintvl; //type: uint16
        ydk::YLeaf ctrl; //type: string
        class DbItems; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems
        class MaxgrpItems; //type: System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems
        class EventHistItems; //type: System::MsdpItems::InstItems::DomItems::DomList::EventHistItems
        class PeerItems; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems
        class InterleakpItems; //type: System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems> maxgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::PeerItems> peer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems> interleakp_items;
        
}; // System::MsdpItems::InstItems::DomItems::DomList


class System::MsdpItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems


class System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: MsdpDbT
        ydk::YLeaf name; //type: string
        class SrcItems; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems
        class SourceItems; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems> source_items;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList


class System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList

        ydk::YList route_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems


class System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src; //type: string
        ydk::YLeaf grp; //type: string
        ydk::YLeaf rp; //type: string
        ydk::YLeaf peer; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf expirets; //type: string
        ydk::YLeaf sacnt; //type: uint32
        ydk::YLeaf datapkt; //type: uint32

}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList


class System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems


class System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf grpcnt; //type: uint32
        ydk::YLeaf grplimit; //type: uint32
        ydk::YLeaf srcpfx; //type: string
        ydk::YLeaf violations; //type: uint32

}; // System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList


class System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems : public ydk::Entity
{
    public:
        MaxgrpItems();
        ~MaxgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxGrpPList; //type: System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList

        ydk::YList maxgrpp_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems


class System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList : public ydk::Entity
{
    public:
        MaxGrpPList();
        ~MaxGrpPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcpfx; //type: string
        ydk::YLeaf maxgrp; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList


class System::MsdpItems::InstItems::DomItems::DomList::EventHistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::EventHistItems


class System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: MsdpEhType
        ydk::YLeaf size; //type: uint32

}; // System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems : public ydk::Entity
{
    public:
        PeerItems();
        ~PeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerList; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList

        ydk::YList peer_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList : public ydk::Entity
{
    public:
        PeerList();
        ~PeerList();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf srcactivemsglimit; //type: uint32
        ydk::YLeaf kaintvl; //type: uint16
        ydk::YLeaf katimeout; //type: uint16
        ydk::YLeaf operst; //type: MsdpOperSt
        ydk::YLeaf remport; //type: uint16
        ydk::YLeaf localport; //type: uint16
        ydk::YLeaf lastresetoperqual; //type: string
        ydk::YLeaf discontinuityts; //type: string
        ydk::YLeaf upts; //type: string
        ydk::YLeaf conntmrts; //type: string
        ydk::YLeaf establishtransitions; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf name; //type: string
        class AuthItems; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems
        class MeshgrpItems; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems
        class RtctrlItems; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems
        class PeerstatsItems; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems> meshgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems> rtctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems> peerstats_items;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems : public ydk::Entity
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

        ydk::YLeaf type; //type: MsdpAuthT
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems : public ydk::Entity
{
    public:
        MeshgrpItems();
        ~MeshgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems : public ydk::Entity
{
    public:
        RtctrlItems();
        ~RtctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtCtrlPList; //type: System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList

        ydk::YList rtctrlp_list;
        
}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList : public ydk::Entity
{
    public:
        RtCtrlPList();
        ~RtCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: RtctrlRtCtrlDir
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rtmap; //type: string

}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList


class System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems : public ydk::Entity
{
    public:
        PeerstatsItems();
        ~PeerstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastmessagercvd; //type: string
        ydk::YLeaf sareqrcvd; //type: uint32
        ydk::YLeaf sareqsent; //type: uint32
        ydk::YLeaf sarsprcvd; //type: uint32
        ydk::YLeaf sarspsent; //type: uint32
        ydk::YLeaf ctrlmessagesrcvd; //type: uint32
        ydk::YLeaf ctrlmessagessent; //type: uint32
        ydk::YLeaf datamessagesrcvd; //type: uint32
        ydk::YLeaf datamessagessent; //type: uint32
        ydk::YLeaf notifrcvd; //type: uint32
        ydk::YLeaf notifsent; //type: uint32
        ydk::YLeaf karcvd; //type: uint32
        ydk::YLeaf kasent; //type: uint32
        ydk::YLeaf rpfchkfail; //type: uint32
        ydk::YLeaf connattempts; //type: uint32
        ydk::YLeaf rtcnt; //type: uint32

}; // System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems


class System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems : public ydk::Entity
{
    public:
        InterleakpItems();
        ~InterleakpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems


class System::NdItems : public ydk::Entity
{
    public:
        NdItems();
        ~NdItems();

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
        class InstItems; //type: System::NdItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems> inst_items;
        
}; // System::NdItems


class System::NdItems::InstItems : public ydk::Entity
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

        ydk::YLeaf solicitnghbradvertisement; //type: NwAdminSt_
        ydk::YLeaf acceptsolicitnghbrentry; //type: NdSolicitAcceptValue
        ydk::YLeaf probeintervalforsolicitnghbr; //type: uint16
        ydk::YLeaf aginginterval; //type: uint16
        ydk::YLeaf offlisttimeout; //type: uint16
        ydk::YLeaf ipv6adjroutedistance; //type: uint32
        ydk::YLeaf cachelimit; //type: uint32
        ydk::YLeaf cachesyslograte; //type: uint32
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::NdItems::InstItems::DomItems
        class Ipv6gleanthrottleItems; //type: System::NdItems::InstItems::Ipv6gleanthrottleItems
        class VpcItems; //type: System::NdItems::InstItems::VpcItems
        class OffliststatItems; //type: System::NdItems::InstItems::OffliststatItems
        class GlblpktstatsItems; //type: System::NdItems::InstItems::GlblpktstatsItems
        class VaddrllstatItems; //type: System::NdItems::InstItems::VaddrllstatItems
        class VpcstatItems; //type: System::NdItems::InstItems::VpcstatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::Ipv6gleanthrottleItems> ipv6gleanthrottle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::OffliststatItems> offliststat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::GlblpktstatsItems> glblpktstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::VaddrllstatItems> vaddrllstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::VpcstatItems> vpcstat_items;
        
}; // System::NdItems::InstItems


class System::NdItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::NdItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::NdItems::InstItems::DomItems


class System::NdItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::NdItems::InstItems::DomItems::DomList::DbItems
        class IfItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems
        class VaddrstatglobalItems; //type: System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems> vaddrstatglobal_items;
        
}; // System::NdItems::InstItems::DomItems::DomList


class System::NdItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::NdItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::DbItems


class System::NdItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: NdDbT
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems> adj_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::DbItems::DbList


class System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems


class System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf operst; //type: NdAdjOperSt
        ydk::YLeaf physifid; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList


class System::NdItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf macextract; //type: NdMacExtract
        ydk::YLeaf dnssuppress; //type: NwAdminSt_
        ydk::YLeaf dnssearchlistsuppress; //type: NwAdminSt_
        ydk::YLeaf routesuppress; //type: NwAdminSt_
        ydk::YLeaf routerpreference; //type: NdRtPrefForCmd
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf nsintvl; //type: uint32
        ydk::YLeaf raintvl; //type: uint16
        ydk::YLeaf raintvlmin; //type: uint16
        ydk::YLeaf hoplimit; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf ralifetime; //type: uint16
        ydk::YLeaf reachabletime; //type: uint32
        ydk::YLeaf retranstimer; //type: uint32
        ydk::YLeaf dadattempts; //type: uint16
        ydk::YLeaf dadnsinterval; //type: uint16
        ydk::YLeaf configerror; //type: NdConfigErr
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class SadjItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems
        class DnsslifItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems
        class DnsstatItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems
        class RoutesItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems
        class PfxItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems
        class DefpfxItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems
        class DnsItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems
        class DnsslItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems
        class RtrstatItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems
        class IfstatsItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems
        class VaddrstatItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems
        class RtvrfMbrItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems> sadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems> dnsslif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems> dnsstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems> routes_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems> pfx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems> defpfx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems> dns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems> dnssl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems> rtrstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems> vaddrstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems : public ydk::Entity
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

        class StAdjEpList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList

        ydk::YList stadjep_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf operst; //type: NdStAdjOperSt
        ydk::YLeaf operstqual; //type: NdStAdjOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: string
        class RtfvEpDefRefToStAdjEpV6Items; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items> rtfvepdefreftostadjepv6_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items : public ydk::Entity
{
    public:
        RtfvEpDefRefToStAdjEpV6Items();
        ~RtfvEpDefRefToStAdjEpV6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefRefToStAdjEpV6List; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List

        ydk::YList rtfvepdefreftostadjepv6_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List : public ydk::Entity
{
    public:
        RtFvEpDefRefToStAdjEpV6List();
        ~RtFvEpDefRefToStAdjEpV6List();

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

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems : public ydk::Entity
{
    public:
        DnsslifItems();
        ~DnsslifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dnssearchlistsuppress; //type: boolean
        class ServerItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems> server_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems : public ydk::Entity
{
    public:
        ServerItems();
        ~ServerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DNSSearchListStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList

        ydk::YList dnssearchliststats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList : public ydk::Entity
{
    public:
        DNSSearchListStatsList();
        ~DNSSearchListStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dnssearchlist; //type: string
        ydk::YLeaf dnssearchlistlife; //type: uint32
        ydk::YLeaf dnssearchlistseq; //type: uint32

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems : public ydk::Entity
{
    public:
        DnsstatItems();
        ~DnsstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dnsserversuppress; //type: boolean
        class ServerItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems> server_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems : public ydk::Entity
{
    public:
        ServerItems();
        ~ServerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DNSServerStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList

        ydk::YList dnsserverstats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList : public ydk::Entity
{
    public:
        DNSServerStatsList();
        ~DNSServerStatsList();

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
        ydk::YLeaf dnsserverlife; //type: uint32
        ydk::YLeaf dnsserverseq; //type: uint32

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems : public ydk::Entity
{
    public:
        RoutesItems();
        ~RoutesItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems> rt_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ndrouteaddr; //type: string
        ydk::YLeaf ndroutelifetime; //type: uint32
        ydk::YLeaf ndroutelifetimeinfinite; //type: NwAdminSt_
        ydk::YLeaf routepreference; //type: NdRtPrefForNdRt
        ydk::YLeaf verifyreachability; //type: NwAdminSt_

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems : public ydk::Entity
{
    public:
        PfxItems();
        ~PfxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList

        ydk::YList pfx_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList : public ydk::Entity
{
    public:
        PfxList();
        ~PfxList();

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
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf preflifetime; //type: uint32
        ydk::YLeaf ctrl; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems : public ydk::Entity
{
    public:
        DefpfxItems();
        ~DefpfxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf defprefix; //type: NwAdminSt_
        ydk::YLeaf deflifetime; //type: uint32
        ydk::YLeaf defpreflifetime; //type: uint32
        ydk::YLeaf ctrl; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems : public ydk::Entity
{
    public:
        DnsItems();
        ~DnsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteAdvDNSServerList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList

        ydk::YList routeadvdnsserver_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList : public ydk::Entity
{
    public:
        RouteAdvDNSServerList();
        ~RouteAdvDNSServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dnsserveraddr; //type: string
        ydk::YLeaf dnssequencenum; //type: uint32
        ydk::YLeaf dnsserverlifetime; //type: uint32
        ydk::YLeaf dnsserverlifetimeinfinite; //type: NwAdminSt_
        ydk::YLeaf dnsserver; //type: NwAdminSt_

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems : public ydk::Entity
{
    public:
        DnsslItems();
        ~DnsslItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteAdvDNSSearchListList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList

        ydk::YList routeadvdnssearchlist_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList : public ydk::Entity
{
    public:
        RouteAdvDNSSearchListList();
        ~RouteAdvDNSSearchListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dnssearchlistname; //type: string
        ydk::YLeaf dnssequencenum; //type: uint32
        ydk::YLeaf dnssearchlistlifetime; //type: uint32
        ydk::YLeaf dnssearchlistlifetimeinfinite; //type: NwAdminSt_
        ydk::YLeaf dnssl; //type: NwAdminSt_

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems : public ydk::Entity
{
    public:
        RtrstatItems();
        ~RtrstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouterStatList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList

        ydk::YList routerstat_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList : public ydk::Entity
{
    public:
        RouterStatList();
        ~RouterStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routeraddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf lastupdatetime; //type: decimal64
        ydk::YLeaf hoplimit; //type: uint32
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf addrflag; //type: uint16
        ydk::YLeaf otherflag; //type: uint16
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf homeagentflag; //type: uint16
        ydk::YLeaf preference; //type: NdRouterPreference
        ydk::YLeaf reachabletime; //type: uint64
        ydk::YLeaf retransmissiontime; //type: uint64
        class PfxstatItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems> pfxstat_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems : public ydk::Entity
{
    public:
        PfxstatItems();
        ~PfxstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RaPrefixStatList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList

        ydk::YList raprefixstat_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList : public ydk::Entity
{
    public:
        RaPrefixStatList();
        ~RaPrefixStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefixaddr; //type: string
        ydk::YLeaf onlinkflag; //type: boolean
        ydk::YLeaf autonomousflag; //type: boolean
        ydk::YLeaf validlifetime; //type: uint64
        ydk::YLeaf preflifetime; //type: uint32

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totsent; //type: uint64
        ydk::YLeaf totrvcd; //type: uint64
        ydk::YLeaf errsent; //type: uint64
        ydk::YLeaf errrcvd; //type: uint64
        ydk::YLeaf ifdowndropsent; //type: uint64
        ydk::YLeaf ifdowndroprcvd; //type: uint64
        ydk::YLeaf drophanotrdy; //type: uint64
        ydk::YLeaf dropinvldttlmct; //type: uint64
        ydk::YLeaf dropsrcmacownrcvd; //type: uint64
        ydk::YLeaf droptgtipnotownrcvd; //type: uint64
        ydk::YLeaf dropsrcipnotownrcvd; //type: uint64
        ydk::YLeaf destunreachsent; //type: uint64
        ydk::YLeaf destunreachrcvd; //type: uint64
        ydk::YLeaf adminprohibsent; //type: uint64
        ydk::YLeaf adminprohibrcvd; //type: uint64
        ydk::YLeaf timeexcdsent; //type: uint64
        ydk::YLeaf timeexcdrcvd; //type: uint64
        ydk::YLeaf parmprblmsent; //type: uint64
        ydk::YLeaf parmprblmrcvd; //type: uint64
        ydk::YLeaf echoreqsent; //type: uint64
        ydk::YLeaf echoreqrcvd; //type: uint64
        ydk::YLeaf echorepsent; //type: uint64
        ydk::YLeaf echoreprcvd; //type: uint64
        ydk::YLeaf redirsent; //type: uint64
        ydk::YLeaf redirrcvd; //type: uint64
        ydk::YLeaf toobigsent; //type: uint64
        ydk::YLeaf toobigrcvd; //type: uint64
        ydk::YLeaf rasent; //type: uint64
        ydk::YLeaf rarcvd; //type: uint64
        ydk::YLeaf rssent; //type: uint64
        ydk::YLeaf rsrcvd; //type: uint64
        ydk::YLeaf nasent; //type: uint64
        ydk::YLeaf narcvd; //type: uint64
        ydk::YLeaf nssent; //type: uint64
        ydk::YLeaf nsrcvd; //type: uint64
        ydk::YLeaf duprareceived; //type: uint64
        ydk::YLeaf fastpthrcvd; //type: uint64
        ydk::YLeaf fastpathdsbleignrcvd; //type: uint64
        ydk::YLeaf fastpathotherignrcvd; //type: uint64
        ydk::YLeaf lastnghbrsolicitsent; //type: string
        ydk::YLeaf lastnghbradvertisementsent; //type: string
        ydk::YLeaf lastrouteradvertisementsent; //type: string
        ydk::YLeaf nextrouteradvertisementsent; //type: string
        ydk::YLeaf nsretransmitinterval; //type: uint64
        ydk::YLeaf ndnudretrybase; //type: uint64
        ydk::YLeaf ndnudretryinterval; //type: uint64
        ydk::YLeaf ndnudretryattemps; //type: uint64
        ydk::YLeaf sendredirect; //type: boolean
        ydk::YLeaf redirectcause; //type: uint64
        ydk::YLeaf sendunreachables; //type: boolean
        ydk::YLeaf maxdadattempts; //type: uint16
        ydk::YLeaf currentdadattempt; //type: uint16
        ydk::YLeaf ifstate; //type: string
        ydk::YLeaf ifaddr; //type: string
        ydk::YLeaf linklocaladdr; //type: string
        ydk::YLeaf linklocaladdrstate; //type: string
        ydk::YLeaf ndmacextractstate; //type: string
        ydk::YLeaf statslastreset; //type: string
        ydk::YLeaf proxynacount; //type: uint64
        ydk::YLeaf proxynatobdcount; //type: uint64
        ydk::YLeaf proxynstobdcount; //type: uint64
        ydk::YLeaf rarpnscount; //type: uint64
        class RaItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems
        class VipItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems
        class AddrItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems
        class PfxItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems
        class RtItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems
        class AddrtreeItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems> ra_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems> vip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems> pfx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems> addrtree_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems : public ydk::Entity
{
    public:
        RaItems();
        ~RaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rainterval; //type: uint64
        ydk::YLeaf raintervalmin; //type: uint64
        ydk::YLeaf mflag; //type: boolean
        ydk::YLeaf oflag; //type: boolean
        ydk::YLeaf hoplimit; //type: uint64
        ydk::YLeaf mtu; //type: uint64
        ydk::YLeaf routerlifetime; //type: uint64
        ydk::YLeaf reachabletime; //type: uint64
        ydk::YLeaf retransmittime; //type: uint64
        ydk::YLeaf suppressra; //type: boolean
        ydk::YLeaf suppressramtu; //type: boolean

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems : public ydk::Entity
{
    public:
        VipItems();
        ~VipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groupid; //type: uint32
        ydk::YLeaf protocol; //type: string
        ydk::YLeaf uuid; //type: uint32
        ydk::YLeaf isactive; //type: string
        ydk::YLeaf inuse; //type: uint32
        class VipaddrItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems> vipaddr_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems : public ydk::Entity
{
    public:
        VipaddrItems();
        ~VipaddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfVipAddrStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList

        ydk::YList ifvipaddrstats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList : public ydk::Entity
{
    public:
        IfVipAddrStatsList();
        ~IfVipAddrStatsList();

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
        ydk::YLeaf vipmac; //type: string
        ydk::YLeaf contextname; //type: string
        ydk::YLeaf contextid; //type: uint32
        ydk::YLeaf lastnghbrsolicitsent; //type: string
        ydk::YLeaf lastnghbradvertisementsent; //type: string
        ydk::YLeaf lastrouteradvertisementsent; //type: string
        ydk::YLeaf nextrouteradvertisementsent; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems : public ydk::Entity
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

        class IfIPv6AddrStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList

        ydk::YList ifipv6addrstats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList : public ydk::Entity
{
    public:
        IfIPv6AddrStatsList();
        ~IfIPv6AddrStatsList();

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
        ydk::YLeaf addrstate; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems : public ydk::Entity
{
    public:
        PfxItems();
        ~PfxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList

        ydk::YList prefixstats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList : public ydk::Entity
{
    public:
        PrefixStatsList();
        ~PrefixStatsList();

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
        ydk::YLeaf masklen; //type: uint16
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf preflifetime; //type: uint32
        ydk::YLeaf onlink; //type: boolean
        ydk::YLeaf offlink; //type: boolean
        ydk::YLeaf autonomous; //type: boolean
        ydk::YLeaf rtraddr; //type: boolean
        ydk::YLeaf ifassignedaddr; //type: boolean
        ydk::YLeaf refcount; //type: uint32

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList

        ydk::YList routestats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList : public ydk::Entity
{
    public:
        RouteStatsList();
        ~RouteStatsList();

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
        ydk::YLeaf routepreference; //type: NdRouterPreference
        ydk::YLeaf routelifetime; //type: uint32
        ydk::YLeaf octetunits; //type: uint32
        ydk::YLeaf verifyreachability; //type: boolean
        ydk::YLeaf advrouteinroute; //type: boolean
        ydk::YLeaf advroutewithzerolifetime; //type: boolean

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems : public ydk::Entity
{
    public:
        AddrtreeItems();
        ~AddrtreeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrTreeStatsList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList

        ydk::YList addrtreestats_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList : public ydk::Entity
{
    public:
        AddrTreeStatsList();
        ~AddrTreeStatsList();

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
        ydk::YLeaf masklen; //type: uint8
        ydk::YLeaf addrtype; //type: string
        ydk::YLeaf dadstate; //type: string
        ydk::YLeaf dadattempt; //type: uint16

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems : public ydk::Entity
{
    public:
        VaddrstatItems();
        ~VaddrstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VaddrStatList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList

        ydk::YList vaddrstat_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList : public ydk::Entity
{
    public:
        VaddrStatList();
        ~VaddrStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vaddrproto; //type: string
        ydk::YLeaf groupid; //type: uint16
        ydk::YLeaf clientuuid; //type: uint32
        ydk::YLeaf clientstate; //type: NdVaddrClientState
        ydk::YLeaf clientinuse; //type: uint16
        ydk::YLeaf clientactivestate; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf context; //type: string
        class VipItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems> vip_items;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems : public ydk::Entity
{
    public:
        VipItems();
        ~VipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VaddrStatVipList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList

        ydk::YList vaddrstatvip_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList : public ydk::Entity
{
    public:
        VaddrStatVipList();
        ~VaddrStatVipList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vaddr; //type: string
        ydk::YLeaf virtualmac; //type: string
        ydk::YLeaf totsent; //type: uint64
        ydk::YLeaf totrvcd; //type: uint64
        ydk::YLeaf errsent; //type: uint64
        ydk::YLeaf errrcvd; //type: uint64
        ydk::YLeaf ifdowndropsent; //type: uint64
        ydk::YLeaf ifdowndroprcvd; //type: uint64
        ydk::YLeaf drophanotrdy; //type: uint64
        ydk::YLeaf dropinvldttlmct; //type: uint64
        ydk::YLeaf dropsrcmacownrcvd; //type: uint64
        ydk::YLeaf droptgtipnotownrcvd; //type: uint64
        ydk::YLeaf dropsrcipnotownrcvd; //type: uint64
        ydk::YLeaf destunreachsent; //type: uint64
        ydk::YLeaf destunreachrcvd; //type: uint64
        ydk::YLeaf adminprohibsent; //type: uint64
        ydk::YLeaf adminprohibrcvd; //type: uint64
        ydk::YLeaf timeexcdsent; //type: uint64
        ydk::YLeaf timeexcdrcvd; //type: uint64
        ydk::YLeaf parmprblmsent; //type: uint64
        ydk::YLeaf parmprblmrcvd; //type: uint64
        ydk::YLeaf echoreqsent; //type: uint64
        ydk::YLeaf echoreqrcvd; //type: uint64
        ydk::YLeaf echorepsent; //type: uint64
        ydk::YLeaf echoreprcvd; //type: uint64
        ydk::YLeaf redirsent; //type: uint64
        ydk::YLeaf redirrcvd; //type: uint64
        ydk::YLeaf toobigsent; //type: uint64
        ydk::YLeaf toobigrcvd; //type: uint64
        ydk::YLeaf rasent; //type: uint64
        ydk::YLeaf rarcvd; //type: uint64
        ydk::YLeaf rssent; //type: uint64
        ydk::YLeaf rsrcvd; //type: uint64
        ydk::YLeaf nasent; //type: uint64
        ydk::YLeaf narcvd; //type: uint64
        ydk::YLeaf nssent; //type: uint64
        ydk::YLeaf nsrcvd; //type: uint64
        ydk::YLeaf duprareceived; //type: uint64
        ydk::YLeaf lastnghbrsolicitsent; //type: string
        ydk::YLeaf lastnghbradvertisementsent; //type: string
        ydk::YLeaf lastrouteradvertisementsent; //type: string
        ydk::YLeaf nextrouteradvertisementsent; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems : public ydk::Entity
{
    public:
        VaddrstatglobalItems();
        ~VaddrstatglobalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VaddrGlobalStatList; //type: System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList

        ydk::YList vaddrglobalstat_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems


class System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList : public ydk::Entity
{
    public:
        VaddrGlobalStatList();
        ~VaddrGlobalStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vaddr; //type: string
        ydk::YLeaf protocol; //type: string
        ydk::YLeaf virtualmac; //type: string
        ydk::YLeaf groupid; //type: uint16
        ydk::YLeaf clientuuid; //type: uint32
        ydk::YLeaf clientstate; //type: NdVaddrClientState
        ydk::YLeaf clientinuse; //type: uint16
        ydk::YLeaf clientactivestate; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf context; //type: string

}; // System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList


class System::NdItems::InstItems::Ipv6gleanthrottleItems : public ydk::Entity
{
    public:
        Ipv6gleanthrottleItems();
        ~Ipv6gleanthrottleItems();

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

        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf syslog; //type: uint32
        ydk::YLeaf maxpacket; //type: uint32
        ydk::YLeaf timeout; //type: uint16

}; // System::NdItems::InstItems::Ipv6gleanthrottleItems


class System::NdItems::InstItems::VpcItems : public ydk::Entity
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

        class DomItems; //type: System::NdItems::InstItems::VpcItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::VpcItems::DomItems> dom_items;
        
}; // System::NdItems::InstItems::VpcItems


class System::NdItems::InstItems::VpcItems::DomItems : public ydk::Entity
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

        ydk::YLeaf ndsync; //type: NwAdminSt_

}; // System::NdItems::InstItems::VpcItems::DomItems


class System::NdItems::InstItems::OffliststatItems : public ydk::Entity
{
    public:
        OffliststatItems();
        ~OffliststatItems();

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

        class OffListVlanList; //type: System::NdItems::InstItems::OffliststatItems::OffListVlanList

        ydk::YList offlistvlan_list;
        
}; // System::NdItems::InstItems::OffliststatItems


class System::NdItems::InstItems::OffliststatItems::OffListVlanList : public ydk::Entity
{
    public:
        OffListVlanList();
        ~OffListVlanList();

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

        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf addr; //type: string
        ydk::YLeaf totalofflistentries; //type: uint16
        ydk::YLeaf age; //type: string
        ydk::YLeaf macaddr; //type: string
        ydk::YLeaf flags; //type: uint16

}; // System::NdItems::InstItems::OffliststatItems::OffListVlanList


class System::NdItems::InstItems::GlblpktstatsItems : public ydk::Entity
{
    public:
        GlblpktstatsItems();
        ~GlblpktstatsItems();

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

        ydk::YLeaf totsent; //type: uint64
        ydk::YLeaf totrvcd; //type: uint64
        ydk::YLeaf errsent; //type: uint64
        ydk::YLeaf errrcvd; //type: uint64
        ydk::YLeaf ifdowndropsent; //type: uint64
        ydk::YLeaf ifdowndroprcvd; //type: uint64
        ydk::YLeaf drophanotrdy; //type: uint64
        ydk::YLeaf dropinvldttlmct; //type: uint64
        ydk::YLeaf dropsrcmacownrcvd; //type: uint64
        ydk::YLeaf droptgtipnotownrcvd; //type: uint64
        ydk::YLeaf dropsrcipnotownrcvd; //type: uint64
        ydk::YLeaf destunreachsent; //type: uint64
        ydk::YLeaf destunreachrcvd; //type: uint64
        ydk::YLeaf adminprohibsent; //type: uint64
        ydk::YLeaf adminprohibrcvd; //type: uint64
        ydk::YLeaf timeexcdsent; //type: uint64
        ydk::YLeaf timeexcdrcvd; //type: uint64
        ydk::YLeaf parmprblmsent; //type: uint64
        ydk::YLeaf parmprblmrcvd; //type: uint64
        ydk::YLeaf echoreqsent; //type: uint64
        ydk::YLeaf echoreqrcvd; //type: uint64
        ydk::YLeaf echorepsent; //type: uint64
        ydk::YLeaf echoreprcvd; //type: uint64
        ydk::YLeaf redirsent; //type: uint64
        ydk::YLeaf redirrcvd; //type: uint64
        ydk::YLeaf toobigsent; //type: uint64
        ydk::YLeaf toobigrcvd; //type: uint64
        ydk::YLeaf rasent; //type: uint64
        ydk::YLeaf rarcvd; //type: uint64
        ydk::YLeaf rssent; //type: uint64
        ydk::YLeaf rsrcvd; //type: uint64
        ydk::YLeaf nasent; //type: uint64
        ydk::YLeaf narcvd; //type: uint64
        ydk::YLeaf nssent; //type: uint64
        ydk::YLeaf nsrcvd; //type: uint64
        ydk::YLeaf duprareceived; //type: uint64
        ydk::YLeaf fastpthrcvd; //type: uint64
        ydk::YLeaf fastpathdsbleignrcvd; //type: uint64
        ydk::YLeaf fastpathotherignrcvd; //type: uint64
        ydk::YLeaf mldv1queriessent; //type: uint64
        ydk::YLeaf mldv1queriesrecv; //type: uint64
        ydk::YLeaf mldv2queriessent; //type: uint64
        ydk::YLeaf mldv2queriesrecv; //type: uint64
        ydk::YLeaf mldv1reportssent; //type: uint64
        ydk::YLeaf mldv1reportsrecv; //type: uint64
        ydk::YLeaf mldv2reportssent; //type: uint64
        ydk::YLeaf mldv2reportsrecv; //type: uint64
        ydk::YLeaf mldv1leavessent; //type: uint64
        ydk::YLeaf mldv1leavesrecv; //type: uint64

}; // System::NdItems::InstItems::GlblpktstatsItems


class System::NdItems::InstItems::VaddrllstatItems : public ydk::Entity
{
    public:
        VaddrllstatItems();
        ~VaddrllstatItems();

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

        class VaddrLinkLocalStatList; //type: System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList

        ydk::YList vaddrlinklocalstat_list;
        
}; // System::NdItems::InstItems::VaddrllstatItems


class System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList : public ydk::Entity
{
    public:
        VaddrLinkLocalStatList();
        ~VaddrLinkLocalStatList();

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

        ydk::YLeaf vaddr; //type: string
        ydk::YLeaf virtualmac; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf active; //type: string

}; // System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList


class System::NdItems::InstItems::VpcstatItems : public ydk::Entity
{
    public:
        VpcstatItems();
        ~VpcstatItems();

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

        ydk::YLeaf cfsstatus; //type: string
        ydk::YLeaf layer3routing; //type: string
        ydk::YLeaf syncprocdroprecvpullreq; //type: uint16
        ydk::YLeaf syncprocdroprecvpushmsg; //type: uint16
        ydk::YLeaf syncignoresendpullreq; //type: uint16
        ydk::YLeaf syncignoresendpushmsg; //type: uint16
        ydk::YLeaf syncdropimapifailed; //type: uint16
        ydk::YLeaf syncdropmcemapifailed; //type: uint16
        ydk::YLeaf syncdropinvalidpciod; //type: uint16
        ydk::YLeaf syncprocdropptlookupfailed; //type: uint16
        ydk::YLeaf syncprocdroprespfailednomct; //type: uint16
        ydk::YLeaf syncprocdroprespfailed; //type: uint16
        ydk::YLeaf syncprocdropmcemifindexvpcconvfailed; //type: uint16
        ydk::YLeaf syncprocdropmcemvpcifindexconvfailed; //type: uint16
        ydk::YLeaf periodicsyncprocdropmcemifindexvpcconvfailed; //type: uint16
        ydk::YLeaf periodicsyncprocdropmcemvpcifindexconvfailed; //type: uint16
        ydk::YLeaf syncprocrespsent; //type: uint16
        ydk::YLeaf syncprocresprcvd; //type: uint16
        ydk::YLeaf syncprocresprcvderr; //type: uint16
        ydk::YLeaf syncprocrcvdmsg; //type: uint16
        ydk::YLeaf syncprocsendfailed; //type: uint16
        ydk::YLeaf syncproccfsreldlvryfailed; //type: uint16
        ydk::YLeaf syncproccfsreldlvrysuccess; //type: uint16
        ydk::YLeaf offlistprocdropptaddfailed; //type: uint16
        ydk::YLeaf offlistprocdropnomem; //type: uint16
        ydk::YLeaf offlistprocdroptmrcreatefailed; //type: uint16
        ydk::YLeaf offlistprocdropaddadjfailed; //type: uint16
        ydk::YLeaf offlistprocdropptlookupfailed; //type: uint16
        ydk::YLeaf offlistprocnodropvlanmismatch; //type: uint16
        ydk::YLeaf offlistprocdropsviinvalid; //type: uint16
        ydk::YLeaf offlistprocnodropsvidown; //type: uint16
        ydk::YLeaf offlistprocdropmctdown; //type: uint16
        ydk::YLeaf offlistprocdropctxtinvalid; //type: uint16
        ydk::YLeaf offlistprocdropvrfinvalid; //type: uint16
        ydk::YLeaf offlistprocdropl3addrinvalid; //type: uint16
        ydk::YLeaf offlistprocdropl3addrsanityfailed; //type: uint16
        ydk::YLeaf offlistprocdropmacsanityfailed; //type: uint16
        ydk::YLeaf offlistprocdropownmac; //type: uint16
        ydk::YLeaf offlistprocdropownipv6addr; //type: uint16
        ydk::YLeaf offlistprocdropownvipv6addr; //type: uint16
        ydk::YLeaf offlistprocdropcreateadjfailed; //type: uint16
        ydk::YLeaf offlistprocdropsubnetmismatch; //type: uint16
        ydk::YLeaf offlistprocdropadjalreadyexist; //type: uint16
        ydk::YLeaf offlistprocnodropipv6disabled; //type: uint16
        ydk::YLeaf offlistprocdropcount; //type: uint16
        ydk::YLeaf offlistprocnodropcount; //type: uint16
        ydk::YLeaf offlistprocaddadj; //type: uint16
        ydk::YLeaf offlistprocdeladj; //type: uint16
        ydk::YLeaf offlistprocadjalreadyexist; //type: uint16

}; // System::NdItems::InstItems::VpcstatItems


class System::NgmvpnItems : public ydk::Entity
{
    public:
        NgmvpnItems();
        ~NgmvpnItems();

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
        class InstItems; //type: System::NgmvpnItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems> inst_items;
        
}; // System::NgmvpnItems


class System::NgmvpnItems::InstItems : public ydk::Entity
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

        ydk::YLeaf pruning; //type: string
        ydk::YLeaf switchrole; //type: string
        ydk::YLeaf fabctrlseg; //type: string
        ydk::YLeaf peerfabctrlseg; //type: string
        ydk::YLeaf advvpcrpfrt; //type: string
        ydk::YLeaf vnilist; //type: string
        ydk::YLeaf overlaydistributeddr; //type: boolean
        ydk::YLeaf overlaysptonly; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class AfItems; //type: System::NgmvpnItems::InstItems::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems> af_items;
        
}; // System::NgmvpnItems::InstItems


class System::NgmvpnItems::InstItems::AfItems : public ydk::Entity
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

        class AfList; //type: System::NgmvpnItems::InstItems::AfItems::AfList

        ydk::YList af_list;
        
}; // System::NgmvpnItems::InstItems::AfItems


class System::NgmvpnItems::InstItems::AfItems::AfList : public ydk::Entity
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

        ydk::YLeaf type; //type: NgmvpnAfT
        class DbItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems> db_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf dbtype; //type: NgmvpnDbT
        ydk::YLeaf name; //type: string
        class VniItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems
        class VrfItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems> vni_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems : public ydk::Entity
{
    public:
        VniItems();
        ~VniItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VniList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList

        ydk::YList vni_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList : public ydk::Entity
{
    public:
        VniList();
        ~VniList();

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
        class L2routeItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems> l2route_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems : public ydk::Entity
{
    public:
        L2routeItems();
        ~L2routeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2routeList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList

        ydk::YList l2route_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList : public ydk::Entity
{
    public:
        L2routeList();
        ~L2routeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src; //type: string
        ydk::YLeaf grp; //type: string
        ydk::YLeaf masklen; //type: uint32
        class FabNodeItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems> fabnode_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems : public ydk::Entity
{
    public:
        FabNodeItems();
        ~FabNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabNodeList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList

        ydk::YList fabnode_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList : public ydk::Entity
{
    public:
        FabNodeList();
        ~FabNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf rpfnbr; //type: string

}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
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
        class GroupItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        ydk::YLeaf masklen; //type: uint32
        class SourceItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        ydk::YLeaf masklen; //type: uint32
        ydk::YLeaf uptime; //type: string
        class FabNodeItems; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems> fabnode_items;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems : public ydk::Entity
{
    public:
        FabNodeItems();
        ~FabNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabNodeList; //type: System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList

        ydk::YList fabnode_list;
        
}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems


class System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList : public ydk::Entity
{
    public:
        FabNodeList();
        ~FabNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf rpfnbr; //type: string

}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList


class System::Ospfv3Items : public ydk::Entity
{
    public:
        Ospfv3Items();
        ~Ospfv3Items();

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
        class InstItems; //type: System::Ospfv3Items::InstItems
        class IfItems; //type: System::Ospfv3Items::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems> if_items;
        
}; // System::Ospfv3Items


class System::Ospfv3Items::InstItems : public ydk::Entity
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

        class InstList; //type: System::Ospfv3Items::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::Ospfv3Items::InstItems


class System::Ospfv3Items::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

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
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        ydk::YLeaf deletedviacli; //type: boolean
        class DomItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems
        class EvtLogsItems; //type: System::Ospfv3Items::InstItems::InstList::EvtLogsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::EvtLogsItems> evtlogs_items;
        
}; // System::Ospfv3Items::InstItems::InstList


class System::Ospfv3Items::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: OspfBwRefUnit
        ydk::YLeaf defmetric; //type: uint32
        ydk::YLeaf rfc1583compat; //type: boolean
        ydk::YLeaf deletedviacli; //type: boolean
        ydk::YLeaf adjchangeloglevel; //type: OspfAdjChangeLogLevel
        ydk::YLeaf operst; //type: OspfOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf discardroute; //type: string
        ydk::YLeaf downbitignore; //type: boolean
        ydk::YLeaf capvrflite; //type: OspfVrfLiteControl
        class AreaItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems
        class DbItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems
        class DomafItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems
        class SpfcompItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems
        class LsactrlItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems
        class DomstatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems
        class GrItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems
        class MaxmetriclsapItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems
        class TrstatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems> area_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems> domaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems> spfcomp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems> lsactrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems> maxmetriclsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems> trstats_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems : public ydk::Entity
{
    public:
        AreaItems();
        ~AreaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList

        ydk::YList area_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList : public ydk::Entity
{
    public:
        AreaList();
        ~AreaList();

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
        ydk::YLeaf type; //type: OspfAreaT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf nssatransrole; //type: OspfNssaTransRole
        ydk::YLeaf brcnt; //type: uint32
        ydk::YLeaf asbrcnt; //type: uint32
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf nssatransst; //type: OspfNssaTransSt
        ydk::YLeaf nssatransstabintvl; //type: uint32
        ydk::YLeaf authtype; //type: OspfAuthT
        class AreaafItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems
        class AreastatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems
        class DbItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems> areaaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems> areastats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems> db_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems : public ydk::Entity
{
    public:
        AreaafItems();
        ~AreaafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaAfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList

        ydk::YList areaaf_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList : public ydk::Entity
{
    public:
        AreaAfList();
        ~AreaAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfAfT
        ydk::YLeaf name; //type: string
        class IartsumItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems> iartsum_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems : public ydk::Entity
{
    public:
        IartsumItems();
        ~IartsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterAreaRtSumList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList

        ydk::YList interareartsum_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList : public ydk::Entity
{
    public:
        InterAreaRtSumList();
        ~InterAreaRtSumList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf comprtcnt; //type: uint32
        ydk::YLeaf opercost; //type: uint32
        ydk::YLeaf cost; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems : public ydk::Entity
{
    public:
        AreastatsItems();
        ~AreastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf areacreatedts; //type: string
        ydk::YLeaf spfruns; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf lastspfduration; //type: uint32
        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf activeifcnt; //type: uint32
        ydk::YLeaf passiveifcnt; //type: uint32
        ydk::YLeaf lpbkifcnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems
        class RtItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems> rt_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_42_ */

