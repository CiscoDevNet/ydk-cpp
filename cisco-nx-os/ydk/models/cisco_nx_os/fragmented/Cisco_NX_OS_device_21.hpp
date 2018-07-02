#ifndef _CISCO_NX_OS_DEVICE_21_
#define _CISCO_NX_OS_DEVICE_21_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_20.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


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
        ydk::YLeaf tcl; //type: RelnClassId

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


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems : public ydk::Entity
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

        class RtSumList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList

        ydk::YList rtsum_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::RtsumItems::RtSumList


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
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList


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
        ydk::YLeaf origin; //type: FmcastOrigin
        ydk::YLeaf root; //type: string
        ydk::YLeaf operst; //type: FmcastOperSt
        ydk::YLeaf diameter; //type: uint16
        ydk::YLeaf diaalert; //type: FmcastDiameterAlert
        ydk::YLeaf rootport; //type: string
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
        ydk::YLeaf oiflist; //type: string
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
        ydk::YLeaf oiflist; //type: string
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

        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheckp2p; //type: boolean
        ydk::YLeaf networktypep2p; //type: boolean
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf v4bfd; //type: IsisBfdT
        ydk::YLeaf v6bfd; //type: IsisBfdT
        ydk::YLeaf iibidx; //type: uint16
        ydk::YLeaf localcktid; //type: uint16
        ydk::YLeaf extdlocalcktid; //type: uint32
        ydk::YLeaf p2pcktid; //type: string
        ydk::YLeaf initerror; //type: boolean
        ydk::YLeaf iibupctrl; //type: boolean
        ydk::YLeaf iibstate; //type: string
        ydk::YLeaf nextiihts; //type: string
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
        ydk::YLeaf holdexpts; //type: string
        ydk::YLeaf ckttype; //type: IsisCktT
        ydk::YLeaf peercktid; //type: uint8
        ydk::YLeaf lanid; //type: uint8
        ydk::YLeaf peercktprio; //type: uint8
        ydk::YLeaf peergrflags; //type: string
        ydk::YLeaf numadjtrans; //type: uint32
        ydk::YLeaf lasttrans; //type: string
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

        class MeshGrpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList

        ydk::YList meshgrp_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList : public ydk::Entity
{
    public:
        MeshGrpList();
        ~MeshGrpList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList


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
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf csnpintvl; //type: uint16
        ydk::YLeaf mt0metric; //type: uint32
        ydk::YLeaf mt2metric; //type: uint32
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf protoerror; //type: boolean
        ydk::YLeaf nextcsnpts; //type: string
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

        ydk::YLeaf p2piihpktstx; //type: uint32
        ydk::YLeaf p2piihpktsrx; //type: uint32
        ydk::YLeaf p2piihpktsautherr; //type: uint32
        ydk::YLeaf p2piihpktsmiscerr; //type: uint32
        ydk::YLeaf laniihpktstx; //type: uint32
        ydk::YLeaf laniihpktsrx; //type: uint32
        ydk::YLeaf laniihpktsautherr; //type: uint32
        ydk::YLeaf laniihpktsmiscerr; //type: uint32
        ydk::YLeaf csnppktstx; //type: uint32
        ydk::YLeaf csnppktsrx; //type: uint32
        ydk::YLeaf fastcsnppktsrx; //type: uint32
        ydk::YLeaf csnppktsautherr; //type: uint32
        ydk::YLeaf csnppktsmiscerr; //type: uint32
        ydk::YLeaf psnppktstx; //type: uint32
        ydk::YLeaf psnppktsrx; //type: uint32
        ydk::YLeaf psnppktsautherr; //type: uint32
        ydk::YLeaf psnppktsmiscerr; //type: uint32
        ydk::YLeaf lsppktstx; //type: uint32
        ydk::YLeaf lsppktsretx; //type: uint32
        ydk::YLeaf lsppktsrx; //type: uint32
        ydk::YLeaf fastlsppktsrx; //type: uint32
        ydk::YLeaf lsppktsautherr; //type: uint32
        ydk::YLeaf lsppktsmiscerr; //type: uint32

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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


class System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems : public ydk::Entity
{
    public:
        IntraleakItems();
        ~IntraleakItems();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IntraleakItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LeakctrlItems


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheckp2p; //type: boolean
        ydk::YLeaf networktypep2p; //type: boolean
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf v4bfd; //type: IsisBfdT
        ydk::YLeaf v6bfd; //type: IsisBfdT
        ydk::YLeaf iibidx; //type: uint16
        ydk::YLeaf localcktid; //type: uint16
        ydk::YLeaf extdlocalcktid; //type: uint32
        ydk::YLeaf p2pcktid; //type: string
        ydk::YLeaf initerror; //type: boolean
        ydk::YLeaf iibupctrl; //type: boolean
        ydk::YLeaf iibstate; //type: string
        ydk::YLeaf nextiihts; //type: string
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

        class MeshGrpList; //type: System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList

        ydk::YList meshgrp_list;
        
}; // System::IsisItems::IfItems::InternalIfList::MeshgrpItems


class System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList : public ydk::Entity
{
    public:
        MeshGrpList();
        ~MeshGrpList();

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

}; // System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList


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
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf csnpintvl; //type: uint16
        ydk::YLeaf mt0metric; //type: uint32
        ydk::YLeaf mt2metric; //type: uint32
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf protoerror; //type: boolean
        ydk::YLeaf nextcsnpts; //type: string
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

        ydk::YLeaf p2piihpktstx; //type: uint32
        ydk::YLeaf p2piihpktsrx; //type: uint32
        ydk::YLeaf p2piihpktsautherr; //type: uint32
        ydk::YLeaf p2piihpktsmiscerr; //type: uint32
        ydk::YLeaf laniihpktstx; //type: uint32
        ydk::YLeaf laniihpktsrx; //type: uint32
        ydk::YLeaf laniihpktsautherr; //type: uint32
        ydk::YLeaf laniihpktsmiscerr; //type: uint32
        ydk::YLeaf csnppktstx; //type: uint32
        ydk::YLeaf csnppktsrx; //type: uint32
        ydk::YLeaf fastcsnppktsrx; //type: uint32
        ydk::YLeaf csnppktsautherr; //type: uint32
        ydk::YLeaf csnppktsmiscerr; //type: uint32
        ydk::YLeaf psnppktstx; //type: uint32
        ydk::YLeaf psnppktsrx; //type: uint32
        ydk::YLeaf psnppktsautherr; //type: uint32
        ydk::YLeaf psnppktsmiscerr; //type: uint32
        ydk::YLeaf lsppktstx; //type: uint32
        ydk::YLeaf lsppktsretx; //type: uint32
        ydk::YLeaf lsppktsrx; //type: uint32
        ydk::YLeaf fastlsppktsrx; //type: uint32
        ydk::YLeaf lsppktsautherr; //type: uint32
        ydk::YLeaf lsppktsmiscerr; //type: uint32

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf lastactive; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf operprio; //type: uint16
        ydk::YLeaf key; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf switchingst; //type: L1SwitchingSt
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

        ydk::YLeaf ossum; //type: NwOSSum
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
        ydk::YLeaf createsig; //type: uint32
        ydk::YLeaf lastlinkstchg; //type: string

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf fragments; //type: uint64
        ydk::YLeaf pkts64octets; //type: uint64
        ydk::YLeaf pkts65to127octets; //type: uint64
        ydk::YLeaf pkts128to255octets; //type: uint64
        ydk::YLeaf pkts256to511octets; //type: uint64
        ydk::YLeaf pkts512to1023octets; //type: uint64
        ydk::YLeaf pkts1024to1518octets; //type: uint64
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


class System::MitOperItems : public ydk::Entity
{
    public:
        MitOperItems();
        ~MitOperItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CommitMitItems; //type: System::MitOperItems::CommitMitItems
        class CopyMitItems; //type: System::MitOperItems::CopyMitItems
        class MitLockItems; //type: System::MitOperItems::MitLockItems
        class SessionLockItems; //type: System::MitOperItems::SessionLockItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MitOperItems::CommitMitItems> commitmit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MitOperItems::CopyMitItems> copymit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MitOperItems::MitLockItems> mitlock_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MitOperItems::SessionLockItems> sessionlock_items;
        
}; // System::MitOperItems


class System::MitOperItems::CommitMitItems : public ydk::Entity
{
    public:
        CommitMitItems();
        ~CommitMitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srctreeid; //type: uint32
        ydk::YLeaf commitopertype; //type: MitOperType
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf txnid; //type: string

}; // System::MitOperItems::CommitMitItems


class System::MitOperItems::CopyMitItems : public ydk::Entity
{
    public:
        CopyMitItems();
        ~CopyMitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srctreeid; //type: MitTreeType
        ydk::YLeaf dsttreeid; //type: MitTreeType

}; // System::MitOperItems::CopyMitItems


class System::MitOperItems::MitLockItems : public ydk::Entity
{
    public:
        MitLockItems();
        ~MitLockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MitLockList; //type: System::MitOperItems::MitLockItems::MitLockList

        ydk::YList mitlock_list;
        
}; // System::MitOperItems::MitLockItems


class System::MitOperItems::MitLockItems::MitLockList : public ydk::Entity
{
    public:
        MitLockList();
        ~MitLockList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf treeid; //type: uint32
        ydk::YLeaf lockstatus; //type: MitLockStatus
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf isforceunlock; //type: boolean

}; // System::MitOperItems::MitLockItems::MitLockList


class System::MitOperItems::SessionLockItems : public ydk::Entity
{
    public:
        SessionLockItems();
        ~SessionLockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionLockList; //type: System::MitOperItems::SessionLockItems::SessionLockList

        ydk::YList sessionlock_list;
        
}; // System::MitOperItems::SessionLockItems


class System::MitOperItems::SessionLockItems::SessionLockList : public ydk::Entity
{
    public:
        SessionLockList();
        ~SessionLockList();

        bool has_data() const override;
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
        ydk::YLeaf treeid; //type: uint32
        ydk::YLeaf lockstatus; //type: MitLockStatus
        ydk::YLeaf pid; //type: uint32

}; // System::MitOperItems::SessionLockItems::SessionLockList


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::SnmpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems> inst_items;
        
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

        ydk::YLeaf lastinitts; //type: string
        ydk::YLeaf engid; //type: string
        ydk::YLeaf defaultengid; //type: string
        ydk::YLeaf hiddenengid; //type: string
        ydk::YLeaf eventset; //type: uint32
        ydk::YLeaf defaulttrapsenablebit; //type: uint64
        ydk::YLeaf defaulttrapsdisablebit; //type: uint64
        ydk::YLeaf runconftrapsenablebit; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf contact; //type: string
        ydk::YLeaf loc; //type: string
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
        ydk::YLeaf operstqual; //type: string
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
        ydk::YLeaf operstqual; //type: string
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf commname; //type: string
        ydk::YLeaf notiftype; //type: SnmpNotificationType
        ydk::YLeaf version; //type: SnmpVersion
        ydk::YLeaf seclevel; //type: SnmpV3SecLvl
        ydk::YLeaf isduplicate; //type: boolean
        ydk::YLeaf duplicatehostname; //type: string
        ydk::YLeaf configstate; //type: SnmpHostConfigErrorType
        class UsevrfItems; //type: System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::HostItems::HostList::UsevrfItems> usevrf_items;
        
}; // System::SnmpItems::InstItems::HostItems::HostList


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

        ydk::YLeaf deleteevents; //type: boolean
        ydk::YLeaf deletealarms; //type: boolean
        class EventItems; //type: System::SnmpItems::InstItems::RmonItems::EventItems
        class AlarmItems; //type: System::SnmpItems::InstItems::RmonItems::AlarmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems::EventItems> event_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::RmonItems::AlarmItems> alarm_items;
        
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
        ydk::YLeaf alarmconfigerror; //type: SnmpAlarmConfigErrorType

}; // System::SnmpItems::InstItems::RmonItems::AlarmItems::AlarmList


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
        ydk::YLeaf commacess; //type: SnmpCommAcessT
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf descr; //type: string
        class AclItems; //type: System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems
        class RscommToCtxAttItems; //type: System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems> rscommtoctxatt_items;
        
}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList


