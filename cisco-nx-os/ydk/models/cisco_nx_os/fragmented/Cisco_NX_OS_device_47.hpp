#ifndef _CISCO_NX_OS_DEVICE_47_
#define _CISCO_NX_OS_DEVICE_47_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_46.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
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
        class AutorpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems
        class VrfdetailItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems> vrfdetail_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems : public ydk::Entity
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

        class AutoRppInfoList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList

        ydk::YList autorppinfo_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList : public ydk::Entity
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
        ydk::YLeaf expiry; //type: one of uint64, string
        ydk::YLeaf uptime; //type: one of uint64, string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems : public ydk::Entity
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

        class BsrInfoList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList

        ydk::YList bsrinfo_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems : public ydk::Entity
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

        class RpGrangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList

        ydk::YList rpgrange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
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
        class SourceItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems : public ydk::Entity
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

        class IfRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList

        ydk::YList ifrec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList : public ydk::Entity
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
        class AdjrecItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems
        class IfstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems> adjrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems> ifstats_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems : public ydk::Entity
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

        class AdjEpRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList

        ydk::YList adjeprec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList : public ydk::Entity
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
        ydk::YLeaf learntime; //type: one of uint64, string
        ydk::YLeaf expirytime; //type: one of uint64, string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems> adjstats_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems : public ydk::Entity
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

        ydk::YLeaf lasthellorcvd; //type: one of uint64, string
        ydk::YLeaf longhelloitvl; //type: uint32
        ydk::YLeaf lastholdtime; //type: uint16
        ydk::YLeaf nonhelloexpresets; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems : public ydk::Entity
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

        class RpInfoRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList

        ydk::YList rpinforec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList : public ydk::Entity
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
        class RpifItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems> rpif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems : public ydk::Entity
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

        class RpIfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList

        ydk::YList rpif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems : public ydk::Entity
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

        ydk::YLeaf lastclearts; //type: one of uint64, string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems : public ydk::Entity
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
        class GrangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems> grange_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems : public ydk::Entity
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

        class SharedRouteRangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList

        ydk::YList sharedrouterange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems : public ydk::Entity
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

        class JpTrPList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList

        ydk::YList jptrp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList : public ydk::Entity
{
    public:
        JpTrPList();
        ~JpTrPList();

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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
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

        ydk::YLeaf lastclearts; //type: one of uint64, string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Pim6Items::InstItems::DomItems::DomList::LimitItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::LimitItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems : public ydk::Entity
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
        class SgexpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems
        class SharedItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems
        class RegItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems> sgexp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems> shared_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems> reg_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems


class System::Pim6Items::InstItems::DomItems::DomList::SsmItems : public ydk::Entity
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
        class RangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems> range_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::SsmItems


class System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems


class System::Pim6Items::InstItems::DomItems::DomList::BidirItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::BidirItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems : public ydk::Entity
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
        class RpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems> rp_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems : public ydk::Entity
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

        class StaticRPList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList

        ydk::YList staticrp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList : public ydk::Entity
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
        class RangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems
        class RpgrplistItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems> range_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems> rpgrplist_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems : public ydk::Entity
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

        class RpGrpRangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems


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


class System::Pim6Items::InstItems::GlItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::GlItems


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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf pim6enbldintfcount; //type: uint32
        ydk::YLeaf bfdenabled; //type: boolean
        ydk::YLeaf totalnumroutes; //type: uint32
        class AutorpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems
        class VrfdetailItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems> vrfdetail_items;
        
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
        ydk::YLeaf expiry; //type: one of uint64, string
        ydk::YLeaf uptime; //type: one of uint64, string
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

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf hash; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32
        ydk::YLeaf besthash; //type: boolean

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
        ydk::YLeaf learntime; //type: one of uint64, string
        ydk::YLeaf expirytime; //type: one of uint64, string
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

        ydk::YLeaf lasthellorcvd; //type: one of uint64, string
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
        ydk::YLeaf rpmetricpref; //type: uint32
        ydk::YLeaf rpmetric; //type: uint32
        class RpifItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems> rpif_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems : public ydk::Entity
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

        class RpIfList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList

        ydk::YList rpif_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList


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

        ydk::YLeaf lastclearts; //type: one of uint64, string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
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


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems : public ydk::Entity
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
        class GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems> grange_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems : public ydk::Entity
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

        class SharedRouteRangeList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList

        ydk::YList sharedrouterange_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList


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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class Srv6Items; //type: System::SegrtItems::Srv6Items
        class InstItems; //type: System::SegrtItems::InstItems
        class TeItems; //type: System::SegrtItems::TeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::Srv6Items> srv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems> te_items;
        
}; // System::SegrtItems


