#ifndef _CISCO_NX_OS_DEVICE_22_
#define _CISCO_NX_OS_DEVICE_22_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_21.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::NatItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::NatItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::NatItems::InstItems::DomItems


class System::NatItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf encap; //type: string
        class IfItems; //type: System::NatItems::InstItems::DomItems::DomList::IfItems
        class XlateItems; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems
        class NataliasItems; //type: System::NatItems::InstItems::DomItems::DomList::NataliasItems
        class ProtoItems; //type: System::NatItems::InstItems::DomItems::DomList::ProtoItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::XlateItems> xlate_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::NataliasItems> natalias_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::ProtoItems> proto_items;
        
}; // System::NatItems::InstItems::DomItems::DomList


class System::NatItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::NatItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::IfItems


class System::NatItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf natif; //type: NatNatTrafficDir
        ydk::YLeaf configerrif; //type: NatConfigErrNat
        class RtvrfMbrItems; //type: System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::NatItems::InstItems::DomItems::DomList::IfItems::IfList


class System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::NatItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::NatItems::InstItems::DomItems::DomList::XlateItems : public ydk::Entity
{
    public:
        XlateItems();
        ~XlateItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpNatList; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList

        ydk::YList ipnat_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::XlateItems


class System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList : public ydk::Entity
{
    public:
        IpNatList();
        ~IpNatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf xlatetype; //type: NatInterfaceType
        class ProtocolItems; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems
        class ListItems; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems> protocol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems> list_items;
        
}; // System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList


class System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems : public ydk::Entity
{
    public:
        ProtocolItems();
        ~ProtocolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticNatList; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList

        ydk::YList staticnat_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems


class System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList : public ydk::Entity
{
    public:
        StaticNatList();
        ~StaticNatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: NatProtocolType
        ydk::YLeaf localip; //type: string
        ydk::YLeaf localport; //type: uint32
        ydk::YLeaf globalip; //type: string
        ydk::YLeaf globalport; //type: uint32
        ydk::YLeaf noalias; //type: boolean
        ydk::YLeaf configerrstaticnat; //type: NatConfigErrNat
        ydk::YLeaf groupid; //type: uint32
        ydk::YLeaf dynamic; //type: boolean
        ydk::YLeaf matchinvrf; //type: boolean
        ydk::YLeaf addroute; //type: boolean

}; // System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ProtocolItems::StaticNatList


class System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems : public ydk::Entity
{
    public:
        ListItems();
        ~ListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicNatList; //type: System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList

        ydk::YList dynamicnat_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems


class System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList : public ydk::Entity
{
    public:
        DynamicNatList();
        ~DynamicNatList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aclname; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf poolname; //type: string
        ydk::YLeaf overload; //type: boolean
        ydk::YLeaf configerrdynamicnat; //type: NatConfigErrNat
        ydk::YLeaf groupid; //type: uint32
        ydk::YLeaf dynamic; //type: boolean
        ydk::YLeaf matchinvrf; //type: boolean
        ydk::YLeaf addroute; //type: boolean

}; // System::NatItems::InstItems::DomItems::DomList::XlateItems::IpNatList::ListItems::DynamicNatList


class System::NatItems::InstItems::DomItems::DomList::NataliasItems : public ydk::Entity
{
    public:
        NataliasItems();
        ~NataliasItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpNatAliasList; //type: System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList

        ydk::YList ipnatalias_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::NataliasItems


class System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList : public ydk::Entity
{
    public:
        IpNatAliasList();
        ~IpNatAliasList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf interfacename; //type: string

}; // System::NatItems::InstItems::DomItems::DomList::NataliasItems::IpNatAliasList


class System::NatItems::InstItems::DomItems::DomList::ProtoItems : public ydk::Entity
{
    public:
        ProtoItems();
        ~ProtoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TranslationDbList; //type: System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList

