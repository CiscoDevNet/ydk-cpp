#ifndef _CISCO_NX_OS_DEVICE_43_
#define _CISCO_NX_OS_DEVICE_43_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_42.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
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
        class LsaItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems
        class RtItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems : public ydk::Entity
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

        class LsaRecList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        class UcnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
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

        class UcNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
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

        class McNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems : public ydk::Entity
{
    public:
        DomafItems();
        ~DomafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomAfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList : public ydk::Entity
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

        ydk::YLeaf type; //type: OspfAfT
        ydk::YLeaf name; //type: string
        class DefrtleakItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems
        class InterleakItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems
        class LeakctrlItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems
        class ExtrtsumItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems> leakctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems> extrtsum_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems : public ydk::Entity
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
        ydk::YLeaf always; //type: OspfAlways

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList : public ydk::Entity
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
        ydk::YLeaf always; //type: OspfAlways

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems : public ydk::Entity
{
    public:
        ExtrtsumItems();
        ~ExtrtsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtRtSumList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList

        ydk::YList extrtsum_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList : public ydk::Entity
{
    public:
        ExtRtSumList();
        ~ExtRtSumList();

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
        ydk::YLeaf tag; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems : public ydk::Entity
{
    public:
        LsactrlItems();
        ~LsactrlItems();

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
        ydk::YLeaf gppacingintvl; //type: uint16
        ydk::YLeaf arrivalintvl; //type: uint32
        ydk::YLeaf startintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems : public ydk::Entity
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

        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf areacnt; //type: uint32
        ydk::YLeaf stubareacnt; //type: uint32
        ydk::YLeaf nssaareacnt; //type: uint32
        ydk::YLeaf extareacnt; //type: uint32
        ydk::YLeaf activestubareacnt; //type: uint32
        ydk::YLeaf activenssaareacnt; //type: uint32
        ydk::YLeaf activeextareacnt; //type: uint32
        ydk::YLeaf activeareacnt; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf extlsacnt; //type: uint32
        ydk::YLeaf opaqueaslsacnt; //type: uint32
        ydk::YLeaf totalaslsacnt; //type: uint32
        ydk::YLeaf newlsarxcnt; //type: uint32
        ydk::YLeaf newlsatxcnt; //type: uint32
        ydk::YLeaf areabdrrtr; //type: uint8
        ydk::YLeaf asbdrrtr; //type: uint8

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: OspfGrCtrl
        ydk::YLeaf helper; //type: boolean
        ydk::YLeaf graceperiod; //type: uint32
        ydk::YLeaf restartstatus; //type: OspfRestartStatus
        ydk::YLeaf restartage; //type: uint32
        ydk::YLeaf restartexitreason; //type: OspfRestartExitReason

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf operst; //type: OspfIfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: OspfIfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        ydk::YLeaf operdeadintvl; //type: uint16
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        class AdjItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class DbItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems
        class IfstatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems
        class TrstatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtospfIfDefToOspfv3IfItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems
        class RtvrfMbrItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems> rtospfifdeftoospfv3if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ifid; //type: uint32
        ydk::YLeaf operst; //type: OspfAdjOperSt
        ydk::YLeaf bfdst; //type: OspfBfdOperSt
        ydk::YLeaf area; //type: string
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf hellooptions; //type: uint32
        ydk::YLeaf dbdoptions; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf peername; //type: string
        class AdjstatsItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
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

        ydk::YLeaf stchgcnt; //type: uint32
        ydk::YLeaf laststchgts; //type: string
        ydk::YLeaf lastnonhellopktts; //type: string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems : public ydk::Entity
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

        ydk::YLeaf helperst; //type: OspfHelperSt
        ydk::YLeaf helperage; //type: uint32
        ydk::YLeaf helperexitqual; //type: OspfHelperExitQual

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
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
        class LsaItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems
        class RtItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems> rt_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems : public ydk::Entity
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

        class LsaRecList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        class UcnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
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

        class UcNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
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

        class McNexthopList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf evcnt; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf floodtopeercnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf unknownsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems : public ydk::Entity
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

        class RtOspfIfDefToOspfv3IfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList

        ydk::YList rtospfifdeftoospfv3if_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems : public ydk::Entity
{
    public:
        MaxmetriclsapItems();
        ~MaxmetriclsapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf maxmetricextlsa; //type: uint32
        ydk::YLeaf maxmetricsummlsa; //type: uint32
        ydk::YLeaf startupintvl; //type: uint32
        ydk::YLeaf awaitconvbgpasn; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems


class System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf totalpktsrcvd; //type: uint32
        ydk::YLeaf hellopktsrcvd; //type: uint32
        ydk::YLeaf dbdpktsrcvd; //type: uint32
        ydk::YLeaf lsreqpktsrcvd; //type: uint32
        ydk::YLeaf lsupdpktsrcvd; //type: uint32
        ydk::YLeaf lsackpktsrcvd; //type: uint32
        ydk::YLeaf rcvdpktsdropped; //type: uint32
        ydk::YLeaf errpktsrcvd; //type: uint32
        ydk::YLeaf errhellopktsrcvd; //type: uint32
        ydk::YLeaf errdbdpktsrcvd; //type: uint32
        ydk::YLeaf errlsreqpktsrcvd; //type: uint32
        ydk::YLeaf errlsupdpktsrcvd; //type: uint32
        ydk::YLeaf errlsackpktsrcvd; //type: uint32
        ydk::YLeaf unknownpktsrcvd; //type: uint32
        ydk::YLeaf duprtridpktsrcvd; //type: uint32
        ydk::YLeaf dupsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf wrongareapktsrcvd; //type: uint32
        ydk::YLeaf invalidsrcaddrpktsrcvd; //type: uint32
        ydk::YLeaf invaliddestaddrpktsrcvd; //type: uint32
        ydk::YLeaf badcrcpktsrcvd; //type: uint32
        ydk::YLeaf badversionpktsrcvd; //type: uint32
        ydk::YLeaf badresvfieldpktsrcvd; //type: uint32
        ydk::YLeaf peerrtridchgdpktsrcvd; //type: uint32
        ydk::YLeaf peernotfoundpktsrcvd; //type: uint32
        ydk::YLeaf badauthpktsrcvd; //type: uint32
        ydk::YLeaf badlenpktsrcvd; //type: uint32
        ydk::YLeaf passiveintfpktsrcvd; //type: uint32
        ydk::YLeaf noospfintfpktsrcvd; //type: uint32
        ydk::YLeaf rcvdlsapktsignored; //type: uint32
        ydk::YLeaf droppedlsapktswhilespf; //type: uint32
        ydk::YLeaf droppedlsapktswhilegr; //type: uint32
        ydk::YLeaf totalpktssent; //type: uint32
        ydk::YLeaf hellopktssent; //type: uint32
        ydk::YLeaf dbdpktssent; //type: uint32
        ydk::YLeaf lsreqpktssent; //type: uint32
        ydk::YLeaf lsupdpktssent; //type: uint32
        ydk::YLeaf lsackpktssent; //type: uint32
        ydk::YLeaf droppedsendpkts; //type: uint32
        ydk::YLeaf errsendpkts; //type: uint32
        ydk::YLeaf unknownsendpkts; //type: uint32
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string

}; // System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems


class System::Ospfv3Items::InstItems::InstList::EvtLogsItems : public ydk::Entity
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

        class EventLogsList; //type: System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::Ospfv3Items::InstItems::InstList::EvtLogsItems


class System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList : public ydk::Entity
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

        ydk::YLeaf eventtype; //type: OspfEventType
        ydk::YLeaf logsize; //type: OspfEventLogSize
        ydk::YLeaf logsizekbytes; //type: uint16

}; // System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList


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

        class InternalIfList; //type: System::Ospfv3Items::IfItems::InternalIfList

        ydk::YList internalif_list;
        
}; // System::Ospfv3Items::IfItems


class System::Ospfv3Items::IfItems::InternalIfList : public ydk::Entity
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
        ydk::YLeaf instanceid; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf operst; //type: OspfIfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: OspfIfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        ydk::YLeaf operdeadintvl; //type: uint16
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf instance; //type: string
        ydk::YLeaf dom; //type: string
        ydk::YLeaf instancedeletedviacli; //type: string
        class RtvrfMbrItems; //type: System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Ospfv3Items::IfItems::InternalIfList


class System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems


class System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems


class System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt_
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf nrdelay; //type: uint16
        ydk::YLeaf nrnumrt; //type: uint16
        ydk::YLeaf regstop; //type: boolean
        class DomItems; //type: System::PimItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems> dom_items;
        
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf autoenable; //type: boolean
        ydk::YLeaf lognbhchng; //type: boolean
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        class AcastrpfuncItems; //type: System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems
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


class System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems


class System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems : public ydk::Entity
{
    public:
        BsrfilterItems();
        ~BsrfilterItems();

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

}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems


class System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems : public ydk::Entity
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
        class RangeItems; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems> range_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems


class System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems : public ydk::Entity
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

        class RPGrpRangeList; //type: System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems


class System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList


class System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems : public ydk::Entity
{
    public:
        BsrfuncItems();
        ~BsrfuncItems();

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
        ydk::YLeaf hashlen; //type: uint16
        ydk::YLeaf prio; //type: uint16
        ydk::YLeaf interval; //type: uint16

}; // System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems


class System::PimItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: RtdmcDbT
        ydk::YLeaf name; //type: string
        class AutorpItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems
        class BsrItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems
        class GrangeItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems
        class SrcItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems
        class RpItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems> rp_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems : public ydk::Entity
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

        class AutoRPPInfoList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList

        ydk::YList autorppinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList : public ydk::Entity
{
    public:
        AutoRPPInfoList();
        ~AutoRPPInfoList();

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
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems : public ydk::Entity
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

        class BSRInfoList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList

        ydk::YList bsrinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList : public ydk::Entity
{
    public:
        BSRInfoList();
        ~BSRInfoList();

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
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPGrangeList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList

        ydk::YList rpgrange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList : public ydk::Entity
{
    public:
        RPGrangeList();
        ~RPGrangeList();

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
        ydk::YLeaf flags; //type: string
        ydk::YLeaf rpaddr; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems : public ydk::Entity
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

        class RouteList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList

        ydk::YList route_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rpaddrroute; //type: string
        ydk::YLeaf iif; //type: string
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf rpfsrc; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf asserttime; //type: string
        ydk::YLeaf rttype; //type: string
        ydk::YLeaf swpktcnt; //type: uint32
        ydk::YLeaf swbytecnt; //type: uint32
        ydk::YLeaf hwpktcnt; //type: uint32
        ydk::YLeaf hwbytecnt; //type: uint32
        ydk::YLeaf assertmetric; //type: uint32
        ydk::YLeaf assertmetricpref; //type: uint32
        ydk::YLeaf routebits; //type: string
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems> oif_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems : public ydk::Entity
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

        class OifList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList : public ydk::Entity
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

        ydk::YLeaf oif; //type: string
        ydk::YLeaf flags; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPInfoList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList

        ydk::YList rpinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList : public ydk::Entity
{
    public:
        RPInfoList();
        ~RPInfoList();

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
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf arpexp; //type: string
        ydk::YLeaf bsrexp; //type: string
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf disctype; //type: string
        ydk::YLeaf dfordinal; //type: uint32
        class RsrP2GrangeItems; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems> rsrp2grange_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems : public ydk::Entity
{
    public:
        RsrP2GrangeItems();
        ~RsrP2GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRP2GrangeList; //type: System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList

        ydk::YList rsrp2grange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems


class System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList : public ydk::Entity
{
    public:
        RsRP2GrangeList();
        ~RsRP2GrangeList();

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

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList


class System::PimItems::InstItems::DomItems::DomList::DomstatsItems : public ydk::Entity
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

        ydk::YLeaf regsent; //type: uint32
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf regrcvdssm; //type: uint32
        ydk::YLeaf regrcvdbidir; //type: uint32
        ydk::YLeaf regrcvdandnotrp; //type: uint32
        ydk::YLeaf bsrbssent; //type: uint32
        ydk::YLeaf bsrbsrcvd; //type: uint32
        ydk::YLeaf bsrcrpsent; //type: uint32
        ydk::YLeaf bsrcrprcvd; //type: uint32
        ydk::YLeaf bsrbsfromnonnbr; //type: uint32
        ydk::YLeaf bsrbsfromborderif; //type: uint32
        ydk::YLeaf bsrbslenerr; //type: uint32
        ydk::YLeaf bsrbsrpffail; //type: uint32
        ydk::YLeaf bsrbsrcvdlisnotconf; //type: uint32
        ydk::YLeaf bsrcrpfromborderif; //type: uint32
        ydk::YLeaf bsrcrprcvdlisnotconf; //type: uint32
        ydk::YLeaf autorpannouncessent; //type: uint32
        ydk::YLeaf autorpannouncesrcvd; //type: uint32
        ydk::YLeaf autorpdiscoveriessent; //type: uint32
        ydk::YLeaf autorpdiscoveriesrcvd; //type: uint32
        ydk::YLeaf autorprpffailed; //type: uint32
        ydk::YLeaf autorpfromborderif; //type: uint32
        ydk::YLeaf autorpinvalidtype; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorprcvdlisnotconf; //type: uint32
        ydk::YLeaf cprpffailnoroute; //type: uint32
        ydk::YLeaf dprpffailnoroute; //type: uint32
        ydk::YLeaf dpnomcaststate; //type: uint32
        ydk::YLeaf dpcrtroutestatecnt; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::DomstatsItems


class System::PimItems::InstItems::DomItems::DomList::EventHistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::EventHistItems


class System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: PimEhType
        ydk::YLeaf size; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList


class System::PimItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf drdelay; //type: uint16
        ydk::YLeaf jprtmap; //type: string
        ydk::YLeaf neighrtmap; //type: string
        ydk::YLeaf neighpfxlist; //type: string
        ydk::YLeaf border; //type: boolean
        ydk::YLeaf dr; //type: string
        ydk::YLeaf rteppdn; //type: string
        ydk::YLeaf nbrholdtime; //type: uint32
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf nexthello; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf bfdinst; //type: RtdmcBfdInstSt
        ydk::YLeaf pimsparsemode; //type: boolean
        class AdjItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems
        class DbItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems
        class IfstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems
        class JpItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems
        class HelloItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems
        class TrstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtvrfMbrItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems> jp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems> hello_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
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

        ydk::YLeaf lasthellorcvd; //type: string
        ydk::YLeaf longhelloitvl; //type: uint32
        ydk::YLeaf lastholdtime; //type: uint16
        ydk::YLeaf nonhelloexpresets; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: RtdmcDbT
        ydk::YLeaf name; //type: string
        class AutorpItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems
        class BsrItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems
        class GrangeItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems
        class SrcItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems
        class RpItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems> rp_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems : public ydk::Entity
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

        class AutoRPPInfoList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList

        ydk::YList autorppinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList : public ydk::Entity
{
    public:
        AutoRPPInfoList();
        ~AutoRPPInfoList();

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
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems : public ydk::Entity
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

        class BSRInfoList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList

        ydk::YList bsrinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList : public ydk::Entity
{
    public:
        BSRInfoList();
        ~BSRInfoList();

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
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPGrangeList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList

        ydk::YList rpgrange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList : public ydk::Entity
{
    public:
        RPGrangeList();
        ~RPGrangeList();

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
        ydk::YLeaf flags; //type: string
        ydk::YLeaf rpaddr; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems : public ydk::Entity
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

        class RouteList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList

        ydk::YList route_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rpaddrroute; //type: string
        ydk::YLeaf iif; //type: string
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf rpfsrc; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf asserttime; //type: string
        ydk::YLeaf rttype; //type: string
        ydk::YLeaf swpktcnt; //type: uint32
        ydk::YLeaf swbytecnt; //type: uint32
        ydk::YLeaf hwpktcnt; //type: uint32
        ydk::YLeaf hwbytecnt; //type: uint32
        ydk::YLeaf assertmetric; //type: uint32
        ydk::YLeaf assertmetricpref; //type: uint32
        ydk::YLeaf routebits; //type: string
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems> oif_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems : public ydk::Entity
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

        class OifList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList : public ydk::Entity
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

        ydk::YLeaf oif; //type: string
        ydk::YLeaf flags; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPInfoList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList

        ydk::YList rpinfo_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList : public ydk::Entity
{
    public:
        RPInfoList();
        ~RPInfoList();

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
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf arpexp; //type: string
        ydk::YLeaf bsrexp; //type: string
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf disctype; //type: string
        ydk::YLeaf dfordinal; //type: uint32
        class RsrP2GrangeItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems> rsrp2grange_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems : public ydk::Entity
{
    public:
        RsrP2GrangeItems();
        ~RsrP2GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsRP2GrangeList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList

        ydk::YList rsrp2grange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList : public ydk::Entity
{
    public:
        RsRP2GrangeList();
        ~RsRP2GrangeList();

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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
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

        ydk::YLeaf hellosent; //type: uint32
        ydk::YLeaf hellorcvd; //type: uint32
        ydk::YLeaf jpsent; //type: uint32
        ydk::YLeaf jprcvd; //type: uint32
        ydk::YLeaf assertsent; //type: uint32
        ydk::YLeaf assertrcvd; //type: uint32
        ydk::YLeaf graftssent; //type: uint32
        ydk::YLeaf graftsrcvd; //type: uint32
        ydk::YLeaf grftacksent; //type: uint32
        ydk::YLeaf grftackrcvd; //type: uint32
        ydk::YLeaf dfoffersent; //type: uint32
        ydk::YLeaf dfofferrcvd; //type: uint32
        ydk::YLeaf dfwinnersent; //type: uint32
        ydk::YLeaf dfwinnerrcvd; //type: uint32
        ydk::YLeaf dfbackoffsent; //type: uint32
        ydk::YLeaf dfbackoffrcvd; //type: uint32
        ydk::YLeaf dfpassessent; //type: uint32
        ydk::YLeaf dfpassesrcvd; //type: uint32
        ydk::YLeaf chksumerr; //type: uint32
        ydk::YLeaf invalidpktsent; //type: uint32
        ydk::YLeaf invalidpktrcvd; //type: uint32
        ydk::YLeaf authfail; //type: uint32
        ydk::YLeaf pktlenerr; //type: uint32
        ydk::YLeaf badverpkt; //type: uint32
        ydk::YLeaf pktfrmself; //type: uint32
        ydk::YLeaf pktfrmnonnbr; //type: uint32
        ydk::YLeaf pktonpassiveif; //type: uint32
        ydk::YLeaf jprcvdonrpf; //type: uint32
        ydk::YLeaf joinnorp; //type: uint32
        ydk::YLeaf joinwrongrp; //type: uint32
        ydk::YLeaf jpssmrcvd; //type: uint32
        ydk::YLeaf jpbidirrcvd; //type: uint32
        ydk::YLeaf jpfilterin; //type: uint32
        ydk::YLeaf jpfilterout; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems : public ydk::Entity
{
    public:
        JpItems();
        ~JpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JPTrPList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList

        ydk::YList jptrp_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList : public ydk::Entity
{
    public:
        JPTrPList();
        ~JPTrPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policydir; //type: RtdmcPolicyDirType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf itvl; //type: uint16

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems : public ydk::Entity
{
    public:
        HelloItems();
        ~HelloItems();

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
        ydk::YLeaf helloitvl; //type: uint32
        ydk::YLeaf autht; //type: RtdmcAuthT
        ydk::YLeaf authkey; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::PimItems::InstItems::DomItems::DomList::LimitItems : public ydk::Entity
{
    public:
        LimitItems();
        ~LimitItems();

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
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf rsvd; //type: uint32
        ydk::YLeaf rtmap; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::LimitItems


class System::PimItems::InstItems::DomItems::DomList::AsmItems : public ydk::Entity
{
    public:
        AsmItems();
        ~AsmItems();

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
        ydk::YLeaf prebuildspt; //type: boolean
        ydk::YLeaf force; //type: boolean
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        class SgexpItems; //type: System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems
        class SharedItems; //type: System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems
        class RegItems; //type: System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems> sgexp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems> shared_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems> reg_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::AsmItems


class System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems : public ydk::Entity
{
    public:
        SgexpItems();
        ~SgexpItems();

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
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean
        ydk::YLeaf sgexpitvl; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems


class System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems : public ydk::Entity
{
    public:
        SharedItems();
        ~SharedItems();

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
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean
        ydk::YLeaf usesptcommand; //type: boolean

}; // System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems


class System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems : public ydk::Entity
{
    public:
        RegItems();
        ~RegItems();

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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf maxrate; //type: uint16
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string

}; // System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems


class System::PimItems::InstItems::DomItems::DomList::SsmItems : public ydk::Entity
{
    public:
        SsmItems();
        ~SsmItems();

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
        class RangeItems; //type: System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems> range_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::SsmItems


class System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems : public ydk::Entity
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

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean

}; // System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems


class System::PimItems::InstItems::DomItems::DomList::BidirItems : public ydk::Entity
{
    public:
        BidirItems();
        ~BidirItems();

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
        ydk::YLeaf maxrp; //type: uint16
        ydk::YLeaf dfobitvl; //type: uint16

}; // System::PimItems::InstItems::DomItems::DomList::BidirItems


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems : public ydk::Entity
{
    public:
        StaticrpItems();
        ~StaticrpItems();

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
        class RpItems; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems> rp_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRPList; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList

        ydk::YList staticrp_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList : public ydk::Entity
{
    public:
        StaticRPList();
        ~StaticRPList();

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
        class RangeItems; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems
        class RpgrplistItems; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems> range_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems> rpgrplist_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems : public ydk::Entity
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

        class RPGrpRangeList; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems : public ydk::Entity
{
    public:
        RpgrplistItems();
        ~RpgrplistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RPGrpListList; //type: System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList

        ydk::YList rpgrplist_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems


class System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList : public ydk::Entity
{
    public:
        RPGrpListList();
        ~RPGrpListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grplistname; //type: string
        ydk::YLeaf bidir; //type: boolean
        ydk::YLeaf override; //type: boolean

}; // System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList


class System::PimItems::InstItems::DomItems::DomList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::PimItems::InstItems::DomItems::DomList::TrstatsItems


class System::SegrtItems : public ydk::Entity
{
    public:
        SegrtItems();
        ~SegrtItems();

        bool has_data() const override;
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
        class InstItems; //type: System::SegrtItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems> inst_items;
        
}; // System::SegrtItems


class System::SegrtItems::InstItems : public ydk::Entity
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

        ydk::YLeaf srgbcleanupintvl; //type: uint16
        ydk::YLeaf srgballocretryintvl; //type: uint16
        ydk::YLeaf operst; //type: SegrtOperSt
        ydk::YLeaf operstqual; //type: SegrtOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::SegrtItems::InstItems::DomItems
        class SrgbItems; //type: System::SegrtItems::InstItems::SrgbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems> srgb_items;
        
}; // System::SegrtItems::InstItems


class System::SegrtItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::SegrtItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::SegrtItems::InstItems::DomItems


class System::SegrtItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class AfItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems> af_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems : public ydk::Entity
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

        class DomAfList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
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

        ydk::YLeaf aftype; //type: SegrtAfType
        ydk::YLeaf name; //type: string
        class PfxsidItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems> pfxsid_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSidList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList

        ydk::YList prefixsid_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList : public ydk::Entity
{
    public:
        PrefixSidList();
        ~PrefixSidList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SegrtSrDpType
        class MplspfxsidItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems> mplspfxsid_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems : public ydk::Entity
{
    public:
        MplspfxsidItems();
        ~MplspfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsPrefixSidList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList

        ydk::YList mplsprefixsid_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList : public ydk::Entity
{
    public:
        MplsPrefixSidList();
        ~MplsPrefixSidList();

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
        ydk::YLeaf sidvaluetype; //type: SegrtSidValueType
        ydk::YLeaf sidvalue; //type: uint32

}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList


class System::SegrtItems::InstItems::SrgbItems : public ydk::Entity
{
    public:
        SrgbItems();
        ~SrgbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CfgsrgbItems; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems
        class OpersrgbItems; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems> cfgsrgb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::OpersrgbItems> opersrgb_items;
        
}; // System::SegrtItems::InstItems::SrgbItems


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems : public ydk::Entity
{
    public:
        CfgsrgbItems();
        ~CfgsrgbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfigSrgbList; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList

        ydk::YList configsrgb_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_43_ */