class System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems : public ydk::Entity
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

        ydk::YLeaf useaclname; //type: string
        ydk::YLeaf useipv4aclname; //type: string
        ydk::YLeaf useipv6aclname; //type: string
        ydk::YLeaf configstatus; //type: SnmpCfgStatus

}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems


class System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems : public ydk::Entity
{
    public:
        RscommToCtxAttItems();
        ~RscommToCtxAttItems();

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
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf operstqual; //type: string

}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems


class System::SnmpItems::InstItems::UserItems : public ydk::Entity
{
    public:
        UserItems();
        ~UserItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UserSecPList; //type: System::SnmpItems::InstItems::UserItems::UserSecPList

        ydk::YList usersecp_list;
        
}; // System::SnmpItems::InstItems::UserItems


class System::SnmpItems::InstItems::UserItems::UserSecPList : public ydk::Entity
{
    public:
        UserSecPList();
        ~UserSecPList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthType
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivType
        ydk::YLeaf privkey; //type: string

}; // System::SnmpItems::InstItems::UserItems::UserSecPList


class System::SnmpItems::InstItems::CtxItems : public ydk::Entity
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

        class CtxList; //type: System::SnmpItems::InstItems::CtxItems::CtxList

        ydk::YList ctx_list;
        
}; // System::SnmpItems::InstItems::CtxItems


