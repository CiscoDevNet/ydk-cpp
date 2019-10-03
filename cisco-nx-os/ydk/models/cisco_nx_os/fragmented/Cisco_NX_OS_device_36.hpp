#ifndef _CISCO_NX_OS_DEVICE_36_
#define _CISCO_NX_OS_DEVICE_36_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_35.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


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
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf lastchgdts; //type: one of uint64, string
        ydk::YLeaf bgprd; //type: string
        ydk::YLeaf bgprddisp; //type: string
        ydk::YLeaf prtclbmp; //type: uint32
        ydk::YLeaf oui; //type: string
        ydk::YLeaf vpnid; //type: string
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
        ydk::YLeaf createts; //type: one of uint64, string
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
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf lastchgdts; //type: one of uint64, string
        ydk::YLeaf bgprd; //type: string
        ydk::YLeaf bgprddisp; //type: string
        ydk::YLeaf prtclbmp; //type: uint32
        ydk::YLeaf oui; //type: string
        ydk::YLeaf vpnid; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf encap; //type: string
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
        class MaxrtsItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::MaxrtsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems> ctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::MaxrtsItems> maxrts_items;
        
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
        class RtctrlnondefItems; //type: System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlnondefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlmapItems> rtctrlmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems> rtctrldefmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlnondefItems> rtctrlnondef_items;
        
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
        ydk::YLeaf advtvpn; //type: boolean
        ydk::YLeaf rtmap; //type: string

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrldefmapItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlnondefItems : public ydk::Entity
{
    public:
        RtctrlnondefItems();
        ~RtctrlnondefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allowvpn; //type: boolean
        ydk::YLeaf advtvpn; //type: boolean

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::RtctrlnondefItems


class System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::MaxrtsItems : public ydk::Entity
{
    public:
        MaxrtsItems();
        ~MaxrtsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxrt; //type: uint32
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf reinstall; //type: uint8
        ydk::YLeaf action; //type: L3MaxRtAct

}; // System::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::MaxrtsItems


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
        ydk::YLeaf createts; //type: one of uint64, string
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


class System::IpfibItems : public ydk::Entity
{
    public:
        IpfibItems();
        ~IpfibItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::IpfibItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems::DomItems> dom_items;
        
}; // System::IpfibItems


class System::IpfibItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::IpfibItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::IpfibItems::DomItems


class System::IpfibItems::DomItems::DomList : public ydk::Entity
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
        class LabelItems; //type: System::IpfibItems::DomItems::DomList::LabelItems
        class PfxItems; //type: System::IpfibItems::DomItems::DomList::PfxItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems::DomItems::DomList::LabelItems> label_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems::DomItems::DomList::PfxItems> pfx_items;
        
}; // System::IpfibItems::DomItems::DomList


class System::IpfibItems::DomItems::DomList::LabelItems : public ydk::Entity
{
    public:
        LabelItems();
        ~LabelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelList; //type: System::IpfibItems::DomItems::DomList::LabelItems::LabelList

        ydk::YList label_list;
        
}; // System::IpfibItems::DomItems::DomList::LabelItems


class System::IpfibItems::DomItems::DomList::LabelItems::LabelList : public ydk::Entity
{
    public:
        LabelList();
        ~LabelList();

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
        ydk::YLeaf tableid; //type: uint32
        ydk::YLeaf fectype; //type: IpfibFecType
        ydk::YLeaf fec; //type: string
        class NhItems; //type: System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems> nh_items;
        
}; // System::IpfibItems::DomItems::DomList::LabelItems::LabelList


class System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems : public ydk::Entity
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

        class MplsNextHopInfoList; //type: System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems::MplsNextHopInfoList

        ydk::YList mplsnexthopinfo_list;
        
}; // System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems


class System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems::MplsNextHopInfoList : public ydk::Entity
{
    public:
        MplsNextHopInfoList();
        ~MplsNextHopInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf nhintf; //type: string
        ydk::YLeaf routetype; //type: IpfibSpecialAdj
        ydk::YLeaf partialinst; //type: string
        ydk::YLeaf outlabel; //type: string
        ydk::YLeaf outoperation; //type: IpfibOutOperEnum

}; // System::IpfibItems::DomItems::DomList::LabelItems::LabelList::NhItems::MplsNextHopInfoList


class System::IpfibItems::DomItems::DomList::PfxItems : public ydk::Entity
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

        class RouteList; //type: System::IpfibItems::DomItems::DomList::PfxItems::RouteList

        ydk::YList route_list;
        
}; // System::IpfibItems::DomItems::DomList::PfxItems


