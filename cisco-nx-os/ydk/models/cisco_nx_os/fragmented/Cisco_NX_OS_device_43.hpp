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

}; // System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList


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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf drdelay; //type: uint16
        ydk::YLeaf jprtmap; //type: string
        ydk::YLeaf neighrtmap; //type: string
        ydk::YLeaf neighpfxlist; //type: string
        ydk::YLeaf border; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf rteppdn; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf bfdinst; //type: PimBfdInstSt
        ydk::YLeaf pimsparsemode; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class DbItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems
        class IfdbItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems
        class JpItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems
        class HelloItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems
        class TrstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtvrfMbrItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems> ifdb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems> jp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems> hello_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList


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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList


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


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems : public ydk::Entity
{
    public:
        IfdbItems();
        ~IfdbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfdbList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList

        ydk::YList ifdb_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList : public ydk::Entity
{
    public:
        IfdbList();
        ~IfdbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifdbtype; //type: PimIfdbT
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems
        class IfpropItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems
        class IfstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems> ifprop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems> ifstats_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        
}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::AdjItems::AdjEpList::AdjstatsItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems : public ydk::Entity
{
    public:
        IfpropItems();
        ~IfpropItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthello; //type: string
        ydk::YLeaf nbrholdtime; //type: uint32
        ydk::YLeaf dr; //type: string
        ydk::YLeaf genid; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfpropItems


class System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems : public ydk::Entity
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

}; // System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfdbItems::IfdbList::IfstatsItems


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

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

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

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

}; // System::PimItems::InstItems::DomItems::DomList::TrstatsItems


class System::PimItems::InstItems::GlItems : public ydk::Entity
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

        ydk::YLeaf loglvl; //type: uint16
        ydk::YLeaf isolate; //type: boolean

}; // System::PimItems::InstItems::GlItems


class System::PimItems::InstItems::RoutedbItems : public ydk::Entity
{
    public:
        RoutedbItems();
        ~RoutedbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RouteDbList; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList

        ydk::YList routedb_list;
        
}; // System::PimItems::InstItems::RoutedbItems


class System::PimItems::InstItems::RoutedbItems::RouteDbList : public ydk::Entity
{
    public:
        RouteDbList();
        ~RouteDbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: RtdmcDbT
        ydk::YLeaf name; //type: string
        class VrfItems; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems> vrf_items;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList : public ydk::Entity
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
        class GroupItems; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        class SourceItems; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        ydk::YLeaf rpaddressroute; //type: string
        ydk::YLeaf assertmetrics; //type: uint32
        ydk::YLeaf assertmetricprefs; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf src; //type: string
        ydk::YLeaf grp; //type: string
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
        class OifItems; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
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
        ydk::YLeaf oifflags; //type: string
        ydk::YLeaf flags; //type: string

}; // System::PimItems::InstItems::RoutedbItems::RouteDbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items : public ydk::Entity
{
    public:
        Pim6Items();
        ~Pim6Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Pim6Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems> inst_items;
        
}; // System::Pim6Items


class System::Pim6Items::InstItems : public ydk::Entity
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
        class DbItems; //type: System::Pim6Items::InstItems::DbItems
        class DomItems; //type: System::Pim6Items::InstItems::DomItems
        class GlItems; //type: System::Pim6Items::InstItems::GlItems
        class RoutedbItems; //type: System::Pim6Items::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::GlItems> gl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems> routedb_items;
        
}; // System::Pim6Items::InstItems


class System::Pim6Items::InstItems::DbItems : public ydk::Entity
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

        class DbList; //type: System::Pim6Items::InstItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Pim6Items::InstItems::DbItems


class System::Pim6Items::InstItems::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: RtdmcDbT
        ydk::YLeaf name; //type: string
        class BfItems; //type: System::Pim6Items::InstItems::DbItems::DbList::BfItems
        class EmbedrpItems; //type: System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems
        class SyslogItems; //type: System::Pim6Items::InstItems::DbItems::DbList::SyslogItems
        class VrfItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::BfItems> bf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems> embedrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList


class System::Pim6Items::InstItems::DbItems::DbList::BfItems : public ydk::Entity
{
    public:
        BfItems();
        ~BfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfentryItems; //type: System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems> bfentry_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::BfItems


class System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems : public ydk::Entity
{
    public:
        BfentryItems();
        ~BfentryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfEntryList; //type: System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList

        ydk::YList bfentry_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems


class System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList : public ydk::Entity
{
    public:
        BfEntryList();
        ~BfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bftype; //type: string
        ydk::YLeaf bfattr; //type: uint32
        ydk::YLeaf bfsgmnt; //type: uint32
        ydk::YLeaf bfflags; //type: uint32
        ydk::YLeaf bfcompressarraysize; //type: uint32
        ydk::YLeaf bfposallocated; //type: uint32
        class BfcompItems; //type: System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems> bfcomp_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList


class System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems : public ydk::Entity
{
    public:
        BfcompItems();
        ~BfcompItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfCompList; //type: System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList

