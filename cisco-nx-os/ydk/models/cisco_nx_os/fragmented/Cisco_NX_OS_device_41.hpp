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


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
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
        ydk::YLeaf upts; //type: string
        ydk::YLeaf lastjoints; //type: string
        ydk::YLeaf nextexpiryts; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems : public ydk::Entity
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

        class ReportRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList

        ydk::YList reportrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList : public ydk::Entity
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
        class OifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems> oif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems : public ydk::Entity
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

        class OIFRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList

        ydk::YList oifrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList : public ydk::Entity
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
        class HostItems; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems> host_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems : public ydk::Entity
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

        class HostRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList

        ydk::YList hostrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList : public ydk::Entity
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
        ydk::YLeaf upts; //type: string
        ydk::YLeaf lastjoints; //type: string
        ydk::YLeaf nextexpiryts; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems : public ydk::Entity
{
    public:
        QuerierItems();
        ~QuerierItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QuerierRecList; //type: System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList

        ydk::YList querierrec_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems


class System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList : public ydk::Entity
{
    public:
        QuerierRecList();
        ~QuerierRecList();

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
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf lastmbrintvl; //type: uint16
        ydk::YLeaf ver; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf port; //type: string
        ydk::YLeaf exptime; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems::QuerierRecList


class System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf v1reprcvd; //type: uint32
        ydk::YLeaf v2reprcvd; //type: uint32
        ydk::YLeaf v2leavercvd; //type: uint32
        ydk::YLeaf v1queryrcvd; //type: uint32
        ydk::YLeaf v2queryrcvd; //type: uint32
        ydk::YLeaf v1repsupr; //type: uint32
        ydk::YLeaf v2repsupr; //type: uint32
        ydk::YLeaf v2leavesupr; //type: uint32
        ydk::YLeaf v1reporig; //type: uint32
        ydk::YLeaf v2reporig; //type: uint32
        ydk::YLeaf v2leaveorig; //type: uint32
        ydk::YLeaf v3reprcvd; //type: uint32
        ydk::YLeaf v3queryrcvd; //type: uint32
        ydk::YLeaf v3grprecsupr; //type: uint32
        ydk::YLeaf v3reporig; //type: uint32
        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf pktsrcvd; //type: uint32
        ydk::YLeaf pimhellorcvd; //type: uint32
        ydk::YLeaf invqueryrcvd; //type: uint32
        ydk::YLeaf invreprcvd; //type: uint32
        ydk::YLeaf vermismatchrcvd; //type: uint32
        ydk::YLeaf unknpktrcvd; //type: uint32
        ydk::YLeaf querypktsorig; //type: uint32
        ydk::YLeaf pktstorport; //type: uint32
        ydk::YLeaf vpcsyncsent; //type: uint32
        ydk::YLeaf vpcsyncrcvd; //type: uint32
        ydk::YLeaf vpcsyncfail; //type: uint32
        ydk::YLeaf mrdsyncsent; //type: uint32
        ydk::YLeaf mrdsyncrcvd; //type: uint32
        ydk::YLeaf mrdsyncfail; //type: uint32

}; // System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class StRtrIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList

        ydk::YList strtrif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf encap; //type: string
        class RtvrfMbrItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtvrfMbrItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems


class System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems::StRtrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpsnoopItems::InstItems::DomItems::RtrifItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RtrIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList

        ydk::YList rtrif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::RtrifItems


class System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf upts; //type: string
        ydk::YLeaf nextexpiryts; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::RtrifItems::RtrIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems : public ydk::Entity
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

        class VlanList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList

        ydk::YList vlan_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList : public ydk::Entity
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

        ydk::YLeaf vlanid; //type: string
        class CktepItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems
        class McgrpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems
        class IgmpsnbaseItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems
        class GTimersItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems
        class MrouterItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems
        class ProxyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems
        class QuerierpItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems
        class QuerierstItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems
        class ActrlItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems
        class RpolicyItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems> cktep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems> mcgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems> igmpsnbase_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems> gtimers_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems> mrouter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems> proxy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems> querierp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems> querierst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems> actrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems> rpolicy_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems : public ydk::Entity
{
    public:
        CktepItems();
        ~CktepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CktEpList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList : public ydk::Entity
{
    public:
        CktEpList();
        ~CktEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::CktepItems::CktEpList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems : public ydk::Entity
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

        class StMcGrpList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList

        ydk::YList stmcgrp_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList : public ydk::Entity
{
    public:
        StMcGrpList();
        ~StMcGrpList();

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
        class SrcItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems : public ydk::Entity
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

        class McSrcList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList

        ydk::YList mcsrc_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList : public ydk::Entity
{
    public:
        McSrcList();
        ~McSrcList();

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
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::SrcItems::McSrcList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::McgrpItems::StMcGrpList::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems : public ydk::Entity
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

        ydk::YLeaf llgrpsuppr; //type: boolean
        ydk::YLeaf reportsuppr; //type: boolean
        ydk::YLeaf v3reportsuppr; //type: boolean
        ydk::YLeaf exptracking; //type: boolean
        ydk::YLeaf igmpsnoop; //type: boolean
        ydk::YLeaf minver; //type: uint16
        ydk::YLeaf maxgrp; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::IgmpsnbaseItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems : public ydk::Entity
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

        ydk::YLeaf fastleave; //type: boolean
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf maxgqmiss; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::GTimersItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems : public ydk::Entity
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

        ydk::YLeaf vpcpeerlink; //type: boolean
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems
        class MifItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems> mif_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems : public ydk::Entity
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

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::MrouterItems::MifItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems : public ydk::Entity
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

        ydk::YLeaf maxresptime; //type: uint16

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ProxyItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierpItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems : public ydk::Entity
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
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf if_; //type: string
        ydk::YLeaf flags; //type: string

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::QuerierstItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems : public ydk::Entity
{
    public:
        ActrlItems();
        ~ActrlItems();

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
        ydk::YLeaf direction; //type: RtctrlRtCtrlDir
        ydk::YLeaf rtmap; //type: string
        class IfItems; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems> if_items;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems : public ydk::Entity
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

        class TgtIfList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList

        ydk::YList tgtif_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList : public ydk::Entity
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

}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::ActrlItems::IfItems::TgtIfList


class System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems : public ydk::Entity
{
    public:
        RpolicyItems();
        ~RpolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPolicyList; //type: System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems::RPolicyList

        ydk::YList rpolicy_list;
        
}; // System::IgmpsnoopItems::InstItems::DomItems::VlanItems::VlanList::RpolicyItems


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

        ydk::YLeaf intf; //type: string
        ydk::YLeaf vsi; //type: boolean

}; // System::IgmpsnoopItems::InstItems::DomItems::GlItems::MrouterItems::MifItems


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
        ydk::YLeaf pktsrcvd; //type: uint32
        ydk::YLeaf invpktsrcvd; //type: uint32
        ydk::YLeaf lpbkpktsrcvd; //type: uint32
        ydk::YLeaf pktsflooded; //type: uint32
        ydk::YLeaf mrdlpbkpktsrcvd; //type: uint32
        ydk::YLeaf novlandbpktsrcvd; //type: uint32
        ydk::YLeaf vpczmqpktssent; //type: uint32
        ydk::YLeaf vpczmqpktsrcvd; //type: uint32
        ydk::YLeaf vpczmqpktssentfail; //type: uint32
        ydk::YLeaf vpczmqpktsrcvdfail; //type: uint32
        ydk::YLeaf vpcpeerpktssent; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssentfail; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvdfail; //type: uint32

}; // System::IgmpsnoopItems::InstItems::InststatsItems


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
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::MacsecItems::InstItems::IfItems
        class PoliciesItems; //type: System::MacsecItems::InstItems::PoliciesItems
        class GlobalstatsItems; //type: System::MacsecItems::InstItems::GlobalstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::PoliciesItems> policies_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::GlobalstatsItems> globalstats_items;
        
}; // System::MacsecItems::InstItems


class System::MacsecItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::MacsecItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::MacsecItems::InstItems::IfItems


class System::MacsecItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf keychainname; //type: string
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf fallbackkeychainname; //type: string
        ydk::YLeaf sessionst; //type: MacsecSessionSt
        ydk::YLeaf iskeyserver; //type: MacsecIsKeyServer
        ydk::YLeaf keysvrprio; //type: uint8
        ydk::YLeaf ciphersuiteoper; //type: MacsecCipherSuite
        ydk::YLeaf confoffsetoper; //type: MacsecConfOffset
        ydk::YLeaf txsci; //type: uint64
        class CastatsItems; //type: System::MacsecItems::InstItems::IfItems::IfList::CastatsItems
        class IfstatsItems; //type: System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::IfItems::IfList::CastatsItems> castats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::MacsecItems::InstItems::IfItems::IfList


class System::MacsecItems::InstItems::IfItems::IfList::CastatsItems : public ydk::Entity
{
    public:
        CastatsItems();
        ~CastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf krekeys; //type: uint64
        ydk::YLeaf saksgen; //type: uint64
        ydk::YLeaf saksrekeyed; //type: uint64
        ydk::YLeaf saksrx; //type: uint64
        ydk::YLeaf sakresprx; //type: uint64
        ydk::YLeaf mkpdutx; //type: uint64
        ydk::YLeaf mkpdutxdistsak; //type: uint64
        ydk::YLeaf mkpdurx; //type: uint64
        ydk::YLeaf mkpdurxdistsak; //type: uint64
        ydk::YLeaf ickdervfail; //type: uint64
        ydk::YLeaf kekdervfail; //type: uint64
        ydk::YLeaf invalidpeercpbl; //type: uint64

}; // System::MacsecItems::InstItems::IfItems::IfList::CastatsItems


class System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf mkpdutxsucc; //type: uint64
        ydk::YLeaf mkpdutxpktbldfail; //type: uint64
        ydk::YLeaf mkpdunotxifdn; //type: uint64
        ydk::YLeaf mkpdunorxifdn; //type: uint64
        ydk::YLeaf mkpdurxcanotfnd; //type: uint64
        ydk::YLeaf mkpdurxerr; //type: uint64
        ydk::YLeaf mkpdurxsucc; //type: uint64
        ydk::YLeaf mkpduethermismatch; //type: uint64
        ydk::YLeaf mkpdutxfail; //type: uint64
        ydk::YLeaf invalidmkpdurx; //type: uint64
        ydk::YLeaf mkpdurxbadpeermn; //type: uint64
        ydk::YLeaf mkpdurxnrplistmn; //type: uint64
        ydk::YLeaf rxsakknmismatch; //type: uint64
        ydk::YLeaf rxsakrxnotset; //type: uint64
        ydk::YLeaf rxsakkeymimismatch; //type: uint64
        ydk::YLeaf rxsakannotinuse; //type: uint64
        ydk::YLeaf rxsakksrxtxnotset; //type: uint64
        ydk::YLeaf sakgenfail; //type: uint64
        ydk::YLeaf sakhashkeygenfail; //type: uint64
        ydk::YLeaf sakencryptfail; //type: uint64
        ydk::YLeaf sakdecryptfail; //type: uint64
        ydk::YLeaf macsecrxsainstallfail; //type: uint64
        ydk::YLeaf macsectxsainstallfail; //type: uint64

}; // System::MacsecItems::InstItems::IfItems::IfList::IfstatsItems


class System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::MacsecItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::MacsecItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MacsecItems::InstItems::PoliciesItems : public ydk::Entity
{
    public:
        PoliciesItems();
        ~PoliciesItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PolicyItems; //type: System::MacsecItems::InstItems::PoliciesItems::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems::InstItems::PoliciesItems::PolicyItems> policy_items;
        
}; // System::MacsecItems::InstItems::PoliciesItems


class System::MacsecItems::InstItems::PoliciesItems::PolicyItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PolicyList; //type: System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::MacsecItems::InstItems::PoliciesItems::PolicyItems


class System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList : public ydk::Entity
{
    public:
        PolicyList();
        ~PolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policyname; //type: string
        ydk::YLeaf keysvrprio; //type: uint8
        ydk::YLeaf confoffset; //type: MacsecConfOffset
        ydk::YLeaf secpolicy; //type: MacsecSecPolicy
        ydk::YLeaf replaywindow; //type: uint32
        ydk::YLeaf ciphersuite; //type: MacsecCipherSuite
        ydk::YLeaf sakexpirytime; //type: uint32

}; // System::MacsecItems::InstItems::PoliciesItems::PolicyItems::PolicyList


class System::MacsecItems::InstItems::GlobalstatsItems : public ydk::Entity
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

        ydk::YLeaf securedsess; //type: uint64
        ydk::YLeaf deletedsess; //type: uint64
        ydk::YLeaf katimeouts; //type: uint64
        ydk::YLeaf sakciphermismatchfail; //type: uint64
        ydk::YLeaf macsecrxinvalidckn; //type: uint64
        ydk::YLeaf macsectxpktbldfail; //type: uint64

}; // System::MacsecItems::InstItems::GlobalstatsItems


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
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf fwdmode; //type: IpmcsnoopFwdMode
        ydk::YLeaf numrtrif; //type: uint32
        ydk::YLeaf nummcgrp; //type: uint32
        ydk::YLeaf numsrcgrp; //type: uint32
        ydk::YLeaf grpflushts; //type: string
        ydk::YLeaf nextqueryts; //type: string
        ydk::YLeaf nextqueryexpts; //type: string
        ydk::YLeaf mrtrepgid; //type: uint32
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
        ydk::YLeaf latreporter; //type: string
        ydk::YLeaf oldhostts; //type: string
        ydk::YLeaf reportts; //type: string
        ydk::YLeaf numsrc; //type: uint32
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
        ydk::YLeaf mcastencap; //type: string
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
        ydk::YLeaf numgqmiss; //type: uint16
        ydk::YLeaf expirets; //type: string
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
        ydk::YLeaf upts; //type: string
        ydk::YLeaf lastjoints; //type: string
        ydk::YLeaf nextexpiryts; //type: string

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
        ydk::YLeaf numgqmiss; //type: uint16
        ydk::YLeaf expirets; //type: string
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
        ydk::YLeaf upts; //type: string
        ydk::YLeaf lastjoints; //type: string
        ydk::YLeaf nextexpiryts; //type: string

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

        ydk::YLeaf v1reprcvd; //type: uint32
        ydk::YLeaf v1leavercvd; //type: uint32
        ydk::YLeaf v1queryrcvd; //type: uint32
        ydk::YLeaf v1repsupr; //type: uint32
        ydk::YLeaf v1leavesupr; //type: uint32
        ydk::YLeaf v1reporig; //type: uint32
        ydk::YLeaf v1leaveorig; //type: uint32
        ydk::YLeaf v2reprcvd; //type: uint32
        ydk::YLeaf v2queryrcvd; //type: uint32
        ydk::YLeaf v2grprecsupr; //type: uint32
        ydk::YLeaf v2reporig; //type: uint32
        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf pktsrcvd; //type: uint32
        ydk::YLeaf pimhellorcvd; //type: uint32
        ydk::YLeaf invqueryrcvd; //type: uint32
        ydk::YLeaf invreprcvd; //type: uint32
        ydk::YLeaf vermismatchrcvd; //type: uint32
        ydk::YLeaf unknpktrcvd; //type: uint32
        ydk::YLeaf querypktsorig; //type: uint32
        ydk::YLeaf pktstorport; //type: uint32
        ydk::YLeaf vpcsyncsent; //type: uint32
        ydk::YLeaf vpcsyncrcvd; //type: uint32
        ydk::YLeaf vpcsyncfail; //type: uint32
        ydk::YLeaf mrdsyncsent; //type: uint32
        ydk::YLeaf mrdsyncrcvd; //type: uint32
        ydk::YLeaf mrdsyncfail; //type: uint32

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
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf upts; //type: string
        ydk::YLeaf nextexpiryts; //type: string

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
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf if_; //type: string
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

        ydk::YLeaf totnummcgrp; //type: uint32
        ydk::YLeaf pktsrcvd; //type: uint32
        ydk::YLeaf invpktsrcvd; //type: uint32
        ydk::YLeaf lpbkpktsrcvd; //type: uint32
        ydk::YLeaf pktsflooded; //type: uint32
        ydk::YLeaf mrdlpbkpktsrcvd; //type: uint32
        ydk::YLeaf novlandbpktsrcvd; //type: uint32
        ydk::YLeaf vpczmqpktssent; //type: uint32
        ydk::YLeaf vpczmqpktsrcvd; //type: uint32
        ydk::YLeaf vpczmqpktssentfail; //type: uint32
        ydk::YLeaf vpczmqpktsrcvdfail; //type: uint32
        ydk::YLeaf vpcpeerpktssent; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvd; //type: uint32
        ydk::YLeaf vpcpeerpktssentfail; //type: uint32
        ydk::YLeaf vpcpeerpktsrcvdfail; //type: uint32

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
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf opererr; //type: string
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