class System::IpfibItems::DomItems::DomList::PfxItems::RouteList : public ydk::Entity
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

        ydk::YLeaf pfxaddr; //type: string
        ydk::YLeaf addrtype; //type: IpfibAddressType
        ydk::YLeaf partialinst; //type: boolean
        class NhItems; //type: System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems> nh_items;
        
}; // System::IpfibItems::DomItems::DomList::PfxItems::RouteList


class System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems : public ydk::Entity
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

        class RouteNextHopInfoList; //type: System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems::RouteNextHopInfoList

        ydk::YList routenexthopinfo_list;
        
}; // System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems


class System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems::RouteNextHopInfoList : public ydk::Entity
{
    public:
        RouteNextHopInfoList();
        ~RouteNextHopInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhaddr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf nhintf; //type: string
        ydk::YLeaf routetype; //type: IpfibSpecialAdj
        ydk::YLeaf partialinst; //type: string
        ydk::YLeaf outlabel; //type: string
        ydk::YLeaf outoperation; //type: IpfibOutOperEnum

}; // System::IpfibItems::DomItems::DomList::PfxItems::RouteList::NhItems::RouteNextHopInfoList


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

        ydk::YLeaf asformat; //type: L3vmAsFormatType
        ydk::YLeaf vrfmemberchangeretainl3cfg; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class IfItems; //type: System::L3vmItems::IfItems
        class InstItems; //type: System::L3vmItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::InstItems> inst_items;
        
}; // System::L3vmItems


class System::L3vmItems::IfItems : public ydk::Entity
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

        class L3vmIfList; //type: System::L3vmItems::IfItems::L3vmIfList

        ydk::YList l3vmif_list;
        
}; // System::L3vmItems::IfItems


class System::L3vmItems::IfItems::L3vmIfList : public ydk::Entity
{
    public:
        L3vmIfList();
        ~L3vmIfList();

        bool has_data() const override;
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
        ydk::YLeaf soo; //type: string
        class RtvrfMbrItems; //type: System::L3vmItems::IfItems::L3vmIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::IfItems::L3vmIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::L3vmItems::IfItems::L3vmIfList


class System::L3vmItems::IfItems::L3vmIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::L3vmItems::IfItems::L3vmIfList::RtvrfMbrItems


class System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems


class System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::L3vmItems::IfItems::L3vmIfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        class Route4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items
        class SummaryItems; //type: System::UribItems::Table4Items::Table4List::SummaryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items> route4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::SummaryItems> summary_items;
        
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
        ydk::YLeaf ubestnexthopcount; //type: uint32
        ydk::YLeaf mbestnexthopcount; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf sortkey; //type: uint32
        ydk::YLeaf pendingufdm; //type: boolean
        ydk::YLeaf pendinghw; //type: boolean
        class Nh4Items; //type: System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items> nh4_items;
        
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
        ydk::YLeaf address; //type: string
        ydk::YLeaf bindinglabel; //type: uint32
        ydk::YLeaf isbest; //type: boolean
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf interfacename; //type: string
        ydk::YLeaf owner; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf routetype; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf segmentid; //type: uint32
        ydk::YLeaf tunnelid; //type: uint32
        ydk::YLeaf encaptype; //type: UribNextHopEncapType
        ydk::YLeaf vtepipaddress; //type: string
        ydk::YLeaf vtepunderlayvrfid; //type: uint32
        ydk::YLeaf labelstack; //type: string
        ydk::YLeaf nhlfeowner; //type: string
        ydk::YLeaf clientdata; //type: UribYesNo
        ydk::YLeaf recursivenexthopprefix; //type: string
        ydk::YLeaf xribgporigin; //type: string
        ydk::YLeaf xribgppeer; //type: string
        ydk::YLeaf tlv; //type: string
        ydk::YLeaf tlvextentedcommunity; //type: string
        ydk::YLeaf tlvattachexport; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf nhlfeflags; //type: uint32
        ydk::YLeaf tlvtype; //type: uint32

}; // System::UribItems::Table4Items::Table4List::Route4Items::Route4List::Nh4Items::NextHop4List


