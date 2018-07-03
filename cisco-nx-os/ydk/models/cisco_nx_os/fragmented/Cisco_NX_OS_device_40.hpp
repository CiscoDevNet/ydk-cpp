#ifndef _CISCO_NX_OS_DEVICE_40_
#define _CISCO_NX_OS_DEVICE_40_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_39.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems : public ydk::Entity
{
    public:
        DomstatsadjItems();
        ~DomstatsadjItems();

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
        ydk::YLeaf resolved; //type: uint64
        ydk::YLeaf incomplete; //type: uint64
        ydk::YLeaf total; //type: uint64

}; // System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems


class System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems : public ydk::Entity
{
    public:
        DomstatsmiscItems();
        ~DomstatsmiscItems();

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

}; // System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems


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
        ydk::YLeaf gratuitousrequest; //type: NwAdminSt_
        ydk::YLeaf gratuitousupdate; //type: NwAdminSt_
        ydk::YLeaf gratuitoushsrpdup; //type: NwAdminSt_
        ydk::YLeaf proxyarp; //type: NwAdminSt_
        ydk::YLeaf localproxyarp; //type: NwAdminSt_
        ydk::YLeaf localproxyarpnohwflood; //type: NwAdminSt_
        ydk::YLeaf deleteadjonmacdelete; //type: NwAdminSt_
        ydk::YLeaf refreshtimerformacdelete; //type: uint16
        ydk::YLeaf duplicateipdetectionforunnumberedsvi; //type: NwAdminSt_
        ydk::YLeaf configerror; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf upts; //type: string
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf pktsentfailnovlanforsvi; //type: uint32
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
        ydk::YLeaf pktrcvdmbufop; //type: uint32
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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

        ydk::YLeaf adminst; //type: NwAdminSt_
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

        ydk::YLeaf arpsync; //type: NwAdminSt_

}; // System::ArpItems::InstItems::VpcItems::DomItems


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf upts; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::BfdItems::InstItems::IfItems
        class AuxItems; //type: System::BfdItems::InstItems::AuxItems
        class AfItems; //type: System::BfdItems::InstItems::AfItems
        class KaItems; //type: System::BfdItems::InstItems::KaItems
        class SessionItems; //type: System::BfdItems::InstItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AuxItems> aux_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AfItems> af_items;
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
        ydk::YLeaf echoadminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf trkmbrlnk; //type: BfdTrkMbrLnk
        ydk::YLeaf sttm; //type: uint32
        ydk::YLeaf dst; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf echoadminst; //type: NwAdminSt_
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::BfdItems::InstItems::AuxItems : public ydk::Entity
{
    public:
        AuxItems();
        ~AuxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::BfdItems::InstItems::AuxItems


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
        ydk::YLeaf lasttranstime; //type: string
        ydk::YLeaf lastdiag; //type: BfdDiagCode
        ydk::YLeaf lastdowntime; //type: string
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
        ydk::YLeaf lastrxpkt; //type: string
        ydk::YLeaf txcnt; //type: uint64
        ydk::YLeaf txavg; //type: uint32
        ydk::YLeaf txmin; //type: uint32
        ydk::YLeaf txmax; //type: uint32
        ydk::YLeaf lasttxpkt; //type: string
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
        ydk::YLeaf autoexptime; //type: string

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList


class System::EigrpItems : public ydk::Entity
{
    public:
        EigrpItems();
        ~EigrpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::EigrpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems> inst_items;
        
}; // System::EigrpItems


class System::EigrpItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::EigrpItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::EigrpItems::InstItems


class System::EigrpItems::InstItems::InstList : public ydk::Entity
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
        class DomItems; //type: System::EigrpItems::InstItems::InstList::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems> dom_items;
        
}; // System::EigrpItems::InstItems::InstList