class System::SegrtItems::Srv6Items : public ydk::Entity
{
    public:
        Srv6Items();
        ~Srv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srv6dmeversion; //type: uint32
        ydk::YLeaf srv6enabled; //type: boolean

}; // System::SegrtItems::Srv6Items


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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class AffmapItems; //type: System::SegrtItems::TeItems::AffmapItems
        class ColorItems; //type: System::SegrtItems::TeItems::ColorItems
        class EncapItems; //type: System::SegrtItems::TeItems::EncapItems
        class SeglistItems; //type: System::SegrtItems::TeItems::SeglistItems
        class IfItems; //type: System::SegrtItems::TeItems::IfItems
        class PccItems; //type: System::SegrtItems::TeItems::PccItems
        class PolicyItems; //type: System::SegrtItems::TeItems::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::AffmapItems> affmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems> color_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::EncapItems> encap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::SeglistItems> seglist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PccItems> pcc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems> policy_items;
        
}; // System::SegrtItems::TeItems


class System::SegrtItems::TeItems::AffmapItems : public ydk::Entity
{
    public:
        AffmapItems();
        ~AffmapItems();

        bool has_data() const override;
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
        class AffcolItems; //type: System::SegrtItems::TeItems::AffmapItems::AffcolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::AffmapItems::AffcolItems> affcol_items;
        
}; // System::SegrtItems::TeItems::AffmapItems


class System::SegrtItems::TeItems::AffmapItems::AffcolItems : public ydk::Entity
{
    public:
        AffcolItems();
        ~AffcolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AffColorList; //type: System::SegrtItems::TeItems::AffmapItems::AffcolItems::AffColorList

        ydk::YList affcolor_list;
        
}; // System::SegrtItems::TeItems::AffmapItems::AffcolItems


class System::SegrtItems::TeItems::AffmapItems::AffcolItems::AffColorList : public ydk::Entity
{
    public:
        AffColorList();
        ~AffColorList();

        bool has_data() const override;
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
        ydk::YLeaf bitpos; //type: uint32

}; // System::SegrtItems::TeItems::AffmapItems::AffcolItems::AffColorList


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
        class CndpathsItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems> cndpaths_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems : public ydk::Entity
{
    public:
        CndpathsItems();
        ~CndpathsItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class PrefItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems> pref_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems : public ydk::Entity
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

        class PrefList; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList

        ydk::YList pref_list;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList : public ydk::Entity
{
    public:
        PrefList();
        ~PrefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefval; //type: uint32
        class DynItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems
        class ConstraintsItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems> dyn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems> constraints_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems : public ydk::Entity
{
    public:
        DynItems();
        ~DynItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class PceItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::PceItems
        class MetricItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::MetricItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::PceItems> pce_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::MetricItems> metric_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::PceItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::PceItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::MetricItems : public ydk::Entity
{
    public:
        MetricItems();
        ~MetricItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metrictype; //type: SrteMetric
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::DynItems::MetricItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems : public ydk::Entity
{
    public:
        ConstraintsItems();
        ~ConstraintsItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class SegmentItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::SegmentItems
        class AssocItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems
        class AffinityItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::SegmentItems> segment_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems> assoc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems> affinity_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::SegmentItems : public ydk::Entity
{
    public:
        SegmentItems();
        ~SegmentItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prottype; //type: SrteProtectionType
        ydk::YLeaf datapln; //type: SrteDataPlane
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::SegmentItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems : public ydk::Entity
{
    public:
        AssocItems();
        ~AssocItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class DisjItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems::DisjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems::DisjItems> disj_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems::DisjItems : public ydk::Entity
{
    public:
        DisjItems();
        ~DisjItems();

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
        ydk::YLeaf disjtype; //type: SrteDisjointType
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AssocItems::DisjItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems : public ydk::Entity
{
    public:
        AffinityItems();
        ~AffinityItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class ExclanyItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems
        class InclallItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems
        class InclanyItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems> exclany_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems> inclall_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems> inclany_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems : public ydk::Entity
{
    public:
        ExclanyItems();
        ~ExclanyItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class AffcolItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems> affcol_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems : public ydk::Entity
{
    public:
        AffcolItems();
        ~AffcolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConstAffColorList; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems::ConstAffColorList

        ydk::YList constaffcolor_list;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems::ConstAffColorList : public ydk::Entity
{
    public:
        ConstAffColorList();
        ~ConstAffColorList();

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

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::ExclanyItems::AffcolItems::ConstAffColorList


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems : public ydk::Entity
{
    public:
        InclallItems();
        ~InclallItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class AffcolItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems> affcol_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems : public ydk::Entity
{
    public:
        AffcolItems();
        ~AffcolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConstAffColorList; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems::ConstAffColorList

        ydk::YList constaffcolor_list;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems::ConstAffColorList : public ydk::Entity
{
    public:
        ConstAffColorList();
        ~ConstAffColorList();

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

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclallItems::AffcolItems::ConstAffColorList


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems : public ydk::Entity
{
    public:
        InclanyItems();
        ~InclanyItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class AffcolItems; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems> affcol_items;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems : public ydk::Entity
{
    public:
        AffcolItems();
        ~AffcolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConstAffColorList; //type: System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems::ConstAffColorList

        ydk::YList constaffcolor_list;
        
}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems


class System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems::ConstAffColorList : public ydk::Entity
{
    public:
        ConstAffColorList();
        ~ConstAffColorList();

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

}; // System::SegrtItems::TeItems::ColorItems::ColorList::CndpathsItems::PrefItems::PrefList::ConstraintsItems::AffinityItems::InclanyItems::AffcolItems::ConstAffColorList


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


class System::SegrtItems::TeItems::SeglistItems : public ydk::Entity
{
    public:
        SeglistItems();
        ~SeglistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SegListList; //type: System::SegrtItems::TeItems::SeglistItems::SegListList

        ydk::YList seglist_list;
        
}; // System::SegrtItems::TeItems::SeglistItems


class System::SegrtItems::TeItems::SeglistItems::SegListList : public ydk::Entity
{
    public:
        SegListList();
        ~SegListList();

        bool has_data() const override;
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
        class NxtlblItems; //type: System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems> nxtlbl_items;
        
}; // System::SegrtItems::TeItems::SeglistItems::SegListList


class System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems : public ydk::Entity
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

        class NxtLblList; //type: System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems::NxtLblList

        ydk::YList nxtlbl_list;
        
}; // System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems


class System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems::NxtLblList : public ydk::Entity
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

}; // System::SegrtItems::TeItems::SeglistItems::SegListList::NxtlblItems::NxtLblList


class System::SegrtItems::TeItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::SegrtItems::TeItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::SegrtItems::TeItems::IfItems


class System::SegrtItems::TeItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf operst; //type: SrteIfOperSt
        ydk::YLeaf deleted; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class MetricItems; //type: System::SegrtItems::TeItems::IfItems::IfList::MetricItems
        class IntfaffItems; //type: System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems
        class RtvrfMbrItems; //type: System::SegrtItems::TeItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems::IfList::MetricItems> metric_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems> intfaff_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::SegrtItems::TeItems::IfItems::IfList


class System::SegrtItems::TeItems::IfItems::IfList::MetricItems : public ydk::Entity
{
    public:
        MetricItems();
        ~MetricItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint32

}; // System::SegrtItems::TeItems::IfItems::IfList::MetricItems


class System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems : public ydk::Entity
{
    public:
        IntfaffItems();
        ~IntfaffItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class IntfaffcolItems; //type: System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems> intfaffcol_items;
        
}; // System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems


class System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems : public ydk::Entity
{
    public:
        IntfaffcolItems();
        ~IntfaffcolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfAffColorList; //type: System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems::IntfAffColorList

        ydk::YList intfaffcolor_list;
        
}; // System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems


class System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems::IntfAffColorList : public ydk::Entity
{
    public:
        IntfAffColorList();
        ~IntfAffColorList();

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

}; // System::SegrtItems::TeItems::IfItems::IfList::IntfaffItems::IntfaffcolItems::IntfAffColorList


class System::SegrtItems::TeItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::SegrtItems::TeItems::IfItems::IfList::RtvrfMbrItems


class System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems


class System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::SegrtItems::TeItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        class ExpcndpathsItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems> expcndpaths_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems : public ydk::Entity
{
    public:
        ExpcndpathsItems();
        ~ExpcndpathsItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class PrefItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems> pref_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems : public ydk::Entity
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

        class PolPrefList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList

        ydk::YList polpref_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList : public ydk::Entity
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
        class ExpItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems
        class DynItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::DynItems
        class ConstraintsItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ConstraintsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems> exp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::DynItems> dyn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ConstraintsItems> constraints_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems : public ydk::Entity
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

        class PolExpList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems::PolExpList

        ydk::YList polexp_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems::PolExpList : public ydk::Entity
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
        ydk::YLeaf weight; //type: uint32

}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::ExpcndpathsItems::PrefItems::PolPrefList::ExpItems::PolExpList


}
}

#endif /* _CISCO_NX_OS_DEVICE_47_ */

