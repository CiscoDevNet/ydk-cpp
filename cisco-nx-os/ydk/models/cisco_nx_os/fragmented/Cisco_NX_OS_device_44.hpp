#ifndef _CISCO_NX_OS_DEVICE_44_
#define _CISCO_NX_OS_DEVICE_44_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_43.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems : public ydk::Entity
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

        class RpGrpListList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList

        ydk::YList rpgrplist_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList : public ydk::Entity
{
    public:
        RpGrpListList();
        ~RpGrpListList();

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

}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList


class System::Pim6Items::InstItems::RoutedbItems : public ydk::Entity
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

        class VrfItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems> vrf_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class VrfList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf totalnumroutes; //type: uint32
        class AutorpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems> trstats_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems : public ydk::Entity
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

        class AutoRppInfoList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList

        ydk::YList autorppinfo_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems : public ydk::Entity
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

        class BsrInfoList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList

        ydk::YList bsrinfo_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList : public ydk::Entity
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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems : public ydk::Entity
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

        class RpGrangeList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList

        ydk::YList rpgrange_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        class SourceItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        class OifItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems : public ydk::Entity
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

        class IfRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList

        ydk::YList ifrec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList : public ydk::Entity
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
        class AdjrecItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems
        class IfstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems> adjrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems> ifstats_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems : public ydk::Entity
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

        class AdjEpRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList

        ydk::YList adjeprec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList : public ydk::Entity
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
        class AdjstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems> adjstats_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems : public ydk::Entity
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

        class RpInfoRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList

        ydk::YList rpinforec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList : public ydk::Entity
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
        class RsrP2GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems> rsrp2grange_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems : public ydk::Entity
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

        class RsRP2GrangeList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList

        ydk::YList rsrp2grange_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RsrP2GrangeItems::RsRP2GrangeList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems


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
        class TeItems; //type: System::SegrtItems::TeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems> te_items;
        
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


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList : public ydk::Entity
{
    public:
        ConfigSrgbList();
        ~ConfigSrgbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: SegrtSrDpType
        class LblblockItems; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems> lblblock_items;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems : public ydk::Entity
{
    public:
        LblblockItems();
        ~LblblockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LblBlockList; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList

        ydk::YList lblblock_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList : public ydk::Entity
{
    public:
        LblBlockList();
        ~LblBlockList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localid; //type: string
        ydk::YLeaf srlblmin; //type: uint32
        ydk::YLeaf srlblmax; //type: uint32
        ydk::YLeaf operst; //type: SegrtSRGBOperSt
        ydk::YLeaf numallocretries; //type: uint32

}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems : public ydk::Entity
{
    public:
        OpersrgbItems();
        ~OpersrgbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: SegrtSrDpType
        class OperlblblockItems; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems> operlblblock_items;
        
}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems : public ydk::Entity
{
    public:
        OperlblblockItems();
        ~OperlblblockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OperLblBlockList; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList

        ydk::YList operlblblock_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList : public ydk::Entity
{
    public:
        OperLblBlockList();
        ~OperLblBlockList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf localid; //type: string
        ydk::YLeaf srlblmin; //type: uint32
        ydk::YLeaf srlblmax; //type: uint32
        ydk::YLeaf operst; //type: SegrtSRGBOperSt
        ydk::YLeaf numallocretries; //type: uint32

}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList


class System::SegrtItems::TeItems : public ydk::Entity
{
    public:
        TeItems();
        ~TeItems();

        bool has_data() const override;
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
        class ColorItems; //type: System::SegrtItems::TeItems::ColorItems
        class EncapItems; //type: System::SegrtItems::TeItems::EncapItems
        class ExppathItems; //type: System::SegrtItems::TeItems::ExppathItems
        class PccItems; //type: System::SegrtItems::TeItems::PccItems
        class PolicyItems; //type: System::SegrtItems::TeItems::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems> color_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::EncapItems> encap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ExppathItems> exppath_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PccItems> pcc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems> policy_items;
        
}; // System::SegrtItems::TeItems


class System::SegrtItems::TeItems::ColorItems : public ydk::Entity
{
    public:
        ColorItems();
        ~ColorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ColorList; //type: System::SegrtItems::TeItems::ColorItems::ColorList

        ydk::YList color_list;
        
}; // System::SegrtItems::TeItems::ColorItems


class System::SegrtItems::TeItems::ColorItems::ColorList : public ydk::Entity
{
    public:
        ColorList();
        ~ColorList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf color; //type: uint64
        ydk::YLeaf metric; //type: SrteMetric

}; // System::SegrtItems::TeItems::ColorItems::ColorList


class System::SegrtItems::TeItems::EncapItems : public ydk::Entity
{
    public:
        EncapItems();
        ~EncapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EncapsulationList; //type: System::SegrtItems::TeItems::EncapItems::EncapsulationList

        ydk::YList encapsulation_list;
        
}; // System::SegrtItems::TeItems::EncapItems


class System::SegrtItems::TeItems::EncapItems::EncapsulationList : public ydk::Entity
{
    public:
        EncapsulationList();
        ~EncapsulationList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encaptype; //type: SrteEncapsulationType
        ydk::YLeaf srcaddress; //type: string

}; // System::SegrtItems::TeItems::EncapItems::EncapsulationList


class System::SegrtItems::TeItems::ExppathItems : public ydk::Entity
{
    public:
        ExppathItems();
        ~ExppathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExpPathList; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList

        ydk::YList exppath_list;
        
}; // System::SegrtItems::TeItems::ExppathItems


class System::SegrtItems::TeItems::ExppathItems::ExpPathList : public ydk::Entity
{
    public:
        ExpPathList();
        ~ExpPathList();

        bool has_data() const override;
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
        class NxtlblItems; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems> nxtlbl_items;
        
}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList


class System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems : public ydk::Entity
{
    public:
        NxtlblItems();
        ~NxtlblItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NxtLblList; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList

        ydk::YList nxtlbl_list;
        
}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems


class System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList : public ydk::Entity
{
    public:
        NxtLblList();
        ~NxtLblList();

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
        ydk::YLeaf lbl; //type: uint32

}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList


class System::SegrtItems::TeItems::PccItems : public ydk::Entity
{
    public:
        PccItems();
        ~PccItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srcaddress; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class PceItems; //type: System::SegrtItems::TeItems::PccItems::PceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PccItems::PceItems> pce_items;
        
}; // System::SegrtItems::TeItems::PccItems


class System::SegrtItems::TeItems::PccItems::PceItems : public ydk::Entity
{
    public:
        PceItems();
        ~PceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PceList; //type: System::SegrtItems::TeItems::PccItems::PceItems::PceList

        ydk::YList pce_list;
        
}; // System::SegrtItems::TeItems::PccItems::PceItems


class System::SegrtItems::TeItems::PccItems::PceItems::PceList : public ydk::Entity
{
    public:
        PceList();
        ~PceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pceaddress; //type: string
        ydk::YLeaf precedence; //type: uint32

}; // System::SegrtItems::TeItems::PccItems::PceItems::PceList


class System::SegrtItems::TeItems::PolicyItems : public ydk::Entity
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

        class PolicyList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::SegrtItems::TeItems::PolicyItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf endpoint; //type: string
        ydk::YLeaf color; //type: uint64
        class PrefItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems> pref_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems : public ydk::Entity
{
    public:
        PrefItems();
        ~PrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolPrefList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList

        ydk::YList polpref_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList : public ydk::Entity
{
    public:
        PolPrefList();
        ~PolPrefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pref; //type: uint32
        class ExpItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems> exp_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems : public ydk::Entity
{
    public:
        ExpItems();
        ~ExpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolExpList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList

        ydk::YList polexp_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList : public ydk::Entity
{
    public:
        PolExpList();
        ~PolExpList();

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

}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList


class System::VrrpItems : public ydk::Entity
{
    public:
        VrrpItems();
        ~VrrpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::VrrpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems> inst_items;
        
}; // System::VrrpItems


class System::VrrpItems::InstItems : public ydk::Entity
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
        class IfItems; //type: System::VrrpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems> if_items;
        
}; // System::VrrpItems::InstItems


class System::VrrpItems::InstItems::IfItems : public ydk::Entity
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

        class InterfaceList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList

        ydk::YList interface_list;
        
}; // System::VrrpItems::InstItems::IfItems


class System::VrrpItems::InstItems::IfItems::InterfaceList : public ydk::Entity
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
        ydk::YLeaf iscreate; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class IdItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems
        class RtvrfMbrItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems> id_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems : public ydk::Entity
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

        class IdList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList

        ydk::YList id_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList : public ydk::Entity
{
    public:
        IdList();
        ~IdList();

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
        ydk::YLeaf primary; //type: string
        ydk::YLeaf advintvl; //type: uint8
        ydk::YLeaf authtext; //type: string
        ydk::YLeaf authtype; //type: VrrpAuthType
        ydk::YLeaf preempt; //type: VrrpPreempt
        ydk::YLeaf pricfg; //type: uint8
        ydk::YLeaf bfdpeeraddr; //type: string
        ydk::YLeaf fwdlwrthrld; //type: uint8
        ydk::YLeaf fwduprthrld; //type: uint8
        ydk::YLeaf adminst; //type: VrrpAdminSt
        ydk::YLeaf groupst; //type: VrrpGroupSt
        ydk::YLeaf groupstqual; //type: VrrpGroupStQual
        ydk::YLeaf mac; //type: string
        ydk::YLeaf masteraddr; //type: string
        ydk::YLeaf bfdsessionst; //type: VrrpBfdSessionSt
        class SecondaryItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems
        class TrackItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems> secondary_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems> track_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems : public ydk::Entity
{
    public:
        SecondaryItems();
        ~SecondaryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList

        ydk::YList secondary_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList : public ydk::Entity
{
    public:
        SecondaryList();
        ~SecondaryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: string

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems : public ydk::Entity
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

        class NativeTrackItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems
        class TrackItems_; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems> nativetrack_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_> track_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems : public ydk::Entity
{
    public:
        NativeTrackItems();
        ~NativeTrackItems();

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
        ydk::YLeaf priority; //type: uint16

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_ : public ydk::Entity
{
    public:
        TrackItems_();
        ~TrackItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjectTrackList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList

        ydk::YList objecttrack_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList : public ydk::Entity
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
        ydk::YLeaf decrementpriority; //type: uint16

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems : public ydk::Entity
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

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList


class System::Vrrpv3Items : public ydk::Entity
{
    public:
        Vrrpv3Items();
        ~Vrrpv3Items();

        bool has_data() const override;
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
        class InstItems; //type: System::Vrrpv3Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems> inst_items;
        
}; // System::Vrrpv3Items


class System::Vrrpv3Items::InstItems : public ydk::Entity
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
        class IfItems; //type: System::Vrrpv3Items::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems> if_items;
        
}; // System::Vrrpv3Items::InstItems


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
        ydk::YLeaf iscreate; //type: uint8
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
        class AddrItems; //type: System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList::AddrItems> addr_items;
        
}; // System::Vrrpv3Items::InstItems::IfItems::InterfaceList::IdItems::VrList


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


}
}

#endif /* _CISCO_NX_OS_DEVICE_44_ */

