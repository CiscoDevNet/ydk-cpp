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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf srcactivemsglimit; //type: uint32
        ydk::YLeaf kaintvl; //type: uint16
        ydk::YLeaf katimeout; //type: uint16
        ydk::YLeaf operst; //type: MsdpOperSt
        ydk::YLeaf remport; //type: uint16
        ydk::YLeaf localport; //type: uint16
        ydk::YLeaf lastresetoperqual; //type: string
        ydk::YLeaf discontinuityts; //type: one of uint64, string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf conntmrts; //type: one of uint64, string
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

        ydk::YLeaf lastmessagercvd; //type: one of uint64, string
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
        ydk::YLeaf srcleak; //type: MsdpSource
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
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

        ydk::YLeaf solicitnghbradvertisement; //type: NwAdminSt___
        ydk::YLeaf acceptsolicitnghbrentry; //type: NdSolicitAcceptValue
        ydk::YLeaf probeintervalforsolicitnghbr; //type: uint16
        ydk::YLeaf aginginterval; //type: uint16
        ydk::YLeaf offlisttimeout; //type: uint16
        ydk::YLeaf ipv6adjroutedistance; //type: uint32
        ydk::YLeaf cachelimit; //type: uint32
        ydk::YLeaf cachesyslograte; //type: uint32
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::NdItems::InstItems::DomItems
        class Ipv6gleanthrottleItems; //type: System::NdItems::InstItems::Ipv6gleanthrottleItems
        class VpcItems; //type: System::NdItems::InstItems::VpcItems
        class L2statItems; //type: System::NdItems::InstItems::L2statItems
        class OffliststatItems; //type: System::NdItems::InstItems::OffliststatItems
        class ProxystatItems; //type: System::NdItems::InstItems::ProxystatItems
        class GlblpktstatsItems; //type: System::NdItems::InstItems::GlblpktstatsItems
        class VaddrllstatItems; //type: System::NdItems::InstItems::VaddrllstatItems
        class VpcstatItems; //type: System::NdItems::InstItems::VpcstatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::Ipv6gleanthrottleItems> ipv6gleanthrottle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::L2statItems> l2stat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::OffliststatItems> offliststat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::ProxystatItems> proxystat_items;
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf mac; //type: string

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
        ydk::YLeaf dnssuppress; //type: NwAdminSt___
        ydk::YLeaf dnssearchlistsuppress; //type: NwAdminSt___
        ydk::YLeaf routesuppress; //type: NwAdminSt___
        ydk::YLeaf routerpreference; //type: NdRtPrefForCmd
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf nsintvl; //type: uint32
        ydk::YLeaf raintvl; //type: uint32
        ydk::YLeaf raintvlmin; //type: uint16
        ydk::YLeaf hoplimit; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf ralifetime; //type: uint32
        ydk::YLeaf reachabletime; //type: uint32
        ydk::YLeaf retranstimer; //type: uint32
        ydk::YLeaf dadattempts; //type: uint16
        ydk::YLeaf dadnsinterval; //type: uint16
        ydk::YLeaf configerror; //type: NdConfigErr
        ydk::YLeaf deladjonmacdel; //type: NwAdminSt___
        ydk::YLeaf bootfileurl; //type: string
        class SadjItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems
        class DnsslifItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems
        class DnsstatItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems
        class RoutesItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems
        class NgbrdataItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems
        class NdlocalproxyItems; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems> ngbrdata_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems> ndlocalproxy_items;
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
        ydk::YLeaf ndroutelifetimeinfinite; //type: NwAdminSt___
        ydk::YLeaf routepreference; //type: NdRtPrefForNdRt
        ydk::YLeaf verifyreachability; //type: NwAdminSt___

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems : public ydk::Entity
{
    public:
        NgbrdataItems();
        ~NgbrdataItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDataList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems::NeighborDataList

        ydk::YList neighbordata_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems::NeighborDataList : public ydk::Entity
{
    public:
        NeighborDataList();
        ~NeighborDataList();

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
        ydk::YLeaf ngbrage; //type: string
        ydk::YLeaf ngbrmac; //type: string
        ydk::YLeaf ngbrstate; //type: string
        ydk::YLeaf ngbrinterface; //type: string
        ydk::YLeaf ngbrphyinterface; //type: string
        ydk::YLeaf ngbrsyncedviacfsoe; //type: boolean
        ydk::YLeaf ngbrthrottledviaglean; //type: boolean

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NgbrdataItems::NeighborDataList


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems : public ydk::Entity
{
    public:
        NdlocalproxyItems();
        ~NdlocalproxyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NdLocalProxyList; //type: System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems::NdLocalProxyList

        ydk::YList ndlocalproxy_list;
        
}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems


class System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems::NdLocalProxyList : public ydk::Entity
{
    public:
        NdLocalProxyList();
        ~NdLocalProxyList();

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

}; // System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::NdlocalproxyItems::NdLocalProxyList


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

        ydk::YLeaf defprefix; //type: NwAdminSt___
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
        ydk::YLeaf dnsserverlifetimeinfinite; //type: NwAdminSt___
        ydk::YLeaf dnsserver; //type: NwAdminSt___

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
        ydk::YLeaf dnssearchlistlifetimeinfinite; //type: NwAdminSt___
        ydk::YLeaf dnssl; //type: NwAdminSt___

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

        ydk::YLeaf adminst; //type: NwAdminSt___
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

        class VpcDomList; //type: System::NdItems::InstItems::VpcItems::DomItems::VpcDomList

        ydk::YList vpcdom_list;
        
}; // System::NdItems::InstItems::VpcItems::DomItems


class System::NdItems::InstItems::VpcItems::DomItems::VpcDomList : public ydk::Entity
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
        ydk::YLeaf ndsync; //type: NwAdminSt___

}; // System::NdItems::InstItems::VpcItems::DomItems::VpcDomList