        ydk::YList translationdb_list;
        
}; // System::NatItems::InstItems::DomItems::DomList::ProtoItems


class System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList : public ydk::Entity
{
    public:
        TranslationDbList();
        ~TranslationDbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: string
        ydk::YLeaf insideglobaladdress; //type: string
        ydk::YLeaf insideglobalport; //type: uint32
        ydk::YLeaf insidelocaladdress; //type: string
        ydk::YLeaf insidelocalport; //type: uint32
        ydk::YLeaf outsidelocaladdress; //type: string
        ydk::YLeaf outsidelocalport; //type: uint32
        ydk::YLeaf outsideglobaladdress; //type: string
        ydk::YLeaf outsideglobalport; //type: uint32
        ydk::YLeaf groupid; //type: uint32
        ydk::YLeaf entryid; //type: uint32
        ydk::YLeaf instats; //type: uint32
        ydk::YLeaf outstats; //type: uint32
        ydk::YLeaf timeleft; //type: uint32
        ydk::YLeaf syntimer; //type: uint32
        ydk::YLeaf fintimer; //type: uint32

}; // System::NatItems::InstItems::DomItems::DomList::ProtoItems::TranslationDbList


class System::NatItems::InstItems::PoolItems : public ydk::Entity
{
    public:
        PoolItems();
        ~PoolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PoolList; //type: System::NatItems::InstItems::PoolItems::PoolList

        ydk::YList pool_list;
        
}; // System::NatItems::InstItems::PoolItems


class System::NatItems::InstItems::PoolItems::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf poolname; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf prefixlen; //type: uint32
        ydk::YLeaf noalias; //type: boolean
        class StartipItems; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems::PoolList::StartipItems> startip_items;
        
}; // System::NatItems::InstItems::PoolItems::PoolList


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems : public ydk::Entity
{
    public:
        StartipItems();
        ~StartipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoolAddressList; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList

        ydk::YList pooladdress_list;
        
}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList : public ydk::Entity
{
    public:
        PoolAddressList();
        ~PoolAddressList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf startip; //type: string
        ydk::YLeaf endip; //type: string
        ydk::YLeaf configerr; //type: NatConfigErrNat
        ydk::YLeaf pooladdrdeleted; //type: boolean

}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList


class System::OdcreqItems : public ydk::Entity
{
    public:
        OdcreqItems();
        ~OdcreqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ODevCmdReqList; //type: System::OdcreqItems::ODevCmdReqList

        ydk::YList odevcmdreq_list;
        
}; // System::OdcreqItems


class System::OdcreqItems::ODevCmdReqList : public ydk::Entity
{
    public:
        ODevCmdReqList();
        ~ODevCmdReqList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf req; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcreqItems::ODevCmdReqList


class System::OdcrespItems : public ydk::Entity
{
    public:
        OdcrespItems();
        ~OdcrespItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ODevCmdRespList; //type: System::OdcrespItems::ODevCmdRespList

        ydk::YList odevcmdresp_list;
        
}; // System::OdcrespItems


class System::OdcrespItems::ODevCmdRespList : public ydk::Entity
{
    public:
        ODevCmdRespList();
        ~ODevCmdRespList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf resp; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcrespItems::ODevCmdRespList


class System::OspfItems : public ydk::Entity
{
    public:
        OspfItems();
        ~OspfItems();

