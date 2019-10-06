#ifndef _CISCO_NX_OS_DEVICE_20_
#define _CISCO_NX_OS_DEVICE_20_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_19.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems : public ydk::Entity
{
    public:
        TlvRecItems();
        ~TlvRecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList

        ydk::YList tlvrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList : public ydk::Entity
{
    public:
        TlvRecList();
        ~TlvRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf value_; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems : public ydk::Entity
{
    public:
        IprecItems();
        ~IprecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList

        ydk::YList iprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList : public ydk::Entity
{
    public:
        IpRecList();
        ~IpRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList : public ydk::Entity
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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        class RsnhAttItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems> rsnhatt_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems : public ydk::Entity
{
    public:
        RsnhAttItems();
        ~RsnhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsNhAttList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList

        ydk::YList rsnhatt_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList : public ydk::Entity
{
    public:
        RsNhAttList();
        ~RsNhAttList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems : public ydk::Entity
{
    public:
        DtepItems();
        ~DtepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DTEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList

        ydk::YList dtep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList : public ydk::Entity
{
    public:
        DTEpList();
        ~DTEpList();

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
        ydk::YLeaf encapt; //type: TunnelEncapT
        ydk::YLeaf type; //type: string
        ydk::YLeaf role; //type: TopNodeRole

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems : public ydk::Entity
{
    public:
        LspgenItems();
        ~LspgenItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf secintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems : public ydk::Entity
{
    public:
        SpfcompItems();
        ~SpfcompItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf secintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems : public ydk::Entity
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

        class DomAfList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisAfT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mttype; //type: IsisTopoT
        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf definforig; //type: string
        ydk::YLeaf definforigrtmap; //type: string
        ydk::YLeaf enablebfd; //type: boolean
        ydk::YLeaf tblmap; //type: string
        ydk::YLeaf tblmapfltr; //type: IsisAdminSt
        ydk::YLeaf rtridipaddr; //type: string
        ydk::YLeaf rtridif; //type: string
        ydk::YLeaf srmpls; //type: boolean
        ydk::YLeaf name; //type: string
        class DistributeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems
        class AdvertiseintItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems
        class InterleakItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems
        class LeakctrlItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems
        class RtsumItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems> distribute_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems> advertiseint_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems> leakctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems> rtsum_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems : public ydk::Entity
{
    public:
        DistributeItems();
        ~DistributeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistributeList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList

        ydk::YList distribute_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: IsisLvlT
        ydk::YLeaf destination; //type: IsisLvlT
        ydk::YLeaf all; //type: boolean
        ydk::YLeaf rmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DistributeItems::DistributeList


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems : public ydk::Entity
{
    public:
        AdvertiseintItems();
        ~AdvertiseintItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdvertiseIntList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList

        ydk::YList advertiseint_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList : public ydk::Entity
{
    public:
        AdvertiseIntList();
        ~AdvertiseIntList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advtif; //type: string
        ydk::YLeaf advtlevel; //type: IsisAdvtLvl

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::AdvertiseintItems::AdvertiseIntList


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: RtleakCtrl
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf retries; //type: uint16
        ydk::YLeaf duration; //type: uint16

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::LeakctrlItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems : public ydk::Entity
{
    public:
        RtsumItems();
        ~RtsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSumList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList

        ydk::YList rtsum_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList : public ydk::Entity
{
    public:
        RtSumList();
        ~RtSumList();

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
        ydk::YLeaf sumlevel; //type: IsisSumLvl
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::RtsumItems::RtSumList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems : public ydk::Entity
{
    public:
        DistrlsItems();
        ~DistrlsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: boolean
        ydk::YLeaf instid; //type: uint32
        ydk::YLeaf level; //type: IsisDistrLvl
        ydk::YLeaf throt; //type: uint16

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems : public ydk::Entity
{
    public:
        FmtreeItems();
        ~FmtreeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FmcastTreeList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList

        ydk::YList fmcasttree_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList : public ydk::Entity
{
    public:
        FmcastTreeList();
        ~FmcastTreeList();

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
        ydk::YLeaf operst; //type: FmcastOperSt
        ydk::YLeaf name; //type: string
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList : public ydk::Entity
{
    public:
        NodeIdRecList();
        ~NodeIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf grt3intvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metriclvl1; //type: uint32
        ydk::YLeaf metriclvl2; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheck; //type: boolean
        ydk::YLeaf networktypep2p; //type: IsisNetworkTypeP2PSt
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf v4bfd; //type: IsisBfdT
        ydk::YLeaf v6bfd; //type: IsisBfdT
        ydk::YLeaf passive; //type: IsisPassiveIntfT
        ydk::YLeaf hellopad; //type: IsisHelloPadT
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellointvllvl1; //type: uint16
        ydk::YLeaf hellointvllvl2; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf hellomultlvl1; //type: uint16
        ydk::YLeaf hellomultlvl2; //type: uint16
        ydk::YLeaf prioritylvl1; //type: uint8
        ydk::YLeaf prioritylvl2; //type: uint8
        ydk::YLeaf mt2metriclvl1; //type: uint32
        ydk::YLeaf mt2metriclvl2; //type: uint32
        ydk::YLeaf csnpintvllvl1; //type: uint16
        ydk::YLeaf csnpintvllvl2; //type: uint16
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf mtuchecklvl1; //type: boolean
        ydk::YLeaf mtuchecklvl2; //type: boolean
        ydk::YLeaf mtucheck; //type: boolean
        ydk::YLeaf nflagclear; //type: boolean
        class AdjItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class MeshgrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems
        class LvlItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems
        class TrafficItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems
        class RtvrfMbrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems> meshgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems> traffic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf sysid; //type: string
        ydk::YLeaf operst; //type: IsisAdjOperSt
        ydk::YLeaf name; //type: string
        class AddrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems> addr_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems : public ydk::Entity
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

        class PeerIpAddrList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList

        ydk::YList peeripaddr_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList : public ydk::Entity
{
    public:
        PeerIpAddrList();
        ~PeerIpAddrList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems : public ydk::Entity
{
    public:
        LvlItems();
        ~LvlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfLvlList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList

        ydk::YList iflvl_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList : public ydk::Entity
{
    public:
        IfLvlList();
        ~IfLvlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf mt0metriclvl1; //type: uint32
        ydk::YLeaf mt0metriclvl2; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems : public ydk::Entity
{
    public:
        TrafficItems();
        ~TrafficItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems


class System::IsisItems::InstItems::InstList::EvthstryItems : public ydk::Entity
{
    public:
        EvthstryItems();
        ~EvthstryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvtHstryList; //type: System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList

        ydk::YList evthstry_list;
        
}; // System::IsisItems::InstItems::InstList::EvthstryItems


class System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList : public ydk::Entity
{
    public:
        EvtHstryList();
        ~EvtHstryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisEhType
        ydk::YLeaf size; //type: uint32

}; // System::IsisItems::InstItems::InstList::EvthstryItems::EvtHstryList


class System::IsisItems::SyslogItems : public ydk::Entity
{
    public:
        SyslogItems();
        ~SyslogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loglevel; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::IsisItems::SyslogItems


class System::IsisItems::IfItems : public ydk::Entity
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

        class InternalIfList; //type: System::IsisItems::IfItems::InternalIfList

        ydk::YList internalif_list;
        
}; // System::IsisItems::IfItems


class System::IsisItems::IfItems::InternalIfList : public ydk::Entity
{
    public:
        InternalIfList();
        ~InternalIfList();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metriclvl1; //type: uint32
        ydk::YLeaf metriclvl2; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheck; //type: boolean
        ydk::YLeaf networktypep2p; //type: IsisNetworkTypeP2PSt
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf v4bfd; //type: IsisBfdT
        ydk::YLeaf v6bfd; //type: IsisBfdT
        ydk::YLeaf passive; //type: IsisPassiveIntfT
        ydk::YLeaf hellopad; //type: IsisHelloPadT
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellointvllvl1; //type: uint16
        ydk::YLeaf hellointvllvl2; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf hellomultlvl1; //type: uint16
        ydk::YLeaf hellomultlvl2; //type: uint16
        ydk::YLeaf prioritylvl1; //type: uint8
        ydk::YLeaf prioritylvl2; //type: uint8
        ydk::YLeaf mt2metriclvl1; //type: uint32
        ydk::YLeaf mt2metriclvl2; //type: uint32
        ydk::YLeaf csnpintvllvl1; //type: uint16
        ydk::YLeaf csnpintvllvl2; //type: uint16
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf mtuchecklvl1; //type: boolean
        ydk::YLeaf mtuchecklvl2; //type: boolean
        ydk::YLeaf mtucheck; //type: boolean
        ydk::YLeaf nflagclear; //type: boolean
        ydk::YLeaf instance; //type: string
        ydk::YLeaf dom; //type: string
        class MeshgrpItems; //type: System::IsisItems::IfItems::InternalIfList::MeshgrpItems
        class LvlItems; //type: System::IsisItems::IfItems::InternalIfList::LvlItems
        class TrafficItems; //type: System::IsisItems::IfItems::InternalIfList::TrafficItems
        class RtvrfMbrItems; //type: System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::MeshgrpItems> meshgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::TrafficItems> traffic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IsisItems::IfItems::InternalIfList


class System::IsisItems::IfItems::InternalIfList::MeshgrpItems : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::IfItems::InternalIfList::MeshgrpItems


class System::IsisItems::IfItems::InternalIfList::LvlItems : public ydk::Entity
{
    public:
        LvlItems();
        ~LvlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfLvlList; //type: System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList

        ydk::YList iflvl_list;
        
}; // System::IsisItems::IfItems::InternalIfList::LvlItems


class System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList : public ydk::Entity
{
    public:
        IfLvlList();
        ~IfLvlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf mt0metriclvl1; //type: uint32
        ydk::YLeaf mt0metriclvl2; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList


class System::IsisItems::IfItems::InternalIfList::TrafficItems : public ydk::Entity
{
    public:
        TrafficItems();
        ~TrafficItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::IsisItems::IfItems::InternalIfList::TrafficItems


class System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems


class System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems


class System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ItdItems : public ydk::Entity
{
    public:
        ItdItems();
        ~ItdItems();

        bool has_data() const override;
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
        class InstItems; //type: System::ItdItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems> inst_items;
        
}; // System::ItdItems


class System::ItdItems::InstItems : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class DevgrpItems; //type: System::ItdItems::InstItems::DevgrpItems
        class ServiceItems; //type: System::ItdItems::InstItems::ServiceItems
        class SessiondevgrpItems; //type: System::ItdItems::InstItems::SessiondevgrpItems
        class RefreshaclItems; //type: System::ItdItems::InstItems::RefreshaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems> devgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::ServiceItems> service_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::SessiondevgrpItems> sessiondevgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::RefreshaclItems> refreshacl_items;
        
}; // System::ItdItems::InstItems


class System::ItdItems::InstItems::DevgrpItems : public ydk::Entity
{
    public:
        DevgrpItems();
        ~DevgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DeviceGroupList; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList

        ydk::YList devicegroup_list;
        
}; // System::ItdItems::InstItems::DevgrpItems


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList : public ydk::Entity
{
    public:
        DeviceGroupList();
        ~DeviceGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dgname; //type: string
        ydk::YLeaf propfaultbitmap; //type: string
        class Nodev4Items; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items
        class Nodev6Items; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items
        class ProbeItems; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items> nodev4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items> nodev6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems> probe_items;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items : public ydk::Entity
{
    public:
        Nodev4Items();
        ~Nodev4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nodev4List; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List

        ydk::YList nodev4_list;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List : public ydk::Entity
{
    public:
        Nodev4List();
        ~Nodev4List();

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
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf mode; //type: ItdNodeModeType
        ydk::YLeaf propfaultbitmap; //type: string
        class Stbynodev4Items; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items
        class ProbeItems; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items> stbynodev4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems> probe_items;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items : public ydk::Entity
{
    public:
        Stbynodev4Items();
        ~Stbynodev4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StandbyNodev4List; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List

        ydk::YList standbynodev4_list;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List : public ydk::Entity
{
    public:
        StandbyNodev4List();
        ~StandbyNodev4List();

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
        ydk::YLeaf propfaultbitmap; //type: string
        class ProbeItems; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems> probe_items;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems : public ydk::Entity
{
    public:
        ProbeItems();
        ~ProbeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf retrydowncount; //type: uint32
        ydk::YLeaf retryupcount; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dnshost; //type: string
        ydk::YLeaf probeip; //type: string
        ydk::YLeaf httpgetstr; //type: string
        ydk::YLeaf ctrlstatusenable; //type: ItdCtrlType
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::Stbynodev4Items::StandbyNodev4List::ProbeItems


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems : public ydk::Entity
{
    public:
        ProbeItems();
        ~ProbeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf retrydowncount; //type: uint32
        ydk::YLeaf retryupcount; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dnshost; //type: string
        ydk::YLeaf probeip; //type: string
        ydk::YLeaf httpgetstr; //type: string
        ydk::YLeaf ctrlstatusenable; //type: ItdCtrlType
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev4Items::Nodev4List::ProbeItems


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items : public ydk::Entity
{
    public:
        Nodev6Items();
        ~Nodev6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nodev6List; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List

        ydk::YList nodev6_list;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List : public ydk::Entity
{
    public:
        Nodev6List();
        ~Nodev6List();

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
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf mode; //type: ItdNodeModeType
        ydk::YLeaf propfaultbitmap; //type: string
        class Stbynodev6Items; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items
        class ProbeItems; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items> stbynodev6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems> probe_items;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items : public ydk::Entity
{
    public:
        Stbynodev6Items();
        ~Stbynodev6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StandbyNodev6List; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List

        ydk::YList standbynodev6_list;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List : public ydk::Entity
{
    public:
        StandbyNodev6List();
        ~StandbyNodev6List();

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
        ydk::YLeaf propfaultbitmap; //type: string
        class ProbeItems; //type: System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems> probe_items;
        
}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems : public ydk::Entity
{
    public:
        ProbeItems();
        ~ProbeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf retrydowncount; //type: uint32
        ydk::YLeaf retryupcount; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dnshost; //type: string
        ydk::YLeaf probeip; //type: string
        ydk::YLeaf httpgetstr; //type: string
        ydk::YLeaf ctrlstatusenable; //type: ItdCtrlType
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::Stbynodev6Items::StandbyNodev6List::ProbeItems


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems : public ydk::Entity
{
    public:
        ProbeItems();
        ~ProbeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf retrydowncount; //type: uint32
        ydk::YLeaf retryupcount; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dnshost; //type: string
        ydk::YLeaf probeip; //type: string
        ydk::YLeaf httpgetstr; //type: string
        ydk::YLeaf ctrlstatusenable; //type: ItdCtrlType
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::Nodev6Items::Nodev6List::ProbeItems


class System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems : public ydk::Entity
{
    public:
        ProbeItems();
        ~ProbeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf retrydowncount; //type: uint32
        ydk::YLeaf retryupcount; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dnshost; //type: string
        ydk::YLeaf probeip; //type: string
        ydk::YLeaf httpgetstr; //type: string
        ydk::YLeaf ctrlstatusenable; //type: ItdCtrlType
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::DevgrpItems::DeviceGroupList::ProbeItems


class System::ItdItems::InstItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ServiceList; //type: System::ItdItems::InstItems::ServiceItems::ServiceList

        ydk::YList service_list;
        
}; // System::ItdItems::InstItems::ServiceItems


class System::ItdItems::InstItems::ServiceItems::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: ItdAdminSt
        ydk::YLeaf defaultdevgroup; //type: string
        ydk::YLeaf excludeacl; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf failactionmode; //type: ItdFailactionType
        ydk::YLeaf lbmethod; //type: ItdLBMethod
        ydk::YLeaf lbprotocol; //type: ItdProtocolType
        ydk::YLeaf rangex; //type: uint16
        ydk::YLeaf rangey; //type: uint16
        ydk::YLeaf bucket; //type: uint32
        ydk::YLeaf maskposition; //type: uint32
        ydk::YLeaf natdestination; //type: ItdCtrlType
        ydk::YLeaf peerlocalservicename; //type: string
        ydk::YLeaf sourceintf; //type: string
        ydk::YLeaf propfaultbitmap; //type: string
        class IfItems; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems
        class AclItems; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems
        class Vipv4Items; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items
        class Vipv6Items; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items> vipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items> vipv6_items;
        
}; // System::ItdItems::InstItems::ServiceItems::ServiceList


class System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems : public ydk::Entity
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

        class IngressIfList; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList

        ydk::YList ingressif_list;
        
}; // System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems


class System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList : public ydk::Entity
{
    public:
        IngressIfList();
        ~IngressIfList();

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
        ydk::YLeaf propfaultbitmap; //type: string

}; // System::ItdItems::InstItems::ServiceItems::ServiceList::IfItems::IngressIfList


class System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems : public ydk::Entity
{
    public:
        AclItems();
        ~AclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccesslistList; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList

        ydk::YList accesslist_list;
        
}; // System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems


class System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList : public ydk::Entity
{
    public:
        AccesslistList();
        ~AccesslistList();

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
        ydk::YLeaf devicegroup; //type: string
        ydk::YLeaf isipv6; //type: boolean

}; // System::ItdItems::InstItems::ServiceItems::ServiceList::AclItems::AccesslistList


class System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items : public ydk::Entity
{
    public:
        Vipv4Items();
        ~Vipv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualIPv4List; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List

        ydk::YList virtualipv4_list;
        
}; // System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items


class System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List : public ydk::Entity
{
    public:
        VirtualIPv4List();
        ~VirtualIPv4List();

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
        ydk::YLeaf subnet; //type: string
        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf advertise; //type: boolean
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf devicegroup; //type: string

}; // System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv4Items::VirtualIPv4List


class System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items : public ydk::Entity
{
    public:
        Vipv6Items();
        ~Vipv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualIPv6List; //type: System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List

        ydk::YList virtualipv6_list;
        
}; // System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items


class System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List : public ydk::Entity
{
    public:
        VirtualIPv6List();
        ~VirtualIPv6List();

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
        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf protocol; //type: ItdProtocolType
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf advertise; //type: boolean
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf devicegroup; //type: string

}; // System::ItdItems::InstItems::ServiceItems::ServiceList::Vipv6Items::VirtualIPv6List


class System::ItdItems::InstItems::SessiondevgrpItems : public ydk::Entity
{
    public:
        SessiondevgrpItems();
        ~SessiondevgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionDevGrpList; //type: System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList

        ydk::YList sessiondevgrp_list;
        
}; // System::ItdItems::InstItems::SessiondevgrpItems


class System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList : public ydk::Entity
{
    public:
        SessionDevGrpList();
        ~SessionDevGrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf devgroupname; //type: string
        ydk::YLeaf sessaction; //type: ItdSessActionType
        ydk::YLeaf actionset; //type: boolean
        class Nodev4Items; //type: System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items
        class Nodev6Items; //type: System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items> nodev4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items> nodev6_items;
        
}; // System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList


class System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items : public ydk::Entity
{
    public:
        Nodev4Items();
        ~Nodev4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessNodev4List; //type: System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List

        ydk::YList sessnodev4_list;
        
}; // System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items


class System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List : public ydk::Entity
{
    public:
        SessNodev4List();
        ~SessNodev4List();

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
        ydk::YLeaf action; //type: ItdSessNodeActionType

}; // System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev4Items::SessNodev4List


class System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items : public ydk::Entity
{
    public:
        Nodev6Items();
        ~Nodev6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessNodev6List; //type: System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List

        ydk::YList sessnodev6_list;
        
}; // System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items


class System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List : public ydk::Entity
{
    public:
        SessNodev6List();
        ~SessNodev6List();

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
        ydk::YLeaf action; //type: ItdSessNodeActionType

}; // System::ItdItems::InstItems::SessiondevgrpItems::SessionDevGrpList::Nodev6Items::SessNodev6List


class System::ItdItems::InstItems::RefreshaclItems : public ydk::Entity
{
    public:
        RefreshaclItems();
        ~RefreshaclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AclActionList; //type: System::ItdItems::InstItems::RefreshaclItems::AclActionList

        ydk::YList aclaction_list;
        
}; // System::ItdItems::InstItems::RefreshaclItems


class System::ItdItems::InstItems::RefreshaclItems::AclActionList : public ydk::Entity
{
    public:
        AclActionList();
        ~AclActionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aclname; //type: string
        ydk::YLeaf refreshset; //type: boolean

}; // System::ItdItems::InstItems::RefreshaclItems::AclActionList


class System::LacpItems : public ydk::Entity
{
    public:
        LacpItems();
        ~LacpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::LacpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems> inst_items;
        
}; // System::LacpItems


class System::LacpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf adminprio; //type: uint16
        ydk::YLeaf adminsysmac; //type: string
        ydk::YLeaf adminrole; //type: LacpSysRole
        ydk::YLeaf lacpctrl; //type: string
        ydk::YLeaf operprio; //type: uint16
        ydk::YLeaf sysmac; //type: string
        ydk::YLeaf operrole; //type: LacpSysRole
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::LacpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems::IfItems> if_items;
        
}; // System::LacpItems::InstItems


class System::LacpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::LacpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::LacpItems::InstItems::IfItems


class System::LacpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf prio; //type: uint16
        ydk::YLeaf txrate; //type: LacpTxRate
        ydk::YLeaf activityflags; //type: string
        ydk::YLeaf lastactive; //type: one of uint64, string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf operprio; //type: uint16
        ydk::YLeaf key; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class AdjItems; //type: System::LacpItems::InstItems::IfItems::IfList::AdjItems
        class IfstatsItems; //type: System::LacpItems::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::LacpItems::InstItems::IfItems::IfList


class System::LacpItems::InstItems::IfItems::IfList::AdjItems : public ydk::Entity
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

        ydk::YLeaf sysprio; //type: uint16
        ydk::YLeaf sysid; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf portprio; //type: uint16
        ydk::YLeaf activityflags; //type: string
        ydk::YLeaf key; //type: uint16
        ydk::YLeaf name; //type: string

}; // System::LacpItems::InstItems::IfItems::IfList::AdjItems


class System::LacpItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf pdusent; //type: uint64
        ydk::YLeaf pdurcvd; //type: uint64
        ydk::YLeaf markersent; //type: uint64
        ydk::YLeaf markerrcvd; //type: uint64
        ydk::YLeaf markerrspsent; //type: uint64
        ydk::YLeaf markerrsprcvd; //type: uint64
        ydk::YLeaf errpktrcvd; //type: uint64
        ydk::YLeaf pdutimeoutcount; //type: uint64
        ydk::YLeaf flapcount; //type: uint64

}; // System::LacpItems::InstItems::IfItems::IfList::IfstatsItems


class System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::LacpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::LacpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MgmtItems : public ydk::Entity
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

        class MgmtIfList; //type: System::MgmtItems::MgmtIfList

        ydk::YList mgmtif_list;
        
}; // System::MgmtItems


class System::MgmtItems::MgmtIfList : public ydk::Entity
{
    public:
        MgmtIfList();
        ~MgmtIfList();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        class MgmtItems_; //type: System::MgmtItems::MgmtIfList::MgmtItems_
        class PortcapItems; //type: System::MgmtItems::MgmtIfList::PortcapItems
        class RtrtdMgmtConfItems; //type: System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems
        class RtvrfMbrItems; //type: System::MgmtItems::MgmtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::MgmtItems::MgmtIfList::RtnwPathToIfItems
        class DbgIfInItems; //type: System::MgmtItems::MgmtIfList::DbgIfInItems
        class DbgIfOutItems; //type: System::MgmtItems::MgmtIfList::DbgIfOutItems
        class DbgIpInItems; //type: System::MgmtItems::MgmtIfList::DbgIpInItems
        class DbgDot1dItems; //type: System::MgmtItems::MgmtIfList::DbgDot1dItems
        class DbgEtherStatsItems; //type: System::MgmtItems::MgmtIfList::DbgEtherStatsItems
        class DbgDot3StatsItems; //type: System::MgmtItems::MgmtIfList::DbgDot3StatsItems
        class DbgIfHCInItems; //type: System::MgmtItems::MgmtIfList::DbgIfHCInItems
        class DbgIfHCOutItems; //type: System::MgmtItems::MgmtIfList::DbgIfHCOutItems
        class DbgIpv6IfStatsItems; //type: System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems
        class DbgIfStormItems; //type: System::MgmtItems::MgmtIfList::DbgIfStormItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::MgmtItems_> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::PortcapItems> portcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems> rtrtdmgmtconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIfInItems> dbgifin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIfOutItems> dbgifout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIpInItems> dbgipin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgDot1dItems> dbgdot1d_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgEtherStatsItems> dbgetherstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgDot3StatsItems> dbgdot3stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIfHCInItems> dbgifhcin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIfHCOutItems> dbgifhcout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems> dbgipv6ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems::MgmtIfList::DbgIfStormItems> dbgifstorm_items;
        
}; // System::MgmtItems::MgmtIfList


class System::MgmtItems::MgmtIfList::MgmtItems_ : public ydk::Entity
{
    public:
        MgmtItems_();
        ~MgmtItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf operspeed; //type: L1Speed
        ydk::YLeaf operduplex; //type: L1Duplex
        ydk::YLeaf operphylayer; //type: L1PhyLayer
        ydk::YLeaf backplanemac; //type: string
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf portinitevalflag; //type: uint8
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf lastlinkstchg; //type: one of uint64, string

}; // System::MgmtItems::MgmtIfList::MgmtItems_


class System::MgmtItems::MgmtIfList::PortcapItems : public ydk::Entity
{
    public:
        PortcapItems();
        ~PortcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf portcap; //type: uint32

}; // System::MgmtItems::MgmtIfList::PortcapItems


class System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems : public ydk::Entity
{
    public:
        RtrtdMgmtConfItems();
        ~RtrtdMgmtConfItems();

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

}; // System::MgmtItems::MgmtIfList::RtrtdMgmtConfItems


class System::MgmtItems::MgmtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::MgmtItems::MgmtIfList::RtvrfMbrItems


class System::MgmtItems::MgmtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::MgmtItems::MgmtIfList::RtnwPathToIfItems


class System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::MgmtItems::MgmtIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MgmtItems::MgmtIfList::DbgIfInItems : public ydk::Entity
{
    public:
        DbgIfInItems();
        ~DbgIfInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf unknownprotos; //type: uint64
        ydk::YLeaf unknownetype; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf nobuffer; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIfInItems


class System::MgmtItems::MgmtIfList::DbgIfOutItems : public ydk::Entity
{
    public:
        DbgIfOutItems();
        ~DbgIfOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf nucastpkts; //type: uint64
        ydk::YLeaf discards; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf qlen; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf rateinterval; //type: uint32
        ydk::YLeaf octetrate; //type: uint64
        ydk::YLeaf packetrate; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIfOutItems


class System::MgmtItems::MgmtIfList::DbgIpInItems : public ydk::Entity
{
    public:
        DbgIpInItems();
        ~DbgIpInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receives; //type: uint64
        ydk::YLeaf hdrerrors; //type: uint64
        ydk::YLeaf forwdatagrams; //type: uint64
        ydk::YLeaf discards; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIpInItems


class System::MgmtItems::MgmtIfList::DbgDot1dItems : public ydk::Entity
{
    public:
        DbgDot1dItems();
        ~DbgDot1dItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf baseportdelayexceededdiscards; //type: uint64
        ydk::YLeaf baseportmtuexceededdiscards; //type: uint64
        ydk::YLeaf tpportinframes; //type: uint64
        ydk::YLeaf tpportoutframes; //type: uint64
        ydk::YLeaf portindiscards; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgDot1dItems


class System::MgmtItems::MgmtIfList::DbgEtherStatsItems : public ydk::Entity
{
    public:
        DbgEtherStatsItems();
        ~DbgEtherStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropevents; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64
        ydk::YLeaf undersizepkts; //type: uint64
        ydk::YLeaf giantpkts; //type: uint64
        ydk::YLeaf stormsupressedpkts; //type: uint64
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
        ydk::YLeaf pkts1519to1548octets; //type: uint64
        ydk::YLeaf rxpkts64octets; //type: uint64
        ydk::YLeaf txpkts64octets; //type: uint64
        ydk::YLeaf rxpkts65to127octets; //type: uint64
        ydk::YLeaf txpkts65to127octets; //type: uint64
        ydk::YLeaf rxpkts128to255octets; //type: uint64
        ydk::YLeaf txpkts128to255octets; //type: uint64
        ydk::YLeaf rxpkts256to511octets; //type: uint64
        ydk::YLeaf txpkts256to511octets; //type: uint64
        ydk::YLeaf rxpkts512to1023octets; //type: uint64
        ydk::YLeaf txpkts512to1023octets; //type: uint64
        ydk::YLeaf rxpkts1024to1518octets; //type: uint64
        ydk::YLeaf txpkts1024to1518octets; //type: uint64
        ydk::YLeaf rxpkts1519to1548octets; //type: uint64
        ydk::YLeaf txpkts1519to1548octets; //type: uint64
        ydk::YLeaf oversizepkts; //type: uint64
        ydk::YLeaf jabbers; //type: uint64
        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf pkts; //type: uint64
        ydk::YLeaf collisions; //type: uint64
        ydk::YLeaf crcalignerrors; //type: uint64
        ydk::YLeaf txnoerrors; //type: uint64
        ydk::YLeaf rxnoerrors; //type: uint64
        ydk::YLeaf rxoversizepkts; //type: uint64
        ydk::YLeaf txoversizepkts; //type: uint64
        ydk::YLeaf overrun; //type: uint64
        ydk::YLeaf underrun; //type: uint64
        ydk::YLeaf ignored; //type: uint64
        ydk::YLeaf watchdog; //type: uint64
        ydk::YLeaf ifdowndrop; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgEtherStatsItems


class System::MgmtItems::MgmtIfList::DbgDot3StatsItems : public ydk::Entity
{
    public:
        DbgDot3StatsItems();
        ~DbgDot3StatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alignmenterrors; //type: uint64
        ydk::YLeaf fcserrors; //type: uint64
        ydk::YLeaf singlecollisionframes; //type: uint64
        ydk::YLeaf multiplecollisionframes; //type: uint64
        ydk::YLeaf sqettesterrors; //type: uint64
        ydk::YLeaf deferredtransmissions; //type: uint64
        ydk::YLeaf latecollisions; //type: uint64
        ydk::YLeaf excessivecollisions; //type: uint64
        ydk::YLeaf internalmactransmiterrors; //type: uint64
        ydk::YLeaf carriersenseerrors; //type: uint64
        ydk::YLeaf frametoolongs; //type: uint64
        ydk::YLeaf internalmacreceiveerrors; //type: uint64
        ydk::YLeaf symbolerrors; //type: uint64
        ydk::YLeaf controlinunknownopcodes; //type: uint64
        ydk::YLeaf inpauseframes; //type: uint64
        ydk::YLeaf outpauseframes; //type: uint64
        ydk::YLeaf lostcarriererrors; //type: uint64
        ydk::YLeaf nocarriererrors; //type: uint64
        ydk::YLeaf inputdribble; //type: uint64
        ydk::YLeaf babble; //type: uint64
        ydk::YLeaf runts; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgDot3StatsItems


class System::MgmtItems::MgmtIfList::DbgIfHCInItems : public ydk::Entity
{
    public:
        DbgIfHCInItems();
        ~DbgIfHCInItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIfHCInItems


class System::MgmtItems::MgmtIfList::DbgIfHCOutItems : public ydk::Entity
{
    public:
        DbgIfHCOutItems();
        ~DbgIfHCOutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf octets; //type: uint64
        ydk::YLeaf ucastpkts; //type: uint64
        ydk::YLeaf multicastpkts; //type: uint64
        ydk::YLeaf broadcastpckts; //type: uint64
        ydk::YLeaf broadcastpkts; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIfHCOutItems


class System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems : public ydk::Entity
{
    public:
        DbgIpv6IfStatsItems();
        ~DbgIpv6IfStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inreceives; //type: uint64
        ydk::YLeaf inhdrerrors; //type: uint64
        ydk::YLeaf inaddrerrors; //type: uint64
        ydk::YLeaf indiscards; //type: uint64
        ydk::YLeaf outforwdatagrams; //type: uint64
        ydk::YLeaf outdiscards; //type: uint64
        ydk::YLeaf inmcastpkts; //type: uint64
        ydk::YLeaf outmcastpkts; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIpv6IfStatsItems


class System::MgmtItems::MgmtIfList::DbgIfStormItems : public ydk::Entity
{
    public:
        DbgIfStormItems();
        ~DbgIfStormItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropbytes; //type: uint64

}; // System::MgmtItems::MgmtIfList::DbgIfStormItems


class System::SnmpItems : public ydk::Entity
{
    public:
        SnmpItems();
        ~SnmpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::SnmpItems::InstItems
        class ServershutdownItems; //type: System::SnmpItems::ServershutdownItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::ServershutdownItems> servershutdown_items;
        
}; // System::SnmpItems


class System::SnmpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf logginglevel; //type: SnmpSnmpLogLevel
        ydk::YLeaf engid; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class ClgrpItems; //type: System::SnmpItems::InstItems::ClgrpItems
        class GlobalsItems; //type: System::SnmpItems::InstItems::GlobalsItems
        class HostItems; //type: System::SnmpItems::InstItems::HostItems
        class RmonItems; //type: System::SnmpItems::InstItems::RmonItems
        class CommunityItems; //type: System::SnmpItems::InstItems::CommunityItems
        class UserItems; //type: System::SnmpItems::InstItems::UserItems
        class CtxItems; //type: System::SnmpItems::InstItems::CtxItems
        class SysinfoItems; //type: System::SnmpItems::InstItems::SysinfoItems
        class TrapsItems; //type: System::SnmpItems::InstItems::TrapsItems
        class RmtUserItems; //type: System::SnmpItems::InstItems::RmtUserItems
        class LclUserItems; //type: System::SnmpItems::InstItems::LclUserItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::ClgrpItems> clgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::GlobalsItems> globals_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::HostItems> host_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems> rmon_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CommunityItems> community_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::UserItems> user_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CtxItems> ctx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::SysinfoItems> sysinfo_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems> traps_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmtUserItems> rmtuser_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::LclUserItems> lcluser_items;
        
}; // System::SnmpItems::InstItems


class System::SnmpItems::InstItems::ClgrpItems : public ydk::Entity
{
    public:
        ClgrpItems();
        ~ClgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClientGrpList; //type: System::SnmpItems::InstItems::ClgrpItems::ClientGrpList

        ydk::YList clientgrp_list;
        
}; // System::SnmpItems::InstItems::ClgrpItems


class System::SnmpItems::InstItems::ClgrpItems::ClientGrpList : public ydk::Entity
{
    public:
        ClientGrpList();
        ~ClientGrpList();

        bool has_data() const override;
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
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf descr; //type: string
        ydk::YLeaf epgdn; //type: string
        class ClientItems; //type: System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems
        class RscommSecPClientGrpAttItems; //type: System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems> client_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems> rscommsecpclientgrpatt_items;
        
}; // System::SnmpItems::InstItems::ClgrpItems::ClientGrpList


class System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems : public ydk::Entity
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

        class ClientList; //type: System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList

        ydk::YList client_list;
        
}; // System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems


class System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf name; //type: string

}; // System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::ClientItems::ClientList


class System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems : public ydk::Entity
{
    public:
        RscommSecPClientGrpAttItems();
        ~RscommSecPClientGrpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCommSecPClientGrpAttList; //type: System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList

        ydk::YList rscommsecpclientgrpatt_list;
        
}; // System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems


class System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList : public ydk::Entity
{
    public:
        RsCommSecPClientGrpAttList();
        ~RsCommSecPClientGrpAttList();

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

}; // System::SnmpItems::InstItems::ClgrpItems::ClientGrpList::RscommSecPClientGrpAttItems::RsCommSecPClientGrpAttList


class System::SnmpItems::InstItems::GlobalsItems : public ydk::Entity
{
    public:
        GlobalsItems();
        ~GlobalsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aaausercachetimeout; //type: uint32
        ydk::YLeaf protocolenable; //type: SnmpBoolean
        ydk::YLeaf countercacheenable; //type: SnmpBoolean
        ydk::YLeaf countercachetimeout; //type: uint16
        ydk::YLeaf enableifaliaslong; //type: SnmpBoolean
        ydk::YLeaf enforceprivacy; //type: SnmpBoolean
        ydk::YLeaf pktsize; //type: uint16
        ydk::YLeaf tcpsessionauth; //type: SnmpTcpSessionAuthT
        class SrcInterfaceTrapsItems; //type: System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems
        class SrcInterfaceInformsItems; //type: System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems> srcinterfacetraps_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems> srcinterfaceinforms_items;
        
}; // System::SnmpItems::InstItems::GlobalsItems


class System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems : public ydk::Entity
{
    public:
        SrcInterfaceTrapsItems();
        ~SrcInterfaceTrapsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ifname; //type: string

}; // System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceTrapsItems


class System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems : public ydk::Entity
{
    public:
        SrcInterfaceInformsItems();
        ~SrcInterfaceInformsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ifname; //type: string

}; // System::SnmpItems::InstItems::GlobalsItems::SrcInterfaceInformsItems


class System::SnmpItems::InstItems::HostItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class HostList; //type: System::SnmpItems::InstItems::HostItems::HostList

        ydk::YList host_list;
        
}; // System::SnmpItems::InstItems::HostItems


class System::SnmpItems::InstItems::HostItems::HostList : public ydk::Entity
{
    public:
        HostList();
        ~HostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hostname; //type: string
        ydk::YLeaf udpportid; //type: uint32
        ydk::YLeaf commname; //type: string
        ydk::YLeaf notiftype; //type: SnmpNotificationType
        ydk::YLeaf version; //type: SnmpVersion
        ydk::YLeaf seclevel; //type: SnmpV3SecLvl
        class HostsourceinterfaceItems; //type: System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems
        class UsevrfItems; //type: System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems
        class FiltervrfItems; //type: System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems> hostsourceinterface_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems> usevrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems> filtervrf_items;
        
}; // System::SnmpItems::InstItems::HostItems::HostList


class System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems : public ydk::Entity
{
    public:
        HostsourceinterfaceItems();
        ~HostsourceinterfaceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifname; //type: string

}; // System::SnmpItems::InstItems::HostItems::HostList::HostsourceinterfaceItems


class System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems : public ydk::Entity
{
    public:
        UsevrfItems();
        ~UsevrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UseVrfList; //type: System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList

        ydk::YList usevrf_list;
        
}; // System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems


class System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList : public ydk::Entity
{
    public:
        UseVrfList();
        ~UseVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfname; //type: string

}; // System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems::UseVrfList


class System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems : public ydk::Entity
{
    public:
        FiltervrfItems();
        ~FiltervrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FilterVrfList; //type: System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList

        ydk::YList filtervrf_list;
        
}; // System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems


class System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList : public ydk::Entity
{
    public:
        FilterVrfList();
        ~FilterVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfname; //type: string

}; // System::SnmpItems::InstItems::HostItems::HostList::FiltervrfItems::FilterVrfList


class System::SnmpItems::InstItems::RmonItems : public ydk::Entity
{
    public:
        RmonItems();
        ~RmonItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventItems; //type: System::SnmpItems::InstItems::RmonItems::EventItems
        class AlarmItems; //type: System::SnmpItems::InstItems::RmonItems::AlarmItems
        class HcalarmItems; //type: System::SnmpItems::InstItems::RmonItems::HcalarmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems::EventItems> event_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems::AlarmItems> alarm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems::HcalarmItems> hcalarm_items;
        
}; // System::SnmpItems::InstItems::RmonItems


class System::SnmpItems::InstItems::RmonItems::EventItems : public ydk::Entity
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

        class EventList; //type: System::SnmpItems::InstItems::RmonItems::EventItems::EventList

        ydk::YList event_list;
        
}; // System::SnmpItems::InstItems::RmonItems::EventItems


class System::SnmpItems::InstItems::RmonItems::EventItems::EventList : public ydk::Entity
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

        ydk::YLeaf num; //type: uint16
        ydk::YLeaf log; //type: SnmpLogEnableType
        ydk::YLeaf owner; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf trap; //type: string

}; // System::SnmpItems::InstItems::RmonItems::EventItems::EventList


class System::SnmpItems::InstItems::RmonItems::AlarmItems : public ydk::Entity
{
    public:
        AlarmItems();
        ~AlarmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlarmList; //type: System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList

        ydk::YList alarm_list;
        
}; // System::SnmpItems::InstItems::RmonItems::AlarmItems


class System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList : public ydk::Entity
{
    public:
        AlarmList();
        ~AlarmList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf num; //type: uint16
        ydk::YLeaf oid; //type: string
        ydk::YLeaf sampleinterval; //type: uint32
        ydk::YLeaf sampletype; //type: SnmpSmplType
        ydk::YLeaf risingthr; //type: int32
        ydk::YLeaf risingevntindx; //type: uint16
        ydk::YLeaf fallingthr; //type: int32
        ydk::YLeaf fallingevntindx; //type: uint16
        ydk::YLeaf owner; //type: string

}; // System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList


class System::SnmpItems::InstItems::RmonItems::HcalarmItems : public ydk::Entity
{
    public:
        HcalarmItems();
        ~HcalarmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HcAlarmList; //type: System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList

        ydk::YList hcalarm_list;
        
}; // System::SnmpItems::InstItems::RmonItems::HcalarmItems


class System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList : public ydk::Entity
{
    public:
        HcAlarmList();
        ~HcAlarmList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf num; //type: uint16
        ydk::YLeaf oid; //type: string
        ydk::YLeaf sampleinterval; //type: uint32
        ydk::YLeaf sampletype; //type: SnmpSmplType
        ydk::YLeaf startupalarm; //type: SnmpStartupAlarmType
        ydk::YLeaf risingthr; //type: uint64
        ydk::YLeaf risingevntindx; //type: uint16
        ydk::YLeaf fallingthr; //type: uint64
        ydk::YLeaf fallingevntindx; //type: uint16
        ydk::YLeaf owner; //type: string

}; // System::SnmpItems::InstItems::RmonItems::HcalarmItems::HcAlarmList


class System::SnmpItems::InstItems::CommunityItems : public ydk::Entity
{
    public:
        CommunityItems();
        ~CommunityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CommSecPList; //type: System::SnmpItems::InstItems::CommunityItems::CommSecPList

        ydk::YList commsecp_list;
        
}; // System::SnmpItems::InstItems::CommunityItems


class System::SnmpItems::InstItems::CommunityItems::CommSecPList : public ydk::Entity
{
    public:
        CommSecPList();
        ~CommSecPList();

        bool has_data() const override;
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
        ydk::YLeaf grpname; //type: string
        ydk::YLeaf contextname; //type: string
        ydk::YLeaf commacess; //type: SnmpCommAcessT
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf descr; //type: string
        class AclItems; //type: System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems
        class RscommToCtxAttItems; //type: System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems> rscommtoctxatt_items;
        
}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList


}
}

#endif /* _CISCO_NX_OS_DEVICE_20_ */