class System::EigrpItems::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
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
        class AfItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems
        class IfItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems : public ydk::Entity
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

        class DomAfList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
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

        ydk::YLeaf type; //type: EigrpAfT
        ydk::YLeaf asn; //type: uint32
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf intdist; //type: uint8
        ydk::YLeaf extdist; //type: uint8
        ydk::YLeaf maxpaths; //type: uint8
        ydk::YLeaf actintvl; //type: uint16
        ydk::YLeaf name; //type: string
        class DbItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems
        class StubItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems
        class StatsItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems
        class InterleakItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems> stub_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems> stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems> interleak_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: EigrpDbT
        ydk::YLeaf name; //type: string
        class RtItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems> rt_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf operst; //type: EigrpRtOperSt
        ydk::YLeaf fdist; //type: uint64
        ydk::YLeaf actstqual; //type: string
        ydk::YLeaf chgqual; //type: string
        ydk::YLeaf lastactts; //type: string
        ydk::YLeaf siaquerycnt; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string
        class NhItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems> nh_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList : public ydk::Entity
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

        ydk::YLeaf informer; //type: string
        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf origin; //type: EigrpNhOrigin
        ydk::YLeaf fdist; //type: uint64
        ydk::YLeaf repdist; //type: uint64
        ydk::YLeaf chgqual; //type: string
        ydk::YLeaf minbw; //type: uint64
        ydk::YLeaf delay; //type: uint64
        ydk::YLeaf minmtu; //type: uint32
        ydk::YLeaf hops; //type: uint16
        ydk::YLeaf load; //type: uint8
        ydk::YLeaf reliability; //type: uint8
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf uribst; //type: string
        ydk::YLeaf name; //type: string
        class ExtcommItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems
        class ExtrecItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems> extcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems> extrec_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems : public ydk::Entity
{
    public:
        ExtcommItems();
        ~ExtcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommNhRecList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList

        ydk::YList extcommnhrec_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList : public ydk::Entity
{
    public:
        ExtCommNhRecList();
        ~ExtCommNhRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf comm; //type: string

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems : public ydk::Entity
{
    public:
        ExtrecItems();
        ~ExtrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: EigrpExtProtNhOrigin
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf asn; //type: uint32
        ydk::YLeaf origrtrid; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems : public ydk::Entity
{
    public:
        StubItems();
        ~StubItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtadvctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems : public ydk::Entity
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

        ydk::YLeaf numintf; //type: uint32
        ydk::YLeaf numpassiveintf; //type: uint32
        ydk::YLeaf numnbrs; //type: uint32
        ydk::YLeaf hellosent; //type: uint32
        ydk::YLeaf hellorcvd; //type: uint32
        ydk::YLeaf qrysent; //type: uint32
        ydk::YLeaf qryrcvd; //type: uint32
        ydk::YLeaf updsent; //type: uint32
        ydk::YLeaf updrcvd; //type: uint32
        ydk::YLeaf repsent; //type: uint32
        ydk::YLeaf reprcvd; //type: uint32
        ydk::YLeaf acksent; //type: uint32
        ydk::YLeaf ackrcvd; //type: uint32
        ydk::YLeaf siaqrysent; //type: uint32
        ydk::YLeaf siaqryrcvd; //type: uint32
        ydk::YLeaf siarepsent; //type: uint32
        ydk::YLeaf siareprcvd; //type: uint32
        ydk::YLeaf maxqdepth; //type: uint32
        ydk::YLeaf inqdrops; //type: uint32
        ydk::YLeaf headser; //type: uint64
        ydk::YLeaf nextser; //type: uint64
        ydk::YLeaf rtcnt; //type: uint32
        ydk::YLeaf pendreplies; //type: uint32
        ydk::YLeaf xmitdummies; //type: uint32

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf asn; //type: string

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AfItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems
        class RtvrfMbrItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems : public ydk::Entity
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

        class IfAfList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList

        ydk::YList ifaf_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList : public ydk::Entity
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

        ydk::YLeaf type; //type: EigrpAfT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems
        class StatsItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems
        class SummItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems> stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems> summ_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf swmajver; //type: uint8
        ydk::YLeaf swminver; //type: uint8
        ydk::YLeaf eigrpmajver; //type: uint8
        ydk::YLeaf eigrpminver; //type: uint8
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf operst; //type: string
        ydk::YLeaf nsfoperst; //type: string
        ydk::YLeaf stubflags; //type: string
        ydk::YLeaf lastupts; //type: string
        ydk::YLeaf name; //type: string
        class StatsItems; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems> stats_items;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems : public ydk::Entity
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

        ydk::YLeaf srtt; //type: string
        ydk::YLeaf rto; //type: string
        ydk::YLeaf xmitqcnt; //type: uint32
        ydk::YLeaf lastseqno; //type: uint32
        ydk::YLeaf rexmitcnt; //type: uint32
        ydk::YLeaf retrycnt; //type: uint32
        ydk::YLeaf condrcvseqno; //type: uint32
        ydk::YLeaf ucstuptgtserno; //type: uint64
        ydk::YLeaf pfxcount; //type: uint32

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems : public ydk::Entity
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

        ydk::YLeaf xmitrelcnt; //type: uint32
        ydk::YLeaf xmitunrelcnt; //type: uint32
        ydk::YLeaf relpktsendintvl; //type: string
        ydk::YLeaf unrelpktsendintvl; //type: string
        ydk::YLeaf mcflowdelay; //type: uint32
        ydk::YLeaf pendrt; //type: uint32
        ydk::YLeaf xmitserno; //type: uint64
        ydk::YLeaf unrelmccnt; //type: uint32
        ydk::YLeaf relmccnt; //type: uint32
        ydk::YLeaf unreluccnt; //type: uint32
        ydk::YLeaf reluccnt; //type: uint32
        ydk::YLeaf mcexcep; //type: uint32
        ydk::YLeaf crcnt; //type: uint32
        ydk::YLeaf ackssupp; //type: uint32
        ydk::YLeaf rexmitsent; //type: uint32
        ydk::YLeaf outofseqrcvd; //type: uint32

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems : public ydk::Entity
{
    public:
        SummItems();
        ~SummItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList

        ydk::YList summ_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList : public ydk::Entity
{
    public:
        SummList();
        ~SummList();

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

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf iscreate; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv4Items : public ydk::Entity
{
    public:
        Icmpv4Items();
        ~Icmpv4Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Icmpv4Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems> inst_items;
        
}; // System::Icmpv4Items


class System::Icmpv4Items::InstItems : public ydk::Entity
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
        class DomItems; //type: System::Icmpv4Items::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems> dom_items;
        
}; // System::Icmpv4Items::InstItems


class System::Icmpv4Items::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::Icmpv4Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Icmpv4Items::InstItems::DomItems


class System::Icmpv4Items::InstItems::DomItems::DomList : public ydk::Entity
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
        class IfItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems> if_items;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class RtvrfMbrItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv6Items : public ydk::Entity
{
    public:
        Icmpv6Items();
        ~Icmpv6Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Icmpv6Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems> inst_items;
        
}; // System::Icmpv6Items


class System::Icmpv6Items::InstItems : public ydk::Entity
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

        ydk::YLeaf operst; //type: Icmpv6OperSt
        ydk::YLeaf adjstaletimer; //type: uint16
        ydk::YLeaf adjstaletimericmp; //type: NwAdminSt_
        ydk::YLeaf logginglevel; //type: Icmpv6LoggingLevel
        ydk::YLeaf defaultlogginglevel; //type: ArpLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::Icmpv6Items::InstItems::IfItems
        class LogsItems; //type: System::Icmpv6Items::InstItems::LogsItems
        class IfstatsItems; //type: System::Icmpv6Items::InstItems::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::LogsItems> logs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfstatsItems> ifstats_items;
        
}; // System::Icmpv6Items::InstItems


class System::Icmpv6Items::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::Icmpv6Items::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Icmpv6Items::InstItems::IfItems


class System::Icmpv6Items::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class IfstatsItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Icmpv6Items::InstItems::IfItems::IfList


class System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
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

}; // System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Icmpv6Items::InstItems::LogsItems : public ydk::Entity
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

        class ICMPv6EventLogsList; //type: System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList

        ydk::YList icmpv6eventlogs_list;
        
}; // System::Icmpv6Items::InstItems::LogsItems


class System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList : public ydk::Entity
{
    public:
        ICMPv6EventLogsList();
        ~ICMPv6EventLogsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf eventtype; //type: Icmpv6EventType
        ydk::YLeaf logsize; //type: Icmpv6EventLogSize

}; // System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList


class System::Icmpv6Items::InstItems::IfstatsItems : public ydk::Entity
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

}; // System::Icmpv6Items::InstItems::IfstatsItems


class System::IgmpsnoopItems : public ydk::Entity
{
    public:
        IgmpsnoopItems();
        ~IgmpsnoopItems();

        bool has_data() const override;
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
        class InstItems; //type: System::IgmpsnoopItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems> inst_items;
        
}; // System::IgmpsnoopItems


class System::IgmpsnoopItems::InstItems : public ydk::Entity
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
        ydk::YLeaf allrtrmcastencap; //type: string
        ydk::YLeaf flags; //type: string
        class DomItems; //type: System::IgmpsnoopItems::InstItems::DomItems
        class InststatsItems; //type: System::IgmpsnoopItems::InstItems::InststatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::InststatsItems> inststats_items;
        
}; // System::IgmpsnoopItems::InstItems