        bool has_data() const override;
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
        class InstItems; //type: System::OspfItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems> inst_items;
        
}; // System::OspfItems


class System::OspfItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::OspfItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::OspfItems::InstItems


class System::OspfItems::InstItems::InstList : public ydk::Entity
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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        class DomItems; //type: System::OspfItems::InstItems::InstList::DomItems
        class EvtlogsItems; //type: System::OspfItems::InstItems::InstList::EvtlogsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::EvtlogsItems> evtlogs_items;
        
}; // System::OspfItems::InstItems::InstList


class System::OspfItems::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems


class System::OspfItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: OspfBwRefUnit
        ydk::YLeaf defmetric; //type: uint32
        ydk::YLeaf rfc1583compat; //type: boolean
        ydk::YLeaf adjchangeloglevel; //type: OspfAdjChangeLogLevel
        ydk::YLeaf operst; //type: OspfOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf opersrgbstart; //type: uint32
        ydk::YLeaf opersrgbend; //type: uint32
        ydk::YLeaf operstsgmntrtgmpls; //type: OspfSgmntRtgMplsOperSt
        ydk::YLeaf discardroute; //type: string
        ydk::YLeaf downbitignore; //type: boolean
        ydk::YLeaf capvrflite; //type: OspfVrfLiteControl
        class AreaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems
        class SpfcompItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems
        class LsactrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems
        class DomstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems
        class MaxlsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems
        class MaxmetriclsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems
        class InterleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems
        class LeakctrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems
        class RibleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems
        class ExtrtsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems> area_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems> spfcomp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems> lsactrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems> maxlsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems> maxmetriclsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems> leakctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems> ribleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems> extrtsum_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems> trstats_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems : public ydk::Entity
{
    public:
        AreaItems();
        ~AreaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList

        ydk::YList area_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList : public ydk::Entity
{
    public:
        AreaList();
        ~AreaList();

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
        ydk::YLeaf type; //type: OspfAreaT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf sgmntrtgmpls; //type: OspfSegRtControl
        ydk::YLeaf nssatransrole; //type: OspfNssaTransRole
        ydk::YLeaf brcnt; //type: uint32
        ydk::YLeaf asbrcnt; //type: uint32
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf nssatransst; //type: OspfNssaTransSt
        ydk::YLeaf nssatransstabintvl; //type: uint32
        ydk::YLeaf operstsgmntrtgmpls; //type: OspfSgmntRtgMplsOperSt
        ydk::YLeaf authtype; //type: OspfAuthT
        class AreastatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems
        class VlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems
        class SlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems
        class LsaleakpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems
        class LsaleakctrlpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems
        class IartsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems> areastats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems> vlink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems> slink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems> lsaleakp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems> lsaleakctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems> iartsum_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems : public ydk::Entity
{
    public:
        AreastatsItems();
        ~AreastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf areacreatedts; //type: one of uint64, string
        ydk::YLeaf spfruns; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf lastspfduration; //type: uint32
        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf activeifcnt; //type: uint32
        ydk::YLeaf passiveifcnt; //type: uint32
        ydk::YLeaf lpbkifcnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems : public ydk::Entity
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

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList : public ydk::Entity
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
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems : public ydk::Entity
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

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
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
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: one of uint64, string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string
        class RiItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems
        class EplItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems
        class EllItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems> ri_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems> epl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems> ell_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems : public ydk::Entity
{
    public:
        RiItems();
        ~RiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grrestartcap; //type: OspfCapFlag
        ydk::YLeaf grrestarthelpercap; //type: OspfCapFlag
        ydk::YLeaf stubroutercap; //type: OspfCapFlag
        ydk::YLeaf tecap; //type: OspfCapFlag
        ydk::YLeaf p2poverlancap; //type: OspfCapFlag
        ydk::YLeaf exptecap; //type: OspfCapFlag
        ydk::YLeaf sgmntrtgglobalrange; //type: uint32
        ydk::YLeaf sgmntrtgglobalrangestart; //type: uint32
        ydk::YLeaf sgmntrtglocalrange; //type: uint32
        ydk::YLeaf sgmntrtglocalrangestart; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::RiItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems : public ydk::Entity
{
    public:
        EplItems();
        ~EplItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtPfxRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList

        ydk::YList extpfxrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList : public ydk::Entity
{
    public:
        ExtPfxRecList();
        ~ExtPfxRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ippfx; //type: string
        ydk::YLeaf addressfamily; //type: uint16
        ydk::YLeaf routetype; //type: OspfPathT
        ydk::YLeaf pfxflags; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgPfxSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList

        ydk::YList sgmntrtgpfxsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList : public ydk::Entity
{
    public:
        SgmntRtgPfxSidRecList();
        ~SgmntRtgPfxSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgalgo; //type: uint16
        ydk::YLeaf sgmntrtgpfxsidflags; //type: string
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgalgoname; //type: string
        ydk::YLeaf sgmntrtgpfxsid; //type: int32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems : public ydk::Entity
{
    public:
        EllItems();
        ~EllItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf linktype; //type: OspfNwT
        ydk::YLeaf linkid; //type: string
        ydk::YLeaf linkdata; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgAdjSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList

        ydk::YList sgmntrtgadjsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList : public ydk::Entity
{
    public:
        SgmntRtgAdjSidRecList();
        ~SgmntRtgAdjSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgadjsidlabel; //type: uint32
        ydk::YLeaf adjsidtlvtype; //type: OspfAdjSidTlvType
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgweight; //type: uint16
        ydk::YLeaf sgmntrtgadjsidflags; //type: string
        ydk::YLeaf sgmntrtgadjsidnbrid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplssid; //type: uint32
        ydk::YLeaf sgmntrtgmplsinlabel; //type: uint32
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
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

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
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

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems : public ydk::Entity
{
    public:
        VlinkItems();
        ~VlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList

        ydk::YList vlink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList : public ydk::Entity
{
    public:
        VLinkList();
        ~VLinkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbrrtrid; //type: string
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsadjsidlabel; //type: uint32
        ydk::YLeaf sgmntrtgmplsadjsidflags; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
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
        ydk::YLeaf laststchgts; //type: one of uint64, string
        ydk::YLeaf lastnonhellopktts; //type: one of uint64, string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: one of uint64, string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems : public ydk::Entity
{
    public:
        SlinkItems();
        ~SlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList

        ydk::YList slink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList : public ydk::Entity
{
    public:
        SLinkList();
        ~SLinkList();

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
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf demandckt; //type: boolean
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems : public ydk::Entity
{
    public:
        LsaleakpItems();
        ~LsaleakpItems();

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
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems : public ydk::Entity
{
    public:
        LsaleakctrlpItems();
        ~LsaleakctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaLeakCtrlPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList

        ydk::YList lsaleakctrlp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList : public ydk::Entity
{
    public:
        LsaLeakCtrlPList();
        ~LsaLeakCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir; //type: RtleakRtCtrlDir
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems : public ydk::Entity
{
    public:
        IartsumItems();
        ~IartsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterAreaRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList

        ydk::YList interareartsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList : public ydk::Entity
{
    public:
        InterAreaRtSumList();
        ~InterAreaRtSumList();

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
        ydk::YLeaf cost; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
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
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems : public ydk::Entity
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

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
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
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: one of uint64, string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string
        class RiItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems
        class EplItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems
        class EllItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems> ri_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems> epl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems> ell_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems : public ydk::Entity
{
    public:
        RiItems();
        ~RiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grrestartcap; //type: OspfCapFlag
        ydk::YLeaf grrestarthelpercap; //type: OspfCapFlag
        ydk::YLeaf stubroutercap; //type: OspfCapFlag
        ydk::YLeaf tecap; //type: OspfCapFlag
        ydk::YLeaf p2poverlancap; //type: OspfCapFlag
        ydk::YLeaf exptecap; //type: OspfCapFlag
        ydk::YLeaf sgmntrtgglobalrange; //type: uint32
        ydk::YLeaf sgmntrtgglobalrangestart; //type: uint32
        ydk::YLeaf sgmntrtglocalrange; //type: uint32
        ydk::YLeaf sgmntrtglocalrangestart; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::RiItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems : public ydk::Entity
{
    public:
        EplItems();
        ~EplItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtPfxRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList

        ydk::YList extpfxrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList : public ydk::Entity
{
    public:
        ExtPfxRecList();
        ~ExtPfxRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ippfx; //type: string
        ydk::YLeaf addressfamily; //type: uint16
        ydk::YLeaf routetype; //type: OspfPathT
        ydk::YLeaf pfxflags; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgPfxSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList

        ydk::YList sgmntrtgpfxsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList : public ydk::Entity
{
    public:
        SgmntRtgPfxSidRecList();
        ~SgmntRtgPfxSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgalgo; //type: uint16
        ydk::YLeaf sgmntrtgpfxsidflags; //type: string
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgalgoname; //type: string
        ydk::YLeaf sgmntrtgpfxsid; //type: int32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems : public ydk::Entity
{
    public:
        EllItems();
        ~EllItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf linktype; //type: OspfNwT
        ydk::YLeaf linkid; //type: string
        ydk::YLeaf linkdata; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgAdjSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList

        ydk::YList sgmntrtgadjsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList : public ydk::Entity
{
    public:
        SgmntRtgAdjSidRecList();
        ~SgmntRtgAdjSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgadjsidlabel; //type: uint32
        ydk::YLeaf adjsidtlvtype; //type: OspfAdjSidTlvType
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgweight; //type: uint16
        ydk::YLeaf sgmntrtgadjsidflags; //type: string
        ydk::YLeaf sgmntrtgadjsidnbrid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplssid; //type: uint32
        ydk::YLeaf sgmntrtgmplsinlabel; //type: uint32
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
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

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
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

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems : public ydk::Entity
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
        ydk::YLeaf laststatsclearts; //type: one of uint64, string
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf extlsacnt; //type: uint32
        ydk::YLeaf opaqueaslsacnt; //type: uint32
        ydk::YLeaf totalaslsacnt; //type: uint32
        ydk::YLeaf newlsarxcnt; //type: uint32
        ydk::YLeaf newlsatxcnt; //type: uint32
        ydk::YLeaf areabdrrtr; //type: uint8
        ydk::YLeaf asbdrrtr; //type: uint8

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf nodeflag; //type: OspfFlagStatus
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
        ydk::YLeaf operdeadintvl; //type: uint32
        ydk::YLeaf opersidindex; //type: int32
        ydk::YLeaf sgmntrtgmplselllsid; //type: string
        ydk::YLeaf explicitnull; //type: OspfActive
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint32
        ydk::YLeaf rexmitintvl; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class AuthItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems
        class IfstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems
        class MultiareaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtospfIfDefToOspfIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems
        class RtvrfMbrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems> authnew_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems> multiarea_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems> rtospfifdeftoospfif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsadjsidlabel; //type: uint32
        ydk::YLeaf sgmntrtgmplsadjsidflags; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
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
        ydk::YLeaf laststchgts; //type: one of uint64, string
        ydk::YLeaf lastnonhellopktts; //type: one of uint64, string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: one of uint64, string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems : public ydk::Entity
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

        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
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

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
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
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems : public ydk::Entity
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

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
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
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: one of uint64, string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string
        class RiItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems
        class EplItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems
        class EllItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems> ri_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems> epl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems> ell_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems : public ydk::Entity
{
    public:
        RiItems();
        ~RiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grrestartcap; //type: OspfCapFlag
        ydk::YLeaf grrestarthelpercap; //type: OspfCapFlag
        ydk::YLeaf stubroutercap; //type: OspfCapFlag
        ydk::YLeaf tecap; //type: OspfCapFlag
        ydk::YLeaf p2poverlancap; //type: OspfCapFlag
        ydk::YLeaf exptecap; //type: OspfCapFlag
        ydk::YLeaf sgmntrtgglobalrange; //type: uint32
        ydk::YLeaf sgmntrtgglobalrangestart; //type: uint32
        ydk::YLeaf sgmntrtglocalrange; //type: uint32
        ydk::YLeaf sgmntrtglocalrangestart; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::RiItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems : public ydk::Entity
{
    public:
        EplItems();
        ~EplItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtPfxRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList

        ydk::YList extpfxrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList : public ydk::Entity
{
    public:
        ExtPfxRecList();
        ~ExtPfxRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ippfx; //type: string
        ydk::YLeaf addressfamily; //type: uint16
        ydk::YLeaf routetype; //type: OspfPathT
        ydk::YLeaf pfxflags; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgPfxSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList

        ydk::YList sgmntrtgpfxsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList : public ydk::Entity
{
    public:
        SgmntRtgPfxSidRecList();
        ~SgmntRtgPfxSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgalgo; //type: uint16
        ydk::YLeaf sgmntrtgpfxsidflags; //type: string
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgalgoname; //type: string
        ydk::YLeaf sgmntrtgpfxsid; //type: int32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EplItems::ExtPfxRecList::SidItems::SgmntRtgPfxSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems : public ydk::Entity
{
    public:
        EllItems();
        ~EllItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf linktype; //type: OspfNwT
        ydk::YLeaf linkid; //type: string
        ydk::YLeaf linkdata; //type: string
        class SidItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems> sid_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems : public ydk::Entity
{
    public:
        SidItems();
        ~SidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SgmntRtgAdjSidRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList

        ydk::YList sgmntrtgadjsidrec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList : public ydk::Entity
{
    public:
        SgmntRtgAdjSidRecList();
        ~SgmntRtgAdjSidRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgmntrtgadjsidlabel; //type: uint32
        ydk::YLeaf adjsidtlvtype; //type: OspfAdjSidTlvType
        ydk::YLeaf sgmntrtgmtid; //type: uint16
        ydk::YLeaf sgmntrtgweight; //type: uint16
        ydk::YLeaf sgmntrtgadjsidflags; //type: string
        ydk::YLeaf sgmntrtgadjsidnbrid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::EllItems::SidItems::SgmntRtgAdjSidRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplssid; //type: uint32
        ydk::YLeaf sgmntrtgmplsinlabel; //type: uint32
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
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

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
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

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
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
        ydk::YLeaf sgmntrtgmplsoutlabel; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems : public ydk::Entity
{
    public:
        MultiareaItems();
        ~MultiareaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MultiAreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList

        ydk::YList multiarea_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList : public ydk::Entity
{
    public:
        MultiAreaList();
        ~MultiAreaList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multiareaid; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems::MultiAreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
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
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: one of uint64, string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems : public ydk::Entity
{
    public:
        RtospfIfDefToOspfIfItems();
        ~RtospfIfDefToOspfIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtOspfIfDefToOspfIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList

        ydk::YList rtospfifdeftoospfif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList : public ydk::Entity
{
    public:
        RtOspfIfDefToOspfIfList();
        ~RtOspfIfDefToOspfIfList();

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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems::RtOspfIfDefToOspfIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems : public ydk::Entity
{
    public:
        MaxlsapItems();
        ~MaxlsapItems();

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
        ydk::YLeaf maxlsa; //type: uint32
        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf sleepcnt; //type: uint32
        ydk::YLeaf sleepintvl; //type: uint16
        ydk::YLeaf resetintvl; //type: uint32
        ydk::YLeaf action; //type: OspfMaxLsaAct
        ydk::YLeaf operst; //type: OspfMaxLsaOperSt
        ydk::YLeaf operstqual; //type: OspfMaxLsaOperStQual
        ydk::YLeaf nonselflsacnt; //type: uint32
        ydk::YLeaf currsleepcnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems : public ydk::Entity
{
    public:
        RibleakItems();
        ~RibleakItems();

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
        ydk::YLeaf always; //type: boolean

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems : public ydk::Entity
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

        class ExtRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList

        ydk::YList extrtsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems::ExtRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems : public ydk::Entity
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
        ydk::YLeaf lsufirsttxpkts; //type: uint32
        ydk::YLeaf lsurexmitpkts; //type: uint32
        ydk::YLeaf lsuforlsreqpkts; //type: uint32
        ydk::YLeaf lsupeertxpkts; //type: uint32
        ydk::YLeaf floodpktsendipthrottle; //type: uint32
        ydk::YLeaf floodpktsendtokenthrottle; //type: uint32
        ydk::YLeaf laststatsclearts; //type: one of uint64, string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems : public ydk::Entity
{
    public:
        EvtlogsItems();
        ~EvtlogsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventLogsList; //type: System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::OspfItems::InstItems::InstList::EvtlogsItems


class System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList : public ydk::Entity
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

}; // System::OspfItems::InstItems::InstList::EvtlogsItems::EventLogsList


class System::EvpnItems : public ydk::Entity
{
    public:
        EvpnItems();
        ~EvpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class BdeviItems; //type: System::EvpnItems::BdeviItems
        class EncapMplsItems; //type: System::EvpnItems::EncapMplsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems> bdevi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::EncapMplsItems> encap_mpls_items;
        
}; // System::EvpnItems


class System::EvpnItems::BdeviItems : public ydk::Entity
{
    public:
        BdeviItems();
        ~BdeviItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BDEviList; //type: System::EvpnItems::BdeviItems::BDEviList

        ydk::YList bdevi_list;
        
}; // System::EvpnItems::BdeviItems


class System::EvpnItems::BdeviItems::BDEviList : public ydk::Entity
{
    public:
        BDEviList();
        ~BDEviList();

        bool has_data() const override;
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
        ydk::YLeaf operrd; //type: string
        ydk::YLeaf tblmap; //type: string
        ydk::YLeaf tblmapfltr; //type: boolean
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems> rttp_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList : public ydk::Entity
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
        class EntItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems
        class RtctrlmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems
        class RtctrldefmapItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems
        class RtctrlnondefItems; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems> rtctrlmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems> rtctrldefmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems> rtctrlnondef_items;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems : public ydk::Entity
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

        class RttEntryList; //type: System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
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

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::EntItems::RttEntryList


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems : public ydk::Entity
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

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlmapItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems : public ydk::Entity
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

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrldefmapItems


class System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems : public ydk::Entity
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

}; // System::EvpnItems::BdeviItems::BDEviList::RttpItems::RttPList::RtctrlnondefItems


class System::EvpnItems::EncapMplsItems : public ydk::Entity
{
    public:
        EncapMplsItems();
        ~EncapMplsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encapcfg; //type: boolean
        ydk::YLeaf sourceif; //type: string
        ydk::YLeaf operprimaryip; //type: string
        ydk::YLeaf opersecondaryip; //type: string
        ydk::YLeaf operflags; //type: uint32
        ydk::YLeaf opersmst; //type: NvoSrStateT
        ydk::YLeaf operencapt; //type: NvoMplsEncapT
        ydk::YLeaf operdownreason; //type: string

}; // System::EvpnItems::EncapMplsItems


class System::CommItems : public ydk::Entity
{
    public:
        CommItems();
        ~CommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SshItems; //type: System::CommItems::SshItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CommItems::SshItems> ssh_items;
        
}; // System::CommItems


class System::CommItems::SshItems : public ydk::Entity
{
    public:
        SshItems();
        ~SshItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loginattempt; //type: uint32
        ydk::YLeaf enweakciphers; //type: AaaBoolean
        ydk::YLeaf keyexchangealgorithms; //type: AaaBoolean
        ydk::YLeaf ciphers; //type: AaaBoolean
        ydk::YLeaf messageauthcodes; //type: AaaBoolean
        ydk::YLeaf keytypes; //type: AaaBoolean
        ydk::YLeaf configerrsshport; //type: CommSshPortfaultBitmapT
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf adminst; //type: CommAdminState
        ydk::YLeaf proto; //type: CommProtocol
        class KeyItems; //type: System::CommItems::SshItems::KeyItems
        class RekeyItems; //type: System::CommItems::SshItems::RekeyItems
        class SshsessionItems; //type: System::CommItems::SshItems::SshsessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CommItems::SshItems::KeyItems> key_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CommItems::SshItems::RekeyItems> rekey_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CommItems::SshItems::SshsessionItems> sshsession_items;
        
}; // System::CommItems::SshItems


class System::CommItems::SshItems::KeyItems : public ydk::Entity
{
    public:
        KeyItems();
        ~KeyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SshKeyList; //type: System::CommItems::SshItems::KeyItems::SshKeyList

        ydk::YList sshkey_list;
        
}; // System::CommItems::SshItems::KeyItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_22_ */

