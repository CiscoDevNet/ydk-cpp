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


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems : public ydk::Entity
{
    public:
        PeerlinkItems();
        ~PeerlinkItems();

        bool has_data() const override;
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
        ydk::YLeaf id; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class RtvrfMbrItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RtNwPathToIfList; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems::InstItems::DomItems::ParamsItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AppParamsList; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList

        ydk::YList appparams_list;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList : public ydk::Entity
{
    public:
        AppParamsList();
        ~AppParamsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appid; //type: uint32
        ydk::YLeaf locrsncode; //type: uint32
        ydk::YLeaf locparamlen; //type: uint32
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remrsncode; //type: uint32
        ydk::YLeaf remparamlen; //type: uint32
        ydk::YLeaf remparamval; //type: string
        class ParamItems; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems> param_items;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems : public ydk::Entity
{
    public:
        ParamItems();
        ~ParamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AppParamInfoList; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList

        ydk::YList appparaminfo_list;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList : public ydk::Entity
{
    public:
        AppParamInfoList();
        ~AppParamInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paramname; //type: string
        ydk::YLeaf paramtype; //type: VpcParamType
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remparamval; //type: string

}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList


class System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems : public ydk::Entity
{
    public:
        RsvpcInstPolConsItems();
        ~RsvpcInstPolConsItems();

        bool has_data() const override;
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
        ydk::YLeaf protgep; //type: string

}; // System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems


class System::EpnsItems : public ydk::Entity
{
    public:
        EpnsItems();
        ~EpnsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf epcount; //type: uint32

}; // System::EpnsItems


class System::GoldItems : public ydk::Entity
{
    public:
        GoldItems();
        ~GoldItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        class ModuleItems; //type: System::GoldItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GoldItems::ModuleItems> module_items;
        
}; // System::GoldItems


class System::GoldItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleList; //type: System::GoldItems::ModuleItems::ModuleList

        ydk::YList module_list;
        
}; // System::GoldItems::ModuleItems


class System::GoldItems::ModuleItems::ModuleList : public ydk::Entity
{
    public:
        ModuleList();
        ~ModuleList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf diagbootlevel; //type: GoldBootLevel
        ydk::YLeaf diagstatus; //type: GoldModuleDiagStatus
        class TestItems; //type: System::GoldItems::ModuleItems::ModuleList::TestItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GoldItems::ModuleItems::ModuleList::TestItems> test_items;
        
}; // System::GoldItems::ModuleItems::ModuleList


class System::GoldItems::ModuleItems::ModuleList::TestItems : public ydk::Entity
{
    public:
        TestItems();
        ~TestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestList; //type: System::GoldItems::ModuleItems::ModuleList::TestItems::TestList

        ydk::YList test_list;
        
}; // System::GoldItems::ModuleItems::ModuleList::TestItems


class System::GoldItems::ModuleItems::ModuleList::TestItems::TestList : public ydk::Entity
{
    public:
        TestList();
        ~TestList();

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
        ydk::YLeaf firstfailtime; //type: string
        ydk::YLeaf lastfailtime; //type: string
        ydk::YLeaf lastexecutiontime; //type: string
        ydk::YLeaf lastpasstime; //type: string
        ydk::YLeaf nextexecutiontime; //type: string
        ydk::YLeaf result; //type: GoldResult
        ydk::YLeaf resultreason; //type: string
        ydk::YLeaf runcount; //type: uint32
        ydk::YLeaf failcount; //type: uint32
        ydk::YLeaf consecutivefailcount; //type: uint32
        ydk::YLeaf portsaborted; //type: string
        ydk::YLeaf portserrordisabled; //type: string
        ydk::YLeaf portsfailing; //type: string
        ydk::YLeaf portsincomplete; //type: string
        ydk::YLeaf portspassing; //type: string
        ydk::YLeaf portsuntested; //type: string
        ydk::YLeaf testattributes; //type: string
        ydk::YLeaf testinterval; //type: string

}; // System::GoldItems::ModuleItems::ModuleList::TestItems::TestList


class System::IgmpItems : public ydk::Entity
{
    public:
        IgmpItems();
        ~IgmpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::IgmpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems> inst_items;
        
}; // System::IgmpItems


class System::IgmpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf heavytemplate; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf instctrl; //type: string
        ydk::YLeaf bootupdelay; //type: uint16
        ydk::YLeaf flushroute; //type: boolean
        ydk::YLeaf rtralert; //type: boolean
        ydk::YLeaf anyquerydest; //type: boolean
        class ExtdomItems; //type: System::IgmpItems::InstItems::ExtdomItems
        class DomItems; //type: System::IgmpItems::InstItems::DomItems
        class RoutedbItems; //type: System::IgmpItems::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems> extdom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems> routedb_items;
        
}; // System::IgmpItems::InstItems


class System::IgmpItems::InstItems::ExtdomItems : public ydk::Entity
{
    public:
        ExtdomItems();
        ~ExtdomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExtDomList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList

        ydk::YList extdom_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList : public ydk::Entity
{
    public:
        ExtDomList();
        ~ExtDomList();

        bool has_data() const override;
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
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        class ExtifItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems> extif_items;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems : public ydk::Entity
{
    public:
        ExtifItems();
        ~ExtifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIfList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList : public ydk::Entity
{
    public:
        ExtIfList();
        ~ExtIfList();

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
        class RtvrfMbrItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::IgmpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::IgmpItems::InstItems::DomItems


class System::IgmpItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems
        class EventHistItems; //type: System::IgmpItems::InstItems::DomItems::DomList::EventHistItems
        class IfItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems
        class SsmxlateItems; //type: System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems> ssmxlate_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IgmpDbT
        ydk::YLeaf name; //type: string
        class SrcItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems> src_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems : public ydk::Entity
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

        class RouteList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList

        ydk::YList route_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList : public ydk::Entity
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
        class OifItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems> oif_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems : public ydk::Entity
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

        class OifList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList : public ydk::Entity
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
        ydk::YLeaf expiryts; //type: one of uint64, string
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf lastrep; //type: string
        ydk::YLeaf type; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList


class System::IgmpItems::InstItems::DomItems::DomList::EventHistItems : public ydk::Entity
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

        class EventHistoryList; //type: System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::EventHistItems


class System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList : public ydk::Entity
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

        ydk::YLeaf type; //type: IgmpEhType
        ydk::YLeaf size; //type: uint32

}; // System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf ifctrl; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf actquer; //type: string
        ydk::YLeaf nextquertime; //type: one of uint64, string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf entrycount; //type: uint32
        ydk::YLeaf stentrycount; //type: uint32
        ydk::YLeaf querexpiry; //type: one of uint64, string
        ydk::YLeaf reportll; //type: boolean
        ydk::YLeaf immediateleave; //type: boolean
        ydk::YLeaf allowv3asm; //type: boolean
        class IfStatsItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems
        class JointypeItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems
        class LimitItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems
        class ReppolItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems
        class StreppolItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems
        class QuerierpItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems
        class RtvrfMbrItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems> jointype_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems> limit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems> reppol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems> streppol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems> querierp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems : public ydk::Entity
{
    public:
        IfStatsItems();
        ~IfStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v2quersent; //type: uint32
        ydk::YLeaf v2querrcvd; //type: uint32
        ydk::YLeaf v3quersent; //type: uint32
        ydk::YLeaf v3querrcvd; //type: uint32
        ydk::YLeaf v2rprtsent; //type: uint32
        ydk::YLeaf v2rprtrcvd; //type: uint32
        ydk::YLeaf v3rprtsent; //type: uint32
        ydk::YLeaf v3rprtrcvd; //type: uint32
        ydk::YLeaf v2leavesent; //type: uint32
        ydk::YLeaf v2leavercvd; //type: uint32

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems : public ydk::Entity
{
    public:
        JointypeItems();
        ~JointypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinTypeList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList

        ydk::YList jointype_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList : public ydk::Entity
{
    public:
        JoinTypeList();
        ~JoinTypeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IpmcJoinType
        class VerItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems> ver_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems : public ydk::Entity
{
    public:
        VerItems();
        ~VerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VersionList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList

        ydk::YList version_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList : public ydk::Entity
{
    public:
        VersionList();
        ~VersionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: IpmcVer
        class GroupItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems> group_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList : public ydk::Entity
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

        ydk::YLeaf grp; //type: string
        ydk::YLeaf usestaticoif; //type: boolean
        class SourceItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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

        ydk::YLeaf src; //type: string
        ydk::YLeaf usestaticoif; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems : public ydk::Entity
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

        ydk::YLeaf rsvdentries; //type: IgmpLimitSt
        ydk::YLeaf regentries; //type: IgmpLimitSt
        ydk::YLeaf availrsvdentries; //type: uint32
        ydk::YLeaf availregentries; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf rsvd; //type: uint32
        ydk::YLeaf rtmap; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems : public ydk::Entity
{
    public:
        ReppolItems();
        ~ReppolItems();

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
        ydk::YLeaf useaccessgrpcommand; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems : public ydk::Entity
{
    public:
        StreppolItems();
        ~StreppolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StRepPList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList

        ydk::YList strepp_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList : public ydk::Entity
{
    public:
        StRepPList();
        ~StRepPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jointype; //type: IpmcJoinType
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf useaccessgrpcommand; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems : public ydk::Entity
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
        ydk::YLeaf queriertimeout; //type: uint16
        ydk::YLeaf lastmbrcnt; //type: uint16
        ydk::YLeaf lastmbrresptime; //type: uint16

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems : public ydk::Entity
{
    public:
        SsmxlateItems();
        ~SsmxlateItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SSMXlateList; //type: System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList

        ydk::YList ssmxlate_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems


class System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList : public ydk::Entity
{
    public:
        SSMXlateList();
        ~SSMXlateList();

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
        ydk::YLeaf grppfx; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList


class System::IgmpItems::InstItems::RoutedbItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: RtdmcDbT
        class VrfItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems> vrf_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList : public ydk::Entity
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
        class GroupItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
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

        class RouteGroupList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList

        ydk::YList routegroup_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList : public ydk::Entity
{
    public:
        RouteGroupList();
        ~RouteGroupList();

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
        class SourceItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems> source_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems : public ydk::Entity
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

        class RouteSourceList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList

        ydk::YList routesource_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList : public ydk::Entity
{
    public:
        RouteSourceList();
        ~RouteSourceList();

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
        ydk::YLeaf oifcount; //type: uint32
        class OifItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems> oif_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems : public ydk::Entity
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

        class RouteOifList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList

        ydk::YList routeoif_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList : public ydk::Entity
{
    public:
        RouteOifList();
        ~RouteOifList();

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
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf static_; //type: boolean
        ydk::YLeaf hostproxy; //type: boolean
        ydk::YLeaf uptime; //type: one of uint64, string
        ydk::YLeaf expiryts; //type: one of uint64, string
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf lastrep; //type: string
        ydk::YLeaf type; //type: string

}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList


class System::CtrlrfwstatuscontItems : public ydk::Entity
{
    public:
        CtrlrfwstatuscontItems();
        ~CtrlrfwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CtrlrrunningItems; //type: System::CtrlrfwstatuscontItems::CtrlrrunningItems
        class UpgjobItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::CtrlrrunningItems> ctrlrrunning_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems> upgjob_items;
        
}; // System::CtrlrfwstatuscontItems


class System::CtrlrfwstatuscontItems::CtrlrrunningItems : public ydk::Entity
{
    public:
        CtrlrrunningItems();
        ~CtrlrrunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::CtrlrfwstatuscontItems::CtrlrrunningItems


class System::CtrlrfwstatuscontItems::UpgjobItems : public ydk::Entity
{
    public:
        UpgjobItems();
        ~UpgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf grpprikey; //type: string
        ydk::YLeaf internallabel; //type: string
        class NodeItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems
        class UpgjobfaultItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems> upgjobfault_items;
        
}; // System::CtrlrfwstatuscontItems::UpgjobItems


class System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class NodeInMaintList; //type: System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList

        ydk::YList nodeinmaint_list;
        
}; // System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems


class System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList : public ydk::Entity
{
    public:
        NodeInMaintList();
        ~NodeInMaintList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nodeid; //type: uint32
        ydk::YLeaf windowstarttime; //type: one of uint64, string
        ydk::YLeaf windowtimecap; //type: one of uint64, string

}; // System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList


class System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems : public ydk::Entity
{
    public:
        UpgjobfaultItems();
        ~UpgjobfaultItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf faultdelegatekey; //type: string

}; // System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems


class System::FwstatuscontItems : public ydk::Entity
{
    public:
        FwstatuscontItems();
        ~FwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RunningItems; //type: System::FwstatuscontItems::RunningItems
        class UpgjobItems; //type: System::FwstatuscontItems::UpgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems> upgjob_items;
        
}; // System::FwstatuscontItems


class System::FwstatuscontItems::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pever; //type: string
        ydk::YLeaf biosver; //type: string
        ydk::YLeaf biosts; //type: one of uint64, string
        ydk::YLeaf ksfile; //type: string
        ydk::YLeaf sysfile; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::FwstatuscontItems::RunningItems


class System::FwstatuscontItems::UpgjobItems : public ydk::Entity
{
    public:
        UpgjobItems();
        ~UpgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf grpprikey; //type: string
        ydk::YLeaf internallabel; //type: string
        class NodeItems; //type: System::FwstatuscontItems::UpgjobItems::NodeItems
        class UpgjobfaultItems; //type: System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems> upgjobfault_items;
        
}; // System::FwstatuscontItems::UpgjobItems


class System::FwstatuscontItems::UpgjobItems::NodeItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class NodeInMaintList; //type: System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList

        ydk::YList nodeinmaint_list;
        
}; // System::FwstatuscontItems::UpgjobItems::NodeItems


class System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList : public ydk::Entity
{
    public:
        NodeInMaintList();
        ~NodeInMaintList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nodeid; //type: uint32
        ydk::YLeaf windowstarttime; //type: one of uint64, string
        ydk::YLeaf windowtimecap; //type: one of uint64, string

}; // System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList


class System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems : public ydk::Entity
{
    public:
        UpgjobfaultItems();
        ~UpgjobfaultItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf faultdelegatekey; //type: string

}; // System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems


class System::CatfwstatuscontItems : public ydk::Entity
{
    public:
        CatfwstatuscontItems();
        ~CatfwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CatupgjobItems; //type: System::CatfwstatuscontItems::CatupgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CatfwstatuscontItems::CatupgjobItems> catupgjob_items;
        
}; // System::CatfwstatuscontItems


class System::CatfwstatuscontItems::CatupgjobItems : public ydk::Entity
{
    public:
        CatupgjobItems();
        ~CatupgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // System::CatfwstatuscontItems::CatupgjobItems


class System::IsisItems : public ydk::Entity
{
    public:
        IsisItems();
        ~IsisItems();

        bool has_data() const override;
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
        class InstItems; //type: System::IsisItems::InstItems
        class SyslogItems; //type: System::IsisItems::SyslogItems
        class IfItems; //type: System::IsisItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems> if_items;
        
}; // System::IsisItems


class System::IsisItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::IsisItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::IsisItems::InstItems


class System::IsisItems::InstItems::InstList : public ydk::Entity
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
        ydk::YLeaf operst; //type: IsisOperSt
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf isolate; //type: boolean
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::IsisItems::InstItems::InstList::DomItems
        class EvthstryItems; //type: System::IsisItems::InstItems::InstList::EvthstryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::EvthstryItems> evthstry_items;
        
}; // System::IsisItems::InstItems::InstList


class System::IsisItems::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems


class System::IsisItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf net; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: IsisBwRefUnit
        ydk::YLeaf metricstyle; //type: IsisMetricStyle
        ydk::YLeaf istype; //type: IsisIsT
        ydk::YLeaf lsplifetime; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf passivedflt; //type: IsisPassiveT
        ydk::YLeaf operst; //type: IsisOperSt
        class DbItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems
        class OverloadItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems
        class LvlItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems
        class AfItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems
        class DistrlsItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems
        class FmtreeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems
        class GrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems
        class DefrtleakItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems> overload_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DistrlsItems> distrls_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems> fmtree_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems> defrtleak_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisDbT
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems
        class LspItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems
        class NhItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems
        class RtItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems
        class DtepItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems> lsp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems> dtep_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems : public ydk::Entity
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

        class GrpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList

        ydk::YList grprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList : public ydk::Entity
{
    public:
        GrpRecList();
        ~GrpRecList();

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
        class FtagoifItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems
        class BdItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems> ftagoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems : public ydk::Entity
{
    public:
        FtagoifItems();
        ~FtagoifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FtagOifRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList

        ydk::YList ftagoifrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList : public ydk::Entity
{
    public:
        FtagOifRecList();
        ~FtagOifRecList();

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
        ydk::YLeaf name; //type: string
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems : public ydk::Entity
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

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems : public ydk::Entity
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

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems : public ydk::Entity
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

        class BdIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList

        ydk::YList bdidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList : public ydk::Entity
{
    public:
        BdIdRecList();
        ~BdIdRecList();

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
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems : public ydk::Entity
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

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems : public ydk::Entity
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

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems : public ydk::Entity
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

        class NodeRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList

        ydk::YList noderec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList : public ydk::Entity
{
    public:
        NodeRecList();
        ~NodeRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems> grp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems : public ydk::Entity
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

        class GrpIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList

        ydk::YList grpidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList : public ydk::Entity
{
    public:
        GrpIdRecList();
        ~GrpIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems : public ydk::Entity
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

        class LspRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList

        ydk::YList lsprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList : public ydk::Entity
{
    public:
        LspRecList();
        ~LspRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf lanid; //type: uint8
        ydk::YLeaf frag; //type: uint8
        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf name; //type: string
        class ExtisrecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems
        class TlvRecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems
        class IprecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems> extisrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems> tlvrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems> iprec_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems : public ydk::Entity
{
    public:
        ExtisrecItems();
        ~ExtisrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIsRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList

        ydk::YList extisrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList : public ydk::Entity
{
    public:
        ExtIsRecList();
        ~ExtIsRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems : public ydk::Entity
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

        class TlvRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList

        ydk::YList tlvrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems : public ydk::Entity
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

        class IpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList

        ydk::YList iprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems : public ydk::Entity
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

        class NexthopList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        class RsnhAttItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems> rsnhatt_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems : public ydk::Entity
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

        class RsNhAttList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList

        ydk::YList rsnhatt_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems : public ydk::Entity
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

        class DTEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList

        ydk::YList dtep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems : public ydk::Entity
{
    public:
        OverloadItems();
        ~OverloadItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: IsisOverloadAdminSt
        ydk::YLeaf startuptime; //type: uint32
        ydk::YLeaf bgpasnum; //type: uint16
        ydk::YLeaf suppress; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems : public ydk::Entity
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

        class DomLvlList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList

        ydk::YList domlvl_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList : public ydk::Entity
{
    public:
        DomLvlList();
        ~DomLvlList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        class DbItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems
        class LspgenItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems
        class SpfcompItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems> lspgen_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems> spfcomp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisDbT
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems
        class LspItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems
        class NhItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems
        class RtItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems
        class DtepItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems> lsp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems> dtep_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems : public ydk::Entity
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

        class GrpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList

        ydk::YList grprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList : public ydk::Entity
{
    public:
        GrpRecList();
        ~GrpRecList();

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
        class FtagoifItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems
        class BdItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems> ftagoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems : public ydk::Entity
{
    public:
        FtagoifItems();
        ~FtagoifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FtagOifRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList

        ydk::YList ftagoifrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList : public ydk::Entity
{
    public:
        FtagOifRecList();
        ~FtagOifRecList();

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
        ydk::YLeaf name; //type: string
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems : public ydk::Entity
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

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems : public ydk::Entity
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

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems : public ydk::Entity
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

        class BdIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList

        ydk::YList bdidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList : public ydk::Entity
{
    public:
        BdIdRecList();
        ~BdIdRecList();

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
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems : public ydk::Entity
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

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems : public ydk::Entity
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

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems : public ydk::Entity
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

        class NodeRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList

        ydk::YList noderec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList : public ydk::Entity
{
    public:
        NodeRecList();
        ~NodeRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems> grp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems : public ydk::Entity
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

        class GrpIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList

        ydk::YList grpidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList : public ydk::Entity
{
    public:
        GrpIdRecList();
        ~GrpIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems : public ydk::Entity
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

        class LspRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList

        ydk::YList lsprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList : public ydk::Entity
{
    public:
        LspRecList();
        ~LspRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf lanid; //type: uint8
        ydk::YLeaf frag; //type: uint8
        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf name; //type: string
        class ExtisrecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems
        class TlvRecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems
        class IprecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems> extisrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems> tlvrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems> iprec_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems : public ydk::Entity
{
    public:
        ExtisrecItems();
        ~ExtisrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIsRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList

        ydk::YList extisrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList : public ydk::Entity
{
    public:
        ExtIsRecList();
        ~ExtIsRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList


}
}

#endif /* _CISCO_NX_OS_DEVICE_19_ */