class System::IgmpsnoopItems::InstItems::DomItems : public ydk::Entity
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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf encap; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf fwdmode; //type: IpmcsnoopFwdMode
        ydk::YLeaf numrtrif; //type: uint32
        ydk::YLeaf nummcgrp; //type: uint32
        ydk::YLeaf numsrcgrp; //type: uint32
        ydk::YLeaf grpflushts; //type: string
        ydk::YLeaf nextqueryts; //type: string
        ydk::YLeaf nextqueryexpts; //type: string
        ydk::YLeaf mrtrepgid; //type: uint32
        class DbItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems
        class DomstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems
        class StrtrifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems
        class RtrifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::RtrifItems
        class VlanItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems
        class BdItems; //type: System::IgmpsnoopItems::InstItems::DomItems::BdItems
        class GlItems; //type: System::IgmpsnoopItems::InstItems::DomItems::GlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems> strtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::RtrifItems> rtrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::GlItems> gl_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems : public ydk::Entity
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

        class DbList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IpmcsnoopDbT
        ydk::YLeaf name; //type: string
        class GsnoopItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems
        class VsnoopItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems
        class ExpTrackItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems
        class VstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems
        class GstatsItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems
        class PolicyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems
        class GroupItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems
        class McgrpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems
        class QuerierItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems> gsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems> vsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems> exptrack_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems> vstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems> gstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems> mcgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems> querier_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems : public ydk::Entity
{
    public:
        GsnoopItems();
        ~GsnoopItems();

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
        ydk::YLeaf snooping; //type: boolean
        ydk::YLeaf omf; //type: boolean
        ydk::YLeaf grepsup; //type: boolean
        ydk::YLeaf gv3repsup; //type: boolean
        ydk::YLeaf glinklocalgrpsup; //type: boolean
        ydk::YLeaf grouptimeout; //type: uint32
        ydk::YLeaf proxygeneralquery; //type: boolean
        ydk::YLeaf gmaxresponsetime; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems : public ydk::Entity
{
    public:
        VsnoopItems();
        ~VsnoopItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VSnoopRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList

        ydk::YList vsnooprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList : public ydk::Entity
{
    public:
        VSnoopRecList();
        ~VSnoopRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf lkpmode; //type: string
        ydk::YLeaf snoopon; //type: boolean
        ydk::YLeaf repsup; //type: boolean
        ydk::YLeaf v3repsup; //type: boolean
        ydk::YLeaf vlinklocalgrpsup; //type: boolean
        ydk::YLeaf omf_enabled; //type: boolean
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf routeportcnt; //type: uint32
        ydk::YLeaf groupcnt; //type: uint32
        ydk::YLeaf vpcfunction; //type: boolean
        ydk::YLeaf fastleave; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems : public ydk::Entity
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

        class MRouterRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList

        ydk::YList mrouterrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList : public ydk::Entity
{
    public:
        MRouterRecList();
        ~MRouterRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf type; //type: IpmcsnoopMrouteType
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf exptime; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems : public ydk::Entity
{
    public:
        ExpTrackItems();
        ~ExpTrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExpTrackRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList

        ydk::YList exptrackrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList : public ydk::Entity
{
    public:
        ExpTrackRecList();
        ~ExpTrackRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf reporter; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf lastjoin; //type: string
        ydk::YLeaf expires; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf numreports; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems : public ydk::Entity
{
    public:
        VstatsItems();
        ~VstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanStatsRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList

        ydk::YList vlanstatsrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList : public ydk::Entity
{
    public:
        VlanStatsRecList();
        ~VlanStatsRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf vpr; //type: uint32
        ydk::YLeaf v1rr; //type: uint32
        ydk::YLeaf v2rr; //type: uint32
        ydk::YLeaf v3rr; //type: uint32
        ydk::YLeaf v3qr; //type: uint32
        ydk::YLeaf v2lr; //type: uint32
        ydk::YLeaf phr; //type: uint32
        ydk::YLeaf irr; //type: uint32
        ydk::YLeaf iqr; //type: uint32
        ydk::YLeaf v2ls; //type: uint32
        ydk::YLeaf v3gs; //type: uint32
        ydk::YLeaf vmr; //type: uint32
        ydk::YLeaf upr; //type: uint32
        ydk::YLeaf qo; //type: uint32
        ydk::YLeaf v2ro; //type: uint32
        ydk::YLeaf v2lo; //type: uint32
        ydk::YLeaf v3ro; //type: uint32
        ydk::YLeaf vpsr; //type: uint32
        ydk::YLeaf str; //type: uint32
        ydk::YLeaf cps; //type: uint32
        ydk::YLeaf cpr; //type: uint32
        ydk::YLeaf cpe; //type: uint32
        ydk::YLeaf mps; //type: uint32
        ydk::YLeaf mpr; //type: uint32
        ydk::YLeaf mpe; //type: uint32
        ydk::YLeaf v1qr; //type: uint32
        ydk::YLeaf v2qr; //type: uint32
        ydk::YLeaf v1rs; //type: uint32
        ydk::YLeaf v2rs; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems : public ydk::Entity
{
    public:
        GstatsItems();
        ~GstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pr; //type: uint32
        ydk::YLeaf invpkt; //type: uint32
        ydk::YLeaf pnv; //type: uint32
        ydk::YLeaf loopbkpkt; //type: uint32
        ydk::YLeaf mrdloopbk; //type: uint32
        ydk::YLeaf pf; //type: uint32
        ydk::YLeaf vpcdrqs; //type: uint32
        ydk::YLeaf vpcdrqr; //type: uint32
        ydk::YLeaf vpcdrqf; //type: uint32
        ydk::YLeaf vpcdrus; //type: uint32
        ydk::YLeaf vpcdrur; //type: uint32
        ydk::YLeaf vpcdruf; //type: uint32
        ydk::YLeaf vpccfssf; //type: uint32
        ydk::YLeaf vpccfsrs; //type: uint32
        ydk::YLeaf vpccfsrr; //type: uint32
        ydk::YLeaf vpccfsrf; //type: uint32
        ydk::YLeaf vpccfsrfp; //type: uint32
        ydk::YLeaf vpccfsurls; //type: uint32
        ydk::YLeaf vpccfsurr; //type: uint32
        ydk::YLeaf vpccfscrlf; //type: uint32
        ydk::YLeaf vpccfsrls; //type: uint32
        ydk::YLeaf vpccfsrlr; //type: uint32
        ydk::YLeaf vpccfsrlf; //type: uint32
        ydk::YLeaf inviod; //type: uint32
        ydk::YLeaf stptcnr; //type: uint32
        ydk::YLeaf imapif; //type: uint32
        ydk::YLeaf mfreqr; //type: uint32
        ydk::YLeaf mfcmps; //type: uint32
        ydk::YLeaf mfdgcmps; //type: uint32
        ydk::YLeaf bufsnt; //type: uint32
        ydk::YLeaf bufackr; //type: uint32
        ydk::YLeaf vpcmismatch; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReportPolicyStatsList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList

        ydk::YList reportpolicystats_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList : public ydk::Entity
{
    public:
        ReportPolicyStatsList();
        ~ReportPolicyStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf qcount; //type: uint32
        ydk::YLeaf rpmtype; //type: uint32
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf acceptcount; //type: uint32
        ydk::YLeaf rejectcount; //type: uint32
        class QcountItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems> qcount_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems : public ydk::Entity
{
    public:
        QcountItems();
        ~QcountItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyQcntList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList

        ydk::YList policyqcnt_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList : public ydk::Entity
{
    public:
        PolicyQcntList();
        ~PolicyQcntList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems : public ydk::Entity
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

        class IgmpsnGroupRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList

        ydk::YList igmpsngrouprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList : public ydk::Entity
{
    public:
        IgmpsnGroupRecList();
        ~IgmpsnGroupRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf groupaddr; //type: string
        ydk::YLeaf sourceaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf sporttype; //type: string
        ydk::YLeaf gporttype; //type: string
        ydk::YLeaf rporttype; //type: string
        ydk::YLeaf rifname; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems : public ydk::Entity
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

        class McGrpRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList

        ydk::YList mcgrprec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList : public ydk::Entity
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
        ydk::YLeaf latreporter; //type: string
        ydk::YLeaf oldhostts; //type: string
        ydk::YLeaf reportts; //type: string
        ydk::YLeaf numsrc; //type: uint32
        class EpgItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems
        class RepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems> epg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems> rep_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems : public ydk::Entity
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

        class EpgRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList

        ydk::YList epgrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList : public ydk::Entity
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
        ydk::YLeaf mcastencap; //type: string
        class RepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems> rep_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems : public ydk::Entity
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

        class ReportRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList : public ydk::Entity
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
        class OifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
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

        class OIFRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
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
        ydk::YLeaf numgqmiss; //type: uint16
        ydk::YLeaf expirets; //type: string
        class HostItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
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

        class HostRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_40_ */