class System::SnmpItems::InstItems::CtxItems::CtxList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SnmpItems::InstItems::CtxItems::CtxList


class System::SnmpItems::InstItems::SysinfoItems : public ydk::Entity
{
    public:
        SysinfoItems();
        ~SysinfoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf syslocation; //type: string
        ydk::YLeaf syscontact; //type: string
        ydk::YLeaf sysdescription; //type: string

}; // System::SnmpItems::InstItems::SysinfoItems


class System::SnmpItems::InstItems::TrapsItems : public ydk::Entity
{
    public:
        TrapsItems();
        ~TrapsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enablealltriggercount; //type: uint16
        ydk::YLeaf enableallviacli; //type: boolean
        class StormcontrolItems; //type: System::SnmpItems::InstItems::TrapsItems::StormcontrolItems
        class AaaItems; //type: System::SnmpItems::InstItems::TrapsItems::AaaItems
        class BfdItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems
        class BridgeItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems
        class CallhomeItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems
        class CfsItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems
        class ConfigItems; //type: System::SnmpItems::InstItems::TrapsItems::ConfigItems
        class EntityItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems
        class FeaturecontrolItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems
        class HsrpItems; //type: System::SnmpItems::InstItems::TrapsItems::HsrpItems
        class GenericItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems
        class IpItems; //type: System::SnmpItems::InstItems::TrapsItems::IpItems
        class LicenseItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems
        class PoeItems; //type: System::SnmpItems::InstItems::TrapsItems::PoeItems
        class LinkItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems
        class LldpItems; //type: System::SnmpItems::InstItems::TrapsItems::LldpItems
        class MsdpItems; //type: System::SnmpItems::InstItems::TrapsItems::MsdpItems
        class MmodeItems; //type: System::SnmpItems::InstItems::TrapsItems::MmodeItems
        class PimItems; //type: System::SnmpItems::InstItems::TrapsItems::PimItems
        class RfItems; //type: System::SnmpItems::InstItems::TrapsItems::RfItems
        class RmonItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems
        class SnmpItems_; //type: System::SnmpItems::InstItems::TrapsItems::SnmpItems_
        class StpxItems; //type: System::SnmpItems::InstItems::TrapsItems::StpxItems
        class SysmgrItems; //type: System::SnmpItems::InstItems::TrapsItems::SysmgrItems
        class SystemItems; //type: System::SnmpItems::InstItems::TrapsItems::SystemItems
        class UpgradeItems; //type: System::SnmpItems::InstItems::TrapsItems::UpgradeItems
        class VsanItems; //type: System::SnmpItems::InstItems::TrapsItems::VsanItems
        class VtpItems; //type: System::SnmpItems::InstItems::TrapsItems::VtpItems
        class PortsecurityItems; //type: System::SnmpItems::InstItems::TrapsItems::PortsecurityItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StormcontrolItems> stormcontrol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::AaaItems> aaa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems> bridge_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems> callhome_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems> cfs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::ConfigItems> config_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems> entity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems> featurecontrol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::HsrpItems> hsrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems> generic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems> license_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PoeItems> poe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems> link_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LldpItems> lldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MsdpItems> msdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MmodeItems> mmode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RfItems> rf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems> rmon_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SnmpItems_> snmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StpxItems> stpx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SysmgrItems> sysmgr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SystemItems> system_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::UpgradeItems> upgrade_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VtpItems> vtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PortsecurityItems> portsecurity_items;
        
}; // System::SnmpItems::InstItems::TrapsItems


