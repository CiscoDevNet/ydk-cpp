#ifndef _CISCO_NX_OS_DEVICE_33_
#define _CISCO_NX_OS_DEVICE_33_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_32.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::SviItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::TunnelifItems : public ydk::Entity
{
    public:
        TunnelifItems();
        ~TunnelifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::IntfItems::TunnelifItems::IfList

        ydk::YList if_list;
        
}; // System::IntfItems::TunnelifItems


class System::IntfItems::TunnelifItems::IfList : public ydk::Entity
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
        ydk::YLeaf tunsrcaddr; //type: string
        ydk::YLeaf tunsrcintf; //type: string
        ydk::YLeaf tunsrcdirect; //type: TunnelifTunnelSrcDirect
        ydk::YLeaf tundestaddr; //type: string
        ydk::YLeaf tunmode; //type: TunnelifTunnelMode
        ydk::YLeaf tunvrf; //type: string
        ydk::YLeaf tunmtu; //type: uint32
        ydk::YLeaf tunpmtud; //type: TunnelifTunnelPMTUD
        ydk::YLeaf tunminpmtu; //type: uint32
        ydk::YLeaf tunpmtuage; //type: uint32
        ydk::YLeaf tunbw; //type: uint32
        ydk::YLeaf tunttl; //type: uint32
        ydk::YLeaf snmptrapst; //type: TunnelifSnmpTrapSt
        ydk::YLeaf tunoperst; //type: TunnelifTunnelOperSt
        ydk::YLeaf tunoperstqual; //type: TunnelifTunnelOperStQual
        ydk::YLeaf laststatechgdts; //type: string
        ydk::YLeaf tundelinprog; //type: boolean
        ydk::YLeaf tunintfoptions; //type: TunnelifTunnelOption
        ydk::YLeaf tuniod; //type: uint32
        ydk::YLeaf tunifindex; //type: uint32
        ydk::YLeaf tunifpmtu; //type: uint32
        ydk::YLeaf lastctrrstchgdts; //type: string
        ydk::YLeaf tunrxpackets; //type: uint64
        ydk::YLeaf tunrxbytes; //type: uint64
        ydk::YLeaf tuntxpackets; //type: uint64
        ydk::YLeaf tuntxbytes; //type: uint64
        ydk::YLeaf tunsrcip; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: L1AdminSt
        class VrfItems; //type: System::IntfItems::TunnelifItems::IfList::VrfItems
        class RtpseudoIfItems; //type: System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems
        class RtvrfMbrItems; //type: System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems> rtpseudoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::TunnelifItems::IfList


class System::IntfItems::TunnelifItems::IfList::VrfItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // System::IntfItems::TunnelifItems::IfList::VrfItems


class System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtpseudoIfItems


class System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtvrfMbrItems


class System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems


class System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IntfItems::TunnelifItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Ipv4Items : public ydk::Entity
{
    public:
        Ipv4Items();
        ~Ipv4Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Ipv4Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems> inst_items;
        
}; // System::Ipv4Items


class System::Ipv4Items::InstItems : public ydk::Entity
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

        ydk::YLeaf sourceroute; //type: NwAdminSt_
        ydk::YLeaf accesslistmatchlocal; //type: NwAdminSt_
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::Ipv4Items::InstItems::DomItems
        class ClientItems; //type: System::Ipv4Items::InstItems::ClientItems
        class IploadsharingItems; //type: System::Ipv4Items::InstItems::IploadsharingItems
        class LoadstatItems; //type: System::Ipv4Items::InstItems::LoadstatItems
        class IptrafficstatItems; //type: System::Ipv4Items::InstItems::IptrafficstatItems
        class IptrafficerrstatItems; //type: System::Ipv4Items::InstItems::IptrafficerrstatItems
        class IcmptrafficstatItems; //type: System::Ipv4Items::InstItems::IcmptrafficstatItems
        class Rfc4293trafficstatItems; //type: System::Ipv4Items::InstItems::Rfc4293trafficstatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IploadsharingItems> iploadsharing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::LoadstatItems> loadstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IptrafficstatItems> iptrafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IptrafficerrstatItems> iptrafficerrstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::IcmptrafficstatItems> icmptrafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::Rfc4293trafficstatItems> rfc4293trafficstat_items;
        
}; // System::Ipv4Items::InstItems


class System::Ipv4Items::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::Ipv4Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Ipv4Items::InstItems::DomItems


class System::Ipv4Items::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf autodiscard; //type: NwAdminSt_
        ydk::YLeaf ipicmperrorssrcintf; //type: string
        class RtstaticbfdItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems
        class IfItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems
        class PstatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::PstatItems
        class RtItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems
        class RoutestatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems> rtstaticbfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::PstatItems> pstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems> routestat_items;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList


class System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems : public ydk::Entity
{
    public:
        RtstaticbfdItems();
        ~RtstaticbfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtStaticBfdList; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList

        ydk::YList rtstaticbfd_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList : public ydk::Entity
{
    public:
        RtStaticBfdList();
        ~RtStaticBfdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf nexthop; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf directedbroadcast; //type: DirectedBroadcast
        ydk::YLeaf acl; //type: string
        ydk::YLeaf forward; //type: NwAdminSt_
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf urpf; //type: IpUrpfT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf donorif; //type: string
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpUnnumberedOperStQual
        class AddrItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems
        class DampeningItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems
        class DampeningdataItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems
        class TrafficstatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems
        class StatItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems
        class RpolItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems
        class RtvrfMbrItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems> dampening_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems> dampeningdata_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems> trafficstat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems> stat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems> rpol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
                class DirectedBroadcast;

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems : public ydk::Entity
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

        class AddrList; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList

        ydk::YList addr_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList : public ydk::Entity
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
        ydk::YLeaf type; //type: IpAddrT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpAddrOperStQual

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems : public ydk::Entity
{
    public:
        DampeningItems();
        ~DampeningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf halflifeperiod; //type: uint64
        ydk::YLeaf reusethreshold; //type: uint64
        ydk::YLeaf suppressthreshold; //type: uint64
        ydk::YLeaf maxsuppress; //type: uint64
        ydk::YLeaf restartenabled; //type: NwAdminSt_
        ydk::YLeaf restartpenalty; //type: uint64

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems : public ydk::Entity
{
    public:
        DampeningdataItems();
        ~DampeningdataItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flapcount; //type: uint64
        ydk::YLeaf penalty; //type: uint64
        ydk::YLeaf suppressed; //type: uint64
        ydk::YLeaf reusetime; //type: uint64
        ydk::YLeaf halflifeperiod; //type: uint64
        ydk::YLeaf reusethreshold; //type: uint64
        ydk::YLeaf suppressthreshold; //type: uint64
        ydk::YLeaf maxsuppress; //type: uint64
        ydk::YLeaf maxpenalty; //type: uint64
        ydk::YLeaf restartpenalty; //type: uint64

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DampeningdataItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems : public ydk::Entity
{
    public:
        TrafficstatItems();
        ~TrafficstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf upktsent; //type: uint64
        ydk::YLeaf upktrecv; //type: uint64
        ydk::YLeaf upktfwd; //type: uint64
        ydk::YLeaf upktorig; //type: uint64
        ydk::YLeaf upktconsumed; //type: uint64
        ydk::YLeaf ubytesent; //type: uint64
        ydk::YLeaf ubytercv; //type: uint64
        ydk::YLeaf ubytefwd; //type: uint64
        ydk::YLeaf ubyteorig; //type: uint64
        ydk::YLeaf ubyteconsumed; //type: uint64
        ydk::YLeaf mpktsent; //type: uint64
        ydk::YLeaf mpktrcv; //type: uint64
        ydk::YLeaf mpktfwd; //type: uint64
        ydk::YLeaf mpktorig; //type: uint64
        ydk::YLeaf mpktconsumed; //type: uint64
        ydk::YLeaf mbytesent; //type: uint64
        ydk::YLeaf mbytercv; //type: uint64
        ydk::YLeaf mbytefwd; //type: uint64
        ydk::YLeaf mbyteorig; //type: uint64
        ydk::YLeaf mbyteconsumed; //type: uint64
        ydk::YLeaf bpktsent; //type: uint64
        ydk::YLeaf bpktrcv; //type: uint64
        ydk::YLeaf bpktfwd; //type: uint64
        ydk::YLeaf bpktorig; //type: uint64
        ydk::YLeaf bpktconsumed; //type: uint64
        ydk::YLeaf bbytesent; //type: uint64
        ydk::YLeaf bbytercv; //type: uint64
        ydk::YLeaf bbytefwd; //type: uint64
        ydk::YLeaf bbyteorig; //type: uint64
        ydk::YLeaf bbyteconsumed; //type: uint64
        ydk::YLeaf lpktsent; //type: uint64
        ydk::YLeaf lpktrcv; //type: uint64
        ydk::YLeaf lpktfwd; //type: uint64
        ydk::YLeaf lpktorig; //type: uint64
        ydk::YLeaf lpktconsumed; //type: uint64
        ydk::YLeaf lbytesent; //type: uint64
        ydk::YLeaf lbytercv; //type: uint64
        ydk::YLeaf lbytefwd; //type: uint64
        ydk::YLeaf lbyteorig; //type: uint64
        ydk::YLeaf lbyteconsumed; //type: uint64

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::TrafficstatItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems : public ydk::Entity
{
    public:
        StatItems();
        ~StatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iodvalue; //type: uint64
        ydk::YLeaf vrfnameout; //type: string
        ydk::YLeaf protostate; //type: string
        ydk::YLeaf linkstate; //type: string
        ydk::YLeaf adminstate; //type: string
        ydk::YLeaf priaddr; //type: string
        ydk::YLeaf prisubnet; //type: string
        ydk::YLeaf primasklen; //type: uint8
        ydk::YLeaf priroutepref; //type: uint8
        ydk::YLeaf pritag; //type: uint32
        ydk::YLeaf secaddr; //type: string
        ydk::YLeaf secaddrsubnet; //type: string
        ydk::YLeaf secaddrmasklen; //type: string
        ydk::YLeaf secaddrroutepref; //type: string
        ydk::YLeaf secaddrtag; //type: string
        ydk::YLeaf numaddr; //type: uint32
        ydk::YLeaf vaddrclient; //type: string
        ydk::YLeaf vaddrprefix; //type: string
        ydk::YLeaf vaddrsubnet; //type: string
        ydk::YLeaf vaddrmasklen; //type: string
        ydk::YLeaf numvaddr; //type: uint64
        ydk::YLeaf unnumintf; //type: string
        ydk::YLeaf firstiod; //type: uint64
        ydk::YLeaf unnumchildintf; //type: string
        ydk::YLeaf ipdisabled; //type: string
        ydk::YLeaf bcastaddr; //type: string
        ydk::YLeaf maddr; //type: string
        ydk::YLeaf nummaddr; //type: uint32
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf proxyarp; //type: NwAdminStIfStatProxyArp
        ydk::YLeaf localproxyarp; //type: NwAdminStIfStatLocalProxyArp
        ydk::YLeaf mrouting; //type: NwAdminStIfStatMRouting
        ydk::YLeaf icmpredirect; //type: NwAdminStIfStatIcmpRedirect
        ydk::YLeaf directbcast; //type: NwAdminStIfStatDirectBcast
        ydk::YLeaf ipunreach; //type: NwAdminStIfStatIpUnreach
        ydk::YLeaf portunreach; //type: NwAdminStIfStatPortUnreach
        ydk::YLeaf urpfmode; //type: string
        ydk::YLeaf iploadsharing; //type: string
        ydk::YLeaf aclin; //type: string
        ydk::YLeaf aclout; //type: string
        ydk::YLeaf statslastreset; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::StatItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems : public ydk::Entity
{
    public:
        RpolItems();
        ~RpolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rmapname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Ipv4Items::InstItems::DomItems::DomList::PstatItems : public ydk::Entity
{
    public:
        PstatItems();
        ~PstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf contextname; //type: string
        ydk::YLeaf contextid; //type: uint64
        ydk::YLeaf basetid; //type: uint64
        ydk::YLeaf autodisc; //type: NwAdminStProcessStatAutoDisc
        ydk::YLeaf autodiscadd; //type: NwAdminStProcessStatAutoDiscAdd
        ydk::YLeaf nullbcast; //type: NwAdminStProcessStatNullBcast
        ydk::YLeaf autopuntbcast; //type: NwAdminStProcessStatAutoPuntBcast
        ydk::YLeaf staticdisc; //type: NwAdminStProcessStatStaticDisc
        ydk::YLeaf staticdefroute; //type: uint64
        ydk::YLeaf ipunreach; //type: uint64
        ydk::YLeaf entryiod; //type: string
        ydk::YLeaf localaddr; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::PstatItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf ctrl; //type: string
        class NhItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems
        class NhsItems; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems> nhs_items;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList : public ydk::Entity
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

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf nhvrf; //type: string
        ydk::YLeaf rtname; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf object; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rwencap; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf operst; //type: IpOperSt

}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems : public ydk::Entity
{
    public:
        NhsItems();
        ~NhsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NexthopStubList; //type: System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList

        ydk::YList nexthopstub_list;
        
}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems


class System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList : public ydk::Entity
{
    public:
        NexthopStubList();
        ~NexthopStubList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf nhvrf; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rwencap; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf operst; //type: IpOperSt

}; // System::Ipv4Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList


class System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems : public ydk::Entity
{
    public:
        RoutestatItems();
        ~RoutestatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf contextname; //type: string
        ydk::YLeaf contextid; //type: uint32
        ydk::YLeaf prefixmask; //type: string
        ydk::YLeaf nhprefixmask; //type: string
        ydk::YLeaf vrfinfo; //type: string
        ydk::YLeaf intrinfo; //type: string
        ydk::YLeaf uribstat; //type: string
        ydk::YLeaf nhopuribstat; //type: string
        ydk::YLeaf trackobjnum; //type: string
        ydk::YLeaf trackobjstate; //type: string

}; // System::Ipv4Items::InstItems::DomItems::DomList::RoutestatItems


class System::Ipv4Items::InstItems::ClientItems : public ydk::Entity
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

        class ClientList; //type: System::Ipv4Items::InstItems::ClientItems::ClientList

        ydk::YList client_list;
        
}; // System::Ipv4Items::InstItems::ClientItems


class System::Ipv4Items::InstItems::ClientItems::ClientList : public ydk::Entity
{
    public:
        ClientList();
        ~ClientList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf clientname; //type: string
        ydk::YLeaf clientprotocol; //type: uint8
        ydk::YLeaf clientuuid; //type: int32
        ydk::YLeaf clientpid; //type: int32
        ydk::YLeaf clientextpid; //type: uint32
        ydk::YLeaf clientindex; //type: uint16
        ydk::YLeaf clientcontextid; //type: uint32
        ydk::YLeaf clientmtssap; //type: int16
        ydk::YLeaf clientflag; //type: uint8
        ydk::YLeaf clientdatamsgsuccess; //type: uint64
        ydk::YLeaf clientdatamsgfail; //type: uint64
        ydk::YLeaf clientrcvfunname; //type: string

}; // System::Ipv4Items::InstItems::ClientItems::ClientList


class System::Ipv4Items::InstItems::IploadsharingItems : public ydk::Entity
{
    public:
        IploadsharingItems();
        ~IploadsharingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loadsharemode; //type: IpLoadShareFormat
        ydk::YLeaf universalid; //type: uint32
        ydk::YLeaf greouterhash; //type: NwAdminSt_
        ydk::YLeaf concatenation; //type: NwAdminSt_
        ydk::YLeaf rotate; //type: uint16
        ydk::YLeaf ecmploadsharing; //type: NwAdminSt_

}; // System::Ipv4Items::InstItems::IploadsharingItems


class System::Ipv4Items::InstItems::LoadstatItems : public ydk::Entity
{
    public:
        LoadstatItems();
        ~LoadstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf univeridranseed; //type: uint32
        ydk::YLeaf iploadshareoption; //type: string
        ydk::YLeaf hashflag; //type: NwAdminSt_
        ydk::YLeaf concat; //type: NwAdminSt_
        ydk::YLeaf rotate; //type: uint16

}; // System::Ipv4Items::InstItems::LoadstatItems


class System::Ipv4Items::InstItems::IptrafficstatItems : public ydk::Entity
{
    public:
        IptrafficstatItems();
        ~IptrafficstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf consumed; //type: uint32
        ydk::YLeaf fwducast; //type: uint32
        ydk::YLeaf fwdmcast; //type: uint32
        ydk::YLeaf fwdlabel; //type: uint32
        ydk::YLeaf ingressmcecfwdpkts; //type: uint32
        ydk::YLeaf optsend; //type: uint32
        ydk::YLeaf optsnop; //type: uint32
        ydk::YLeaf optsbsec; //type: uint32
        ydk::YLeaf optslsrr; //type: uint32
        ydk::YLeaf optstimestamp; //type: uint32
        ydk::YLeaf optsesec; //type: uint32
        ydk::YLeaf optsrecordroute; //type: uint32
        ydk::YLeaf optsstrsrcroute; //type: uint32
        ydk::YLeaf optsalert; //type: uint32
        ydk::YLeaf optsother; //type: uint32
        ydk::YLeaf frag; //type: uint32
        ydk::YLeaf fragmented; //type: uint32
        ydk::YLeaf outfrag; //type: uint32
        ydk::YLeaf fragdrop; //type: uint32
        ydk::YLeaf cantfrag; //type: uint32
        ydk::YLeaf reasm; //type: uint32
        ydk::YLeaf fragto; //type: uint32

}; // System::Ipv4Items::InstItems::IptrafficstatItems


class System::Ipv4Items::InstItems::IptrafficerrstatItems : public ydk::Entity
{
    public:
        IptrafficerrstatItems();
        ~IptrafficerrstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf badcsum; //type: uint32
        ydk::YLeaf toosmall; //type: uint32
        ydk::YLeaf badver; //type: uint32
        ydk::YLeaf badhlen; //type: uint32
        ydk::YLeaf badlen; //type: uint32
        ydk::YLeaf baddest; //type: uint32
        ydk::YLeaf badttl; //type: uint32
        ydk::YLeaf cantfwd; //type: uint32
        ydk::YLeaf outdrop; //type: uint32
        ydk::YLeaf badencap; //type: uint32
        ydk::YLeaf noroute; //type: uint32
        ydk::YLeaf noproto; //type: uint32
        ydk::YLeaf badoptions; //type: uint32
        ydk::YLeaf vincimigpkts; //type: uint32
        ydk::YLeaf snoopsuccess; //type: uint32
        ydk::YLeaf sviioddown; //type: uint32
        ydk::YLeaf restartpktdrop; //type: uint32
        ydk::YLeaf mbuferrcount; //type: uint32
        ydk::YLeaf badcntxtiddrop; //type: uint32
        ydk::YLeaf rpfdrop; //type: uint32
        ydk::YLeaf badgwmacdrop; //type: uint32
        ydk::YLeaf ipsoptionfail; //type: uint32
        ydk::YLeaf natindrop; //type: uint32
        ydk::YLeaf natoutdrop; //type: uint32
        ydk::YLeaf ipsmfwdfail; //type: uint32
        ydk::YLeaf ipslispdrop; //type: uint32
        ydk::YLeaf ipslispdecapdrop; //type: uint32
        ydk::YLeaf ipslispencapdrop; //type: uint32
        ydk::YLeaf ipslispencap; //type: uint32
        ydk::YLeaf ipsmfwdcopydrop; //type: uint32
        ydk::YLeaf ipsrareassdrop; //type: uint32
        ydk::YLeaf ipsicmpredirprocdrop; //type: uint32
        ydk::YLeaf ipsifmgrinitfail; //type: uint32
        ydk::YLeaf ipsinvalidfilter; //type: uint32
        ydk::YLeaf ipsinvalidl2msg; //type: uint32
        ydk::YLeaf aclingressdrop; //type: uint32
        ydk::YLeaf aclegressdrop; //type: uint32
        ydk::YLeaf acldirbcastdrop; //type: uint32

}; // System::Ipv4Items::InstItems::IptrafficerrstatItems


class System::Ipv4Items::InstItems::IcmptrafficstatItems : public ydk::Entity
{
    public:
        IcmptrafficstatItems();
        ~IcmptrafficstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf txredir; //type: uint32
        ydk::YLeaf txunreach; //type: uint32
        ydk::YLeaf txechoreq; //type: uint32
        ydk::YLeaf txechoreply; //type: uint32
        ydk::YLeaf txmaskreq; //type: uint32
        ydk::YLeaf txmaskreply; //type: uint32
        ydk::YLeaf txinforeq; //type: uint32
        ydk::YLeaf txinforeply; //type: uint32
        ydk::YLeaf txparamprob; //type: uint32
        ydk::YLeaf txsrcquench; //type: uint32
        ydk::YLeaf txtstampreq; //type: uint32
        ydk::YLeaf txtstampreply; //type: uint32
        ydk::YLeaf txtstampxceed; //type: uint32
        ydk::YLeaf txrtrsolicit; //type: uint32
        ydk::YLeaf txrtradvert; //type: uint32
        ydk::YLeaf outbadlen; //type: uint32
        ydk::YLeaf outencapfail; //type: uint32
        ydk::YLeaf outxmitfail; //type: uint32
        ydk::YLeaf icmporigreq; //type: uint32
        ydk::YLeaf redirorigreq; //type: uint32
        ydk::YLeaf outerr; //type: uint32
        ydk::YLeaf oldshortip; //type: uint32
        ydk::YLeaf oldicmp; //type: uint32
        ydk::YLeaf errordrop; //type: uint32
        ydk::YLeaf rxredir; //type: uint32
        ydk::YLeaf rxunreach; //type: uint32
        ydk::YLeaf rxechoreq; //type: uint32
        ydk::YLeaf rxechoreply; //type: uint32
        ydk::YLeaf rxmaskreq; //type: uint32
        ydk::YLeaf rxmaskreply; //type: uint32
        ydk::YLeaf rxinforeq; //type: uint32
        ydk::YLeaf rxinforeply; //type: uint32
        ydk::YLeaf rxparamprob; //type: uint32
        ydk::YLeaf rxsrcquench; //type: uint32
        ydk::YLeaf rxtstampreq; //type: uint32
        ydk::YLeaf rxtstampreply; //type: uint32
        ydk::YLeaf rxtimexceed; //type: uint32
        ydk::YLeaf rxrtrsolicit; //type: uint32
        ydk::YLeaf rxrtradvert; //type: uint32
        ydk::YLeaf rxformaterror; //type: uint32
        ydk::YLeaf rxcsumerror; //type: uint32
        ydk::YLeaf icmplispprocessed; //type: uint32
        ydk::YLeaf icmpnoclients; //type: uint32
        ydk::YLeaf icmpconsumed; //type: uint32
        ydk::YLeaf icmpreplies; //type: uint32
        ydk::YLeaf icmpreplydropinvldaddr; //type: uint32
        ydk::YLeaf icmpreplydropinactaddr; //type: uint32
        ydk::YLeaf statslastreset; //type: string

}; // System::Ipv4Items::InstItems::IcmptrafficstatItems


class System::Ipv4Items::InstItems::Rfc4293trafficstatItems : public ydk::Entity
{
    public:
        Rfc4293trafficstatItems();
        ~Rfc4293trafficstatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inrcv; //type: uint32
        ydk::YLeaf inoctet; //type: uint32
        ydk::YLeaf inhdrerr; //type: uint32
        ydk::YLeaf innoroutes; //type: uint32
        ydk::YLeaf inaddrerr; //type: uint32
        ydk::YLeaf innoproto; //type: uint32
        ydk::YLeaf intruncated; //type: uint32
        ydk::YLeaf inforwdgrams; //type: uint32
        ydk::YLeaf reasmreqds; //type: uint32
        ydk::YLeaf reasmoks; //type: uint32
        ydk::YLeaf reasmfails; //type: uint32
        ydk::YLeaf indiscards; //type: uint32
        ydk::YLeaf indelivers; //type: uint32
        ydk::YLeaf inmcastpkts; //type: uint32
        ydk::YLeaf inmcastbytes; //type: uint32
        ydk::YLeaf inbcastpkts; //type: uint32
        ydk::YLeaf outrequest; //type: uint32
        ydk::YLeaf outnoroutes; //type: uint32
        ydk::YLeaf outforwdgrams; //type: uint32
        ydk::YLeaf outdiscards; //type: uint32
        ydk::YLeaf outfragreqds; //type: uint32
        ydk::YLeaf outfragoks; //type: uint32
        ydk::YLeaf outfragfails; //type: uint32
        ydk::YLeaf outfragcreates; //type: uint32
        ydk::YLeaf outtransmits; //type: uint32
        ydk::YLeaf outbytes; //type: uint32
        ydk::YLeaf outmcastpkts; //type: uint32
        ydk::YLeaf outmcastbytes; //type: uint32
        ydk::YLeaf outbcastpkts; //type: uint32
        ydk::YLeaf outbcastbytes; //type: uint32

}; // System::Ipv4Items::InstItems::Rfc4293trafficstatItems


class System::Ipv6Items : public ydk::Entity
{
    public:
        Ipv6Items();
        ~Ipv6Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Ipv6Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems> inst_items;
        
}; // System::Ipv6Items


class System::Ipv6Items::InstItems : public ydk::Entity
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

        ydk::YLeaf accesslistmatchlocal; //type: NwAdminSt_
        ydk::YLeaf staticneighboroutsidesubnet; //type: NwAdminSt_
        ydk::YLeaf queuepackets; //type: NwAdminSt_
        ydk::YLeaf switchpackets; //type: IpSwitchPktTarget
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class MtustatsItems; //type: System::Ipv6Items::InstItems::MtustatsItems
        class ClientstatsItems; //type: System::Ipv6Items::InstItems::ClientstatsItems
        class DomItems; //type: System::Ipv6Items::InstItems::DomItems
        class FragstatsItems; //type: System::Ipv6Items::InstItems::FragstatsItems
        class LogsItems; //type: System::Ipv6Items::InstItems::LogsItems
        class PktqstatsItems; //type: System::Ipv6Items::InstItems::PktqstatsItems
        class Ipv6statsItems; //type: System::Ipv6Items::InstItems::Ipv6statsItems
        class TrafficstatsItems; //type: System::Ipv6Items::InstItems::TrafficstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::MtustatsItems> mtustats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::ClientstatsItems> clientstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::FragstatsItems> fragstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::LogsItems> logs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::PktqstatsItems> pktqstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::Ipv6statsItems> ipv6stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::TrafficstatsItems> trafficstats_items;
        
}; // System::Ipv6Items::InstItems


class System::Ipv6Items::InstItems::MtustatsItems : public ydk::Entity
{
    public:
        MtustatsItems();
        ~MtustatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf outstandingentries; //type: uint32
        ydk::YLeaf expiredentries; //type: uint64
        ydk::YLeaf purgedentries; //type: uint64
        ydk::YLeaf internalerrors; //type: uint64
        ydk::YLeaf pkttoobig; //type: uint64
        ydk::YLeaf cachemisses; //type: uint64
        ydk::YLeaf cacheupdates; //type: uint64
        ydk::YLeaf smallmtuadv; //type: uint64
        ydk::YLeaf cachenoupdates; //type: uint64

}; // System::Ipv6Items::InstItems::MtustatsItems


class System::Ipv6Items::InstItems::ClientstatsItems : public ydk::Entity
{
    public:
        ClientstatsItems();
        ~ClientstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IPv6ClientsList; //type: System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList

        ydk::YList ipv6clients_list;
        
}; // System::Ipv6Items::InstItems::ClientstatsItems


class System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList : public ydk::Entity
{
    public:
        IPv6ClientsList();
        ~IPv6ClientsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf clientname; //type: string
        ydk::YLeaf clientprotocol; //type: int32
        ydk::YLeaf clientstatus; //type: string
        ydk::YLeaf clientpid; //type: int32
        ydk::YLeaf clientextpid; //type: int32
        ydk::YLeaf clientpibindex; //type: int32
        ydk::YLeaf clientuuid; //type: int32
        ydk::YLeaf clientroutingvrf; //type: int32
        ydk::YLeaf clientroutingflag; //type: int32
        ydk::YLeaf clientctrlmtssap; //type: int32
        ydk::YLeaf clientdatamtssap; //type: int32
        ydk::YLeaf destunreachsent; //type: int32
        ydk::YLeaf destunreachrcvd; //type: int32
        ydk::YLeaf adminprohibsent; //type: int32
        ydk::YLeaf adminprohibrcvd; //type: int32
        ydk::YLeaf clientifextindex; //type: int32
        ydk::YLeaf clientrecvfn; //type: string
        ydk::YLeaf clientrecvhex; //type: string

}; // System::Ipv6Items::InstItems::ClientstatsItems::IPv6ClientsList


class System::Ipv6Items::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::Ipv6Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Ipv6Items::InstItems::DomItems


class System::Ipv6Items::InstItems::DomItems::DomList : public ydk::Entity
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
        class MtustatsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems
        class RtstaticbfdItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems
        class IfItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems
        class ProcstatsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems
        class RtItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems
        class RoutestatsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems> mtustats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems> rtstaticbfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems> procstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems> routestats_items;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList


class System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems : public ydk::Entity
{
    public:
        MtustatsItems();
        ~MtustatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems> addr_items;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems


class System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems : public ydk::Entity
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

        class IPv6MtuCacheDestStatList; //type: System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList

        ydk::YList ipv6mtucachedeststat_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems


class System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList : public ydk::Entity
{
    public:
        IPv6MtuCacheDestStatList();
        ~IPv6MtuCacheDestStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pathdestination; //type: string
        ydk::YLeaf pathmtu; //type: uint16
        ydk::YLeaf outgoingiod; //type: string
        ydk::YLeaf smallmtureceived; //type: string
        ydk::YLeaf bigmtureeived; //type: string
        ydk::YLeaf smallmtu; //type: uint16
        ydk::YLeaf lastmtuupdate; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::MtustatsItems::AddrItems::IPv6MtuCacheDestStatList


class System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems : public ydk::Entity
{
    public:
        RtstaticbfdItems();
        ~RtstaticbfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtStaticBfdList; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList

        ydk::YList rtstaticbfd_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems


class System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList : public ydk::Entity
{
    public:
        RtStaticBfdList();
        ~RtStaticBfdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf nexthop; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::RtstaticbfdItems::RtStaticBfdList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf uselinklocaladdr; //type: NwAdminSt_
        ydk::YLeaf urpf; //type: IpUrpfT
        ydk::YLeaf forward; //type: NwAdminSt_
        ydk::YLeaf autoconfig; //type: NwAdminSt_
        ydk::YLeaf defaultroute; //type: NwAdminSt_
        ydk::YLeaf lladdr; //type: string
        ydk::YLeaf configerror; //type: Ipv6ConfigErr
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf donorif; //type: string
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpUnnumberedOperStQual
        class AddrItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems
        class LladdrItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems
        class NghbrItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems
        class IfstatsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems
        class NbrstatsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems
        class RpolItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems
        class RtvrfMbrItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems> lladdr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems> nghbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems> nbrstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems> rpol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems : public ydk::Entity
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

        class AddrList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList

        ydk::YList addr_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList : public ydk::Entity
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
        ydk::YLeaf type; //type: IpAddrT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpAddrOperStQual

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::AddrItems::AddrList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems : public ydk::Entity
{
    public:
        LladdrItems();
        ~LladdrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LLaddrList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList

        ydk::YList lladdr_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList : public ydk::Entity
{
    public:
        LLaddrList();
        ~LLaddrList();

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
        ydk::YLeaf type; //type: IpAddrT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf operst; //type: IpOperSt
        ydk::YLeaf operstqual; //type: IpAddrOperStQual

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::LladdrItems::LLaddrList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems : public ydk::Entity
{
    public:
        NghbrItems();
        ~NghbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList

        ydk::YList neighbor_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList : public ydk::Entity
{
    public:
        NeighborList();
        ~NeighborList();

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
        ydk::YLeaf neighbormac; //type: string
        ydk::YLeaf configerror; //type: Ipv6ConfigErr
        ydk::YLeaf type; //type: IpAddrT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf operst; //type: IpOperSt

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NghbrItems::NeighborList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf ifprotostate; //type: string
        ydk::YLeaf iflinkstate; //type: string
        ydk::YLeaf ifadminstate; //type: string
        ydk::YLeaf ifiod; //type: uint32
        ydk::YLeaf iffwdstatus; //type: boolean
        ydk::YLeaf ifipv6enabled; //type: string
        ydk::YLeaf ifaddr; //type: string
        ydk::YLeaf ifaddrsubnet; //type: string
        ydk::YLeaf ifanycastaddr; //type: string
        ydk::YLeaf iflladdr; //type: string
        ydk::YLeaf iflinklocalconfigstatus; //type: string
        ydk::YLeaf iflinklocalstate; //type: string
        ydk::YLeaf ifvipaddr; //type: string
        ydk::YLeaf ifmcastroutingstatus; //type: string
        ydk::YLeaf ifreportllstatus; //type: string
        ydk::YLeaf ifmcastgrouplocallyjoined; //type: string
        ydk::YLeaf ifmcastsrcgrpaddr; //type: string
        ydk::YLeaf ifmtu; //type: uint32
        ydk::YLeaf ifucastrevpathfwdmode; //type: string
        ydk::YLeaf ifucastrevpathfwdflag; //type: string
        ydk::YLeaf ifloadsharing; //type: string
        ydk::YLeaf ifstatlastreset; //type: string
        ydk::YLeaf ifaclinbound; //type: string
        ydk::YLeaf ifacloutbound; //type: string
        ydk::YLeaf ifunspecifiedsrc; //type: uint32
        ydk::YLeaf iftotalpktrxtentativeaddr; //type: uint32
        ydk::YLeaf iftotalpktrxinvalidaddrstate; //type: uint32
        ydk::YLeaf iftotalpktrxduplicatestate; //type: uint32
        ydk::YLeaf ifanycastpkttcp; //type: uint32
        ydk::YLeaf ifdeliverinterfacedown; //type: uint32
        ydk::YLeaf rpucastpktsforwarded; //type: uint32
        ydk::YLeaf rpucastpktsoriginated; //type: uint32
        ydk::YLeaf rpucastpktsconsumed; //type: uint32
        ydk::YLeaf rpucastbytesforwarded; //type: uint32
        ydk::YLeaf rpucastbytesoriginated; //type: uint32
        ydk::YLeaf rpucastbytesconsumed; //type: uint32
        ydk::YLeaf rpmcastpktsforwarded; //type: uint32
        ydk::YLeaf rpmcastpktsoriginated; //type: uint32
        ydk::YLeaf rpmcastpktsconsumed; //type: uint32
        ydk::YLeaf rpmcastbytesforwarded; //type: uint32
        ydk::YLeaf rpmcastbytesoriginated; //type: uint32
        ydk::YLeaf rpmcastbytesconsumed; //type: uint32

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems : public ydk::Entity
{
    public:
        NbrstatsItems();
        ~NbrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IPv6NeighborStatList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList

        ydk::YList ipv6neighborstat_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList : public ydk::Entity
{
    public:
        IPv6NeighborStatList();
        ~IPv6NeighborStatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ngbraddr; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::NbrstatsItems::IPv6NeighborStatList


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems : public ydk::Entity
{
    public:
        RpolItems();
        ~RpolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rmapname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RpolItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Ipv6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems : public ydk::Entity
{
    public:
        ProcstatsItems();
        ~ProcstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf procvrfid; //type: uint32
        ydk::YLeaf procautodiscard; //type: string
        ydk::YLeaf procautodiscardadded; //type: string
        ydk::YLeaf procstaticdiscard; //type: string
        ydk::YLeaf procstaticdefaultcount; //type: uint32
        ydk::YLeaf prociodlist; //type: string
        ydk::YLeaf proclocaladdrlist; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::ProcstatsItems


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf ctrl; //type: string
        class NhItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems
        class NhsItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems> nhs_items;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList : public ydk::Entity
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

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf nhvrf; //type: string
        ydk::YLeaf rtname; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf pref; //type: uint8
        ydk::YLeaf object; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rwencap; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf operst; //type: IpOperSt

}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhItems::NexthopList


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems : public ydk::Entity
{
    public:
        NhsItems();
        ~NhsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NexthopStubList; //type: System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList

        ydk::YList nexthopstub_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems


class System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList : public ydk::Entity
{
    public:
        NexthopStubList();
        ~NexthopStubList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf nhvrf; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rwencap; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf operst; //type: IpOperSt

}; // System::Ipv6Items::InstItems::DomItems::DomList::RtItems::RouteList::NhsItems::NexthopStubList


class System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems : public ydk::Entity
{
    public:
        RoutestatsItems();
        ~RoutestatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxItems; //type: System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems> pfx_items;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems


class System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems : public ydk::Entity
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

        class IPv6RouteStatPfxList; //type: System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList

        ydk::YList ipv6routestatpfx_list;
        
}; // System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems


class System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList : public ydk::Entity
{
    public:
        IPv6RouteStatPfxList();
        ~IPv6RouteStatPfxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtprefix; //type: string
        ydk::YLeaf rtnexthop; //type: string
        ydk::YLeaf rtrealnexthop; //type: string
        ydk::YLeaf rtrealnexthopiod; //type: string
        ydk::YLeaf rtinterface; //type: string
        ydk::YLeaf rtpreference; //type: uint32
        ydk::YLeaf rtnhvrfname; //type: string
        ydk::YLeaf rtresolvetableid; //type: uint32
        ydk::YLeaf rttrackobjnum; //type: uint32
        ydk::YLeaf rttrackobjstate; //type: string
        ydk::YLeaf rtrnhsenttourib; //type: string
        ydk::YLeaf rtbfdenabled; //type: string

}; // System::Ipv6Items::InstItems::DomItems::DomList::RoutestatsItems::PfxItems::IPv6RouteStatPfxList


class System::Ipv6Items::InstItems::FragstatsItems : public ydk::Entity
{
    public:
        FragstatsItems();
        ~FragstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IPv6FragmentsList; //type: System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList

        ydk::YList ipv6fragments_list;
        
}; // System::Ipv6Items::InstItems::FragstatsItems


class System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList : public ydk::Entity
{
    public:
        IPv6FragmentsList();
        ~IPv6FragmentsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf fragid; //type: int32
        ydk::YLeaf fragoffset; //type: int32
        ydk::YLeaf fragmflag; //type: int32
        ydk::YLeaf fragnextheader; //type: int32
        ydk::YLeaf fragpayloadlen; //type: int32
        ydk::YLeaf fragexpirationtime; //type: int32

}; // System::Ipv6Items::InstItems::FragstatsItems::IPv6FragmentsList


class System::Ipv6Items::InstItems::LogsItems : public ydk::Entity
{
    public:
        LogsItems();
        ~LogsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IPv6EventLogsList; //type: System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList

        ydk::YList ipv6eventlogs_list;
        
}; // System::Ipv6Items::InstItems::LogsItems


class System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList : public ydk::Entity
{
    public:
        IPv6EventLogsList();
        ~IPv6EventLogsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf eventtype; //type: Ipv6IPv6EventType
        ydk::YLeaf logsize; //type: Ipv6IPv6EventLogSize

}; // System::Ipv6Items::InstItems::LogsItems::IPv6EventLogsList


class System::Ipv6Items::InstItems::PktqstatsItems : public ydk::Entity
{
    public:
        PktqstatsItems();
        ~PktqstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf queuepacket; //type: string

}; // System::Ipv6Items::InstItems::PktqstatsItems


class System::Ipv6Items::InstItems::Ipv6statsItems : public ydk::Entity
{
    public:
        Ipv6statsItems();
        ~Ipv6statsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IPv6StatList; //type: System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList

        ydk::YList ipv6stat_list;
        
}; // System::Ipv6Items::InstItems::Ipv6statsItems


class System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList : public ydk::Entity
{
    public:
        IPv6StatList();
        ~IPv6StatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ftmname; //type: string
        ydk::YLeaf ftmtimesecond; //type: uint32
        ydk::YLeaf ftmtimenanosecond; //type: uint32
        ydk::YLeaf ftcount; //type: uint64

}; // System::Ipv6Items::InstItems::Ipv6statsItems::IPv6StatList


class System::Ipv6Items::InstItems::TrafficstatsItems : public ydk::Entity
{
    public:
        TrafficstatsItems();
        ~TrafficstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf statlastreset; //type: string
        ydk::YLeaf ucastfragoriginated; //type: uint64
        ydk::YLeaf mcastfragoriginated; //type: uint64
        ydk::YLeaf ucastfragconsumed; //type: uint64
        ydk::YLeaf mcastfragconsumed; //type: uint64
        ydk::YLeaf ingressmcecfwdpkts; //type: uint32
        ydk::YLeaf ingresspktsvincimigration; //type: uint32
        ydk::YLeaf errbadversion; //type: uint64
        ydk::YLeaf errroutelookupfailed; //type: uint64
        ydk::YLeaf errhoplimitexceeded; //type: uint64
        ydk::YLeaf erringressifmgrinitdrops; //type: uint32
        ydk::YLeaf errrpfdrop; //type: uint32
        ydk::YLeaf erroptionheader; //type: uint64
        ydk::YLeaf errpayloadlentoosmall; //type: uint64
        ydk::YLeaf errpmfailed; //type: uint64
        ydk::YLeaf errmbuferror; //type: uint64
        ydk::YLeaf errencaperror; //type: uint64
        ydk::YLeaf errpktsdroppeddestifdown; //type: uint64
        ydk::YLeaf pktsrecvrx; //type: uint64
        ydk::YLeaf bytesrecvrx; //type: uint64
        ydk::YLeaf headererrorsrx; //type: uint32
        ydk::YLeaf noroutesrx; //type: uint32
        ydk::YLeaf addrerrorrx; //type: uint32
        ydk::YLeaf unknownprotorx; //type: uint32
        ydk::YLeaf truncatedpktsrx; //type: uint32
        ydk::YLeaf forwardgramsrx; //type: uint64
        ydk::YLeaf reassemblyrequiredrx; //type: uint32
        ydk::YLeaf reassemblysuccessfulrx; //type: uint32
        ydk::YLeaf reassemblyfailedrx; //type: uint32
        ydk::YLeaf discardedpktsrx; //type: uint32
        ydk::YLeaf deliveredpktsrx; //type: uint64
        ydk::YLeaf mcastpktsrx; //type: uint64
        ydk::YLeaf mcastbytesrx; //type: uint64
        ydk::YLeaf pktssenttx; //type: uint64
        ydk::YLeaf bytessenttx; //type: uint64
        ydk::YLeaf sentrequeststx; //type: uint64
        ydk::YLeaf noroutestx; //type: uint32
        ydk::YLeaf forwardgramstx; //type: uint64
        ydk::YLeaf discardedpktstx; //type: uint32
        ydk::YLeaf fragrequiredtx; //type: uint32
        ydk::YLeaf fragsuccesfultx; //type: uint32
        ydk::YLeaf fragfailedtx; //type: uint32
        ydk::YLeaf fragcreatestx; //type: uint32
        ydk::YLeaf transmitstx; //type: uint64
        ydk::YLeaf mcastpktstx; //type: uint64
        ydk::YLeaf mcastbytestx; //type: uint64
        ydk::YLeaf rpucastpktsforwarded; //type: uint32
        ydk::YLeaf rpucastpktsoriginated; //type: uint32
        ydk::YLeaf rpucastpktsconsumed; //type: uint32
        ydk::YLeaf rpucastbytesforwarded; //type: uint32
        ydk::YLeaf rpucastbytesoriginated; //type: uint32
        ydk::YLeaf rpucastbytesconsumed; //type: uint32
        ydk::YLeaf rpmcastpktsforwarded; //type: uint32
        ydk::YLeaf rpmcastpktsoriginated; //type: uint32
        ydk::YLeaf rpmcastpktsconsumed; //type: uint32
        ydk::YLeaf rpmcastbytesforwarded; //type: uint32
        ydk::YLeaf rpmcastbytesoriginated; //type: uint32
        ydk::YLeaf rpmcastbytesconsumed; //type: uint32

}; // System::Ipv6Items::InstItems::TrafficstatsItems


class System::L1capprovItems : public ydk::Entity
{
    public:
        L1capprovItems();
        ~L1capprovItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProvList; //type: System::L1capprovItems::ProvList

        ydk::YList prov_list;
        
}; // System::L1capprovItems


class System::L1capprovItems::ProvList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf remaining; //type: uint32
        ydk::YLeaf utilization; //type: uint8

}; // System::L1capprovItems::ProvList


class System::EthpmItems : public ydk::Entity
{
    public:
        EthpmItems();
        ~EthpmItems();

        bool has_data() const override;
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
        class InstItems; //type: System::EthpmItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems> inst_items;
        
}; // System::EthpmItems


class System::EthpmItems::InstItems : public ydk::Entity
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

        ydk::YLeaf vlantagnative; //type: boolean
        ydk::YLeaf systemdefaultlayer; //type: L1Layer
        ydk::YLeaf systemdefaultadminst; //type: L1AdminSt
        ydk::YLeaf systemjumbomtu; //type: uint32
        ydk::YLeaf logevent; //type: string
        ydk::YLeaf loglevel; //type: uint32
        ydk::YLeaf pacertotalcredits; //type: uint32
        ydk::YLeaf paceraccesscredits; //type: uint32
        ydk::YLeaf pacertrunkcredits; //type: uint32
        ydk::YLeaf pacerpervlancredits; //type: uint32
        ydk::YLeaf pacerrtdportcredits; //type: uint32
        ydk::YLeaf pacerpersicredits; //type: uint32
        ydk::YLeaf pacerfabricportcredits; //type: uint32
        ydk::YLeaf pacernotconntimer; //type: uint32
        ydk::YLeaf pacernotuptimer; //type: uint32
        ydk::YLeaf allowunsupportedsfp; //type: boolean
        ydk::YLeaf ifsysloginfo; //type: EthpmSyslogInfo
        ydk::YLeaf adminlinkupsysloglevel; //type: uint32
        ydk::YLeaf adminlinkdownsysloglevel; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class RuntimeItems; //type: System::EthpmItems::InstItems::RuntimeItems
        class ErrdisrecoverItems; //type: System::EthpmItems::InstItems::ErrdisrecoverItems
        class VlanItems; //type: System::EthpmItems::InstItems::VlanItems
        class ModuleItems; //type: System::EthpmItems::InstItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::RuntimeItems> runtime_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::ErrdisrecoverItems> errdisrecover_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::ModuleItems> module_items;
        
}; // System::EthpmItems::InstItems


class System::EthpmItems::InstItems::RuntimeItems : public ydk::Entity
{
    public:
        RuntimeItems();
        ~RuntimeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf staticrmaccfgrefcount; //type: uint32
        ydk::YLeaf pvlantrunkcfgrefcount; //type: uint32
        ydk::YLeaf dot1qrefcount; //type: uint32
        ydk::YLeaf ethertyperefcount; //type: uint32
        ydk::YLeaf l3satportrefcount; //type: uint32
        ydk::YLeaf snmpiftbllastchange; //type: string
        ydk::YLeaf issupacerrefcount; //type: uint32
        ydk::YLeaf featurepongstate; //type: uint8
        ydk::YLeaf slowdraincongcoreconfchkstate; //type: uint8
        ydk::YLeaf slowdraincongedgeconfchkstate; //type: uint8
        ydk::YLeaf slowdrainpausconfchkstate; //type: uint8
        ydk::YLeaf slowdrainpausedgeconfchkstate; //type: uint8
        ydk::YLeaf eeerefcount; //type: uint32
        ydk::YLeaf fabpathcfgrefcount; //type: uint32
        ydk::YLeaf dceswid; //type: uint32
        ydk::YLeaf lifloopbackdone; //type: boolean
        ydk::YLeaf numbundles; //type: uint32
        ydk::YLeaf bundleiflist; //type: string
        ydk::YLeaf lbifs; //type: string

}; // System::EthpmItems::InstItems::RuntimeItems


class System::EthpmItems::InstItems::ErrdisrecoverItems : public ydk::Entity
{
    public:
        ErrdisrecoverItems();
        ~ErrdisrecoverItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf errdisrecovintvl; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class EventItems; //type: System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems
        class RserrDisRecoverPolConsItems; //type: System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems> event_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems> rserrdisrecoverpolcons_items;
        
}; // System::EthpmItems::InstItems::ErrdisrecoverItems


class System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems : public ydk::Entity
{
    public:
        EventItems();
        ~EventItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventList; //type: System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList

        ydk::YList event_list;
        
}; // System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems


class System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList : public ydk::Entity
{
    public:
        EventList();
        ~EventList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf event; //type: EthpmErrDisEvent
        ydk::YLeaf detect; //type: boolean
        ydk::YLeaf recover; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

}; // System::EthpmItems::InstItems::ErrdisrecoverItems::EventItems::EventList


class System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems : public ydk::Entity
{
    public:
        RserrDisRecoverPolConsItems();
        ~RserrDisRecoverPolConsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::EthpmItems::InstItems::ErrdisrecoverItems::RserrDisRecoverPolConsItems


class System::EthpmItems::InstItems::VlanItems : public ydk::Entity
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

        class VlanList; //type: System::EthpmItems::InstItems::VlanItems::VlanList

        ydk::YList vlan_list;
        
}; // System::EthpmItems::InstItems::VlanItems


class System::EthpmItems::InstItems::VlanItems::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
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
        ydk::YLeaf numif; //type: uint32
        ydk::YLeaf flag; //type: uint32
        ydk::YLeaf shutstate; //type: L1AdminSt
        ydk::YLeaf state; //type: L2DomAdminSt

}; // System::EthpmItems::InstItems::VlanItems::VlanList


class System::EthpmItems::InstItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleList; //type: System::EthpmItems::InstItems::ModuleItems::ModuleList

        ydk::YList module_list;
        
}; // System::EthpmItems::InstItems::ModuleItems


class System::EthpmItems::InstItems::ModuleItems::ModuleList : public ydk::Entity
{
    public:
        ModuleList();
        ~ModuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf numporttypes; //type: uint32
        ydk::YLeaf swcardid; //type: uint16
        ydk::YLeaf cfgdports; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf runtimenumports; //type: uint8
        ydk::YLeaf moduletype; //type: L1Module
        ydk::YLeaf isoffline; //type: boolean
        ydk::YLeaf lcnodeaddress; //type: uint32
        ydk::YLeaf portcfgsap; //type: uint16
        ydk::YLeaf runtimeports; //type: string

}; // System::EthpmItems::InstItems::ModuleItems::ModuleList


class System::BreakoutItems : public ydk::Entity
{
    public:
        BreakoutItems();
        ~BreakoutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleItems; //type: System::BreakoutItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BreakoutItems::ModuleItems> module_items;
        
}; // System::BreakoutItems


class System::BreakoutItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModList; //type: System::BreakoutItems::ModuleItems::ModList

        ydk::YList mod_list;
        
}; // System::BreakoutItems::ModuleItems


class System::BreakoutItems::ModuleItems::ModList : public ydk::Entity
{
    public:
        ModList();
        ~ModList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint8
        class FportItems; //type: System::BreakoutItems::ModuleItems::ModList::FportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BreakoutItems::ModuleItems::ModList::FportItems> fport_items;
        
}; // System::BreakoutItems::ModuleItems::ModList


class System::BreakoutItems::ModuleItems::ModList::FportItems : public ydk::Entity
{
    public:
        FportItems();
        ~FportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpPList; //type: System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList

        ydk::YList fpp_list;
        
}; // System::BreakoutItems::ModuleItems::ModList::FportItems


class System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList : public ydk::Entity
{
    public:
        FpPList();
        ~FpPList();

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
        ydk::YLeaf breakoutmap; //type: ImBreakoutMapT

}; // System::BreakoutItems::ModuleItems::ModList::FportItems::FpPList


class System::ImItems : public ydk::Entity
{
    public:
        ImItems();
        ~ImItems();

        bool has_data() const override;
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
        class InstItems; //type: System::ImItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems> inst_items;
        
}; // System::ImItems


class System::ImItems::InstItems : public ydk::Entity
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

        ydk::YLeaf mode100m; //type: ImMode100M
        ydk::YLeaf modehwprofile; //type: ImModeHwProfile
        ydk::YLeaf vdcst; //type: L1VdcSt
        ydk::YLeaf breakoutprofile; //type: ImBreakoutProfile
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class QsaItems; //type: System::ImItems::InstItems::QsaItems
        class CapItems; //type: System::ImItems::InstItems::CapItems
        class ModuleItems; //type: System::ImItems::InstItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems::QsaItems> qsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems::CapItems> cap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems::ModuleItems> module_items;
        
}; // System::ImItems::InstItems


class System::ImItems::InstItems::QsaItems : public ydk::Entity
{
    public:
        QsaItems();
        ~QsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class QsaList; //type: System::ImItems::InstItems::QsaItems::QsaList

        ydk::YList qsa_list;
        
}; // System::ImItems::InstItems::QsaItems


class System::ImItems::InstItems::QsaItems::QsaList : public ydk::Entity
{
    public:
        QsaList();
        ~QsaList();

        bool has_data() const override;
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

}; // System::ImItems::InstItems::QsaItems::QsaList


class System::ImItems::InstItems::CapItems : public ydk::Entity
{
    public:
        CapItems();
        ~CapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CapabilityList; //type: System::ImItems::InstItems::CapItems::CapabilityList

        ydk::YList capability_list;
        
}; // System::ImItems::InstItems::CapItems


class System::ImItems::InstItems::CapItems::CapabilityList : public ydk::Entity
{
    public:
        CapabilityList();
        ~CapabilityList();

        bool has_data() const override;
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
        ydk::YLeaf autoinstcpbl; //type: boolean
        ydk::YLeaf isinstalled; //type: boolean

}; // System::ImItems::InstItems::CapItems::CapabilityList


class System::ImItems::InstItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleList; //type: System::ImItems::InstItems::ModuleItems::ModuleList

        ydk::YList module_list;
        
}; // System::ImItems::InstItems::ModuleItems


class System::ImItems::InstItems::ModuleItems::ModuleList : public ydk::Entity
{
    public:
        ModuleList();
        ~ModuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf numports; //type: uint8
        ydk::YLeaf moduletype; //type: L1Module
        ydk::YLeaf swcardid; //type: uint16
        ydk::YLeaf lcnodeaddress; //type: uint32
        ydk::YLeaf portcfgsap; //type: uint16
        ydk::YLeaf ispresent; //type: boolean
        ydk::YLeaf runtimeflag; //type: uint8
        ydk::YLeaf moduleinitievalflag; //type: uint32
        ydk::YLeaf lcexceptionflag; //type: uint32
        ydk::YLeaf lcinsertpldsz; //type: uint32
        class PhysItems; //type: System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems
        class PortinfoItems; //type: System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems> phys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems> portinfo_items;
        
}; // System::ImItems::InstItems::ModuleItems::ModuleList


class System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PhysIfList; //type: System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems


class System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList : public ydk::Entity
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

        ydk::YLeaf port; //type: uint8
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operphylayer; //type: L1PhyLayer
        ydk::YLeaf backplanemac; //type: string
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf movestatus; //type: uint32

}; // System::ImItems::InstItems::ModuleItems::ModuleList::PhysItems::PhysIfList


class System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems : public ydk::Entity
{
    public:
        PortinfoItems();
        ~PortinfoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortInfoList; //type: System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList

        ydk::YList portinfo_list;
        
}; // System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems


class System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList : public ydk::Entity
{
    public:
        PortInfoList();
        ~PortInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phylayer; //type: L1PhyLayer
        ydk::YLeaf numports; //type: uint8
        ydk::YLeaf type; //type: uint8

}; // System::ImItems::InstItems::ModuleItems::ModuleList::PortinfoItems::PortInfoList


class System::PcItems : public ydk::Entity
{
    public:
        PcItems();
        ~PcItems();

        bool has_data() const override;
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
        class PcItems_; //type: System::PcItems::PcItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PcItems::PcItems_> pc_items;
        
}; // System::PcItems


class System::PcItems::PcItems_ : public ydk::Entity
{
    public:
        PcItems_();
        ~PcItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hashdist; //type: PcPCHashDist
        ydk::YLeaf loaddefertime; //type: uint32
        ydk::YLeaf maxchannels; //type: uint32
        ydk::YLeaf usedchannels; //type: uint32
        ydk::YLeaf freechannels; //type: uint32
        ydk::YLeaf pcntchannels; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

}; // System::PcItems::PcItems_


class System::L2capprovItems : public ydk::Entity
{
    public:
        L2capprovItems();
        ~L2capprovItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProvList; //type: System::L2capprovItems::ProvList

        ydk::YList prov_list;
        
}; // System::L2capprovItems


class System::L2capprovItems::ProvList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf remaining; //type: uint32
        ydk::YLeaf utilization; //type: uint8

}; // System::L2capprovItems::ProvList


class System::FcpmItems : public ydk::Entity
{
    public:
        FcpmItems();
        ~FcpmItems();

        bool has_data() const override;
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
        class InstItems; //type: System::FcpmItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcpmItems::InstItems> inst_items;
        
}; // System::FcpmItems


class System::FcpmItems::InstItems : public ydk::Entity
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

        ydk::YLeaf switchwwn; //type: string
        ydk::YLeaf edtov; //type: uint32
        ydk::YLeaf ratov; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

}; // System::FcpmItems::InstItems


class System::L2fmItems : public ydk::Entity
{
    public:
        L2fmItems();
        ~L2fmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maclearn; //type: L2fmLearning

}; // System::L2fmItems


class System::L2ribItems : public ydk::Entity
{
    public:
        L2ribItems();
        ~L2ribItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::L2ribItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L2ribItems::InstItems> inst_items;
        
}; // System::L2ribItems


class System::L2ribItems::InstItems : public ydk::Entity
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

        class EvpnItems; //type: System::L2ribItems::InstItems::EvpnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L2ribItems::InstItems::EvpnItems> evpn_items;
        
}; // System::L2ribItems::InstItems


class System::L2ribItems::InstItems::EvpnItems : public ydk::Entity
{
    public:
        EvpnItems();
        ~EvpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ddmoves; //type: uint16
        ydk::YLeaf ddduration; //type: uint16
        ydk::YLeaf drtimeout; //type: uint16
        ydk::YLeaf drretrycnt; //type: uint16

}; // System::L2ribItems::InstItems::EvpnItems


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

class System::Ipv4Items::InstItems::DomItems::DomList::IfItems::IfList::DirectedBroadcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_NX_OS_DEVICE_33_ */

