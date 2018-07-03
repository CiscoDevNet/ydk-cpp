#ifndef _CISCO_NX_OS_DEVICE_19_
#define _CISCO_NX_OS_DEVICE_19_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_18.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems


class System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::BrItems::BrIfList::RsbrConfItems : public ydk::Entity
{
    public:
        RsbrConfItems();
        ~RsbrConfItems();

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

}; // System::BrItems::BrIfList::RsbrConfItems


class System::BrItems::BrIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::BrItems::BrIfList::RtvrfMbrItems


class System::BrItems::BrIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::BrItems::BrIfList::RtnwPathToIfItems


class System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::CdpItems : public ydk::Entity
{
    public:
        CdpItems();
        ~CdpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::CdpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems> inst_items;
        
}; // System::CdpItems


class System::CdpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf ver; //type: CdpVer
        ydk::YLeaf devidtype; //type: CdpDevIdT
        ydk::YLeaf holdintvl; //type: uint8
        ydk::YLeaf txfreq; //type: uint8
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::CdpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems> if_items;
        
}; // System::CdpItems::InstItems


class System::CdpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::CdpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::CdpItems::InstItems::IfItems


class System::CdpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf locdesc; //type: string
        ydk::YLeaf operst; //type: CdpOperSt
        ydk::YLeaf operstqual; //type: CdpOperStQual
        ydk::YLeaf nativevlan; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AdjItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems
        class IfstatsItems; //type: System::CdpItems::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::CdpItems::InstItems::IfItems::IfList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf stqual; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf devid; //type: string
        ydk::YLeaf portid; //type: string
        ydk::YLeaf platid; //type: string
        ydk::YLeaf cap; //type: string
        ydk::YLeaf duplex; //type: CdpDuplex
        ydk::YLeaf nativevlan; //type: uint16
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf sysloc; //type: string
        ydk::YLeaf sysobjidv; //type: string
        ydk::YLeaf sysobjidl; //type: uint8
        ydk::YLeaf name; //type: string
        class MgmtItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems
        class IntfItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems
        class AdjstatsItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems : public ydk::Entity
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

        class MgmtAddrList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList

        ydk::YList mgmtaddr_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList : public ydk::Entity
{
    public:
        MgmtAddrList();
        ~MgmtAddrList();

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

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems : public ydk::Entity
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

        class IntfAddrList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList

        ydk::YList intfaddr_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList : public ydk::Entity
{
    public:
        IntfAddrList();
        ~IntfAddrList();

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

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjexpts; //type: string

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::CdpItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf v1sent; //type: uint32
        ydk::YLeaf v2sent; //type: uint32
        ydk::YLeaf failedsent; //type: uint32
        ydk::YLeaf validv1rcvd; //type: uint32
        ydk::YLeaf validv2rcvd; //type: uint32
        ydk::YLeaf unsupverrcvd; //type: uint32
        ydk::YLeaf cksumerrrcvd; //type: uint32
        ydk::YLeaf malformrcvd; //type: uint32

}; // System::CdpItems::InstItems::IfItems::IfList::IfstatsItems


class System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::LldpItems : public ydk::Entity
{
    public:
        LldpItems();
        ~LldpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::LldpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems> inst_items;
        
}; // System::LldpItems


class System::LldpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf initdelaytime; //type: uint16
        ydk::YLeaf txfreq; //type: uint16
        ydk::YLeaf opttlvsel; //type: string
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class MgmtItems; //type: System::LldpItems::InstItems::MgmtItems
        class IfItems; //type: System::LldpItems::InstItems::IfItems
        class InstsendtaskItems; //type: System::LldpItems::InstItems::InstsendtaskItems
        class InststatsItems; //type: System::LldpItems::InstItems::InststatsItems
        class PolcomplexItems; //type: System::LldpItems::InstItems::PolcomplexItems
        class PoltextItems; //type: System::LldpItems::InstItems::PoltextItems
        class PolipItems; //type: System::LldpItems::InstItems::PolipItems
        class PolmacItems; //type: System::LldpItems::InstItems::PolmacItems
        class Poluint64Items; //type: System::LldpItems::InstItems::Poluint64Items
        class Poluint32Items; //type: System::LldpItems::InstItems::Poluint32Items
        class Poluint16Items; //type: System::LldpItems::InstItems::Poluint16Items
        class PolubyteItems; //type: System::LldpItems::InstItems::PolubyteItems
        class RslldpInstPolConsItems; //type: System::LldpItems::InstItems::RslldpInstPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::InstsendtaskItems> instsendtask_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::InststatsItems> inststats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems> polcomplex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PoltextItems> poltext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolipItems> polip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolmacItems> polmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::Poluint64Items> poluint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::Poluint32Items> poluint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::Poluint16Items> poluint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolubyteItems> polubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::RslldpInstPolConsItems> rslldpinstpolcons_items;
        
}; // System::LldpItems::InstItems


