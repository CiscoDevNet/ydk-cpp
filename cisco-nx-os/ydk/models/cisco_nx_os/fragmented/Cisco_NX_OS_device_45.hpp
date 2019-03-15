#ifndef _CISCO_NX_OS_DEVICE_45_
#define _CISCO_NX_OS_DEVICE_45_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_44.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::Vrrpv3Items::InstItems::IfItems : public ydk::Entity
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

        class InterfaceList; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList

        ydk::YList interface_list;
        
}; // System::Vrrpv3Items::InstItems::IfItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class IdItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems
        class RtvrfMbrItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems> id_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems : public ydk::Entity
{
    public:
        IdItems();
        ~IdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrList; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList

        ydk::YList vr_list;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList : public ydk::Entity
{
    public:
        VrList();
        ~VrList();

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
        ydk::YLeaf af; //type: Vrrpv3VrAf
        ydk::YLeaf ip; //type: string
        ydk::YLeaf advintvl; //type: uint32
        ydk::YLeaf pricfg; //type: uint32
        ydk::YLeaf preempt; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf preemptdelaymin; //type: uint32
        ydk::YLeaf adminst; //type: boolean
        class TrackItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems
        class AddrItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems> track_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems> addr_items;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems : public ydk::Entity
{
    public:
        TrackItems();
        ~TrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjectTrackList; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems::ObjectTrackList

        ydk::YList objecttrack_list;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems::ObjectTrackList : public ydk::Entity
{
    public:
        ObjectTrackList();
        ~ObjectTrackList();

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
        ydk::YLeaf decrprio; //type: uint16

}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::TrackItems::ObjectTrackList


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems : public ydk::Entity
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

        class AddrList; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems::AddrList

        ydk::YList addr_list;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems::AddrList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string

}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems::AddrList


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtvrfMbrItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems


class System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList


class System::ScrtchpdrtItems : public ydk::Entity
{
    public:
        ScrtchpdrtItems();
        ~ScrtchpdrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RpmcliItems; //type: System::ScrtchpdrtItems::RpmcliItems
        class VlanmgrcliItems; //type: System::ScrtchpdrtItems::VlanmgrcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems> rpmcli_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::VlanmgrcliItems> vlanmgrcli_items;
        
}; // System::ScrtchpdrtItems


class System::ScrtchpdrtItems::RpmcliItems : public ydk::Entity
{
    public:
        RpmcliItems();
        ~RpmcliItems();

        bool has_data() const override;
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
        class AccesslistcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems
        class Pfxlistv4cliItems; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems
        class Pfxlistv6cliItems; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems
        class RtregcomcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems> accesslistcli_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems> pfxlistv4cli_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems> pfxlistv6cli_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems> rtregcomcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems


class System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems : public ydk::Entity
{
    public:
        AccesslistcliItems();
        ~AccesslistcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleCliList; //type: System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList

        ydk::YList rulecli_list;
        
}; // System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems


class System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList : public ydk::Entity
{
    public:
        RuleCliList();
        ~RuleCliList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems> entcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList


class System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems : public ydk::Entity
{
    public:
        EntcliItems();
        ~EntcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cliaction; //type: ScrtchpdAction
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint32
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string

}; // System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems : public ydk::Entity
{
    public:
        Pfxlistv4cliItems();
        ~Pfxlistv4cliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleV4CliList; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList

        ydk::YList rulev4cli_list;
        
}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList : public ydk::Entity
{
    public:
        RuleV4CliList();
        ~RuleV4CliList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems> entcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems : public ydk::Entity
{
    public:
        EntcliItems();
        ~EntcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cliaction; //type: ScrtchpdAction
        ydk::YLeaf pfx; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf criteria; //type: RtpfxCriteria
        ydk::YLeaf frompfxlen; //type: uint16
        ydk::YLeaf topfxlen; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint32
        ydk::YLeaf action; //type: RtfltAction

}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems : public ydk::Entity
{
    public:
        Pfxlistv6cliItems();
        ~Pfxlistv6cliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleV6CliList; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList

        ydk::YList rulev6cli_list;
        
}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList : public ydk::Entity
{
    public:
        RuleV6CliList();
        ~RuleV6CliList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        class EntcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems> entcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList


class System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems : public ydk::Entity
{
    public:
        EntcliItems();
        ~EntcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cliaction; //type: ScrtchpdAction
        ydk::YLeaf pfx; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf criteria; //type: RtpfxCriteria
        ydk::YLeaf frompfxlen; //type: uint16
        ydk::YLeaf topfxlen; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint32
        ydk::YLeaf action; //type: RtfltAction

}; // System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems : public ydk::Entity
{
    public:
        RtregcomcliItems();
        ~RtregcomcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleCliList; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList

        ydk::YList rulecli_list;
        
}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList : public ydk::Entity
{
    public:
        RuleCliList();
        ~RuleCliList();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtcomComT
        ydk::YLeaf mode; //type: RtcomMode
        class EntregcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems
        class EntcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems> entregcli_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems> entcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems : public ydk::Entity
{
    public:
        EntregcliItems();
        ~EntregcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf numofchildren; //type: uint32
        ydk::YLeaf cliaction; //type: ScrtchpdAction
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint32
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string

}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems : public ydk::Entity
{
    public:
        EntcliItems();
        ~EntcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf numofchildren; //type: uint32
        ydk::YLeaf cliaction; //type: ScrtchpdAction
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint32
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string
        class ItemcliItems; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems> itemcli_items;
        
}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems : public ydk::Entity
{
    public:
        ItemcliItems();
        ~ItemcliItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemCliList; //type: System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList

        ydk::YList itemcli_list;
        
}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems


class System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList : public ydk::Entity
{
    public:
        ItemCliList();
        ~ItemCliList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList


class System::ScrtchpdrtItems::VlanmgrcliItems : public ydk::Entity
{
    public:
        VlanmgrcliItems();
        ~VlanmgrcliItems();

        bool has_data() const override;
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
        class InstItems; //type: System::ScrtchpdrtItems::VlanmgrcliItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems::VlanmgrcliItems::InstItems> inst_items;
        
}; // System::ScrtchpdrtItems::VlanmgrcliItems


class System::ScrtchpdrtItems::VlanmgrcliItems::InstItems : public ydk::Entity
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

        ydk::YLeaf vxlannativevlans; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

}; // System::ScrtchpdrtItems::VlanmgrcliItems::InstItems


class System::SectlItems : public ydk::Entity
{
    public:
        SectlItems();
        ~SectlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SwTLTestObjList; //type: System::SectlItems::SwTLTestObjList

        ydk::YList swtltestobj_list;
        
}; // System::SectlItems


class System::SectlItems::SwTLTestObjList : public ydk::Entity
{
    public:
        SwTLTestObjList();
        ~SwTLTestObjList();

        bool has_data() const override;
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
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf descr; //type: string
        ydk::YLeaf objdn; //type: string
        ydk::YLeaf prikey; //type: string
        class SeccItems; //type: System::SectlItems::SwTLTestObjList::SeccItems
        class IeccItems; //type: System::SectlItems::SwTLTestObjList::IeccItems
        class RttoObjItems; //type: System::SectlItems::SwTLTestObjList::RttoObjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::SeccItems> secc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::IeccItems> iecc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::RttoObjItems> rttoobj_items;
        
}; // System::SectlItems::SwTLTestObjList


class System::SectlItems::SwTLTestObjList::SeccItems : public ydk::Entity
{
    public:
        SeccItems();
        ~SeccItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SwCTestObjList; //type: System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList

        ydk::YList swctestobj_list;
        
}; // System::SectlItems::SwTLTestObjList::SeccItems


class System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList : public ydk::Entity
{
    public:
        SwCTestObjList();
        ~SwCTestObjList();

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
        ydk::YLeaf swctestonly; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf descr; //type: string
        ydk::YLeaf objdn; //type: string
        class RstoObjItems; //type: System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems
        class RttoObjItems; //type: System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems> rstoobj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems> rttoobj_items;
        
}; // System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList


class System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems : public ydk::Entity
{
    public:
        RstoObjItems();
        ~RstoObjItems();

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

}; // System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems


class System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems : public ydk::Entity
{
    public:
        RttoObjItems();
        ~RttoObjItems();

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

}; // System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems


class System::SectlItems::SwTLTestObjList::IeccItems : public ydk::Entity
{
    public:
        IeccItems();
        ~IeccItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfcCTestObjList; //type: System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList

        ydk::YList ifcctestobj_list;
        
}; // System::SectlItems::SwTLTestObjList::IeccItems


class System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList : public ydk::Entity
{
    public:
        IfcCTestObjList();
        ~IfcCTestObjList();

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
        ydk::YLeaf ifcctestonly; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf descr; //type: string
        ydk::YLeaf objdn; //type: string
        class RttoObjItems; //type: System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems> rttoobj_items;
        
}; // System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList


class System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems : public ydk::Entity
{
    public:
        RttoObjItems();
        ~RttoObjItems();

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

}; // System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems


class System::SectlItems::SwTLTestObjList::RttoObjItems : public ydk::Entity
{
    public:
        RttoObjItems();
        ~RttoObjItems();

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

}; // System::SectlItems::SwTLTestObjList::RttoObjItems


class System::CaggrItems : public ydk::Entity
{
    public:
        CaggrItems();
        ~CaggrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AggrIfList; //type: System::CaggrItems::AggrIfList

        ydk::YList aggrif_list;
        
}; // System::CaggrItems


class System::CaggrItems::AggrIfList : public ydk::Entity
{
    public:
        AggrIfList();
        ~AggrIfList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        ydk::YLeaf mode; //type: L1Mode
        ydk::YLeaf layer; //type: L1Layer
        ydk::YLeaf mdix; //type: L1Mdix
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf linkdebounce; //type: uint16
        ydk::YLeaf dot1qethertype; //type: L1Dot1qEtherType
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf medium; //type: L1Medium
        ydk::YLeaf inhbw; //type: uint32
        ydk::YLeaf spanmode; //type: L1SpanMode
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf trunklog; //type: L1TrunkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf portt; //type: EqptPortT
        ydk::YLeaf usage; //type: string
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf usercfgdflags; //type: string
        class DomItems; //type: System::CaggrItems::AggrIfList::DomItems
        class RtextConfItems; //type: System::CaggrItems::AggrIfList::RtextConfItems
        class RtbrConfItems; //type: System::CaggrItems::AggrIfList::RtbrConfItems
        class RtfvNodePortAttItems; //type: System::CaggrItems::AggrIfList::RtfvNodePortAttItems
        class RtvrfMbrItems; //type: System::CaggrItems::AggrIfList::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::CaggrItems::AggrIfList::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::CaggrItems::AggrIfList::RtnwPathToIfItems
        class RtLsNodeToIfItems; //type: System::CaggrItems::AggrIfList::RtLsNodeToIfItems
        class RsmbrIfsItems; //type: System::CaggrItems::AggrIfList::RsmbrIfsItems
        class RsactiveIfItems; //type: System::CaggrItems::AggrIfList::RsactiveIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RtLsNodeToIfItems> rtlsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RsmbrIfsItems> rsmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::RsactiveIfItems> rsactiveif_items;
        
}; // System::CaggrItems::AggrIfList


class System::CaggrItems::AggrIfList::DomItems : public ydk::Entity
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

        class DomDefList; //type: System::CaggrItems::AggrIfList::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::CaggrItems::AggrIfList::DomItems


class System::CaggrItems::AggrIfList::DomItems::DomDefList : public ydk::Entity
{
    public:
        DomDefList();
        ~DomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dompkey; //type: string
        ydk::YLeaf instrimedcy; //type: FvImmediacy_
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::CaggrItems::AggrIfList::DomItems::DomDefList


class System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
{
    public:
        RsdomDefNsItems();
        ~RsdomDefNsItems();

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

}; // System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems


class System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
{
    public:
        RsdomDefNsLocalItems();
        ~RsdomDefNsLocalItems();

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

}; // System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems


class System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems : public ydk::Entity
{
    public:
        RtfvToDomDefItems();
        ~RtfvToDomDefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToDomDefList; //type: System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList

        ydk::YList rtfvtodomdef_list;
        
}; // System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems


class System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList : public ydk::Entity
{
    public:
        RtFvToDomDefList();
        ~RtFvToDomDefList();

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

}; // System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList


class System::CaggrItems::AggrIfList::RtextConfItems : public ydk::Entity
{
    public:
        RtextConfItems();
        ~RtextConfItems();

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

}; // System::CaggrItems::AggrIfList::RtextConfItems


class System::CaggrItems::AggrIfList::RtbrConfItems : public ydk::Entity
{
    public:
        RtbrConfItems();
        ~RtbrConfItems();

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

}; // System::CaggrItems::AggrIfList::RtbrConfItems


class System::CaggrItems::AggrIfList::RtfvNodePortAttItems : public ydk::Entity
{
    public:
        RtfvNodePortAttItems();
        ~RtfvNodePortAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvNodePortAttList; //type: System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList

        ydk::YList rtfvnodeportatt_list;
        
}; // System::CaggrItems::AggrIfList::RtfvNodePortAttItems


class System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList : public ydk::Entity
{
    public:
        RtFvNodePortAttList();
        ~RtFvNodePortAttList();

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

}; // System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList


class System::CaggrItems::AggrIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::CaggrItems::AggrIfList::RtvrfMbrItems


class System::CaggrItems::AggrIfList::RtphysRtdConfItems : public ydk::Entity
{
    public:
        RtphysRtdConfItems();
        ~RtphysRtdConfItems();

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

}; // System::CaggrItems::AggrIfList::RtphysRtdConfItems


class System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems : public ydk::Entity
{
    public:
        Rtl3EncPhysRtdConfItems();
        ~Rtl3EncPhysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtL3EncPhysRtdConfList; //type: System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList

        ydk::YList rtl3encphysrtdconf_list;
        
}; // System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems


class System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList : public ydk::Entity
{
    public:
        RtL3EncPhysRtdConfList();
        ~RtL3EncPhysRtdConfList();

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

}; // System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList


class System::CaggrItems::AggrIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::CaggrItems::AggrIfList::RtnwPathToIfItems


class System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::CaggrItems::AggrIfList::RtLsNodeToIfItems : public ydk::Entity
{
    public:
        RtLsNodeToIfItems();
        ~RtLsNodeToIfItems();

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

}; // System::CaggrItems::AggrIfList::RtLsNodeToIfItems


class System::CaggrItems::AggrIfList::RsmbrIfsItems : public ydk::Entity
{
    public:
        RsmbrIfsItems();
        ~RsmbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMbrIfsList; //type: System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList

        ydk::YList rsmbrifs_list;
        
}; // System::CaggrItems::AggrIfList::RsmbrIfsItems


class System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList : public ydk::Entity
{
    public:
        RsMbrIfsList();
        ~RsMbrIfsList();

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

}; // System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList


class System::CaggrItems::AggrIfList::RsactiveIfItems : public ydk::Entity
{
    public:
        RsactiveIfItems();
        ~RsactiveIfItems();

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

}; // System::CaggrItems::AggrIfList::RsactiveIfItems


class System::CphysItems : public ydk::Entity
{
    public:
        CphysItems();
        ~CphysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PhysIfList; //type: System::CphysItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::CphysItems


class System::CphysItems::PhysIfList : public ydk::Entity
{
    public:
        PhysIfList();
        ~PhysIfList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        ydk::YLeaf mode; //type: L1Mode
        ydk::YLeaf layer; //type: L1Layer
        ydk::YLeaf mdix; //type: L1Mdix
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf linkdebounce; //type: uint16
        ydk::YLeaf dot1qethertype; //type: L1Dot1qEtherType
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf medium; //type: L1Medium
        ydk::YLeaf inhbw; //type: uint32
        ydk::YLeaf spanmode; //type: L1SpanMode
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf trunklog; //type: L1TrunkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf portt; //type: EqptPortT
        ydk::YLeaf usage; //type: string
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf usercfgdflags; //type: string
        class DomItems; //type: System::CphysItems::PhysIfList::DomItems
        class RtextConfItems; //type: System::CphysItems::PhysIfList::RtextConfItems
        class RtbrConfItems; //type: System::CphysItems::PhysIfList::RtbrConfItems
        class RtfvNodePortAttItems; //type: System::CphysItems::PhysIfList::RtfvNodePortAttItems
        class RtvrfMbrItems; //type: System::CphysItems::PhysIfList::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::CphysItems::PhysIfList::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::CphysItems::PhysIfList::RtnwPathToIfItems
        class RtLsNodeToIfItems; //type: System::CphysItems::PhysIfList::RtLsNodeToIfItems
        class RtmbrIfsItems; //type: System::CphysItems::PhysIfList::RtmbrIfsItems
        class RtactiveIfItems; //type: System::CphysItems::PhysIfList::RtactiveIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtLsNodeToIfItems> rtlsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtmbrIfsItems> rtmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::RtactiveIfItems> rtactiveif_items;
        
}; // System::CphysItems::PhysIfList


class System::CphysItems::PhysIfList::DomItems : public ydk::Entity
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

        class DomDefList; //type: System::CphysItems::PhysIfList::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::CphysItems::PhysIfList::DomItems


class System::CphysItems::PhysIfList::DomItems::DomDefList : public ydk::Entity
{
    public:
        DomDefList();
        ~DomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dompkey; //type: string
        ydk::YLeaf instrimedcy; //type: FvImmediacy_
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::CphysItems::PhysIfList::DomItems::DomDefList


class System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
{
    public:
        RsdomDefNsItems();
        ~RsdomDefNsItems();

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

}; // System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems


class System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
{
    public:
        RsdomDefNsLocalItems();
        ~RsdomDefNsLocalItems();

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

}; // System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems


class System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems : public ydk::Entity
{
    public:
        RtfvToDomDefItems();
        ~RtfvToDomDefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToDomDefList; //type: System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList

        ydk::YList rtfvtodomdef_list;
        
}; // System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems


class System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList : public ydk::Entity
{
    public:
        RtFvToDomDefList();
        ~RtFvToDomDefList();

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

}; // System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList


class System::CphysItems::PhysIfList::RtextConfItems : public ydk::Entity
{
    public:
        RtextConfItems();
        ~RtextConfItems();

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

}; // System::CphysItems::PhysIfList::RtextConfItems


class System::CphysItems::PhysIfList::RtbrConfItems : public ydk::Entity
{
    public:
        RtbrConfItems();
        ~RtbrConfItems();

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

}; // System::CphysItems::PhysIfList::RtbrConfItems


class System::CphysItems::PhysIfList::RtfvNodePortAttItems : public ydk::Entity
{
    public:
        RtfvNodePortAttItems();
        ~RtfvNodePortAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvNodePortAttList; //type: System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList

        ydk::YList rtfvnodeportatt_list;
        
}; // System::CphysItems::PhysIfList::RtfvNodePortAttItems


class System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList : public ydk::Entity
{
    public:
        RtFvNodePortAttList();
        ~RtFvNodePortAttList();

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

}; // System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList


class System::CphysItems::PhysIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::CphysItems::PhysIfList::RtvrfMbrItems


class System::CphysItems::PhysIfList::RtphysRtdConfItems : public ydk::Entity
{
    public:
        RtphysRtdConfItems();
        ~RtphysRtdConfItems();

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

}; // System::CphysItems::PhysIfList::RtphysRtdConfItems


class System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems : public ydk::Entity
{
    public:
        Rtl3EncPhysRtdConfItems();
        ~Rtl3EncPhysRtdConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtL3EncPhysRtdConfList; //type: System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList

        ydk::YList rtl3encphysrtdconf_list;
        
}; // System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems


class System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList : public ydk::Entity
{
    public:
        RtL3EncPhysRtdConfList();
        ~RtL3EncPhysRtdConfList();

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

}; // System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList


class System::CphysItems::PhysIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::CphysItems::PhysIfList::RtnwPathToIfItems


class System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::CphysItems::PhysIfList::RtLsNodeToIfItems : public ydk::Entity
{
    public:
        RtLsNodeToIfItems();
        ~RtLsNodeToIfItems();

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

}; // System::CphysItems::PhysIfList::RtLsNodeToIfItems


class System::CphysItems::PhysIfList::RtmbrIfsItems : public ydk::Entity
{
    public:
        RtmbrIfsItems();
        ~RtmbrIfsItems();

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

}; // System::CphysItems::PhysIfList::RtmbrIfsItems


class System::CphysItems::PhysIfList::RtactiveIfItems : public ydk::Entity
{
    public:
        RtactiveIfItems();
        ~RtactiveIfItems();

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

}; // System::CphysItems::PhysIfList::RtactiveIfItems


class System::ActionItems : public ydk::Entity
{
    public:
        ActionItems();
        ~ActionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TracertnveItems; //type: System::ActionItems::TracertnveItems
        class PathtracenveItems; //type: System::ActionItems::PathtracenveItems
        class EqptdiagruleItems; //type: System::ActionItems::EqptdiagruleItems
        class LsubjItems; //type: System::ActionItems::LsubjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::TracertnveItems> tracertnve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::PathtracenveItems> pathtracenve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::EqptdiagruleItems> eqptdiagrule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems> lsubj_items;
        
}; // System::ActionItems


class System::ActionItems::TracertnveItems : public ydk::Entity
{
    public:
        TracertnveItems();
        ~TracertnveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TraceRtNveList; //type: System::ActionItems::TracertnveItems::TraceRtNveList

        ydk::YList tracertnve_list;
        
}; // System::ActionItems::TracertnveItems


class System::ActionItems::TracertnveItems::TraceRtNveList : public ydk::Entity
{
    public:
        TraceRtNveList();
        ~TraceRtNveList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: uint16
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf maxttl; //type: uint8
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        class TrnversltItems; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems> trnverslt_items;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems : public ydk::Entity
{
    public:
        TrnversltItems();
        ~TrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceRtNveRsltList; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList

        ydk::YList tracertnverslt_list;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList : public ydk::Entity
{
    public:
        TraceRtNveRsltList();
        ~TraceRtNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathtrItems; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems> pathtr_items;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems : public ydk::Entity
{
    public:
        PathtrItems();
        ~PathtrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTrList; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList

        ydk::YList pathtr_list;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList : public ydk::Entity
{
    public:
        PathTrList();
        ~PathTrList();

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
        class NodetrItems; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems> nodetr_items;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems : public ydk::Entity
{
    public:
        NodetrItems();
        ~NodetrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeTrList; //type: System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList

        ydk::YList nodetr_list;
        
}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems


class System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList : public ydk::Entity
{
    public:
        NodeTrList();
        ~NodeTrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf elapsedtime; //type: string

}; // System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList


class System::ActionItems::PathtracenveItems : public ydk::Entity
{
    public:
        PathtracenveItems();
        ~PathtracenveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PathTraceNveList; //type: System::ActionItems::PathtracenveItems::PathTraceNveList

        ydk::YList pathtracenve_list;
        
}; // System::ActionItems::PathtracenveItems


class System::ActionItems::PathtracenveItems::PathTraceNveList : public ydk::Entity
{
    public:
        PathTraceNveList();
        ~PathTraceNveList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf reqstats; //type: boolean
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: uint16
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf maxttl; //type: uint8
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        class PtrnversltItems; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems> ptrnverslt_items;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems : public ydk::Entity
{
    public:
        PtrnversltItems();
        ~PtrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTraceNveRsltList; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList

        ydk::YList pathtracenverslt_list;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList : public ydk::Entity
{
    public:
        PathTraceNveRsltList();
        ~PathTraceNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathptrItems; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems> pathptr_items;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems : public ydk::Entity
{
    public:
        PathptrItems();
        ~PathptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathPtrList; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList

        ydk::YList pathptr_list;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList : public ydk::Entity
{
    public:
        PathPtrList();
        ~PathPtrList();

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
        class NodeptrItems; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems> nodeptr_items;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems : public ydk::Entity
{
    public:
        NodeptrItems();
        ~NodeptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodePtrList; //type: System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList

        ydk::YList nodeptr_list;
        
}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems


class System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList : public ydk::Entity
{
    public:
        NodePtrList();
        ~NodePtrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf elapsedtime; //type: string
        ydk::YLeaf ingressif; //type: string
        ydk::YLeaf ingressifstate; //type: string
        ydk::YLeaf rxlen; //type: uint64
        ydk::YLeaf rxbytes; //type: uint64
        ydk::YLeaf rxpktrate; //type: uint64
        ydk::YLeaf rxbyterate; //type: uint64
        ydk::YLeaf rxload; //type: uint64
        ydk::YLeaf rxucast; //type: uint64
        ydk::YLeaf rxmcast; //type: uint64
        ydk::YLeaf rxbcast; //type: uint64
        ydk::YLeaf rxdiscards; //type: uint64
        ydk::YLeaf rxerrors; //type: uint64
        ydk::YLeaf rxunknown; //type: uint64
        ydk::YLeaf rxbandwidth; //type: uint32
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf egressifstate; //type: string
        ydk::YLeaf txlen; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf txpktrate; //type: uint64
        ydk::YLeaf txbyterate; //type: uint64
        ydk::YLeaf txload; //type: uint64
        ydk::YLeaf txucast; //type: uint64
        ydk::YLeaf txmcast; //type: uint64
        ydk::YLeaf txbcast; //type: uint64
        ydk::YLeaf txdiscards; //type: uint64
        ydk::YLeaf txerrors; //type: uint64
        ydk::YLeaf txbandwidth; //type: uint32

}; // System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList


class System::ActionItems::EqptdiagruleItems : public ydk::Entity
{
    public:
        EqptdiagruleItems();
        ~EqptdiagruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OnDRuleList; //type: System::ActionItems::EqptdiagruleItems::OnDRuleList

        ydk::YList ondrule_list;
        
}; // System::ActionItems::EqptdiagruleItems


class System::ActionItems::EqptdiagruleItems::OnDRuleList : public ydk::Entity
{
    public:
        OnDRuleList();
        ~OnDRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf freq; //type: string
        class SubjItems; //type: System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems> subj_items;
        
}; // System::ActionItems::EqptdiagruleItems::OnDRuleList


class System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems : public ydk::Entity
{
    public:
        SubjItems();
        ~SubjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OnDSubjList; //type: System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList

        ydk::YList ondsubj_list;
        
}; // System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems


class System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList : public ydk::Entity
{
    public:
        OnDSubjList();
        ~OnDSubjList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odn; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf opk; //type: string
        ydk::YLeaf osk; //type: string
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf name; //type: string
        class RsltItems; //type: System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems> rslt_items;
        
}; // System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList


class System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems : public ydk::Entity
{
    public:
        RsltItems();
        ~RsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltList; //type: System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList

        ydk::YList rslt_list;
        
}; // System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems


class System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList : public ydk::Entity
{
    public:
        RsltList();
        ~RsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf qual; //type: string
        ydk::YLeaf name; //type: string

}; // System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList


class System::ActionItems::LsubjItems : public ydk::Entity
{
    public:
        LsubjItems();
        ~LsubjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LSubjList; //type: System::ActionItems::LsubjItems::LSubjList

        ydk::YList lsubj_list;
        
}; // System::ActionItems::LsubjItems


class System::ActionItems::LsubjItems::LSubjList : public ydk::Entity
{
    public:
        LSubjList();
        ~LSubjList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf odn; //type: string
        ydk::YLeaf ocl; //type: string
        class IdomainItems; //type: System::ActionItems::LsubjItems::LSubjList::IdomainItems
        class PingnveItems; //type: System::ActionItems::LsubjItems::LSubjList::PingnveItems
        class PingexecfabItems; //type: System::ActionItems::LsubjItems::LSubjList::PingexecfabItems
        class PingexectnItems; //type: System::ActionItems::LsubjItems::LSubjList::PingexectnItems
        class PingrsltfabItems; //type: System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems
        class PingrslttnItems; //type: System::ActionItems::LsubjItems::LSubjList::PingrslttnItems
        class TrexecfabItems; //type: System::ActionItems::LsubjItems::LSubjList::TrexecfabItems
        class TrexectnItems; //type: System::ActionItems::LsubjItems::LSubjList::TrexectnItems
        class TrrsltfabItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems
        class TrrslttnItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems
        class ImginsttaskrsltItems; //type: System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems
        class TrkipItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems
        class TrkmacItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems
        class IprsltItems; //type: System::ActionItems::LsubjItems::LSubjList::IprsltItems
        class MacrsltItems; //type: System::ActionItems::LsubjItems::LSubjList::MacrsltItems
        class PingnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::PingnversltItems
        class TracertnveItems; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems
        class PathtracenveItems; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems
        class TrnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems
        class PtrnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems
        class RslSubjToDomainRefItems; //type: System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::IdomainItems> idomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingnveItems> pingnve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingexecfabItems> pingexecfab_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingexectnItems> pingexectn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems> pingrsltfab_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingrslttnItems> pingrslttn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrexecfabItems> trexecfab_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrexectnItems> trexectn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems> trrsltfab_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems> trrslttn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems> imginsttaskrslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkipItems> trkip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkmacItems> trkmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::IprsltItems> iprslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::MacrsltItems> macrslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingnversltItems> pingnverslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TracertnveItems> tracertnve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PathtracenveItems> pathtracenve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrnversltItems> trnverslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PtrnversltItems> ptrnverslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems> rslsubjtodomainref_items;
        
}; // System::ActionItems::LsubjItems::LSubjList


class System::ActionItems::LsubjItems::LSubjList::IdomainItems : public ydk::Entity
{
    public:
        IdomainItems();
        ~IdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDomainRefList; //type: System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList

        ydk::YList idomainref_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::IdomainItems


class System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList : public ydk::Entity
{
    public:
        IDomainRefList();
        ~IDomainRefList();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList


class System::ActionItems::LsubjItems::LSubjList::PingnveItems : public ydk::Entity
{
    public:
        PingnveItems();
        ~PingnveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PingNveList; //type: System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList

        ydk::YList pingnve_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingnveItems


class System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList : public ydk::Entity
{
    public:
        PingNveList();
        ~PingNveList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: string
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf interval; //type: uint8
        ydk::YLeaf datapattern; //type: uint16
        ydk::YLeaf sweepmin; //type: uint16
        ydk::YLeaf sweepmax; //type: uint16
        ydk::YLeaf packetsz; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        class PingnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems> pingnverslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList


class System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems : public ydk::Entity
{
    public:
        PingnversltItems();
        ~PingnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PingNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList

        ydk::YList pingnverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems


class System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList : public ydk::Entity
{
    public:
        PingNveRsltList();
        ~PingNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf replyip; //type: string
        ydk::YLeaf replyipv6; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf sport; //type: uint16
        ydk::YLeaf packetsz; //type: uint16
        ydk::YLeaf sentpkts; //type: uint32
        ydk::YLeaf notsentpkts; //type: uint32
        ydk::YLeaf rcvdpkts; //type: uint32
        ydk::YLeaf minrtt; //type: uint32
        ydk::YLeaf avgrtt; //type: uint32
        ydk::YLeaf maxrtt; //type: uint32
        ydk::YLeaf totalrtt; //type: uint32

}; // System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList


class System::ActionItems::LsubjItems::LSubjList::PingexecfabItems : public ydk::Entity
{
    public:
        PingexecfabItems();
        ~PingexecfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecFabList; //type: System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList

        ydk::YList execfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingexecfabItems


class System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList : public ydk::Entity
{
    public:
        ExecFabList();
        ~ExecFabList();

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
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt

}; // System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList


class System::ActionItems::LsubjItems::LSubjList::PingexectnItems : public ydk::Entity
{
    public:
        PingexectnItems();
        ~PingexectnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecTnList; //type: System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList

        ydk::YList exectn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingexectnItems


class System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList : public ydk::Entity
{
    public:
        ExecTnList();
        ~ExecTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt

}; // System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList


class System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems : public ydk::Entity
{
    public:
        PingrsltfabItems();
        ~PingrsltfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltFabList; //type: System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList

        ydk::YList rsltfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems


class System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList : public ydk::Entity
{
    public:
        RsltFabList();
        ~RsltFabList();

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
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf startts; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf payloadsz; //type: uint16

}; // System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList


class System::ActionItems::LsubjItems::LSubjList::PingrslttnItems : public ydk::Entity
{
    public:
        PingrslttnItems();
        ~PingrslttnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltTnList; //type: System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList

        ydk::YList rslttn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingrslttnItems


class System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList : public ydk::Entity
{
    public:
        RsltTnList();
        ~RsltTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16

}; // System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList


class System::ActionItems::LsubjItems::LSubjList::TrexecfabItems : public ydk::Entity
{
    public:
        TrexecfabItems();
        ~TrexecfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecFabList; //type: System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList

        ydk::YList execfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrexecfabItems


class System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList : public ydk::Entity
{
    public:
        ExecFabList();
        ~ExecFabList();

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
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf maxpaths; //type: uint16
        ydk::YLeaf maxhops; //type: uint8

}; // System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList


class System::ActionItems::LsubjItems::LSubjList::TrexectnItems : public ydk::Entity
{
    public:
        TrexectnItems();
        ~TrexectnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecTnList; //type: System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList

        ydk::YList exectn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrexectnItems


class System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList : public ydk::Entity
{
    public:
        ExecTnList();
        ~ExecTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf gwmac; //type: string
        ydk::YLeaf usegwmac; //type: boolean
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf maxpaths; //type: uint16
        ydk::YLeaf maxhops; //type: uint8

}; // System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems : public ydk::Entity
{
    public:
        TrrsltfabItems();
        ~TrrsltfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltFabList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList

        ydk::YList rsltfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList : public ydk::Entity
{
    public:
        RsltFabList();
        ~RsltFabList();

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
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf startts; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        class PgrpItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems> pgrp_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems : public ydk::Entity
{
    public:
        PgrpItems();
        ~PgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathGrpList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList

        ydk::YList pathgrp_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList : public ydk::Entity
{
    public:
        PathGrpList();
        ~PathGrpList();

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
        class PathItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems> path_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

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
        ydk::YLeaf type; //type: TraceroutePathT
        ydk::YLeaf flags; //type: string
        class NodeItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems> node_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems : public ydk::Entity
{
    public:
        NodeItems();
        ~NodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList

        ydk::YList node_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList : public ydk::Entity
{
    public:
        NodeList();
        ~NodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems : public ydk::Entity
{
    public:
        TrrslttnItems();
        ~TrrslttnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltTnList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList

        ydk::YList rslttn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList : public ydk::Entity
{
    public:
        RsltTnList();
        ~RsltTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        class PgrpItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems> pgrp_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems : public ydk::Entity
{
    public:
        PgrpItems();
        ~PgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathGrpList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList

        ydk::YList pathgrp_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList : public ydk::Entity
{
    public:
        PathGrpList();
        ~PathGrpList();

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
        class PathItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems> path_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

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
        ydk::YLeaf type; //type: TraceroutePathT
        ydk::YLeaf flags; //type: string
        class NodeItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems> node_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems : public ydk::Entity
{
    public:
        NodeItems();
        ~NodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList

        ydk::YList node_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList : public ydk::Entity
{
    public:
        NodeList();
        ~NodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList


class System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems : public ydk::Entity
{
    public:
        ImginsttaskrsltItems();
        ~ImginsttaskrsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltList; //type: System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList

        ydk::YList rslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems


class System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList : public ydk::Entity
{
    public:
        RsltList();
        ~RsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf startts; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt

}; // System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems : public ydk::Entity
{
    public:
        TrkipItems();
        ~TrkipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpEpExecList; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList

        ydk::YList ipepexec_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList : public ydk::Entity
{
    public:
        IpEpExecList();
        ~IpEpExecList();

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
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: string
        class IprsltItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems> iprslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems : public ydk::Entity
{
    public:
        IprsltItems();
        ~IprsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpEpRsltList; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList

        ydk::YList ipeprslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList : public ydk::Entity
{
    public:
        IpEpRsltList();
        ~IpEpRsltList();

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
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        class RsipEpRslttoIpEpAttItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems> rsipeprslttoipepatt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RsipEpRslttoIpEpAttItems();
        ~RsipEpRslttoIpEpAttItems();

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

}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems : public ydk::Entity
{
    public:
        TrkmacItems();
        ~TrkmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpExecList; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList

        ydk::YList macepexec_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_45_ */