class System::UribItems::Table4Items::Table4List::SummaryItems : public ydk::Entity
{
    public:
        SummaryItems();
        ~SummaryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_total; //type: uint32
        ydk::YLeaf uroute_total; //type: uint32
        ydk::YLeaf path_total; //type: uint32
        ydk::YLeaf mpath_total; //type: uint32
        ydk::YLeaf routespersubnet; //type: string

}; // System::UribItems::Table4Items::Table4List::SummaryItems


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
        ydk::YLeaf routecount; //type: uint32
        class Route6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items
        class SummaryItems; //type: System::U6ribItems::Table6Items::Table6List::SummaryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items> route6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::SummaryItems> summary_items;
        
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
        ydk::YLeaf ubestnexthopcount; //type: uint32
        ydk::YLeaf mbestnexthopcount; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf sortkey; //type: uint32
        ydk::YLeaf pendingufdm; //type: boolean
        ydk::YLeaf pendinghw; //type: boolean
        class Nh6Items; //type: System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items> nh6_items;
        
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
        ydk::YLeaf address; //type: string
        ydk::YLeaf bindinglabel; //type: uint32
        ydk::YLeaf isbest; //type: boolean
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf interfacename; //type: string
        ydk::YLeaf owner; //type: string
        ydk::YLeaf preference; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf routetype; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf segmentid; //type: uint32
        ydk::YLeaf tunnelid; //type: uint32
        ydk::YLeaf encaptype; //type: UribNextHopEncapType
        ydk::YLeaf vtepipaddress; //type: string
        ydk::YLeaf vtepunderlayvrfid; //type: uint32
        ydk::YLeaf labelstack; //type: string
        ydk::YLeaf nhlfeowner; //type: string
        ydk::YLeaf clientdata; //type: UribYesNo
        ydk::YLeaf recursivenexthopprefix; //type: string
        ydk::YLeaf xribgporigin; //type: string
        ydk::YLeaf xribgppeer; //type: string
        ydk::YLeaf tlv; //type: string
        ydk::YLeaf tlvextentedcommunity; //type: string
        ydk::YLeaf tlvattachexport; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf nhlfeflags; //type: uint32
        ydk::YLeaf tlvtype; //type: uint32

}; // System::U6ribItems::Table6Items::Table6List::Route6Items::Route6List::Nh6Items::NextHop6List


class System::U6ribItems::Table6Items::Table6List::SummaryItems : public ydk::Entity
{
    public:
        SummaryItems();
        ~SummaryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_total; //type: uint32
        ydk::YLeaf uroute_total; //type: uint32
        ydk::YLeaf path_total; //type: uint32
        ydk::YLeaf mpath_total; //type: uint32
        ydk::YLeaf routespersubnet; //type: string

}; // System::U6ribItems::Table6Items::Table6List::SummaryItems


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
        ydk::YLeaf adminst; //type: NwAdminSt___
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


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList : public ydk::Entity
{
    public:
        RouteOwnerList();
        ~RouteOwnerList();

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
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems
        class RsrouteOwnerToNexthopAttItems; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems> rsrouteownertonexthopatt_items;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList : public ydk::Entity
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

}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems : public ydk::Entity
{
    public:
        RsrouteOwnerToNexthopAttItems();
        ~RsrouteOwnerToNexthopAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRouteOwnerToNexthopAttList; //type: System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList

        ydk::YList rsrouteownertonexthopatt_list;
        
}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems


class System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList : public ydk::Entity
{
    public:
        RsRouteOwnerToNexthopAttList();
        ~RsRouteOwnerToNexthopAttList();

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

}; // System::Uribv4Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::RsrouteOwnerToNexthopAttItems::RsRouteOwnerToNexthopAttList


class System::Uribv6Items : public ydk::Entity
{
    public:
        Uribv6Items();
        ~Uribv6Items();

        bool has_data() const override;
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
        class DomItems; //type: System::Uribv6Items::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems> dom_items;
        
}; // System::Uribv6Items


class System::Uribv6Items::DomItems : public ydk::Entity
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

        class DomList; //type: System::Uribv6Items::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Uribv6Items::DomItems


class System::Uribv6Items::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::Uribv6Items::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems::DomList::DbItems> db_items;
        
}; // System::Uribv6Items::DomItems::DomList


class System::Uribv6Items::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems


class System::Uribv6Items::DomItems::DomList::DbItems::DbList : public ydk::Entity
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
        class RtItems; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        class NhItems; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems
        class OwnerItems; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems> owner_items;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: string

}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems : public ydk::Entity
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

        class RouteOwnerList; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList

        ydk::YList routeowner_list;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList : public ydk::Entity
{
    public:
        RouteOwnerList();
        ~RouteOwnerList();

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
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems> nh_items;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems


class System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: string

}; // System::Uribv6Items::DomItems::DomList::DbItems::DbList::RtItems::RouteList::OwnerItems::RouteOwnerList::NhItems::NexthopList


class System::MmodeItems : public ydk::Entity
{
    public:
        MmodeItems();
        ~MmodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::MmodeItems::InstItems
        class ProfileItems; //type: System::MmodeItems::ProfileItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MmodeItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MmodeItems::ProfileItems> profile_items;
        
}; // System::MmodeItems