class System::LldpItems::InstItems::MgmtItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MgmtAddrList; //type: System::LldpItems::InstItems::MgmtItems::MgmtAddrList

        ydk::YList mgmtaddr_list;
        
}; // System::LldpItems::InstItems::MgmtItems


class System::LldpItems::InstItems::MgmtItems::MgmtAddrList : public ydk::Entity
{
    public:
        MgmtAddrList();
        ~MgmtAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string

}; // System::LldpItems::InstItems::MgmtItems::MgmtAddrList


class System::LldpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::LldpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::LldpItems::InstItems::IfItems


class System::LldpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf adminrxst; //type: LldpAdminSt
        ydk::YLeaf admintxst; //type: LldpAdminSt
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf operrxst; //type: LldpOperSt
        ydk::YLeaf opertxst; //type: LldpOperSt
        ydk::YLeaf mac; //type: string
        ydk::YLeaf portvlan; //type: uint16
        ydk::YLeaf wiringissues; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AdjItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems
        class CtrlradjItems; //type: System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems
        class IfsendtaskItems; //type: System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems
        class IfstatsItems; //type: System::LldpItems::InstItems::IfItems::IfList::IfstatsItems
        class PolcomplexItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems
        class PoltextItems; //type: System::LldpItems::InstItems::IfItems::IfList::PoltextItems
        class PolipItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolipItems
        class PolmacItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolmacItems
        class Poluint64Items; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint64Items
        class Poluint32Items; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint32Items
        class Poluint16Items; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint16Items
        class PolubyteItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolubyteItems
        class RtvrfMbrItems; //type: System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems> ctrlradj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems> ifsendtask_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems> polcomplex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PoltextItems> poltext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolipItems> polip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolmacItems> polmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::Poluint64Items> poluint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::Poluint32Items> poluint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::Poluint16Items> poluint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolubyteItems> polubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf stqual; //type: string
        ydk::YLeaf chassisidt; //type: uint8
        ydk::YLeaf chassisidv; //type: string
        ydk::YLeaf portidt; //type: uint8
        ydk::YLeaf portidv; //type: string
        ydk::YLeaf ttl; //type: uint16
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf capability; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf mgmtip; //type: string
        ydk::YLeaf mgmtportmac; //type: string
        ydk::YLeaf mgmtid; //type: uint32
        ydk::YLeaf portvlan; //type: uint16
        ydk::YLeaf name; //type: string
        class AdjstatsItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems
        class IpItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems
        class MacItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems
        class Uint64Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items
        class Uint32Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items
        class Uint16Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items
        class UbyteItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems
        class TextItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems
        class ComplexItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems> complex_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjexpts; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems : public ydk::Entity
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

        class IpList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IpItems::IpList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems : public ydk::Entity
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

        class MacList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MacItems::MacList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint64Items::UInt64List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint32Items::UInt32List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::Uint16Items::UInt16List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::UbyteItems::UByteList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::TextItems::TextList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems : public ydk::Entity
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

        class IpList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::IpItems::IpList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems : public ydk::Entity
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

        class MacList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::MacItems::MacList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::ComplexItems::ComplexList::TextItems::TextList