        ydk::YList bfcomp_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems


class System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList : public ydk::Entity
{
    public:
        BfCompList();
        ~BfCompList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfidx; //type: uint32
        ydk::YLeaf bfcomptype; //type: string
        ydk::YLeaf bfbitpos; //type: uint32

}; // System::Pim6Items::InstItems::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList


class System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems : public ydk::Entity
{
    public:
        EmbedrpItems();
        ~EmbedrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EmbedRpList; //type: System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems::EmbedRpList

        ydk::YList embedrp_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems


class System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems::EmbedRpList : public ydk::Entity
{
    public:
        EmbedRpList();
        ~EmbedRpList();

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
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf illegalflag; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefixlen; //type: uint32
        ydk::YLeaf grpid; //type: uint32
        ydk::YLeaf scope; //type: uint32
        ydk::YLeaf scopestr; //type: string
        ydk::YLeaf rpifid; //type: string

}; // System::Pim6Items::InstItems::DbItems::DbList::EmbedrpItems::EmbedRpList


class System::Pim6Items::InstItems::DbItems::DbList::SyslogItems : public ydk::Entity
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

        class SyslogList; //type: System::Pim6Items::InstItems::DbItems::DbList::SyslogItems::SyslogList

        ydk::YList syslog_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::SyslogItems


class System::Pim6Items::InstItems::DbItems::DbList::SyslogItems::SyslogList : public ydk::Entity
{
    public:
        SyslogList();
        ~SyslogList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf facname; //type: string
        ydk::YLeaf defloglvl; //type: uint16
        ydk::YLeaf currloglvl; //type: uint16

}; // System::Pim6Items::InstItems::DbItems::DbList::SyslogItems::SyslogList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf pim6enbldintfcount; //type: uint32
        ydk::YLeaf bfdenabled; //type: boolean
        ydk::YLeaf totalnumroutes; //type: uint32
        class AutorpItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems
        class VrfdetailItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems> vrfdetail_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems : public ydk::Entity
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

        class AutoRppInfoList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList

        ydk::YList autorppinfo_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList : public ydk::Entity
{
    public:
        AutoRppInfoList();
        ~AutoRppInfoList();

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

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems : public ydk::Entity
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

        class BsrInfoList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList

        ydk::YList bsrinfo_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList : public ydk::Entity
{
    public:
        BsrInfoList();
        ~BsrInfoList();

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
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf hash; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32
        ydk::YLeaf besthash; //type: boolean

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems : public ydk::Entity
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

        class RpGrangeList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList

        ydk::YList rpgrange_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList : public ydk::Entity
{
    public:
        RpGrangeList();
        ~RpGrangeList();

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
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf usershared; //type: uint32

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf assertmetrics; //type: uint32
        ydk::YLeaf assertmetricprefs; //type: uint32
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf routebits; //type: string
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
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

        ydk::YLeaf oifname; //type: string
        ydk::YLeaf oifuptime; //type: string
        ydk::YLeaf oifrpf; //type: boolean
        ydk::YLeaf oiflispencapentries; //type: uint32

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems : public ydk::Entity
{
    public:
        IfrecItems();
        ~IfrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfRecList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList

        ydk::YList ifrec_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList : public ydk::Entity
{
    public:
        IfRecList();
        ~IfRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim6ifname; //type: string
        ydk::YLeaf pim6dr; //type: string
        ydk::YLeaf pim6drprio; //type: uint32
        ydk::YLeaf pim6nbrholdtime; //type: uint32
        ydk::YLeaf pim6genid; //type: uint32
        ydk::YLeaf pim6nexthello; //type: string
        ydk::YLeaf pim6ipaddr; //type: string
        ydk::YLeaf pim6border; //type: boolean
        ydk::YLeaf pim6sparsemode; //type: boolean
        class AdjrecItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems
        class IfstatsItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems> adjrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems> ifstats_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems : public ydk::Entity
{
    public:
        AdjrecItems();
        ~AdjrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpRecList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList

        ydk::YList adjeprec_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList : public ydk::Entity
{
    public:
        AdjEpRecList();
        ~AdjEpRecList();

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
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems> adjstats_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems : public ydk::Entity
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

        class RpInfoRecList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList

        ydk::YList rpinforec_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList : public ydk::Entity
{
    public:
        RpInfoRecList();
        ~RpInfoRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf rplocal; //type: boolean
        ydk::YLeaf rpuptime; //type: string
        ydk::YLeaf rppriority; //type: uint32
        ydk::YLeaf rpdisctype; //type: string
        ydk::YLeaf rpdfordinal; //type: uint32
        ydk::YLeaf rpmetricpref; //type: uint32
        ydk::YLeaf rpmetric; //type: uint32
        class RpifItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems> rpif_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems : public ydk::Entity
{
    public:
        RpifItems();
        ~RpifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpIfList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList

        ydk::YList rpif_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList : public ydk::Entity
{
    public:
        RpIfList();
        ~RpIfList();

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
        ydk::YLeaf dfwinner; //type: string
        ydk::YLeaf dfstate; //type: RtdmcDfStates
        ydk::YLeaf dfuptime; //type: string
        ydk::YLeaf isrpf; //type: boolean
        ydk::YLeaf winnermetricpref; //type: uint32
        ydk::YLeaf winnermetric; //type: uint32

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems : public ydk::Entity
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

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::TrstatsItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems : public ydk::Entity
{
    public:
        VrfdetailItems();
        ~VrfdetailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stlmt; //type: uint64
        ydk::YLeaf availstlmt; //type: uint64
        ydk::YLeaf rsvlmt; //type: uint64
        ydk::YLeaf availrsvlmt; //type: uint64
        ydk::YLeaf rsvpolname; //type: string
        ydk::YLeaf regratelmt; //type: uint64
        ydk::YLeaf sharedtrpolname; //type: string
        class GrangeItems; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems> grange_items;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems : public ydk::Entity
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

        class SharedRouteRangeList; //type: System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList

        ydk::YList sharedrouterange_list;
        
}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems


class System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList : public ydk::Entity
{
    public:
        SharedRouteRangeList();
        ~SharedRouteRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grangeip; //type: string

}; // System::Pim6Items::InstItems::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList


class System::Pim6Items::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::Pim6Items::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::Pim6Items::InstItems::DomItems


class System::Pim6Items::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf jpdelay; //type: uint32
        ydk::YLeaf regratelmt; //type: uint32
        class AcastrpfuncItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems
        class BsrItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems
        class EventhistItems; //type: System::Pim6Items::InstItems::DomItems::DomList::EventhistItems
        class IfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems
        class LimitItems; //type: System::Pim6Items::InstItems::DomItems::DomList::LimitItems
        class AsmItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems
        class SsmItems; //type: System::Pim6Items::InstItems::DomItems::DomList::SsmItems
        class BidirItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BidirItems
        class StaticrpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems> acastrpfunc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::EventhistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::LimitItems> limit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems> asm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::SsmItems> ssm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BidirItems> bidir_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems> staticrp_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList


class System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems : public ydk::Entity
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
        class PeerItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems> peer_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems


class System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems : public ydk::Entity
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

        class AcastRpPeerList; //type: System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList

        ydk::YList acastrppeer_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems


class System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList : public ydk::Entity
{
    public:
        AcastRpPeerList();
        ~AcastRpPeerList();

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

}; // System::Pim6Items::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRpPeerList


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems : public ydk::Entity
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
        class RpfilterItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems
        class BsrfilterItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems
        class RpfuncItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems
        class BsrfuncItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems> rpfilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems> bsrfilter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems> rpfunc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems> bsrfunc_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfilterItems


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfilterItems


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems : public ydk::Entity
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
        class RangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems> range_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems : public ydk::Entity
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

        class RpGrpRangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList : public ydk::Entity
{
    public:
        RpGrpRangeList();
        ~RpGrpRangeList();

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

}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RpGrpRangeList


class System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::BsrItems::BsrfuncItems


class System::Pim6Items::InstItems::DomItems::DomList::EventhistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::EventhistItems


class System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: Pim6EhType
        ydk::YLeaf size; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf dr; //type: string
        ydk::YLeaf nbrholdtime; //type: uint32
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf nexthello; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf drdelay; //type: uint16
        ydk::YLeaf jprtmap; //type: string
        ydk::YLeaf neighrtmap; //type: string
        ydk::YLeaf neighpfxlist; //type: string
        ydk::YLeaf border; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf rteppdn; //type: string
        ydk::YLeaf bfdinst; //type: RtdmcBfdInstSt
        ydk::YLeaf pimsparsemode; //type: boolean
        class AdjItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems
        class DbItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems
        class JpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems
        class HelloItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtvrfMbrItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems> jp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems> hello_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
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
        class BfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems
        class EmbedrpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems
        class SyslogItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems
        class VrfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems> bf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems> embedrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems : public ydk::Entity
{
    public:
        BfItems();
        ~BfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfentryItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems> bfentry_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems : public ydk::Entity
{
    public:
        BfentryItems();
        ~BfentryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfEntryList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList

        ydk::YList bfentry_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList : public ydk::Entity
{
    public:
        BfEntryList();
        ~BfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bftype; //type: string
        ydk::YLeaf bfattr; //type: uint32
        ydk::YLeaf bfsgmnt; //type: uint32
        ydk::YLeaf bfflags; //type: uint32
        ydk::YLeaf bfcompressarraysize; //type: uint32
        ydk::YLeaf bfposallocated; //type: uint32
        class BfcompItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems> bfcomp_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems : public ydk::Entity
{
    public:
        BfcompItems();
        ~BfcompItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfCompList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList

        ydk::YList bfcomp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList : public ydk::Entity
{
    public:
        BfCompList();
        ~BfCompList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfidx; //type: uint32
        ydk::YLeaf bfcomptype; //type: string
        ydk::YLeaf bfbitpos; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList


}
}

#endif /* _CISCO_NX_OS_DEVICE_43_ */