class System::MmodeItems::InstItems : public ydk::Entity
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

        ydk::YLeaf modeaction; //type: MmodeMaintModeActionType
        ydk::YLeaf modeactionstatus; //type: MmodeMaintModeActionStatusType
        ydk::YLeaf modeswitchinprogress; //type: boolean
        ydk::YLeaf sysmode; //type: MmodeMaintModeType
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf onreloadresetreasonhwerror; //type: boolean
        ydk::YLeaf onreloadresetreasonsvcfailure; //type: boolean
        ydk::YLeaf onreloadresetreasonkernfailure; //type: boolean
        ydk::YLeaf onreloadresetreasonwdogtimeout; //type: boolean
        ydk::YLeaf onreloadresetreasonfatalerror; //type: boolean
        ydk::YLeaf onreloadresetreasonlcfailure; //type: boolean
        ydk::YLeaf onreloadresetreasonmanualreload; //type: boolean
        ydk::YLeaf onreloadresetreasonmaintenance; //type: boolean
        ydk::YLeaf onreloadresetreasonanyother; //type: boolean
        ydk::YLeaf snapshotdelay; //type: uint16
        ydk::YLeaf maintdelay; //type: uint16
        ydk::YLeaf usecustomprofile; //type: boolean

}; // System::MmodeItems::InstItems


class System::MmodeItems::ProfileItems : public ydk::Entity
{
    public:
        ProfileItems();
        ~ProfileItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProfileList; //type: System::MmodeItems::ProfileItems::ProfileList

        ydk::YList profile_list;
        
}; // System::MmodeItems::ProfileItems


class System::MmodeItems::ProfileItems::ProfileList : public ydk::Entity
{
    public:
        ProfileList();
        ~ProfileList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf proftype; //type: MmodeMaintProfileType
        class EntryItems; //type: System::MmodeItems::ProfileItems::ProfileList::EntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MmodeItems::ProfileItems::ProfileList::EntryItems> entry_items;
        
}; // System::MmodeItems::ProfileItems::ProfileList


class System::MmodeItems::ProfileItems::ProfileList::EntryItems : public ydk::Entity
{
    public:
        EntryItems();
        ~EntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProfileEntryList; //type: System::MmodeItems::ProfileItems::ProfileList::EntryItems::ProfileEntryList

        ydk::YList profileentry_list;
        
}; // System::MmodeItems::ProfileItems::ProfileList::EntryItems


class System::MmodeItems::ProfileItems::ProfileList::EntryItems::ProfileEntryList : public ydk::Entity
{
    public:
        ProfileEntryList();
        ~ProfileEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf parentsequence; //type: uint16
        ydk::YLeaf configcmd; //type: string
        ydk::YLeaf configcmdvalid; //type: boolean

}; // System::MmodeItems::ProfileItems::ProfileList::EntryItems::ProfileEntryList


class System::ConngItems : public ydk::Entity
{
    public:
        ConngItems();
        ~ConngItems();

        bool has_data() const override;
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
        ydk::YLeaf name; //type: string
        class PathItems; //type: System::ConngItems::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems::PathItems> path_items;
        
}; // System::ConngItems


class System::ConngItems::PathItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PathEpList; //type: System::ConngItems::PathItems::PathEpList

        ydk::YList pathep_list;
        
}; // System::ConngItems::PathItems


class System::ConngItems::PathItems::PathEpList : public ydk::Entity
{
    public:
        PathEpList();
        ~PathEpList();

        bool has_data() const override;
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
        ydk::YLeaf nativeencap; //type: string
        ydk::YLeaf fabricpathdn; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf name; //type: string
        class RtfvEpDefToPathEpItems; //type: System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems
        class RtfvDyPathAttItems; //type: System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems
        class RtvsanVsanPathAttItems; //type: System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems
        class RspathToIfItems; //type: System::ConngItems::PathItems::PathEpList::RspathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems> rtfvepdeftopathep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems::PathItems::PathEpList::RtfvDyPathAttItems> rtfvdypathatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems::PathItems::PathEpList::RtvsanVsanPathAttItems> rtvsanvsanpathatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems::PathItems::PathEpList::RspathToIfItems> rspathtoif_items;
        
}; // System::ConngItems::PathItems::PathEpList


class System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems : public ydk::Entity
{
    public:
        RtfvEpDefToPathEpItems();
        ~RtfvEpDefToPathEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefToPathEpList; //type: System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList

        ydk::YList rtfvepdeftopathep_list;
        
}; // System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems


class System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList : public ydk::Entity
{
    public:
        RtFvEpDefToPathEpList();
        ~RtFvEpDefToPathEpList();

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

}; // System::ConngItems::PathItems::PathEpList::RtfvEpDefToPathEpItems::RtFvEpDefToPathEpList


}
}

#endif /* _CISCO_NX_OS_DEVICE_36_ */