class System::LabeltableItems::LblItems::LabelsList::FecPerCEItems : public ydk::Entity
{
    public:
        FecPerCEItems();
        ~FecPerCEItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthopset; //type: uint32
        ydk::YLeaf addressfamily; //type: string
        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string

}; // System::LabeltableItems::LblItems::LabelsList::FecPerCEItems


class System::LabeltableItems::LblItems::LabelsList::FecReservedItems : public ydk::Entity
{
    public:
        FecReservedItems();
        ~FecReservedItems();

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

}; // System::LabeltableItems::LblItems::LabelsList::FecReservedItems


class System::LabeltableItems::LblItems::LabelsList::FecDeaggItems : public ydk::Entity
{
    public:
        FecDeaggItems();
        ~FecDeaggItems();

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

}; // System::LabeltableItems::LblItems::LabelsList::FecDeaggItems


class System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems : public ydk::Entity
{
    public:
        FecAdjSIDItems();
        ~FecAdjSIDItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf appid; //type: uint32
        ydk::YLeaf nexthop; //type: string
        ydk::YLeaf fectype; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf tableid; //type: string

}; // System::LabeltableItems::LblItems::LabelsList::FecAdjSIDItems


class System::LabeltableItems::LblItems::LabelsList::NhlfeItems : public ydk::Entity
{
    public:
        NhlfeItems();
        ~NhlfeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhlfeList; //type: System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList

        ydk::YList nhlfe_list;
        
}; // System::LabeltableItems::LblItems::LabelsList::NhlfeItems


class System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList : public ydk::Entity
{
    public:
        NhlfeList();
        ~NhlfeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf outlabel; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf outlabelbytestats; //type: uint64
        ydk::YLeaf outlabelpacketstats; //type: uint64

}; // System::LabeltableItems::LblItems::LabelsList::NhlfeItems::NhlfeList


class System::MribItems : public ydk::Entity
{
    public:
        MribItems();
        ~MribItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::MribItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems> inst_items;
        
}; // System::MribItems


class System::MribItems::InstItems : public ydk::Entity
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

        class DomItems; //type: System::MribItems::InstItems::DomItems
        class RouteDbItems; //type: System::MribItems::InstItems::RouteDbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems::InstItems::RouteDbItems> routedb_items;
        
}; // System::MribItems::InstItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_41_ */