class System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems : public ydk::Entity
{
    public:
        CtrlradjItems();
        ~CtrlradjItems();

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
        ydk::YLeaf ip; //type: string
        ydk::YLeaf infravlan; //type: uint16
        ydk::YLeaf portrole; //type: LldptlvPortRole
        ydk::YLeaf mac; //type: string
        class RsctrlrAdjEpToStAdjEpItems; //type: System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems> rsctrlradjeptostadjep_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems


class System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems : public ydk::Entity
{
    public:
        RsctrlrAdjEpToStAdjEpItems();
        ~RsctrlrAdjEpToStAdjEpItems();

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

}; // System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems


class System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems : public ydk::Entity
{
    public:
        IfsendtaskItems();
        ~IfsendtaskItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfSendTaskList; //type: System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList

        ydk::YList ifsendtask_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems


class System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList : public ydk::Entity
{
    public:
        IfSendTaskList();
        ~IfSendTaskList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shard; //type: uint8

}; // System::LldpItems::InstItems::IfItems::IfList::IfsendtaskItems::IfSendTaskList


class System::LldpItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf pktsent; //type: uint64
        ydk::YLeaf pktrcvd; //type: uint64
        ydk::YLeaf entriesaged; //type: uint64
        ydk::YLeaf errpktrcvd; //type: uint64
        ydk::YLeaf pktdiscarded; //type: uint64
        ydk::YLeaf unrecogtlv; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::IfstatsItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems : public ydk::Entity
{
    public:
        PolcomplexItems();
        ~PolcomplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class PolipItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems
        class PolmacItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems
        class Poluint64Items; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items
        class Poluint32Items; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items
        class Poluint16Items; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items
        class PolubyteItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems
        class PoltextItems; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems> polip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems> polmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items> poluint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items> poluint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items> poluint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems> polubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems> poltext_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems : public ydk::Entity
{
    public:
        PolipItems();
        ~PolipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolipItems::IpList


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems : public ydk::Entity
{
    public:
        PolmacItems();
        ~PolmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolmacItems::MacList


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items : public ydk::Entity
{
    public:
        Poluint64Items();
        ~Poluint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint64Items::UInt64List


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items : public ydk::Entity
{
    public:
        Poluint32Items();
        ~Poluint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint32Items::UInt32List


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items : public ydk::Entity
{
    public:
        Poluint16Items();
        ~Poluint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::Poluint16Items::UInt16List


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems : public ydk::Entity
{
    public:
        PolubyteItems();
        ~PolubyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PolubyteItems::UByteList


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems : public ydk::Entity
{
    public:
        PoltextItems();
        ~PoltextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems


class System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PolcomplexItems::ComplexList::PoltextItems::TextList


class System::LldpItems::InstItems::IfItems::IfList::PoltextItems : public ydk::Entity
{
    public:
        PoltextItems();
        ~PoltextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PoltextItems


class System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PoltextItems::TextList


class System::LldpItems::InstItems::IfItems::IfList::PolipItems : public ydk::Entity
{
    public:
        PolipItems();
        ~PolipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolipItems


class System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PolipItems::IpList


class System::LldpItems::InstItems::IfItems::IfList::PolmacItems : public ydk::Entity
{
    public:
        PolmacItems();
        ~PolmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolmacItems


class System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::IfItems::IfList::PolmacItems::MacList


class System::LldpItems::InstItems::IfItems::IfList::Poluint64Items : public ydk::Entity
{
    public:
        Poluint64Items();
        ~Poluint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::Poluint64Items


class System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::Poluint64Items::UInt64List


class System::LldpItems::InstItems::IfItems::IfList::Poluint32Items : public ydk::Entity
{
    public:
        Poluint32Items();
        ~Poluint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::Poluint32Items


class System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::IfItems::IfList::Poluint32Items::UInt32List


class System::LldpItems::InstItems::IfItems::IfList::Poluint16Items : public ydk::Entity
{
    public:
        Poluint16Items();
        ~Poluint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::Poluint16Items


class System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::IfItems::IfList::Poluint16Items::UInt16List


class System::LldpItems::InstItems::IfItems::IfList::PolubyteItems : public ydk::Entity
{
    public:
        PolubyteItems();
        ~PolubyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::PolubyteItems


class System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::IfItems::IfList::PolubyteItems::UByteList


class System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::LldpItems::InstItems::InstsendtaskItems : public ydk::Entity
{
    public:
        InstsendtaskItems();
        ~InstsendtaskItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstSendTaskList; //type: System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList

        ydk::YList instsendtask_list;
        
}; // System::LldpItems::InstItems::InstsendtaskItems


class System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList : public ydk::Entity
{
    public:
        InstSendTaskList();
        ~InstSendTaskList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf shard; //type: uint8

}; // System::LldpItems::InstItems::InstsendtaskItems::InstSendTaskList


class System::LldpItems::InstItems::InststatsItems : public ydk::Entity
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

        ydk::YLeaf pktsent; //type: uint64
        ydk::YLeaf pktrcvd; //type: uint64
        ydk::YLeaf entriesaged; //type: uint64
        ydk::YLeaf errpktrcvd; //type: uint64
        ydk::YLeaf pktdiscarded; //type: uint64
        ydk::YLeaf unrecogtlv; //type: uint64
        ydk::YLeaf numadjadded; //type: uint32
        ydk::YLeaf numadjremoved; //type: uint32
        ydk::YLeaf lastadjchgts; //type: string

}; // System::LldpItems::InstItems::InststatsItems


class System::LldpItems::InstItems::PolcomplexItems : public ydk::Entity
{
    public:
        PolcomplexItems();
        ~PolcomplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ComplexList; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems


class System::LldpItems::InstItems::PolcomplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class PolipItems; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems
        class PolmacItems; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems
        class Poluint64Items; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items
        class Poluint32Items; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items
        class Poluint16Items; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items
        class PolubyteItems; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems
        class PoltextItems; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems> polip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems> polmac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items> poluint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items> poluint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items> poluint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems> polubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems> poltext_items;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems : public ydk::Entity
{
    public:
        PolipItems();
        ~PolipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolipItems::IpList


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems : public ydk::Entity
{
    public:
        PolmacItems();
        ~PolmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolmacItems::MacList


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items : public ydk::Entity
{
    public:
        Poluint64Items();
        ~Poluint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint64Items::UInt64List


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items : public ydk::Entity
{
    public:
        Poluint32Items();
        ~Poluint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint32Items::UInt32List


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items : public ydk::Entity
{
    public:
        Poluint16Items();
        ~Poluint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::Poluint16Items::UInt16List


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems : public ydk::Entity
{
    public:
        PolubyteItems();
        ~PolubyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PolubyteItems::UByteList


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems : public ydk::Entity
{
    public:
        PoltextItems();
        ~PoltextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems


class System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PolcomplexItems::ComplexList::PoltextItems::TextList


class System::LldpItems::InstItems::PoltextItems : public ydk::Entity
{
    public:
        PoltextItems();
        ~PoltextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TextList; //type: System::LldpItems::InstItems::PoltextItems::TextList

        ydk::YList text_list;
        
}; // System::LldpItems::InstItems::PoltextItems


class System::LldpItems::InstItems::PoltextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PoltextItems::TextList


class System::LldpItems::InstItems::PolipItems : public ydk::Entity
{
    public:
        PolipItems();
        ~PolipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpList; //type: System::LldpItems::InstItems::PolipItems::IpList

        ydk::YList ip_list;
        
}; // System::LldpItems::InstItems::PolipItems


class System::LldpItems::InstItems::PolipItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PolipItems::IpList


class System::LldpItems::InstItems::PolmacItems : public ydk::Entity
{
    public:
        PolmacItems();
        ~PolmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacList; //type: System::LldpItems::InstItems::PolmacItems::MacList

        ydk::YList mac_list;
        
}; // System::LldpItems::InstItems::PolmacItems


class System::LldpItems::InstItems::PolmacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::LldpItems::InstItems::PolmacItems::MacList


class System::LldpItems::InstItems::Poluint64Items : public ydk::Entity
{
    public:
        Poluint64Items();
        ~Poluint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UInt64List; //type: System::LldpItems::InstItems::Poluint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::LldpItems::InstItems::Poluint64Items


class System::LldpItems::InstItems::Poluint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::LldpItems::InstItems::Poluint64Items::UInt64List


class System::LldpItems::InstItems::Poluint32Items : public ydk::Entity
{
    public:
        Poluint32Items();
        ~Poluint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UInt32List; //type: System::LldpItems::InstItems::Poluint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::LldpItems::InstItems::Poluint32Items


class System::LldpItems::InstItems::Poluint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::LldpItems::InstItems::Poluint32Items::UInt32List


class System::LldpItems::InstItems::Poluint16Items : public ydk::Entity
{
    public:
        Poluint16Items();
        ~Poluint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UInt16List; //type: System::LldpItems::InstItems::Poluint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::LldpItems::InstItems::Poluint16Items


class System::LldpItems::InstItems::Poluint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::LldpItems::InstItems::Poluint16Items::UInt16List


class System::LldpItems::InstItems::PolubyteItems : public ydk::Entity
{
    public:
        PolubyteItems();
        ~PolubyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UByteList; //type: System::LldpItems::InstItems::PolubyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::LldpItems::InstItems::PolubyteItems


class System::LldpItems::InstItems::PolubyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::LldpItems::InstItems::PolubyteItems::UByteList


class System::LldpItems::InstItems::RslldpInstPolConsItems : public ydk::Entity
{
    public:
        RslldpInstPolConsItems();
        ~RslldpInstPolConsItems();

        bool has_data() const override;
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

}; // System::LldpItems::InstItems::RslldpInstPolConsItems


class System::McpItems : public ydk::Entity
{
    public:
        McpItems();
        ~McpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::McpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems> inst_items;
        
}; // System::McpItems


class System::McpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf txfreq; //type: uint16
        ydk::YLeaf loopdetectmult; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::McpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems> if_items;
        
}; // System::McpItems::InstItems


class System::McpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::McpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::McpItems::InstItems::IfItems


class System::McpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf operst; //type: McpOperSt
        ydk::YLeaf operstqual; //type: McpOperStQual
        ydk::YLeaf lastloopdetts; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class RtvrfMbrItems; //type: System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::McpItems::InstItems::IfItems::IfList


class System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::VpcItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems> inst_items;
        
}; // System::VpcItems


class System::VpcItems::InstItems : public ydk::Entity
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
        class OrphanItems; //type: System::VpcItems::InstItems::OrphanItems
        class DomItems; //type: System::VpcItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems> orphan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems> dom_items;
        
}; // System::VpcItems::InstItems


class System::VpcItems::InstItems::OrphanItems : public ydk::Entity
{
    public:
        OrphanItems();
        ~OrphanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OrphanPortList; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList

        ydk::YList orphanport_list;
        
}; // System::VpcItems::InstItems::OrphanItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList : public ydk::Entity
{
    public:
        OrphanPortList();
        ~OrphanPortList();

        bool has_data() const override;
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
        class RtvrfMbrItems; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems : public ydk::Entity
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

}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems::InstItems::DomItems : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf virtualip; //type: string
        ydk::YLeaf vipannouncedelay; //type: uint16
        ydk::YLeaf sysprio; //type: uint16
        ydk::YLeaf sysmac; //type: string
        ydk::YLeaf roleprio; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf orphanportlist; //type: uint32
        ydk::YLeaf peergw; //type: NwAdminSt_
        ydk::YLeaf grcflcnstncychck; //type: NwAdminSt_
        ydk::YLeaf track; //type: uint16
        ydk::YLeaf autorecovery; //type: NwAdminSt_
        ydk::YLeaf autorecoveryintvl; //type: uint16
        ydk::YLeaf ipv4cfssync; //type: NwAdminSt_
        ydk::YLeaf ipv6cfssync; //type: NwAdminSt_
        ydk::YLeaf peerswitch; //type: NwAdminSt_
        ydk::YLeaf delayrestorevpc; //type: uint16
        ydk::YLeaf delayrestoresvi; //type: uint16
        ydk::YLeaf delaypeerlinkbringup; //type: uint16
        ydk::YLeaf excludesvi; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf fastconvergence; //type: NwAdminSt_
        ydk::YLeaf operrole; //type: VpcRole
        ydk::YLeaf oldrole; //type: VpcRole
        ydk::YLeaf lacprole; //type: VpcRole
        ydk::YLeaf summoperrole; //type: VpcSummRole
        ydk::YLeaf localprio; //type: uint16
        ydk::YLeaf peerprio; //type: uint16
        ydk::YLeaf vpcprio; //type: uint16
        ydk::YLeaf localmac; //type: string
        ydk::YLeaf peermac; //type: string
        ydk::YLeaf vpcmac; //type: string
        ydk::YLeaf operst; //type: string
        ydk::YLeaf peerversion; //type: uint32
        ydk::YLeaf batchedvpcinv; //type: string
        ydk::YLeaf issufromver; //type: string
        ydk::YLeaf issutover; //type: string
        ydk::YLeaf peerst; //type: VpcPeerSt
        ydk::YLeaf peerstqual; //type: VpcPeerStQual
        ydk::YLeaf dualactivest; //type: VpcDualActiveSt
        ydk::YLeaf compatst; //type: VpcCompatSt
        ydk::YLeaf compatqual; //type: uint32
        ydk::YLeaf compatqualstr; //type: string
        ydk::YLeaf type2compatst; //type: VpcCompatSt
        ydk::YLeaf type2compatqual; //type: uint32
        ydk::YLeaf type2compatqualstr; //type: string
        ydk::YLeaf name; //type: string
        class IfItems; //type: System::VpcItems::InstItems::DomItems::IfItems
        class KeepaliveItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems
        class ParamsItems; //type: System::VpcItems::InstItems::DomItems::ParamsItems
        class RsvpcInstPolConsItems; //type: System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems> keepalive_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::ParamsItems> params_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems> rsvpcinstpolcons_items;
        
}; // System::VpcItems::InstItems::DomItems


class System::VpcItems::InstItems::DomItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::VpcItems::InstItems::DomItems::IfItems


class System::VpcItems::InstItems::DomItems::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf localoperst; //type: VpcOperSt
        ydk::YLeaf remoteoperst; //type: VpcOperSt
        ydk::YLeaf compatst; //type: VpcCompatSt
        ydk::YLeaf compatqual; //type: uint32
        ydk::YLeaf compatqualstr; //type: string
        ydk::YLeaf cfgdvlans; //type: string
        ydk::YLeaf cfgdtrunkvlans; //type: string
        ydk::YLeaf cfgdaccessvlan; //type: string
        ydk::YLeaf upvlans; //type: string
        ydk::YLeaf suspvlans; //type: string
        ydk::YLeaf peercfgdvlans; //type: string
        ydk::YLeaf peerupvlans; //type: string
        class ParamsItems; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems
        class RsvpcConfItems; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems> params_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems> rsvpcconf_items;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList


class System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems : public ydk::Entity
{
    public:
        ParamsItems();
        ~ParamsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AppParamsList; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList

        ydk::YList appparams_list;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_19_ */

