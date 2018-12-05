#ifndef _CISCO_NX_OS_DEVICE_34_
#define _CISCO_NX_OS_DEVICE_34_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::PvlanItems : public ydk::Entity
{
    public:
        PvlanItems();
        ~PvlanItems();

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
        class InstItems; //type: System::PvlanItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems> inst_items;
        
}; // System::PvlanItems


class System::PvlanItems::InstItems : public ydk::Entity
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
        class IfItems; //type: System::PvlanItems::InstItems::IfItems
        class VlanItems; //type: System::PvlanItems::InstItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::VlanItems> vlan_items;
        
}; // System::PvlanItems::InstItems


class System::PvlanItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::PvlanItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::PvlanItems::InstItems::IfItems


class System::PvlanItems::InstItems::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf if_; //type: string
        ydk::YLeaf promprimapping; //type: uint32
        ydk::YLeaf promsecvlanmapping; //type: string
        ydk::YLeaf prihostvlan; //type: uint32
        ydk::YLeaf sechostvlan; //type: uint32
        ydk::YLeaf nativevlan; //type: uint32
        ydk::YLeaf tallowedvlans; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
        class PvlanPromTableItems; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems
        class PvlanTSecTableItems; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems
        class RtvrfMbrItems; //type: System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems> pvlanpromtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems> pvlantsectable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PvlanItems::InstItems::IfItems::IfList


class System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems : public ydk::Entity
{
    public:
        PvlanPromTableItems();
        ~PvlanPromTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanItems; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems> vlan_items;
        
}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems


class System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems : public ydk::Entity
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

        class PvlanTPromEntryList; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList

        ydk::YList pvlantpromentry_list;
        
}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems


class System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList : public ydk::Entity
{
    public:
        PvlanTPromEntryList();
        ~PvlanTPromEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privlanid; //type: uint32
        ydk::YLeaf secvlans; //type: string

}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanPromTableItems::VlanItems::PvlanTPromEntryList


class System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems : public ydk::Entity
{
    public:
        PvlanTSecTableItems();
        ~PvlanTSecTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanItems; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems> vlan_items;
        
}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems


class System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems : public ydk::Entity
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

        class PvlanTSecEntryList; //type: System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList

        ydk::YList pvlantsecentry_list;
        
}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems


class System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList : public ydk::Entity
{
    public:
        PvlanTSecEntryList();
        ~PvlanTSecEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privlanid; //type: uint32
        ydk::YLeaf secvlanid; //type: uint32

}; // System::PvlanItems::InstItems::IfItems::IfList::PvlanTSecTableItems::VlanItems::PvlanTSecEntryList


class System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::PvlanItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::PvlanItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::PvlanItems::InstItems::VlanItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PvlanList; //type: System::PvlanItems::InstItems::VlanItems::PvlanList

        ydk::YList pvlan_list;
        
}; // System::PvlanItems::InstItems::VlanItems


class System::PvlanItems::InstItems::VlanItems::PvlanList : public ydk::Entity
{
    public:
        PvlanList();
        ~PvlanList();

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
        ydk::YLeaf vlantype; //type: L2PvlanTypes
        ydk::YLeaf association; //type: string

}; // System::PvlanItems::InstItems::VlanItems::PvlanList


class System::VlanmgrItems : public ydk::Entity
{
    public:
        VlanmgrItems();
        ~VlanmgrItems();

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
        class InstItems; //type: System::VlanmgrItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanmgrItems::InstItems> inst_items;
        
}; // System::VlanmgrItems


class System::VlanmgrItems::InstItems : public ydk::Entity
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

        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class DommbrItems; //type: System::VlanmgrItems::InstItems::DommbrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanmgrItems::InstItems::DommbrItems> dommbr_items;
        
}; // System::VlanmgrItems::InstItems


class System::VlanmgrItems::InstItems::DommbrItems : public ydk::Entity
{
    public:
        DommbrItems();
        ~DommbrItems();

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

        class DomMbrIfList; //type: System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList

        ydk::YList dommbrif_list;
        
}; // System::VlanmgrItems::InstItems::DommbrItems


class System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList : public ydk::Entity
{
    public:
        DomMbrIfList();
        ~DomMbrIfList();

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

        ydk::YLeaf ifidx; //type: string
        ydk::YLeaf createflag; //type: L2CreateState
        ydk::YLeaf bundleportst; //type: L1OperSt
        ydk::YLeaf phyportstate; //type: L1OperSt
        ydk::YLeaf pmportstate; //type: L1OperSt
        ydk::YLeaf accessvlan; //type: uint32
        ydk::YLeaf nativevlan; //type: uint32
        ydk::YLeaf pmportmode; //type: L1Mode
        ydk::YLeaf allowedvlanbmp; //type: string
        ydk::YLeaf trunkportupvlanbmp; //type: string
        ydk::YLeaf name; //type: string

}; // System::VlanmgrItems::InstItems::DommbrItems::DomMbrIfList