class System::NdItems::InstItems::L2statItems : public ydk::Entity
{
    public:
        L2statItems();
        ~L2statItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfItems; //type: System::NdItems::InstItems::L2statItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::L2statItems::IfItems> if_items;
        
}; // System::NdItems::InstItems::L2statItems


class System::NdItems::InstItems::L2statItems::IfItems : public ydk::Entity
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

        class L2IfList; //type: System::NdItems::InstItems::L2statItems::IfItems::L2IfList

        ydk::YList l2if_list;
        
}; // System::NdItems::InstItems::L2statItems::IfItems


class System::NdItems::InstItems::L2statItems::IfItems::L2IfList : public ydk::Entity
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
        ydk::YLeaf ndpackets; //type: uint64

}; // System::NdItems::InstItems::L2statItems::IfItems::L2IfList


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


class System::NdItems::InstItems::ProxystatItems : public ydk::Entity
{
    public:
        ProxystatItems();
        ~ProxystatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::NdItems::InstItems::ProxystatItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::ProxystatItems::VlanItems> vlan_items;
        
}; // System::NdItems::InstItems::ProxystatItems


class System::NdItems::InstItems::ProxystatItems::VlanItems : public ydk::Entity
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

        class VlanIntfList; //type: System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList

        ydk::YList vlanintf_list;
        
}; // System::NdItems::InstItems::ProxystatItems::VlanItems


class System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList : public ydk::Entity
{
    public:
        VlanIntfList();
        ~VlanIntfList();

        bool has_data() const override;
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
        class IfItems; //type: System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems> if_items;
        
}; // System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList


class System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems : public ydk::Entity
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

        class PhysicalIntfList; //type: System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems::PhysicalIntfList

        ydk::YList physicalintf_list;
        
}; // System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems


class System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems::PhysicalIntfList : public ydk::Entity
{
    public:
        PhysicalIntfList();
        ~PhysicalIntfList();

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
        ydk::YLeaf numproxies; //type: string

}; // System::NdItems::InstItems::ProxystatItems::VlanItems::VlanIntfList::IfItems::PhysicalIntfList


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
        ydk::YLeaf adminst; //type: NwAdminSt___
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

        ydk::YLeaf overlaydistributeddr; //type: boolean
        ydk::YLeaf overlaysptonly; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class AfItems; //type: System::NgmvpnItems::InstItems::AfItems
        class EventhistItems; //type: System::NgmvpnItems::InstItems::EventhistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems::InstItems::EventhistItems> eventhist_items;
        
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

}; // System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList


class System::NgmvpnItems::InstItems::EventhistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::NgmvpnItems::InstItems::EventhistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::NgmvpnItems::InstItems::EventhistItems