class System::SnmpItems::InstItems::TrapsItems::StormcontrolItems : public ydk::Entity
{
    public:
        StormcontrolItems();
        ~StormcontrolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf traprate; //type: uint16
        class CpscEventRev1Items; //type: System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items> cpsceventrev1_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::StormcontrolItems


class System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items : public ydk::Entity
{
    public:
        CpscEventRev1Items();
        ~CpscEventRev1Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items


class System::SnmpItems::InstItems::TrapsItems::AaaItems : public ydk::Entity
{
    public:
        AaaItems();
        ~AaaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enableviacli; //type: boolean
        class ServerstatechangeItems; //type: System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems> serverstatechange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::AaaItems


class System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems : public ydk::Entity
{
    public:
        ServerstatechangeItems();
        ~ServerstatechangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems : public ydk::Entity
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

        class SessiondownItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems
        class SessionupItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems> sessiondown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems> sessionup_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::BfdItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems : public ydk::Entity
{
    public:
        SessiondownItems();
        ~SessiondownItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems : public ydk::Entity
{
    public:
        SessionupItems();
        ~SessionupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems : public ydk::Entity
{
    public:
        BridgeItems();
        ~BridgeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NewrootItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems
        class TopologychangeItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems> newroot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems> topologychange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems : public ydk::Entity
{
    public:
        NewrootItems();
        ~NewrootItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems : public ydk::Entity
{
    public:
        TopologychangeItems();
        ~TopologychangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems : public ydk::Entity
{
    public:
        CallhomeItems();
        ~CallhomeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventnotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems
        class SmtpsendfailItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems> eventnotify_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems> smtpsendfail_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems : public ydk::Entity
{
    public:
        EventnotifyItems();
        ~EventnotifyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems : public ydk::Entity
{
    public:
        SmtpsendfailItems();
        ~SmtpsendfailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems : public ydk::Entity
{
    public:
        CfsItems();
        ~CfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StatechangenotifItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems
        class MergefailureItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems> statechangenotif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems> mergefailure_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::CfsItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems : public ydk::Entity
{
    public:
        StatechangenotifItems();
        ~StatechangenotifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems : public ydk::Entity
{
    public:
        MergefailureItems();
        ~MergefailureItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems


class System::SnmpItems::InstItems::TrapsItems::ConfigItems : public ydk::Entity
{
    public:
        ConfigItems();
        ~ConfigItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CcmCLIRunningConfigChangedItems; //type: System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems> ccmclirunningconfigchanged_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::ConfigItems


class System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems : public ydk::Entity
{
    public:
        CcmCLIRunningConfigChangedItems();
        ~CcmCLIRunningConfigChangedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems : public ydk::Entity
{
    public:
        EntityItems();
        ~EntityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EntitymibchangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems
        class EntitymodulestatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems
        class EntitypowerstatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems
        class EntitymoduleinsertedItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems
        class EntitymoduleremovedItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems
        class EntityunrecognisedmoduleItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems
        class EntityfanstatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems
        class EntitypoweroutchangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems
        class EntitysensorItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems
        class CefcMIBEnableStatusNotificationItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems> entitymibchange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems> entitymodulestatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems> entitypowerstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems> entitymoduleinserted_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems> entitymoduleremoved_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems> entityunrecognisedmodule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems> entityfanstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems> entitypoweroutchange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems> entitysensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems> cefcmibenablestatusnotification_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::EntityItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems : public ydk::Entity
{
    public:
        EntitymibchangeItems();
        ~EntitymibchangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems : public ydk::Entity
{
    public:
        EntitymodulestatuschangeItems();
        ~EntitymodulestatuschangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems : public ydk::Entity
{
    public:
        EntitypowerstatuschangeItems();
        ~EntitypowerstatuschangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems : public ydk::Entity
{
    public:
        EntitymoduleinsertedItems();
        ~EntitymoduleinsertedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems : public ydk::Entity
{
    public:
        EntitymoduleremovedItems();
        ~EntitymoduleremovedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems : public ydk::Entity
{
    public:
        EntityunrecognisedmoduleItems();
        ~EntityunrecognisedmoduleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems : public ydk::Entity
{
    public:
        EntityfanstatuschangeItems();
        ~EntityfanstatuschangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems : public ydk::Entity
{
    public:
        EntitypoweroutchangeItems();
        ~EntitypoweroutchangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems : public ydk::Entity
{
    public:
        EntitysensorItems();
        ~EntitysensorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems : public ydk::Entity
{
    public:
        CefcMIBEnableStatusNotificationItems();
        ~CefcMIBEnableStatusNotificationItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems : public ydk::Entity
{
    public:
        FeaturecontrolItems();
        ~FeaturecontrolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FeatureOpStatusChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems
        class CiscoFeatOpStatusChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems> featureopstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems> ciscofeatopstatuschange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems : public ydk::Entity
{
    public:
        FeatureOpStatusChangeItems();
        ~FeatureOpStatusChangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems : public ydk::Entity
{
    public:
        CiscoFeatOpStatusChangeItems();
        ~CiscoFeatOpStatusChangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems


class System::SnmpItems::InstItems::TrapsItems::HsrpItems : public ydk::Entity
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

        class StatechangeItems; //type: System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems> statechange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::HsrpItems


class System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems : public ydk::Entity
{
    public:
        StatechangeItems();
        ~StatechangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems : public ydk::Entity
{
    public:
        GenericItems();
        ~GenericItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ColdStartItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems
        class WarmStartItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems> coldstart_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems> warmstart_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::GenericItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems : public ydk::Entity
{
    public:
        ColdStartItems();
        ~ColdStartItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems : public ydk::Entity
{
    public:
        WarmStartItems();
        ~WarmStartItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems


class System::SnmpItems::InstItems::TrapsItems::IpItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SlaItems; //type: System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems> sla_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::IpItems


class System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems : public ydk::Entity
{
    public:
        SlaItems();
        ~SlaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_21_ */