class System::EpsItems : public ydk::Entity
{
    public:
        EpsItems();
        ~EpsItems();

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

        class EvpnmulticastItems; //type: System::EpsItems::EvpnmulticastItems
        class MultisiteItems; //type: System::EpsItems::MultisiteItems
        class EpIdItems; //type: System::EpsItems::EpIdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EvpnmulticastItems> evpnmulticast_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::MultisiteItems> multisite_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems> epid_items;
        
}; // System::EpsItems


class System::EpsItems::EvpnmulticastItems : public ydk::Entity
{
    public:
        EvpnmulticastItems();
        ~EvpnmulticastItems();

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

        ydk::YLeaf state; //type: NvoEvpnMcastStT

}; // System::EpsItems::EvpnmulticastItems


class System::EpsItems::MultisiteItems : public ydk::Entity
{
    public:
        MultisiteItems();
        ~MultisiteItems();

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

        ydk::YLeaf state; //type: NvoMultisiteStateT
        ydk::YLeaf siteid; //type: uint64
        ydk::YLeaf delayrestoretime; //type: uint16

}; // System::EpsItems::MultisiteItems


class System::EpsItems::EpIdItems : public ydk::Entity
{
    public:
        EpIdItems();
        ~EpIdItems();

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

        class EpList; //type: System::EpsItems::EpIdItems::EpList

        ydk::YList ep_list;
        
}; // System::EpsItems::EpIdItems


class System::EpsItems::EpIdItems::EpList : public ydk::Entity
{
    public:
        EpList();
        ~EpList();

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

        ydk::YLeaf epid; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sourceinterface; //type: string
        ydk::YLeaf multisitebordergwinterface; //type: string
        ydk::YLeaf holddowntime; //type: uint16
        ydk::YLeaf hostreach; //type: NvoHostReachT
        ydk::YLeaf suppressarp; //type: boolean
        ydk::YLeaf mcastgroupl2; //type: string
        ydk::YLeaf mcastgroupl3; //type: string
        ydk::YLeaf ingressreplprotobgp; //type: boolean
        ydk::YLeaf advertisevmac; //type: boolean
        ydk::YLeaf controllerid; //type: uint32
        ydk::YLeaf cfgsrc; //type: NvoCfgSrcT
        ydk::YLeaf encaptype; //type: NvoEncapT
        ydk::YLeaf autoremapreplicationservers; //type: boolean
        ydk::YLeaf operstate; //type: L2DomOperSt
        ydk::YLeaf operstsrcloopbackintf; //type: L2DomOperSt
        ydk::YLeaf operstmultisitebrdrgwloopbackintf; //type: L2DomOperSt
        ydk::YLeaf adminstmultisitebrdrgwloopackintf; //type: NwAdminSt_
        ydk::YLeaf operencaptype; //type: NvoEncapT
        ydk::YLeaf mac; //type: string
        ydk::YLeaf virtualrtrmac; //type: string
        ydk::YLeaf virtualrtrmacreorig; //type: string
        ydk::YLeaf learningmode; //type: NvoHostLearnModeT
        ydk::YLeaf holduptime; //type: uint16
        ydk::YLeaf holddowntimerexpirytime; //type: string
        ydk::YLeaf holduptimerexpirytime; //type: string
        ydk::YLeaf delayrestoremsbrdrgwexpirytime; //type: string
        ydk::YLeaf vpcvipnotified; //type: boolean
        ydk::YLeaf primaryip; //type: string
        ydk::YLeaf secondaryip; //type: string
        ydk::YLeaf multisitebrdrgwintfip; //type: string
        class PeersItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems
        class NwsItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::CntrsItems
        class RsoperSourceInterfaceItems; //type: System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems> peers_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems> nws_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::CntrsItems> cntrs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems> rsopersourceinterface_items;
        
}; // System::EpsItems::EpIdItems::EpList


class System::EpsItems::EpIdItems::EpList::PeersItems : public ydk::Entity
{
    public:
        PeersItems();
        ~PeersItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StIrPeerItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems
        class DynIrPeerItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems
        class DyPeerItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems
        class StPeerItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems> st_ir_peer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems> dyn_ir_peer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems> dy_peer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems> st_peer_items;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems


class System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems : public ydk::Entity
{
    public:
        StIrPeerItems();
        ~StIrPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StIRPeerList; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList

        ydk::YList stirpeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems


class System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList : public ydk::Entity
{
    public:
        StIRPeerList();
        ~StIRPeerList();

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
        ydk::YLeaf state; //type: NvoPeerStateT
        ydk::YLeaf upstatetransitionts; //type: string
        ydk::YLeaf createts; //type: string
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems> cntrs_items;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList


class System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::PeersItems::StIrPeerItems::StIRPeerList::CntrsItems


class System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems : public ydk::Entity
{
    public:
        DynIrPeerItems();
        ~DynIrPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DyIRPeerList; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList

        ydk::YList dyirpeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems


class System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList : public ydk::Entity
{
    public:
        DyIRPeerList();
        ~DyIRPeerList();

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
        ydk::YLeaf state; //type: NvoPeerStateT
        ydk::YLeaf upstatetransitionts; //type: string
        ydk::YLeaf createts; //type: string
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems> cntrs_items;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList


class System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::PeersItems::DynIrPeerItems::DyIRPeerList::CntrsItems


class System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems : public ydk::Entity
{
    public:
        DyPeerItems();
        ~DyPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DyPeerList; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList

        ydk::YList dypeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems


class System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList : public ydk::Entity
{
    public:
        DyPeerList();
        ~DyPeerList();

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
        ydk::YLeaf state; //type: NvoPeerStateT
        ydk::YLeaf upstatetransitionts; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf firstvni; //type: uint32
        ydk::YLeaf createts; //type: string
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems> cntrs_items;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList


class System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::PeersItems::DyPeerItems::DyPeerList::CntrsItems


class System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems : public ydk::Entity
{
    public:
        StPeerItems();
        ~StPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StPeerList; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList

        ydk::YList stpeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems


class System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList : public ydk::Entity
{
    public:
        StPeerList();
        ~StPeerList();

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
        ydk::YLeaf type; //type: string
        ydk::YLeaf peerid; //type: uint32
        ydk::YLeaf state; //type: NvoPeerStateT
        ydk::YLeaf upstatetransitionts; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf firstvni; //type: uint32
        ydk::YLeaf createts; //type: string
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems> cntrs_items;
        
}; // System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList


class System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::PeersItems::StPeerItems::StPeerList::CntrsItems


class System::EpsItems::EpIdItems::EpList::NwsItems : public ydk::Entity
{
    public:
        NwsItems();
        ~NwsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VniItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VniItems
        class OpervniItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems
        class VnisItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VniItems> vni_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems> opervni_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems> vnis_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VniItems : public ydk::Entity
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

        class NwList; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList

        ydk::YList nw_list;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VniItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList : public ydk::Entity
{
    public:
        NwList();
        ~NwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf suppressarp; //type: NvoSuppressARPT
        ydk::YLeaf mcastgroup; //type: string
        ydk::YLeaf associatevrfflag; //type: boolean
        ydk::YLeaf islegacymode; //type: boolean
        ydk::YLeaf multisiteingrepl; //type: NvoMultisiteIngReplStateT
        ydk::YLeaf cfgsrc; //type: NvoCfgSrcT
        class IngReplItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems> ingrepl_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList


class System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems : public ydk::Entity
{
    public:
        IngReplItems();
        ~IngReplItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: NvoIngReplProtoT
        ydk::YLeaf replmode; //type: NvoReplModeT
        class ConfigStIrPeerItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems> config_st_ir_peer_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems : public ydk::Entity
{
    public:
        ConfigStIrPeerItems();
        ~ConfigStIrPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigStIRPeerList; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList

        ydk::YList configstirpeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList : public ydk::Entity
{
    public:
        ConfigStIRPeerList();
        ~ConfigStIRPeerList();

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

}; // System::EpsItems::EpIdItems::EpList::NwsItems::VniItems::NwList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList


class System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems : public ydk::Entity
{
    public:
        OpervniItems();
        ~OpervniItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperNwList; //type: System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList

        ydk::YList opernw_list;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems


class System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList : public ydk::Entity
{
    public:
        OperNwList();
        ~OperNwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf epid; //type: uint32
        ydk::YLeaf opermcastgroup; //type: string
        ydk::YLeaf opersupprarp; //type: boolean
        ydk::YLeaf state; //type: NvoVniStateT
        ydk::YLeaf mode; //type: NvoHostLearnModeT
        ydk::YLeaf type; //type: NvoVniTypeT
        ydk::YLeaf vlanbd; //type: string
        class CntrsItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems> cntrs_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList


class System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::NwsItems::OpervniItems::OperNwList::CntrsItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems : public ydk::Entity
{
    public:
        VnisItems();
        ~VnisItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NwRangeList; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList

        ydk::YList nwrange_list;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList : public ydk::Entity
{
    public:
        NwRangeList();
        ~NwRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnirangemin; //type: uint32
        ydk::YLeaf vnirangemax; //type: uint32
        ydk::YLeaf ismcastrange; //type: boolean
        ydk::YLeaf suppressarp; //type: NvoSuppressARPT
        ydk::YLeaf mcastgroup; //type: string
        ydk::YLeaf associatevrfflag; //type: boolean
        ydk::YLeaf islegacymode; //type: boolean
        ydk::YLeaf multisiteingrepl; //type: NvoMultisiteIngReplStateT
        ydk::YLeaf cfgsrc; //type: NvoCfgSrcT
        class IngReplItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems> ingrepl_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList


class System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems : public ydk::Entity
{
    public:
        IngReplItems();
        ~IngReplItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: NvoIngReplProtoT
        ydk::YLeaf replmode; //type: NvoReplModeT
        class ConfigStIrPeerItems; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems> config_st_ir_peer_items;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems : public ydk::Entity
{
    public:
        ConfigStIrPeerItems();
        ~ConfigStIrPeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigStIRPeerList; //type: System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList

        ydk::YList configstirpeer_list;
        
}; // System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems


class System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList : public ydk::Entity
{
    public:
        ConfigStIRPeerList();
        ~ConfigStIRPeerList();

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

}; // System::EpsItems::EpIdItems::EpList::NwsItems::VnisItems::NwRangeList::IngReplItems::ConfigStIrPeerItems::ConfigStIRPeerList


class System::EpsItems::EpIdItems::EpList::CntrsItems : public ydk::Entity
{
    public:
        CntrsItems();
        ~CntrsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf txucastpkts; //type: uint64
        ydk::YLeaf txucastbytes; //type: uint64
        ydk::YLeaf txmcastpkts; //type: uint64
        ydk::YLeaf txmcastbytes; //type: uint64
        ydk::YLeaf rxucastpkts; //type: uint64
        ydk::YLeaf rxucastbytes; //type: uint64
        ydk::YLeaf rxmcastpkts; //type: uint64
        ydk::YLeaf rxmcastbytes; //type: uint64

}; // System::EpsItems::EpIdItems::EpList::CntrsItems


class System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems : public ydk::Entity
{
    public:
        RsoperSourceInterfaceItems();
        ~RsoperSourceInterfaceItems();

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

}; // System::EpsItems::EpIdItems::EpList::RsoperSourceInterfaceItems


class System::CtxItems : public ydk::Entity
{
    public:
        CtxItems();
        ~CtxItems();

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

        class CtxList; //type: System::CtxItems::CtxList

        ydk::YList ctx_list;
        
}; // System::CtxItems


class System::CtxItems::CtxList : public ydk::Entity
{
    public:
        CtxList();
        ~CtxList();

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
        ydk::YLeaf pcenfpref; //type: FvPcEnfPref
        ydk::YLeaf type; //type: L3CtxT
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf mgmtpctag; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf resourceid; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: uint32
        ydk::YLeaf ctrlrid; //type: uint32
        ydk::YLeaf seclbl; //type: uint16
        ydk::YLeaf adminstate; //type: L3VrfAdminState
        ydk::YLeaf operstate; //type: L3VrfOperState
        ydk::YLeaf operstqual; //type: L3VrfOperStateQual
        ydk::YLeaf oldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf gsdbctx; //type: uint32
        ydk::YLeaf pending; //type: boolean
        ydk::YLeaf v4tibvalid; //type: boolean
        ydk::YLeaf v4tibid; //type: uint32
        ydk::YLeaf v4tibname; //type: string
        ydk::YLeaf v4tibpending; //type: boolean
        ydk::YLeaf v4tiboperstate; //type: L3VrfOperState
        ydk::YLeaf v4tiboperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v4tiboldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v6tibvalid; //type: boolean
        ydk::YLeaf v6tibid; //type: uint32
        ydk::YLeaf v6tibname; //type: string
        ydk::YLeaf v6tibpending; //type: boolean
        ydk::YLeaf v6tiboperstate; //type: L3VrfOperState
        ydk::YLeaf v6tiboperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v6tiboldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf createts; //type: string
        ydk::YLeaf lastchgdts; //type: string
        ydk::YLeaf bgprd; //type: string
        ydk::YLeaf bgprddisp; //type: string
        ydk::YLeaf prtclbmp; //type: uint32
        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf vpnid; //type: uint32
        class PfxItems; //type: System::CtxItems::CtxList::PfxItems
        class DbItems; //type: System::CtxItems::CtxList::DbItems
        class MgmtItems; //type: System::CtxItems::CtxList::MgmtItems
        class RttenConnItems; //type: System::CtxItems::CtxList::RttenConnItems
        class RsctxToEpPItems; //type: System::CtxItems::CtxList::RsctxToEpPItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::PfxItems> pfx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::RttenConnItems> rttenconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::RsctxToEpPItems> rsctxtoepp_items;
        
}; // System::CtxItems::CtxList


class System::CtxItems::CtxList::PfxItems : public ydk::Entity
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

        class PfxEntryList; //type: System::CtxItems::CtxList::PfxItems::PfxEntryList

        ydk::YList pfxentry_list;
        
}; // System::CtxItems::CtxList::PfxItems


class System::CtxItems::CtxList::PfxItems::PfxEntryList : public ydk::Entity
{
    public:
        PfxEntryList();
        ~PfxEntryList();

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
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf operst; //type: ActrlOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CtxItems::CtxList::PfxItems::PfxEntryList


class System::CtxItems::CtxList::DbItems : public ydk::Entity
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

        class DbList; //type: System::CtxItems::CtxList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::CtxItems::CtxList::DbItems


class System::CtxItems::CtxList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: EpmDbT
        ydk::YLeaf name; //type: string
        class IpItems; //type: System::CtxItems::CtxList::DbItems::DbList::IpItems
        class MacItems; //type: System::CtxItems::CtxList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems::DbList::MacItems> mac_items;
        
}; // System::CtxItems::CtxList::DbItems::DbList


class System::CtxItems::CtxList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::CtxItems::CtxList::DbItems::DbList::IpItems


class System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
{
    public:
        IpEpList();
        ~IpEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        class RtIpEpRslttoIpEpAttItems; //type: System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList


class System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtIpEpRslttoIpEpAttItems();
        ~RtIpEpRslttoIpEpAttItems();

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

}; // System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtMacEpRslttoIpEpAttItems();
        ~RtMacEpRslttoIpEpAttItems();

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

}; // System::CtxItems::CtxList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::CtxItems::CtxList::DbItems::DbList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpList; //type: System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::CtxItems::CtxList::DbItems::DbList::MacItems


class System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
{
    public:
        MacEpList();
        ~MacEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf createts; //type: string
        class RsmacEpToIpEpAttItems; //type: System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList


class System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpToIpEpAttItems();
        ~RsmacEpToIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpToIpEpAttList; //type: System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpToIpEpAttList();
        ~RsMacEpToIpEpAttList();

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

}; // System::CtxItems::CtxList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::CtxItems::CtxList::MgmtItems : public ydk::Entity
{
    public:
        MgmtItems();
        ~MgmtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtdMgmtIfList; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList

        ydk::YList rtdmgmtif_list;
        
}; // System::CtxItems::CtxList::MgmtItems


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList : public ydk::Entity
{
    public:
        RtdMgmtIfList();
        ~RtdMgmtIfList();

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
        ydk::YLeaf adminst; //type: L1AdminSt
        class RtpseudoIfItems; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems
        class RsrtdMgmtConfItems; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems
        class RtvrfMbrItems; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems> rsrtdmgmtconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

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

}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems : public ydk::Entity
{
    public:
        RsrtdMgmtConfItems();
        ~RsrtdMgmtConfItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems


class System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::CtxItems::CtxList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::CtxItems::CtxList::RttenConnItems : public ydk::Entity
{
    public:
        RttenConnItems();
        ~RttenConnItems();

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

}; // System::CtxItems::CtxList::RttenConnItems


class System::CtxItems::CtxList::RsctxToEpPItems : public ydk::Entity
{
    public:
        RsctxToEpPItems();
        ~RsctxToEpPItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCtxToEpPList; //type: System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList

        ydk::YList rsctxtoepp_list;
        
}; // System::CtxItems::CtxList::RsctxToEpPItems


class System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList : public ydk::Entity
{
    public:
        RsCtxToEpPList();
        ~RsCtxToEpPList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::CtxItems::CtxList::RsctxToEpPItems::RsCtxToEpPList


class System::InstItems : public ydk::Entity
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

        class InstList; //type: System::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::InstItems


class System::InstItems::InstList : public ydk::Entity
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
        ydk::YLeaf resourceid; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf encap; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: uint32
        ydk::YLeaf ctrlrid; //type: uint32
        ydk::YLeaf seclbl; //type: uint16
        ydk::YLeaf adminstate; //type: L3VrfAdminState
        ydk::YLeaf operstate; //type: L3VrfOperState
        ydk::YLeaf operstqual; //type: L3VrfOperStateQual
        ydk::YLeaf oldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf gsdbctx; //type: uint32
        ydk::YLeaf pending; //type: boolean
        ydk::YLeaf v4tibvalid; //type: boolean
        ydk::YLeaf v4tibid; //type: uint32
        ydk::YLeaf v4tibname; //type: string
        ydk::YLeaf v4tibpending; //type: boolean
        ydk::YLeaf v4tiboperstate; //type: L3VrfOperState
        ydk::YLeaf v4tiboperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v4tiboldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v6tibvalid; //type: boolean
        ydk::YLeaf v6tibid; //type: uint32
        ydk::YLeaf v6tibname; //type: string
        ydk::YLeaf v6tibpending; //type: boolean
        ydk::YLeaf v6tiboperstate; //type: L3VrfOperState
        ydk::YLeaf v6tiboperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf v6tiboldoperstqual; //type: L3VrfOperStateQual
        ydk::YLeaf createts; //type: string
        ydk::YLeaf lastchgdts; //type: string
        ydk::YLeaf bgprd; //type: string
        ydk::YLeaf bgprddisp; //type: string
        ydk::YLeaf prtclbmp; //type: uint32
        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf vpnid; //type: uint32
        class TreeItems; //type: System::InstItems::InstList::TreeItems
        class DomItems; //type: System::InstItems::InstList::DomItems
        class DbItems; //type: System::InstItems::InstList::DbItems
        class ShchpItems; //type: System::InstItems::InstList::ShchpItems
        class MgmtItems; //type: System::InstItems::InstList::MgmtItems
        class RsvrfMbrItems; //type: System::InstItems::InstList::RsvrfMbrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::TreeItems> tree_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::ShchpItems> shchp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::RsvrfMbrItems> rsvrfmbr_items;
        
}; // System::InstItems::InstList


class System::InstItems::InstList::TreeItems : public ydk::Entity
{
    public:
        TreeItems();
        ~TreeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TreeList; //type: System::InstItems::InstList::TreeItems::TreeList

        ydk::YList tree_list;
        
}; // System::InstItems::InstList::TreeItems


class System::InstItems::InstList::TreeItems::TreeList : public ydk::Entity
{
    public:
        TreeList();
        ~TreeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf root; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf name; //type: string

}; // System::InstItems::InstList::TreeItems::TreeList


class System::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::InstItems::InstList::DomItems


class System::InstItems::InstList::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf rd; //type: string
        ydk::YLeaf operrd; //type: string
        class AfItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems> af_items;
        
}; // System::InstItems::InstList::DomItems::DomList


class System::InstItems::InstList::DomItems::DomList::AfItems : public ydk::Entity
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

        class DomAfList; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
{
    public:
        DomAfList();
        ~DomAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        class CtrlItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems> ctrl_items;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems : public ydk::Entity
{
    public:
        CtrlItems();
        ~CtrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfCtrlList; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList

        ydk::YList afctrl_list;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList : public ydk::Entity
{
    public:
        AfCtrlList();
        ~AfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        class RttpItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems> rttp_items;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems : public ydk::Entity
{
    public:
        RttpItems();
        ~RttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttPList; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtctrlRttPType
        ydk::YLeaf operrttauto; //type: string
        class EntItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems
        class RtctrlmapItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems
        class RtctrldefmapItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems> rtctrlmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems> rtctrldefmap_items;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: string

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems : public ydk::Entity
{
    public:
        RtctrlmapItems();
        ~RtctrlmapItems();

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

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems : public ydk::Entity
{
    public:
        RtctrldefmapItems();
        ~RtctrldefmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxlimit; //type: uint32
        ydk::YLeaf allowvpn; //type: boolean
        ydk::YLeaf rtmap; //type: string

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems


class System::InstItems::InstList::DbItems : public ydk::Entity
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

        class DbList; //type: System::InstItems::InstList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::InstItems::InstList::DbItems


class System::InstItems::InstList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: EpmDbT
        ydk::YLeaf name; //type: string
        class IpItems; //type: System::InstItems::InstList::DbItems::DbList::IpItems
        class MacItems; //type: System::InstItems::InstList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems::DbList::MacItems> mac_items;
        
}; // System::InstItems::InstList::DbItems::DbList


class System::InstItems::InstList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::InstItems::InstList::DbItems::DbList::IpItems


class System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
{
    public:
        IpEpList();
        ~IpEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        class RtIpEpRslttoIpEpAttItems; //type: System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList


class System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtIpEpRslttoIpEpAttItems();
        ~RtIpEpRslttoIpEpAttItems();

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

}; // System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtMacEpRslttoIpEpAttItems();
        ~RtMacEpRslttoIpEpAttItems();

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

}; // System::InstItems::InstList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::InstItems::InstList::DbItems::DbList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpList; //type: System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::InstItems::InstList::DbItems::DbList::MacItems


class System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
{
    public:
        MacEpList();
        ~MacEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf createts; //type: string
        class RsmacEpToIpEpAttItems; //type: System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList


class System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpToIpEpAttItems();
        ~RsmacEpToIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpToIpEpAttList; //type: System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpToIpEpAttList();
        ~RsMacEpToIpEpAttList();

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

}; // System::InstItems::InstList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::InstItems::InstList::ShchpItems : public ydk::Entity
{
    public:
        ShchpItems();
        ~ShchpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ShardChPList; //type: System::InstItems::InstList::ShchpItems::ShardChPList

        ydk::YList shardchp_list;
        
}; // System::InstItems::InstList::ShchpItems


class System::InstItems::InstList::ShchpItems::ShardChPList : public ydk::Entity
{
    public:
        ShardChPList();
        ~ShardChPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: NwAddrF
        ydk::YLeaf node; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::InstItems::InstList::ShchpItems::ShardChPList


class System::InstItems::InstList::MgmtItems : public ydk::Entity
{
    public:
        MgmtItems();
        ~MgmtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtdMgmtIfList; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList

        ydk::YList rtdmgmtif_list;
        
}; // System::InstItems::InstList::MgmtItems


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList : public ydk::Entity
{
    public:
        RtdMgmtIfList();
        ~RtdMgmtIfList();

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
        ydk::YLeaf adminst; //type: L1AdminSt
        class RtpseudoIfItems; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems
        class RsrtdMgmtConfItems; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems
        class RtvrfMbrItems; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems> rsrtdmgmtconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems : public ydk::Entity
{
    public:
        RtpseudoIfItems();
        ~RtpseudoIfItems();

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

}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtpseudoIfItems


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems : public ydk::Entity
{
    public:
        RsrtdMgmtConfItems();
        ~RsrtdMgmtConfItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RsrtdMgmtConfItems


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtvrfMbrItems


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems


class System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::InstItems::InstList::MgmtItems::RtdMgmtIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::InstItems::InstList::RsvrfMbrItems : public ydk::Entity
{
    public:
        RsvrfMbrItems();
        ~RsvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVrfMbrList; //type: System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList

        ydk::YList rsvrfmbr_list;
        
}; // System::InstItems::InstList::RsvrfMbrItems


class System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList : public ydk::Entity
{
    public:
        RsVrfMbrList();
        ~RsVrfMbrList();

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

}; // System::InstItems::InstList::RsvrfMbrItems::RsVrfMbrList


class System::L3capprovItems : public ydk::Entity
{
    public:
        L3capprovItems();
        ~L3capprovItems();

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

        class ProvList; //type: System::L3capprovItems::ProvList

        ydk::YList prov_list;
        
}; // System::L3capprovItems


class System::L3capprovItems::ProvList : public ydk::Entity
{
    public:
        ProvList();
        ~ProvList();

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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf remaining; //type: uint32
        ydk::YLeaf utilization; //type: uint8

}; // System::L3capprovItems::ProvList


class System::L3vmItems : public ydk::Entity
{
    public:
        L3vmItems();
        ~L3vmItems();

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

        ydk::YLeaf vrfmemberchangeretainl3cfg; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::L3vmItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::InstItems> inst_items;
        
}; // System::L3vmItems


class System::L3vmItems::InstItems : public ydk::Entity
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

        ydk::YLeaf vrfallocid; //type: uint32
        ydk::YLeaf tblallocid; //type: uint32
        ydk::YLeaf featureset; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class DommbrItems; //type: System::L3vmItems::InstItems::DommbrItems
        class TblItems; //type: System::L3vmItems::InstItems::TblItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::InstItems::DommbrItems> dommbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::InstItems::TblItems> tbl_items;
        
}; // System::L3vmItems::InstItems


class System::L3vmItems::InstItems::DommbrItems : public ydk::Entity
{
    public:
        DommbrItems();
        ~DommbrItems();

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

        class DomMbrIfList; //type: System::L3vmItems::InstItems::DommbrItems::DomMbrIfList

        ydk::YList dommbrif_list;
        
}; // System::L3vmItems::InstItems::DommbrItems


class System::L3vmItems::InstItems::DommbrItems::DomMbrIfList : public ydk::Entity
{
    public:
        DomMbrIfList();
        ~DomMbrIfList();

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
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf vrfid; //type: uint16
        ydk::YLeaf oldvrfid; //type: uint16
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf oldvrfname; //type: string
        ydk::YLeaf gsdbctx; //type: uint32
        ydk::YLeaf gsdbctxtype; //type: L3VrfGsdbCtxType
        ydk::YLeaf name; //type: string

}; // System::L3vmItems::InstItems::DommbrItems::DomMbrIfList


class System::L3vmItems::InstItems::TblItems : public ydk::Entity
{
    public:
        TblItems();
        ~TblItems();

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

        class TblList; //type: System::L3vmItems::InstItems::TblItems::TblList

        ydk::YList tbl_list;
        
}; // System::L3vmItems::InstItems::TblItems


class System::L3vmItems::InstItems::TblItems::TblList : public ydk::Entity
{
    public:
        TblList();
        ~TblList();

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
        ydk::YLeaf gsdbctx; //type: uint32
        ydk::YLeaf rtlmtmax; //type: uint32
        ydk::YLeaf rtlmtwarn; //type: uint32
        ydk::YLeaf rtlmtwarnonly; //type: boolean
        ydk::YLeaf rtlmtwarnpct; //type: uint8
        ydk::YLeaf rtlmtreinstpct; //type: uint8

}; // System::L3vmItems::InstItems::TblItems::TblList


class System::UribItems : public ydk::Entity
{
    public:
        UribItems();
        ~UribItems();

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

        class Table4Items; //type: System::UribItems::Table4Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items> table4_items;
        
}; // System::UribItems


class System::UribItems::Table4Items : public ydk::Entity
{
    public:
        Table4Items();
        ~Table4Items();

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

        class Table4List; //type: System::UribItems::Table4Items::Table4List

        ydk::YList table4_list;
        
}; // System::UribItems::Table4Items


class System::UribItems::Table4Items::Table4List : public ydk::Entity
{
    public:
        Table4List();
        ~Table4List();

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

        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf routecount; //type: uint32
        ydk::YLeaf unibestcount; //type: uint32
        ydk::YLeaf unibackupcount; //type: uint32
        ydk::YLeaf multibestcount; //type: uint32
        ydk::YLeaf multibackupcount; //type: uint32
        ydk::YLeaf routepermaskcount; //type: string
        class Route4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items> route4_items;
        
}; // System::UribItems::Table4Items::Table4List


class System::UribItems::Table4Items::Table4List::Route4Items : public ydk::Entity
{
    public:
        Route4Items();
        ~Route4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route4List; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List

        ydk::YList route4_list;
        
}; // System::UribItems::Table4Items::Table4List::Route4Items


class System::UribItems::Table4Items::Table4List::Route4Items::Route4List : public ydk::Entity
{
    public:
        Route4List();
        ~Route4List();

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
        class Nh4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items
        class Routedetail4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items> nh4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items> routedetail4_items;
        
}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List


class System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items : public ydk::Entity
{
    public:
        Nh4Items();
        ~Nh4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop4List; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List

        ydk::YList nexthop4_list;
        
}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items


class System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List : public ydk::Entity
{
    public:
        NextHop4List();
        ~NextHop4List();

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
        class Nhdetail4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items> nhdetail4_items;
        
}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List


class System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items : public ydk::Entity
{
    public:
        Nhdetail4Items();
        ~Nhdetail4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string

}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List::Nhdetail4Items


class System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items : public ydk::Entity
{
    public:
        Routedetail4Items();
        ~Routedetail4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string

}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Routedetail4Items


class System::U6ribItems : public ydk::Entity
{
    public:
        U6ribItems();
        ~U6ribItems();

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

        class Table6Items; //type: System::U6ribItems::Table6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items> table6_items;
        
}; // System::U6ribItems


class System::U6ribItems::Table6Items : public ydk::Entity
{
    public:
        Table6Items();
        ~Table6Items();

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

        class Table6List; //type: System::U6ribItems::Table6Items::Table6List

        ydk::YList table6_list;
        
}; // System::U6ribItems::Table6Items


class System::U6ribItems::Table6Items::Table6List : public ydk::Entity
{
    public:
        Table6List();
        ~Table6List();

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

        ydk::YLeaf vrfname; //type: string
        class Route6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items> route6_items;
        
}; // System::U6ribItems::Table6Items::Table6List


class System::U6ribItems::Table6Items::Table6List::Route6Items : public ydk::Entity
{
    public:
        Route6Items();
        ~Route6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route6List; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List

        ydk::YList route6_list;
        
}; // System::U6ribItems::Table6Items::Table6List::Route6Items


class System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List : public ydk::Entity
{
    public:
        Route6List();
        ~Route6List();

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
        class Nh6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items
        class Routedetail6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items> nh6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items> routedetail6_items;
        
}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List


class System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items : public ydk::Entity
{
    public:
        Nh6Items();
        ~Nh6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop6List; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List

        ydk::YList nexthop6_list;
        
}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items


class System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List : public ydk::Entity
{
    public:
        NextHop6List();
        ~NextHop6List();

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
        class Nhdetail6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items> nhdetail6_items;
        
}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List


class System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items : public ydk::Entity
{
    public:
        Nhdetail6Items();
        ~Nhdetail6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string

}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List::Nhdetail6Items


class System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items : public ydk::Entity
{
    public:
        Routedetail6Items();
        ~Routedetail6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string

}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Routedetail6Items


class System::Uribv4Items : public ydk::Entity
{
    public:
        Uribv4Items();
        ~Uribv4Items();

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
        class DomItems; //type: System::Uribv4Items::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems> dom_items;
        
}; // System::Uribv4Items


class System::Uribv4Items::DomItems : public ydk::Entity
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

        class DomList; //type: System::Uribv4Items::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Uribv4Items::DomItems


class System::Uribv4Items::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf operst; //type: RibDomOperSt
        class DbItems; //type: System::Uribv4Items::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems> db_items;
        
}; // System::Uribv4Items::DomItems::DomList


class System::Uribv4Items::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems


class System::Uribv4Items::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: RibDbT
        ydk::YLeaf name; //type: string
        class RtItems; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems
        class OwnerItems; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems> owner_items;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList : public ydk::Entity
{
    public:
        NexthopList();
        ~NexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf if_; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf name; //type: string

}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems : public ydk::Entity
{
    public:
        OwnerItems();
        ~OwnerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteOwnerList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList

        ydk::YList routeowner_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_34_ */