class System::NgmvpnItems::InstItems::EventhistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: NgmvpnEhType
        ydk::YLeaf size; //type: uint32

}; // System::NgmvpnItems::InstItems::EventhistItems::EventHistoryList


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

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class IfItems; //type: System::Ospfv3Items::IfItems
        class InstItems; //type: System::Ospfv3Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems> inst_items;
        
}; // System::Ospfv3Items


class System::Ospfv3Items::IfItems : public ydk::Entity
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

        class IfList; //type: System::Ospfv3Items::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Ospfv3Items::IfItems


class System::Ospfv3Items::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf instance; //type: string
        ydk::YLeaf dom; //type: string
        ydk::YLeaf mtuignore; //type: boolean
        ydk::YLeaf instanceid; //type: uint8
        ydk::YLeaf passive; //type: Ospfv3PassiveControl
        ydk::YLeaf nwt; //type: Ospfv3NwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf txdelay; //type: uint16
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf retxintvl; //type: uint16
        ydk::YLeaf area; //type: string
        ydk::YLeaf advsecondary; //type: boolean
        ydk::YLeaf operst; //type: Ospfv3IfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: Ospfv3IfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ipv6addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bkupdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bkupdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        class RtospfIfDefToOspfv3IfItems; //type: System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems
        class RtvrfMbrItems; //type: System::Ospfv3Items::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems> rtospfifdeftoospfv3if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Ospfv3Items::IfItems::IfList


class System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems : public ydk::Entity
{
    public:
        RtospfIfDefToOspfv3IfItems();
        ~RtospfIfDefToOspfv3IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtOspfIfDefToOspfv3IfList; //type: System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList

        ydk::YList rtospfifdeftoospfv3if_list;
        
}; // System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems


class System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList : public ydk::Entity
{
    public:
        RtOspfIfDefToOspfv3IfList();
        ~RtOspfIfDefToOspfv3IfList();

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

}; // System::Ospfv3Items::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList


class System::Ospfv3Items::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Ospfv3Items::IfItems::IfList::RtvrfMbrItems


class System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems


class System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Ospfv3Items::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf isolate; //type: boolean
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        class DomItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems> dom_items;
        
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: Ospfv3OperSt
        ydk::YLeaf operrtrid; //type: string
        class AreaItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems
        class AfItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems> area_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems> af_items;
        
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
        ydk::YLeaf type; //type: Ospfv3AreaT
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf brcnt; //type: uint32
        ydk::YLeaf asbrcnt; //type: uint32
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf nssatransst; //type: OspfNssaTransSt
        ydk::YLeaf nssatransstabintvl; //type: uint32
        class AreaafItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems> areaaf_items;
        
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

        ydk::YLeaf type; //type: Ospfv3AfT
        ydk::YLeaf name; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems : public ydk::Entity
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

        class DomAfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
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

        ydk::YLeaf type; //type: Ospfv3AfT
        ydk::YLeaf name; //type: string
        class DefrtleakItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DefrtleakItems
        class InterleakItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems
        class LeakctrlItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems> leakctrl_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: boolean

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DefrtleakItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems : public ydk::Entity
{
    public:
        InterleakItems();
        ~InterleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterLeakPList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList : public ydk::Entity
{
    public:
        InterLeakPList();
        ~InterLeakPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: RtleakProto
        ydk::YLeaf inst; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: boolean

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems : public ydk::Entity
{
    public:
        LeakctrlItems();
        ~LeakctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctrl; //type: RtleakCtrl
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf retries; //type: uint16
        ydk::YLeaf duration; //type: uint16

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems


class System::PimItems : public ydk::Entity
{
    public:
        PimItems();
        ~PimItems();

        bool has_data() const override;
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
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::PimItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems> inst_items;
        
}; // System::PimItems


class System::PimItems::InstItems : public ydk::Entity
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

        ydk::YLeaf evpnborderleaf; //type: boolean
        ydk::YLeaf extranet; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf nrdelay; //type: uint16
        ydk::YLeaf nrnumrt; //type: uint16
        ydk::YLeaf regstop; //type: boolean
        class DomItems; //type: System::PimItems::InstItems::DomItems
        class GlItems; //type: System::PimItems::InstItems::GlItems
        class RoutedbItems; //type: System::PimItems::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::GlItems> gl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::RoutedbItems> routedb_items;
        
}; // System::PimItems::InstItems


class System::PimItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::PimItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::PimItems::InstItems::DomItems


class System::PimItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf autoenable; //type: boolean
        ydk::YLeaf lognbhchng; //type: boolean
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf regratelmt; //type: uint32
        ydk::YLeaf rfcstrict; //type: boolean
        class AcastrpfuncItems; //type: System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems
        class AssertItems; //type: System::PimItems::InstItems::DomItems::DomList::AssertItems
        class AutorpItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems
        class BsrItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems
        class DbItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems
        class DomstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::DomstatsItems
        class EventHistItems; //type: System::PimItems::InstItems::DomItems::DomList::EventHistItems
        class IfItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems
        class LimitItems; //type: System::PimItems::InstItems::DomItems::DomList::LimitItems
        class AsmItems; //type: System::PimItems::InstItems::DomItems::DomList::AsmItems
        class SsmItems; //type: System::PimItems::InstItems::DomItems::DomList::SsmItems
        class BidirItems; //type: System::PimItems::InstItems::DomItems::DomList::BidirItems
        class StaticrpItems; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems
        class TrstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems> acastrpfunc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AssertItems> assert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::LimitItems> limit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AsmItems> asm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::SsmItems> ssm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BidirItems> bidir_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::StaticrpItems> staticrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::TrstatsItems> trstats_items;
        
}; // System::PimItems::InstItems::DomItems::DomList


class System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems : public ydk::Entity
{
    public:
        AcastrpfuncItems();
        ~AcastrpfuncItems();

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
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf localif; //type: string
        class PeerItems; //type: System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems> peer_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems


class System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems : public ydk::Entity
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

        class AcastRPPeerList; //type: System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList

        ydk::YList acastrppeer_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems


class System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList : public ydk::Entity
{
    public:
        AcastRPPeerList();
        ~AcastRPPeerList();

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
        ydk::YLeaf rpsetaddr; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList


class System::PimItems::InstItems::DomItems::DomList::AssertItems : public ydk::Entity
{
    public:
        AssertItems();
        ~AssertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf assertrtlmt; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::AssertItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems : public ydk::Entity
{
    public:
        AutorpItems();
        ~AutorpItems();

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
        ydk::YLeaf ctrl; //type: string
        class RpfilterItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems
        class MafilterItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems
        class RpfuncItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems
        class MafuncItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems> rpfilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems> mafilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems> rpfunc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems> mafunc_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems : public ydk::Entity
{
    public:
        RpfilterItems();
        ~RpfilterItems();

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
        ydk::YLeaf rtmap; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems : public ydk::Entity
{
    public:
        MafilterItems();
        ~MafilterItems();

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
        ydk::YLeaf rtmap; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems : public ydk::Entity
{
    public:
        RpfuncItems();
        ~RpfuncItems();

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
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf prio; //type: uint16
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf scope; //type: uint16
        ydk::YLeaf addr; //type: string
        ydk::YLeaf usesendrpanncommand; //type: boolean
        class RangeItems; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems> range_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems : public ydk::Entity
{
    public:
        RangeItems();
        ~RangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPGrpRangeList; //type: System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList : public ydk::Entity
{
    public:
        RPGrpRangeList();
        ~RPGrpRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bidir; //type: boolean
        ydk::YLeaf override; //type: boolean
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean

}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList


class System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems : public ydk::Entity
{
    public:
        MafuncItems();
        ~MafuncItems();

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
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf scope; //type: uint16
        ydk::YLeaf usesendrpdiscommand; //type: boolean

}; // System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems


class System::PimItems::InstItems::DomItems::DomList::BsrItems : public ydk::Entity
{
    public:
        BsrItems();
        ~BsrItems();

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
        ydk::YLeaf ctrl; //type: string
        class RpfilterItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems
        class BsrfilterItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems
        class RpfuncItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems
        class BsrfuncItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems> rpfilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems> bsrfilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems> rpfunc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems> bsrfunc_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::BsrItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_45_ */

