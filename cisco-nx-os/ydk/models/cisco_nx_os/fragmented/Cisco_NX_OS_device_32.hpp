#ifndef _CISCO_NX_OS_DEVICE_32_
#define _CISCO_NX_OS_DEVICE_32_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_29.hpp"
#include "Cisco_NX_OS_device_31.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems : public ydk::Entity
{
    public:
        RsvlanEppAttItems();
        ~RsvlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems


class System::BdItems::VxlanItems : public ydk::Entity
{
    public:
        VxlanItems();
        ~VxlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CktEpList; //type: System::BdItems::VxlanItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::BdItems::VxlanItems


class System::BdItems::VxlanItems::CktEpList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf mcastencap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf hwid; //type: uint32
        ydk::YLeaf mode; //type: L2DomMode
        ydk::YLeaf adminst; //type: L2DomAdminSt
        ydk::YLeaf operst; //type: L2DomOperSt
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf enfpref; //type: L2EnfPref
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf qosprio; //type: QosTenantPrio
        ydk::YLeaf epgdn; //type: string
        class DbItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems
        class RtfvDomIfConnItems; //type: System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems
        class RsvxlanEppAttItems; //type: System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems> rsvxlaneppatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList


class System::BdItems::VxlanItems::CktEpList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: EpmDbT
        ydk::YLeaf name; //type: string
        class IpItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
{
    public:
        IpEpList();
        ~IpEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtIpEpRslttoIpEpAttItems();
        ~RtIpEpRslttoIpEpAttItems();

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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtMacEpRslttoIpEpAttItems();
        ~RtMacEpRslttoIpEpAttItems();

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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
{
    public:
        MacEpList();
        ~MacEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf createts; //type: one of uint64, string
        class RsmacEpToIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpToIpEpAttItems();
        ~RsmacEpToIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpToIpEpAttList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpToIpEpAttList();
        ~RsMacEpToIpEpAttList();

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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems


class System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems : public ydk::Entity
{
    public:
        RsvxlanEppAttItems();
        ~RsvxlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems


class System::BdItems::ResvlanItems : public ydk::Entity
{
    public:
        ResvlanItems();
        ~ResvlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sysvlan; //type: uint16
        ydk::YLeaf currentmin; //type: uint16
        ydk::YLeaf currentmax; //type: uint16

}; // System::BdItems::ResvlanItems


class System::TemplateTableItems : public ydk::Entity
{
    public:
        TemplateTableItems();
        ~TemplateTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TemplateEntryItems; //type: System::TemplateTableItems::TemplateEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems> templateentry_items;
        
}; // System::TemplateTableItems


class System::TemplateTableItems::TemplateEntryItems : public ydk::Entity
{
    public:
        TemplateEntryItems();
        ~TemplateEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TemplateEntryList; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList

        ydk::YList templateentry_list;
        
}; // System::TemplateTableItems::TemplateEntryItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList : public ydk::Entity
{
    public:
        TemplateEntryList();
        ~TemplateEntryList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf refcount; //type: uint32
        class OpTableItems; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems> optable_items;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems : public ydk::Entity
{
    public:
        OpTableItems();
        ~OpTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class OpEntryItems; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems> opentry_items;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems : public ydk::Entity
{
    public:
        OpEntryItems();
        ~OpEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpEntryList; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList

        ydk::YList opentry_list;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList : public ydk::Entity
{
    public:
        OpEntryList();
        ~OpEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operationtype; //type: ConftmplOperationType
        ydk::YLeaf templatetype; //type: ConftmplTemplateType
        ydk::YLeaf substitutestring; //type: string
        ydk::YLeaf configstring; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf refcount; //type: uint32

}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList


class System::FcItems : public ydk::Entity
{
    public:
        FcItems();
        ~FcItems();

        bool has_data() const override;
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
        class VfcItems; //type: System::FcItems::VfcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems> vfc_items;
        
}; // System::FcItems


class System::FcItems::VfcItems : public ydk::Entity
{
    public:
        VfcItems();
        ~VfcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VfcIfList; //type: System::FcItems::VfcItems::VfcIfList

        ydk::YList vfcif_list;
        
}; // System::FcItems::VfcItems


class System::FcItems::VfcItems::VfcIfList : public ydk::Entity
{
    public:
        VfcIfList();
        ~VfcIfList();

        bool has_data() const override;
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
        ydk::YLeaf boundif; //type: string
        ydk::YLeaf boundmac; //type: string
        ydk::YLeaf disablefka; //type: L2Disablefka
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: FcAdminSt
        ydk::YLeaf mode; //type: L2Mode
        ydk::YLeaf trunkmode; //type: L2TrunkMode
        ydk::YLeaf trunkvsans; //type: string
        ydk::YLeaf operportvsan; //type: uint32
        ydk::YLeaf opermode; //type: L2Mode
        ydk::YLeaf operst; //type: string
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf opertrunkmode; //type: L2TrunkMode
        ydk::YLeaf trunkportupvsanbmp; //type: string
        ydk::YLeaf trunkisolatedvsanbmp; //type: string
        ydk::YLeaf allowedvsanbmp; //type: string
        ydk::YLeaf portwwn; //type: string
        ydk::YLeaf lastlinkstchg; //type: one of uint64, string
        class RssrvExtIfMapItems; //type: System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems
        class RtVsanIfMapItems; //type: System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems
        class RtvrfMbrItems; //type: System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems> rssrvextifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems> rtvsanifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::FcItems::VfcItems::VfcIfList


class System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems : public ydk::Entity
{
    public:
        RssrvExtIfMapItems();
        ~RssrvExtIfMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsSrvExtIfMapList; //type: System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList

        ydk::YList rssrvextifmap_list;
        
}; // System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems


class System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList : public ydk::Entity
{
    public:
        RsSrvExtIfMapList();
        ~RsSrvExtIfMapList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf configstatus; //type: L2TrafficMapCfgSt

}; // System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList


class System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems : public ydk::Entity
{
    public:
        RtVsanIfMapItems();
        ~RtVsanIfMapItems();

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

}; // System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems


class System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems


class System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems


class System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::FcoeItems : public ydk::Entity
{
    public:
        FcoeItems();
        ~FcoeItems();

        bool has_data() const override;
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
        class InstItems; //type: System::FcoeItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems> inst_items;
        
}; // System::FcoeItems


class System::FcoeItems::InstItems : public ydk::Entity
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

        ydk::YLeaf fipkaintvl; //type: uint32
        ydk::YLeaf enablefex; //type: FcoeAdminSt
        ydk::YLeaf veloopback; //type: FcoeAdminSt
        ydk::YLeaf fcmap; //type: uint32
        ydk::YLeaf fcfprio; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class VfcItems; //type: System::FcoeItems::InstItems::VfcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems::VfcItems> vfc_items;
        
}; // System::FcoeItems::InstItems


class System::FcoeItems::InstItems::VfcItems : public ydk::Entity
{
    public:
        VfcItems();
        ~VfcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VfcIfList; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList

        ydk::YList vfcif_list;
        
}; // System::FcoeItems::InstItems::VfcItems


class System::FcoeItems::InstItems::VfcItems::VfcIfList : public ydk::Entity
{
    public:
        VfcIfList();
        ~VfcIfList();

        bool has_data() const override;
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
        ydk::YLeaf peermac; //type: string
        ydk::YLeaf peerwwn; //type: string
        ydk::YLeaf fipkaintvl; //type: uint32
        ydk::YLeaf fcfprio; //type: uint32
        ydk::YLeaf mode; //type: string
        class FcidItems; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems> fcid_items;
        
}; // System::FcoeItems::InstItems::VfcItems::VfcIfList


class System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems : public ydk::Entity
{
    public:
        FcidItems();
        ~FcidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VfcLoginList; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList

        ydk::YList vfclogin_list;
        
}; // System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems


class System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList : public ydk::Entity
{
    public:
        VfcLoginList();
        ~VfcLoginList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwn; //type: string

}; // System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList


class System::NpvItems : public ydk::Entity
{
    public:
        NpvItems();
        ~NpvItems();

        bool has_data() const override;
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
        class InstItems; //type: System::NpvItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems> inst_items;
        
}; // System::NpvItems


class System::NpvItems::InstItems : public ydk::Entity
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
        class SrvifItems; //type: System::NpvItems::InstItems::SrvifItems
        class ExtifItems; //type: System::NpvItems::InstItems::ExtifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems> srvif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems> extif_items;
        
}; // System::NpvItems::InstItems


class System::NpvItems::InstItems::SrvifItems : public ydk::Entity
{
    public:
        SrvifItems();
        ~SrvifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrvIfList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList

        ydk::YList srvif_list;
        
}; // System::NpvItems::InstItems::SrvifItems


class System::NpvItems::InstItems::SrvifItems::SrvIfList : public ydk::Entity
{
    public:
        SrvIfList();
        ~SrvIfList();

        bool has_data() const override;
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
        ydk::YLeaf flags; //type: string
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf defaultextif; //type: string
        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf fsmst; //type: NpvSrvIfFsmSt
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        class TargetifItems; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems
        class VsanItems; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems
        class SrvifItems_; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems> targetif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_> srvif_items;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems : public ydk::Entity
{
    public:
        TargetifItems();
        ~TargetifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetIfList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList

        ydk::YList targetif_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems


class System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList : public ydk::Entity
{
    public:
        TargetIfList();
        ~TargetIfList();

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

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::TargetifItems::TargetIfList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrvVsanList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList

        ydk::YList srvvsan_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems


class System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList : public ydk::Entity
{
    public:
        SrvVsanList();
        ~SrvVsanList();

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

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::VsanItems::SrvVsanList


class System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_ : public ydk::Entity
{
    public:
        SrvifItems_();
        ~SrvifItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrvIfFlogiList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList

        ydk::YList srvifflogi_list;
        
}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_


class System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList : public ydk::Entity
{
    public:
        SrvIfFlogiList();
        ~SrvIfFlogiList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf defaultextif; //type: string

}; // System::NpvItems::InstItems::SrvifItems::SrvIfList::SrvifItems_::SrvIfFlogiList


class System::NpvItems::InstItems::ExtifItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ExtIfList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::NpvItems::InstItems::ExtifItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf fsmst; //type: NpvExtIfFsmSt
        ydk::YLeaf numvsan; //type: uint32
        ydk::YLeaf defaultvsan; //type: uint32
        ydk::YLeaf flogivsan; //type: uint32
        ydk::YLeaf operportmode; //type: string
        ydk::YLeaf logifindex; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwpn; //type: string
        ydk::YLeaf wwnn; //type: string
        class TargetifItems; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems
        class VsanItems; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems> targetif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems> vsan_items;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList


class System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems : public ydk::Entity
{
    public:
        TargetifItems();
        ~TargetifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TargetIfList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList

        ydk::YList targetif_list;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList : public ydk::Entity
{
    public:
        TargetIfList();
        ~TargetIfList();

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

}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::TargetifItems::TargetIfList


class System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtVsanList; //type: System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList

        ydk::YList extvsan_list;
        
}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems


class System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList : public ydk::Entity
{
    public:
        ExtVsanList();
        ~ExtVsanList();

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
        ydk::YLeaf fsmst; //type: NpvExtIfFsmSt

}; // System::NpvItems::InstItems::ExtifItems::ExtIfList::VsanItems::ExtVsanList


class System::VsanmgrItems : public ydk::Entity
{
    public:
        VsanmgrItems();
        ~VsanmgrItems();

        bool has_data() const override;
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
        class VsanItems; //type: System::VsanmgrItems::VsanItems
        class BdvsancfgItems; //type: System::VsanmgrItems::BdvsancfgItems
        class InstItems; //type: System::VsanmgrItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::BdvsancfgItems> bdvsancfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::InstItems> inst_items;
        
}; // System::VsanmgrItems


class System::VsanmgrItems::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VsanList; //type: System::VsanmgrItems::VsanItems::VsanList

        ydk::YList vsan_list;
        
}; // System::VsanmgrItems::VsanItems


class System::VsanmgrItems::VsanItems::VsanList : public ydk::Entity
{
    public:
        VsanList();
        ~VsanList();

        bool has_data() const override;
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
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf adminst; //type: VsanAdminSt
        ydk::YLeaf operst; //type: VsanOperSt
        ydk::YLeaf lbtype; //type: VsanLbType
        ydk::YLeaf vsanname; //type: string
        ydk::YLeaf interop; //type: uint16
        ydk::YLeaf name; //type: string
        class RtBdVsanMapItems; //type: System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems
        class RsvsanIfMapItems; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems
        class RsvsanPathAttItems; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems> rtbdvsanmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems> rsvsanifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems> rsvsanpathatt_items;
        
}; // System::VsanmgrItems::VsanItems::VsanList


class System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems : public ydk::Entity
{
    public:
        RtBdVsanMapItems();
        ~RtBdVsanMapItems();

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

}; // System::VsanmgrItems::VsanItems::VsanList::RtBdVsanMapItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems : public ydk::Entity
{
    public:
        RsvsanIfMapItems();
        ~RsvsanIfMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVsanIfMapList; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList

        ydk::YList rsvsanifmap_list;
        
}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList : public ydk::Entity
{
    public:
        RsVsanIfMapList();
        ~RsVsanIfMapList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanIfMapItems::RsVsanIfMapList


class System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems : public ydk::Entity
{
    public:
        RsvsanPathAttItems();
        ~RsvsanPathAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVsanPathAttList; //type: System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList

        ydk::YList rsvsanpathatt_list;
        
}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems


class System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList : public ydk::Entity
{
    public:
        RsVsanPathAttList();
        ~RsVsanPathAttList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf type; //type: L2NativeT

}; // System::VsanmgrItems::VsanItems::VsanList::RsvsanPathAttItems::RsVsanPathAttList


class System::VsanmgrItems::BdvsancfgItems : public ydk::Entity
{
    public:
        BdvsancfgItems();
        ~BdvsancfgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlanid; //type: uint32
        ydk::YLeaf createflag; //type: FcCreateState
        ydk::YLeaf name; //type: string

}; // System::VsanmgrItems::BdvsancfgItems


class System::VsanmgrItems::InstItems : public ydk::Entity
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

        ydk::YLeaf numconfiguredvsan; //type: uint32
        ydk::YLeaf numcreatedvsan; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class VsanmbrItems; //type: System::VsanmgrItems::InstItems::VsanmbrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems::InstItems::VsanmbrItems> vsanmbr_items;
        
}; // System::VsanmgrItems::InstItems


class System::VsanmgrItems::InstItems::VsanmbrItems : public ydk::Entity
{
    public:
        VsanmbrItems();
        ~VsanmbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VsanMbrIfList; //type: System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList

        ydk::YList vsanmbrif_list;
        
}; // System::VsanmgrItems::InstItems::VsanmbrItems


class System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList : public ydk::Entity
{
    public:
        VsanMbrIfList();
        ~VsanMbrIfList();

        bool has_data() const override;
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
        ydk::YLeaf staticvsan; //type: uint32
        ydk::YLeaf allowedvsanbmp; //type: string
        ydk::YLeaf name; //type: string

}; // System::VsanmgrItems::InstItems::VsanmbrItems::VsanMbrIfList


class System::FmItems : public ydk::Entity
{
    public:
        FmItems();
        ~FmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MplsstaticItems; //type: System::FmItems::MplsstaticItems
        class MplsoamItems; //type: System::FmItems::MplsoamItems
        class SrteItems; //type: System::FmItems::SrteItems
        class MplssgmntrtgItems; //type: System::FmItems::MplssgmntrtgItems
        class Srv6Items; //type: System::FmItems::Srv6Items
        class MplsldpItems; //type: System::FmItems::MplsldpItems
        class Mplsl3vpnItems; //type: System::FmItems::Mplsl3vpnItems
        class MplsevpnItems; //type: System::FmItems::MplsevpnItems
        class EvmedItems; //type: System::FmItems::EvmedItems
        class BgpItems; //type: System::FmItems::BgpItems
        class HmmItems; //type: System::FmItems::HmmItems
        class EvpnItems; //type: System::FmItems::EvpnItems
        class SflowItems; //type: System::FmItems::SflowItems
        class NgoamItems; //type: System::FmItems::NgoamItems
        class PoeItems; //type: System::FmItems::PoeItems
        class MsdpItems; //type: System::FmItems::MsdpItems
        class DhcpItems; //type: System::FmItems::DhcpItems
        class IfvlanItems; //type: System::FmItems::IfvlanItems
        class BashshellItems; //type: System::FmItems::BashshellItems
        class NetconfItems; //type: System::FmItems::NetconfItems
        class RestconfItems; //type: System::FmItems::RestconfItems
        class GrpcItems; //type: System::FmItems::GrpcItems
        class ScpserverItems; //type: System::FmItems::ScpserverItems
        class LldpItems; //type: System::FmItems::LldpItems
        class LacpItems; //type: System::FmItems::LacpItems
        class NxapiItems; //type: System::FmItems::NxapiItems
        class TelnetItems; //type: System::FmItems::TelnetItems
        class SshItems; //type: System::FmItems::SshItems
        class NxdbItems; //type: System::FmItems::NxdbItems
        class VnsegmentItems; //type: System::FmItems::VnsegmentItems
        class TacacsplusItems; //type: System::FmItems::TacacsplusItems
        class LdapItems; //type: System::FmItems::LdapItems
        class SchedulerItems; //type: System::FmItems::SchedulerItems
        class ImpItems; //type: System::FmItems::ImpItems
        class UdldItems; //type: System::FmItems::UdldItems
        class NatItems; //type: System::FmItems::NatItems
        class Vrrpv3Items; //type: System::FmItems::Vrrpv3Items
        class VrrpItems; //type: System::FmItems::VrrpItems
        class HsrpItems; //type: System::FmItems::HsrpItems
        class NetflowItems; //type: System::FmItems::NetflowItems
        class AnalyticsItems; //type: System::FmItems::AnalyticsItems
        class BfdItems; //type: System::FmItems::BfdItems
        class TunnelifItems; //type: System::FmItems::TunnelifItems
        class NvoItems; //type: System::FmItems::NvoItems
        class PbrItems; //type: System::FmItems::PbrItems
        class PimItems; //type: System::FmItems::PimItems
        class NgmvpnItems; //type: System::FmItems::NgmvpnItems
        class VpcItems; //type: System::FmItems::VpcItems
        class VtpItems; //type: System::FmItems::VtpItems
        class PvlanItems; //type: System::FmItems::PvlanItems
        class NtpdItems; //type: System::FmItems::NtpdItems
        class NbmItems; //type: System::FmItems::NbmItems
        class TelemetryItems; //type: System::FmItems::TelemetryItems
        class OspfItems; //type: System::FmItems::OspfItems
        class Ospfv3Items; //type: System::FmItems::Ospfv3Items
        class VctrlItems; //type: System::FmItems::VctrlItems
        class MacsecItems; //type: System::FmItems::MacsecItems
        class NpivItems; //type: System::FmItems::NpivItems
        class Pim6Items; //type: System::FmItems::Pim6Items
        class IsisItems; //type: System::FmItems::IsisItems
        class HwtelemetryItems; //type: System::FmItems::HwtelemetryItems
        class ItdItems; //type: System::FmItems::ItdItems
        class PortsecItems; //type: System::FmItems::PortsecItems
        class FlexlinkItems; //type: System::FmItems::FlexlinkItems
        class SlasenderItems; //type: System::FmItems::SlasenderItems
        class SlaresponderItems; //type: System::FmItems::SlaresponderItems
        class SlatwampserverItems; //type: System::FmItems::SlatwampserverItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsstaticItems> mplsstatic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsoamItems> mplsoam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SrteItems> srte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplssgmntrtgItems> mplssgmntrtg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Srv6Items> srv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsldpItems> mplsldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Mplsl3vpnItems> mplsl3vpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsevpnItems> mplsevpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvmedItems> evmed_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BgpItems> bgp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HmmItems> hmm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvpnItems> evpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SflowItems> sflow_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgoamItems> ngoam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PoeItems> poe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MsdpItems> msdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::DhcpItems> dhcp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IfvlanItems> ifvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BashshellItems> bashshell_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetconfItems> netconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::RestconfItems> restconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::GrpcItems> grpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ScpserverItems> scpserver_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LldpItems> lldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LacpItems> lacp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxapiItems> nxapi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelnetItems> telnet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SshItems> ssh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxdbItems> nxdb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VnsegmentItems> vnsegment_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TacacsplusItems> tacacsplus_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LdapItems> ldap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SchedulerItems> scheduler_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ImpItems> imp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::UdldItems> udld_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NatItems> nat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Vrrpv3Items> vrrpv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VrrpItems> vrrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HsrpItems> hsrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetflowItems> netflow_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::AnalyticsItems> analytics_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TunnelifItems> tunnelif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NvoItems> nvo_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PbrItems> pbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgmvpnItems> ngmvpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VtpItems> vtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PvlanItems> pvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NtpdItems> ntpd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NbmItems> nbm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelemetryItems> telemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::OspfItems> ospf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Ospfv3Items> ospfv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VctrlItems> vctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MacsecItems> macsec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NpivItems> npiv_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Pim6Items> pim6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IsisItems> isis_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HwtelemetryItems> hwtelemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ItdItems> itd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PortsecItems> portsec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::FlexlinkItems> flexlink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlasenderItems> slasender_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlaresponderItems> slaresponder_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlatwampserverItems> slatwampserver_items;
        
}; // System::FmItems


class System::FmItems::MplsstaticItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsstaticItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsstaticItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsstaticItems


class System::FmItems::MplsstaticItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsstaticItems::ServiceItems


class System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsstaticItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplsoamItems : public ydk::Entity
{
    public:
        MplsoamItems();
        ~MplsoamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsoamItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsoamItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsoamItems


class System::FmItems::MplsoamItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsoamItems::ServiceItems


class System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsoamItems::ServiceItems::ServiceInstanceList


class System::FmItems::SrteItems : public ydk::Entity
{
    public:
        SrteItems();
        ~SrteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::SrteItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SrteItems::ServiceItems> service_items;
        
}; // System::FmItems::SrteItems


class System::FmItems::SrteItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::SrteItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SrteItems::ServiceItems


class System::FmItems::SrteItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SrteItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplssgmntrtgItems : public ydk::Entity
{
    public:
        MplssgmntrtgItems();
        ~MplssgmntrtgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplssgmntrtgItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplssgmntrtgItems::ServiceItems> service_items;
        
}; // System::FmItems::MplssgmntrtgItems


class System::FmItems::MplssgmntrtgItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplssgmntrtgItems::ServiceItems


class System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplssgmntrtgItems::ServiceItems::ServiceInstanceList


class System::FmItems::Srv6Items : public ydk::Entity
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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::Srv6Items::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Srv6Items::ServiceItems> service_items;
        
}; // System::FmItems::Srv6Items


class System::FmItems::Srv6Items::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Srv6Items::ServiceItems


class System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Srv6Items::ServiceItems::ServiceInstanceList


class System::FmItems::MplsldpItems : public ydk::Entity
{
    public:
        MplsldpItems();
        ~MplsldpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::MplsldpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MplsldpItems::ServiceItems> service_items;
        
}; // System::FmItems::MplsldpItems


class System::FmItems::MplsldpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MplsldpItems::ServiceItems


class System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MplsldpItems::ServiceItems::ServiceInstanceList


class System::FmItems::Mplsl3vpnItems : public ydk::Entity
{
    public:
        Mplsl3vpnItems();
        ~Mplsl3vpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string
        class ServiceItems; //type: System::FmItems::Mplsl3vpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Mplsl3vpnItems::ServiceItems> service_items;
        
}; // System::FmItems::Mplsl3vpnItems


class System::FmItems::Mplsl3vpnItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Mplsl3vpnItems::ServiceItems


class System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Mplsl3vpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::MplsevpnItems : public ydk::Entity
{
    public:
        MplsevpnItems();
        ~MplsevpnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        ydk::YLeaf conflictingfeature; //type: string

}; // System::FmItems::MplsevpnItems


class System::FmItems::EvmedItems : public ydk::Entity
{
    public:
        EvmedItems();
        ~EvmedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::EvmedItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvmedItems::ServiceItems> service_items;
        
}; // System::FmItems::EvmedItems


class System::FmItems::EvmedItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::EvmedItems::ServiceItems


class System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::EvmedItems::ServiceItems::ServiceInstanceList


class System::FmItems::BgpItems : public ydk::Entity
{
    public:
        BgpItems();
        ~BgpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BgpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BgpItems::ServiceItems> service_items;
        
}; // System::FmItems::BgpItems


class System::FmItems::BgpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::BgpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BgpItems::ServiceItems


class System::FmItems::BgpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BgpItems::ServiceItems::ServiceInstanceList


class System::FmItems::HmmItems : public ydk::Entity
{
    public:
        HmmItems();
        ~HmmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::HmmItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HmmItems::ServiceItems> service_items;
        
}; // System::FmItems::HmmItems


class System::FmItems::HmmItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::HmmItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::HmmItems::ServiceItems


class System::FmItems::HmmItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::HmmItems::ServiceItems::ServiceInstanceList


class System::FmItems::EvpnItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::EvpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::EvpnItems::ServiceItems> service_items;
        
}; // System::FmItems::EvpnItems


class System::FmItems::EvpnItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::EvpnItems::ServiceItems


class System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::EvpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::SflowItems : public ydk::Entity
{
    public:
        SflowItems();
        ~SflowItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::SflowItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SflowItems::ServiceItems> service_items;
        
}; // System::FmItems::SflowItems


class System::FmItems::SflowItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::SflowItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SflowItems::ServiceItems


class System::FmItems::SflowItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SflowItems::ServiceItems::ServiceInstanceList


class System::FmItems::NgoamItems : public ydk::Entity
{
    public:
        NgoamItems();
        ~NgoamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NgoamItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgoamItems::ServiceItems> service_items;
        
}; // System::FmItems::NgoamItems


class System::FmItems::NgoamItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NgoamItems::ServiceItems


class System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NgoamItems::ServiceItems::ServiceInstanceList


class System::FmItems::PoeItems : public ydk::Entity
{
    public:
        PoeItems();
        ~PoeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PoeItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PoeItems::ServiceItems> service_items;
        
}; // System::FmItems::PoeItems


class System::FmItems::PoeItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::PoeItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PoeItems::ServiceItems


class System::FmItems::PoeItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PoeItems::ServiceItems::ServiceInstanceList


class System::FmItems::MsdpItems : public ydk::Entity
{
    public:
        MsdpItems();
        ~MsdpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::MsdpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MsdpItems::ServiceItems> service_items;
        
}; // System::FmItems::MsdpItems


class System::FmItems::MsdpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MsdpItems::ServiceItems


class System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MsdpItems::ServiceItems::ServiceInstanceList


class System::FmItems::DhcpItems : public ydk::Entity
{
    public:
        DhcpItems();
        ~DhcpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::DhcpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::DhcpItems::ServiceItems> service_items;
        
}; // System::FmItems::DhcpItems


class System::FmItems::DhcpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::DhcpItems::ServiceItems


class System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::DhcpItems::ServiceItems::ServiceInstanceList


class System::FmItems::IfvlanItems : public ydk::Entity
{
    public:
        IfvlanItems();
        ~IfvlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::IfvlanItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IfvlanItems::ServiceItems> service_items;
        
}; // System::FmItems::IfvlanItems


class System::FmItems::IfvlanItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::IfvlanItems::ServiceItems


class System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::IfvlanItems::ServiceItems::ServiceInstanceList


class System::FmItems::BashshellItems : public ydk::Entity
{
    public:
        BashshellItems();
        ~BashshellItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BashshellItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BashshellItems::ServiceItems> service_items;
        
}; // System::FmItems::BashshellItems


class System::FmItems::BashshellItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BashshellItems::ServiceItems


class System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BashshellItems::ServiceItems::ServiceInstanceList


class System::FmItems::NetconfItems : public ydk::Entity
{
    public:
        NetconfItems();
        ~NetconfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NetconfItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetconfItems::ServiceItems> service_items;
        
}; // System::FmItems::NetconfItems


class System::FmItems::NetconfItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NetconfItems::ServiceItems


class System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NetconfItems::ServiceItems::ServiceInstanceList


class System::FmItems::RestconfItems : public ydk::Entity
{
    public:
        RestconfItems();
        ~RestconfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::RestconfItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::RestconfItems::ServiceItems> service_items;
        
}; // System::FmItems::RestconfItems


class System::FmItems::RestconfItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::RestconfItems::ServiceItems


class System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::RestconfItems::ServiceItems::ServiceInstanceList


class System::FmItems::GrpcItems : public ydk::Entity
{
    public:
        GrpcItems();
        ~GrpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::GrpcItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::GrpcItems::ServiceItems> service_items;
        
}; // System::FmItems::GrpcItems


class System::FmItems::GrpcItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::GrpcItems::ServiceItems


class System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::GrpcItems::ServiceItems::ServiceInstanceList


class System::FmItems::ScpserverItems : public ydk::Entity
{
    public:
        ScpserverItems();
        ~ScpserverItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::ScpserverItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ScpserverItems::ServiceItems> service_items;
        
}; // System::FmItems::ScpserverItems


class System::FmItems::ScpserverItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::ScpserverItems::ServiceItems


class System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::ScpserverItems::ServiceItems::ServiceInstanceList


class System::FmItems::LldpItems : public ydk::Entity
{
    public:
        LldpItems();
        ~LldpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::LldpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LldpItems::ServiceItems> service_items;
        
}; // System::FmItems::LldpItems


class System::FmItems::LldpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::LldpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::LldpItems::ServiceItems


class System::FmItems::LldpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::LldpItems::ServiceItems::ServiceInstanceList


class System::FmItems::LacpItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::LacpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LacpItems::ServiceItems> service_items;
        
}; // System::FmItems::LacpItems


class System::FmItems::LacpItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::LacpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::LacpItems::ServiceItems


class System::FmItems::LacpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::LacpItems::ServiceItems::ServiceInstanceList


class System::FmItems::NxapiItems : public ydk::Entity
{
    public:
        NxapiItems();
        ~NxapiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NxapiItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxapiItems::ServiceItems> service_items;
        
}; // System::FmItems::NxapiItems


class System::FmItems::NxapiItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NxapiItems::ServiceItems


class System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NxapiItems::ServiceItems::ServiceInstanceList


class System::FmItems::TelnetItems : public ydk::Entity
{
    public:
        TelnetItems();
        ~TelnetItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::TelnetItems


class System::FmItems::SshItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::SshItems


class System::FmItems::NxdbItems : public ydk::Entity
{
    public:
        NxdbItems();
        ~NxdbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NxdbItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NxdbItems::ServiceItems> service_items;
        
}; // System::FmItems::NxdbItems


class System::FmItems::NxdbItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NxdbItems::ServiceItems


class System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NxdbItems::ServiceItems::ServiceInstanceList


class System::FmItems::VnsegmentItems : public ydk::Entity
{
    public:
        VnsegmentItems();
        ~VnsegmentItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VnsegmentItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VnsegmentItems::ServiceItems> service_items;
        
}; // System::FmItems::VnsegmentItems


class System::FmItems::VnsegmentItems::ServiceItems : public ydk::Entity
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

        class ServiceInstanceList; //type: System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VnsegmentItems::ServiceItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_32_ */

